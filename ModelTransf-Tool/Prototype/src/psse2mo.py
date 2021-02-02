#=========================================================================================      
# Description: Functions used to translate .raw and .dyr files into .mo files.
#=========================================================================================  
# ----- Init. libraries:
import os
from network_structure import DynSys # object class for buses
from network_structure import DynNode # object class for buses
from network_structure import DynCircuit # object class for buses
import tkinter as tk # importing tk for GUI
import tkinter.messagebox as tkMessageBox # functions for meassage box
import tkinter.ttk as ttk # functions for displaying lists
from em_psse import * # importing raw PARSER
from andes_dyr import * # importing dyr PARSER
import argparse # importing additional libraries
import logging # importing additional libraries
#=========================================================================================      
# Function: getRawBase
# Authors: marcelofcastro        
# Description: this function asks for and transforms raw file in list of objects.
# The function also extracts info about the system so it can be confirmed by user.
#=========================================================================================
def getRawBase(rawfile):
	rawContent = [] # starting raw list.
	# ----- Opening the .raw file:
	with open(rawfile, "r+") as raw_file: # opens the raw file for reading
		for line in raw_file:
			rawContent.append(line) # adds line
	FirstLine = rawContent[0].strip().split('/')
	FirstLine = FirstLine[0].split(',')
	# ----- Finding specific parameters:
	system_base = float(FirstLine[1]) # finding system base in first line
	psse_version = float(FirstLine[2]) # finding psse version in first line
	system_frequency = float(FirstLine[5]) # finding system_frequency in first line
	# ----- Message for confirming data is correct:
	message = " PSS(R)E version: %.0f.\n System power base: %.1f MVA.\n System frequency: %.0f Hz." % (psse_version,system_base,system_frequency)
	tkMessageBox.showinfo("PSSE File Parsed", message) # displays psse version, base power and system frequency
	return [system_base,system_frequency]
#=========================================================================================      
# Function: readRaw
# Authors: anderson-optimization and marcelofcastro          
# Description: It uses the PSSE parser developed by https://github.com/anderson-optimization
# The parser can be found in https://github.com/anderson-optimization/em-psse. In 
# addition, the code also extracts information about the system.
#=========================================================================================
def readRaw(rawfile):
	raw_data=parse_raw(rawfile)
	sysdata=format_all(raw_data)
	[system_base,system_frequency] = getRawBase(rawfile)
	# df_fixshnt=sysdata['fixedshunt']
	# df_tf=sysdata['transformer']
	# df_gen=sysdata['gen']
	# df_branch=sysdata['branch']
	# df_load=sysdata['load']
	# df_bus=sysdata['bus']
	return [system_base,system_frequency,sysdata]
#=========================================================================================      
# Function: readDyr
# Authors: cuihantao and marcelofcastro          
# Description: It uses the PSSE DYR parser developed by https://github.com/cuihantao
# The expanded by marcelofcastro to be compatible with OpenIPSL models. 
# The function returns each model and the data used in each model.
#=========================================================================================
def readDyr(dyrfile):
	dyrdata=parse_dyr(dyrfile)
	return dyrdata
#=========================================================================================      
# Function: lookFor
# Authors: marcelofcastro          
# Description: It finds models connected to a particular bus and circuit.
#=========================================================================================
def lookFor(modeltype,bus,circuit,dyrdata):	
	# ----- Lists of models:
	macmodels = ['GENCLS','GENSAL','GENSAE','GENROU','GENROE','CSVGN1']
	excmodels = ['EXDC2','IEEEX1','SEXS','EXST1','ESDC2A']
	govmodels = ['TGOV1','IEEEG1','HYGOV','GGOV1']
	pssmodels = ['IEEEST']
	# ----- Determining which list will be used:
	if modeltype == 'machine':
		models = macmodels
	elif modeltype == 'exciter':
		models = excmodels
	elif modeltype == 'governor':
		models = govmodels
	elif modeltype == 'stabilizer':
		models = pssmodels
	# ----- Searching for model:
	mdldata = 'None'
	index = 0
	flag = False
	#for mdl in models:
	for i in range(len(models)):
		mdl = models[i]
		try:
			mdlinst = dyrdata[mdl]
			flag = True
			if flag == True:
				buses = mdlinst[0]
				circuits = mdlinst[1]
				for ii in range(len(mdlinst)):
					if buses[ii] == int(bus):
						if circuits[ii] == int(circuit):
							mdldata = mdl
							index = ii
				flag = False
		except:
			continue
	return [mdldata,index] 
#=========================================================================================      
# Function: writeSysMo
# Authors: marcelofcastro        
# Description: It writes the files needed for system package and the network file.
#=========================================================================================
def writeSysMo(sdir,pkg_name,pkg_ordr,networkname,sysdata,system_frequency,system_base):
	# ----- Extracting information from system
	buses = sysdata['bus'] # getting bus data 
	gens = sysdata['gen'] # getting generator data
	lines = sysdata['branch'] # getting transmission line data
	transf = sysdata['transformer'] # getting transformer data
	loads = sysdata['load'] # getting load data
	try:
		shunts = sysdata['fixedshunt'] # getting shunt data
	except:
		shunts = []
	# ----- Changing directory to system directory
	os.chdir(sdir)
	# ----- Creating system package .mo file:
	packagemo = open(pkg_name,"w+")
	packagemo.write("package System \"System automatically translated from PSSE using Python_OpenIPSL.\" \n\n")
	packagemo.write("annotation (uses(Modelica(version=\"3.2.2\"), Complex(version = \"3.2.2\"), OpenIPSL(version = \"2.0.0-dev\")), \n")
	packagemo.write("            Documentation(info=\"<html> This package contains power system models translated from PSSE using Python_OpenIPSL.</html>\"));\n")
	packagemo.write("end System;")
	packagemo.close()
	# ----- Creating system package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("%s\n" % (str(networkname)))
	packageorder.write("Machines\n")
	packageorder.write("Data")
	packageorder.close()
	# ----- Creating and writing system data into modelica system file:
	system_file = open(networkname+".mo","w+")
	system_file.write("within System;\n")
	system_file.write("model %s\n" % (str(networkname)))
	system_file.write("  inner OpenIPSL.Electrical.SystemBase SysData(S_b = %.0f, fn = %.2f) annotation (Placement(transformation(extent={{-94,80},{-60,100}})));\n" % (float(system_base)*1000000,float(system_frequency)))
	system_file.write("  System.Data.pfdata pfdata  annotation (Placement(transformation(extent={{-88,60},{-68,80}})));\n")
	# LISTING BUSES in the modelica file:
	system_file.write("// -- Buses:\n")
	if len(buses) != 0:
		for ii in range(len(buses)):
			bn = int(buses.iloc[ii,0])
			system_file.write("  OpenIPSL.Electrical.Buses.Bus bus_%d (V_b = pfdata.voltages.BaseVoltage%d, v_0 = pfdata.voltages.V%d, angle_0 = pfdata.voltages.A%d); \n" % (bn,bn,bn,bn))
	else:
		system_file.write("// system has no bus\n")
	# LISTING BRANCHES in the modelica file:
	system_file.write("// -- Lines:\n")
	if len(lines) != 0:
		for ii in range(len(lines)):
			system_file.write("  OpenIPSL.Electrical.Branches.PwLine line%d (R = %.4f, X = %.4f, G = 0.0, B = %.4f); \n" % ((ii+1),float(lines.iloc[ii,3]),float(lines.iloc[ii,2]),float(lines.iloc[ii,4]/2)))
	else:
		system_file.write("// system has no line\n")
	# LISTING TRANSFORMERS in the modelica file:
	system_file.write("// -- Transformers:\n")
	if len(transf) != 0:
		for ii in range(len(transf)):
			system_file.write("  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer twTransformer%d (R = %.4f, X = %.4f, G = 0.0, B = 0.0, t1 = %.6f, t2 = %.6f ); \n" % ((ii+1),float(transf.iloc[ii,2]),float(transf.iloc[ii,3]),float(transf.iloc[ii,12]),float(transf.iloc[ii,13])))
	else:
		system_file.write("// system has no transformer\n")
	# LISTING LOADS in modelica file:
	system_file.write("// -- Loads:\n")
	if len(loads) != 0:
		for ii in range(len(loads)):
			bn = int(loads.iloc[ii,0])
			system_file.write("  OpenIPSL.Electrical.Loads.PSSE.Load load%d_bus%d (V_b = pfdata.voltages.BaseVoltage%d, v_0 = pfdata.voltages.V%d, angle_0 = pfdata.voltages.A%d, P_0 = %.4f, Q_0 = %.4f); \n" % ((ii+1),bn,bn,bn,bn,float(loads.iloc[ii,1]),float(loads.iloc[ii,2])))
	else:
		system_file.write("// system has no load\n")
	# LISTING SHUNT in modelica file:
	system_file.write("// -- Shunts:\n")
	if len(shunts) != 0:
		for ii in range(len(shunts)):
			bn = int(loads.iloc[ii,0])
			system_file.write("  OpenIPSL.Electrical.Banks.PSSE.Shunt bank%d_bus%d (G = 0.0, B = %.4f); \n" % ((ii+1),int(shunts.iloc[ii,0]),float(shunts.iloc[ii,1])))
	else:
		system_file.write("// system has no shunt bank\n")
	# LISTING GENERATION UNITS in modelica file:
	system_file.write("// -- Generator Units:\n")
	if len(gens) != 0:
		for ii in range(len(gens)):
			bn = gens.iloc[ii,0]
			system_file.write("  System.Generators.Gen%d_%d gen%d_%d (V_b = pfdata.voltages.BaseVoltage%d, v_0 = pfdata.voltages.V%d, angle_0 = pfdata.voltages.A%d, P_0 = pfdata.powers.P%d_%d, Q_0 = pfdata.powers.Q%d_%d); \n" % ((ii+1),bn,(ii+1),bn,bn,bn,bn,(ii+1),bn,(ii+1),bn))
	else:
		system_file.write("// system has no generator\n")
	# Starting EQUATION section (connections):
	system_file.write("equation\n")
	# Starting CONNECTION OF BRANCHES:
	if len(lines) != 0:
		system_file.write("// -- Connecting branches:\n")
		for ii in range(len(lines)):
			system_file.write("  connect(bus_%d.p,line%d.p); \n" % (int(lines.iloc[ii,0]),(ii+1)))
			system_file.write("  connect(line%d.n,bus_%d.p); \n" % ((ii+1),int(lines.iloc[ii,1])))
	else:
		system_file.write("// No branch to connect.\n")
	# Starting CONNECTION OF TRANSFORMERS:
	if len(transf) != 0:
		system_file.write("// -- Connecting transformers:\n")
		for ii in range(len(transf)):
			system_file.write("  connect(bus_%d.p,twTransformer%d.p); \n" % (int(transf.iloc[ii,0]),(ii+1)))
			system_file.write("  connect(twTransformer%d.n,bus_%d.p); \n" % ((ii+1),int(transf.iloc[ii,1])))
	else:
		system_file.write("// No transformer to connect.\n")
	# Starting CONNECTION OF LOADS:
	if len(loads) != 0:
		system_file.write("// -- Connecting loads:\n")
		for ii in range(len(loads)):
			system_file.write("  connect(load%d_bus%d.p,bus_%d.p); \n" % ((ii+1),int(loads.iloc[ii,0]),int(loads.iloc[ii,0])))
	else:
		system_file.write("// No load to connect.\n")
	# Starting CONNECTION OF BANKS:
	if len(shunts) != 0:
		system_file.write("// -- Connecting banks:\n")
		for ii in range(len(shunts)):
			system_file.write("  connect(bank%d_bus%d.p,bus_%d.p); \n" % ((ii+1),int(shunts.iloc[ii,0]),int(shunts.iloc[ii,0])))
	else:
		system_file.write("// No shunt bank to connect.\n")
	# Starting CONNECTION OF GENERATION UNITS:
	if len(gens) != 0:
		system_file.write("// -- Connecting generation units:\n")
		for ii in range(len(gens)):
			system_file.write("  connect(gen%d_%d.p,bus_%d.p); \n" % ((ii+1),int(gens.iloc[ii,0]),int(gens.iloc[ii,0])))
	else:
		system_file.write("// No generator to connect.\n")
	# Closing file modelica file:
	system_file.write("end %s;" % (str(networkname)))
	system_file.close()
#=========================================================================================      
# Function: writeDataMo
# Authors: marcelofcastro       
# Description: It writes the files needed for data package.
#=========================================================================================
def writeDataMo(ddir,pkg_name,pkg_ordr,sysdata):
	# ----- Extracting information from system
	buses = sysdata['bus'] # getting bus data 
	gens = sysdata['gen'] # getting generator data
	# ----- Changing directory to system data directory:
	os.chdir(ddir)
	# ----- Creating data package .mo file:
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System;\n")
	packagemo.write("package Data \"Modelica records for power flow data.\" \n\n")
	packagemo.write("end Data;")
	packagemo.close()
	# ----- Creating data package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("pfdata\n")
	packageorder.write("voltage_data\n")
	packageorder.write("power_data")
	packageorder.close()
	# ----- Writing pfdata .mo file:
	pfdatamo = open("pfdata.mo","w+")
	pfdatamo.write("within System.Data;\n")
	pfdatamo.write("record pfdata \" Translated and calculated power flow data.\"\n")
	pfdatamo.write("  extends Modelica.Icons.Record;\n")
	pfdatamo.write("  replaceable record voltages = voltage_data constrainedby voltage_data annotation (choicesAllMatching);\n")
	pfdatamo.write("  replaceable record powers = power_data constrainedby power_data annotation (choicesAllMatching);\n")
	pfdatamo.write("end pfdata;")
	pfdatamo.close()
	# ----- Writing voltage record:
	vdatamo = open("voltage_data.mo","w+")
	vdatamo.write("within System.Data;\n")
	vdatamo.write("record voltage_data\n")
	vdatamo.write("  extends Modelica.Icons.Record;\n")
	for ii in range(len(buses)):
		vdatamo.write("  //Bus %d - %s \n" % (int(buses.iloc[ii,0]),buses.iloc[ii,1]))
		vdatamo.write("  parameter Real BaseVoltage%d = %.0f;\n" % (int(buses.iloc[ii,0]),float(buses.iloc[ii,2])*1000))# I need to change the unit here to what's used in OpenIPSL
		vdatamo.write("  parameter Real V%d = %.4f;\n" % (int(buses.iloc[ii,0]), float(buses.iloc[ii,4])))# I need to change the unit here to what's used in OpenIPSL
		vdatamo.write("  parameter Real A%d = %.4f;\n" % (int(buses.iloc[ii,0]), float(buses.iloc[ii,5]))) # I need to change the unit here to what's used in OpenIPSL
	vdatamo.write("end voltage_data;")
	# ----- Writing power record:
	pdatamo = open("power_data.mo","w+")
	pdatamo.write("within System.Data;\n")
	pdatamo.write("record power_data\n")
	pdatamo.write("  extends Modelica.Icons.Record;\n")
	for ii in range(len(gens)):
		pdatamo.write("  //Generator in Bus %d\n" % (int(gens.iloc[ii,0])))
		pdatamo.write("  parameter Real P%d_%d = %.0f;\n" % ((ii+1),int(gens.iloc[ii,0]), float(gens.iloc[ii,2])*1000000))# I need to change the unit here to what's used in OpenIPSL
		pdatamo.write("  parameter Real Q%d_%d = %.0f;\n" % ((ii+1),int(gens.iloc[ii,0]), float(gens.iloc[ii,4])*1000000)) # I need to change the unit here to what's used in OpenIPSL
	pdatamo.write("end power_data;")
#=========================================================================================      
# Function: writeMac
# Authors: marcelofcastro        
# Description: It writes machine model.
#=========================================================================================
def writeMac(genpdata,index,dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Extract list of models that match:
	genlist = dyrdata[model]
	# ----- Extract Mb:
	Mb = float(genpdata.iloc[index,9])*1000000
	# ----- Writing Parameters for models:
	file.write("  //Writing machine:\n")
	if model == 'GENCLS':
		file.write("  OpenIPSL.Electrical.Machines.PSSE.GENCLS machine(\n")
		file.write("   H = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   D = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0,\n")
		file.write("   omega(fixed = true));\n")
	elif model == 'GENSAL':
		file.write("  OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(\n")
		file.write("   Tpd0 = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   Tppd0 = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   Tppq0 = %.4f,\n" % float(genlist.iloc[row,4]))
		file.write("   H = %.4f,\n" % float(genlist.iloc[row,5]))
		file.write("   D = %.4f,\n" % float(genlist.iloc[row,6]))
		file.write("   Xd = %.4f,\n" % float(genlist.iloc[row,7]))
		file.write("   Xq = %.4f,\n" % float(genlist.iloc[row,8]))
		file.write("   Xpd = %.4f,\n" % float(genlist.iloc[row,9]))
		file.write("   Xppd = %.4f,\n" % float(genlist.iloc[row,10]))
		file.write("   Xl = %.4f,\n" % float(genlist.iloc[row,11]))
		file.write("   S10 = %.4f,\n" % float(genlist.iloc[row,12]))
		file.write("   S12 = %.4f,\n" % float(genlist.iloc[row,13]))
		file.write("   Xppq = Xppd,\n")
		file.write("   Ra = 0,\n")
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0);\n")
	elif model == 'GENSAE':
		file.write("  OpenIPSL.Electrical.Machines.PSSE.GENSAE machine(\n")
		file.write("   Tpd0 = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   Tppd0 = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   Tppq0 = %.4f,\n" % float(genlist.iloc[row,4]))
		file.write("   H = %.4f,\n" % float(genlist.iloc[row,5]))
		file.write("   D = %.4f,\n" % float(genlist.iloc[row,6]))
		file.write("   Xd = %.4f,\n" % float(genlist.iloc[row,7]))
		file.write("   Xq = %.4f,\n" % float(genlist.iloc[row,8]))
		file.write("   Xpd = %.4f,\n" % float(genlist.iloc[row,9]))
		file.write("   Xppd = %.4f,\n" % float(genlist.iloc[row,10]))
		file.write("   Xl = %.4f,\n" % float(genlist.iloc[row,11]))
		file.write("   S10 = %.4f,\n" % float(genlist.iloc[row,12]))
		file.write("   S12 = %.4f,\n" % float(genlist.iloc[row,13]))
		file.write("   Xppq = Xppd,\n")
		file.write("   Ra = 0,\n")
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0);\n")
	elif model == 'GENROU':
		file.write("  OpenIPSL.Electrical.Machines.PSSE.GENROU machine(\n")
		file.write("   Tpd0 = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   Tppd0 = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   Tpq0 = %.4f,\n" % float(genlist.iloc[row,4]))
		file.write("   Tppq0 = %.4f,\n" % float(genlist.iloc[row,5]))
		file.write("   H = %.4f,\n" % float(genlist.iloc[row,6]))
		file.write("   D = %.4f,\n" % float(genlist.iloc[row,7]))
		file.write("   Xd = %.4f,\n" % float(genlist.iloc[row,8]))
		file.write("   Xq = %.4f,\n" % float(genlist.iloc[row,9]))
		file.write("   Xpd = %.4f,\n" % float(genlist.iloc[row,10]))
		file.write("   Xpq = %.4f,\n" % float(genlist.iloc[row,11]))
		file.write("   Xppd = %.4f,\n" % float(genlist.iloc[row,12]))
		file.write("   Xl = %.4f,\n" % float(genlist.iloc[row,13]))
		file.write("   S10 = %.4f,\n" % float(genlist.iloc[row,14]))
		file.write("   S12 = %.4f,\n" % float(genlist.iloc[row,15]))
		file.write("   Xppq = Xppd,\n")
		file.write("   Ra = 0,\n")
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0);\n")
	elif model == 'GENROE':
		file.write("  OpenIPSL.Electrical.Machines.PSSE.GENROE machine(\n")
		file.write("   Tpd0 = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   Tppd0 = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   Tpq0 = %.4f,\n" % float(genlist.iloc[row,4]))
		file.write("   Tppq0 = %.4f,\n" % float(genlist.iloc[row,5]))
		file.write("   H = %.4f,\n" % float(genlist.iloc[row,6]))
		file.write("   D = %.4f,\n" % float(genlist.iloc[row,7]))
		file.write("   Xd = %.4f,\n" % float(genlist.iloc[row,8]))
		file.write("   Xq = %.4f,\n" % float(genlist.iloc[row,9]))
		file.write("   Xpd = %.4f,\n" % float(genlist.iloc[row,10]))
		file.write("   Xpq = %.4f,\n" % float(genlist.iloc[row,11]))
		file.write("   Xppd = %.4f,\n" % float(genlist.iloc[row,12]))
		file.write("   Xl = %.4f,\n" % float(genlist.iloc[row,13]))
		file.write("   S10 = %.4f,\n" % float(genlist.iloc[row,14]))
		file.write("   S12 = %.4f,\n" % float(genlist.iloc[row,15]))
		file.write("   Xppq = Xppd,\n")
		file.write("   Ra = 0,\n")
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0);\n")
#=========================================================================================      
# Function: writeExc
# Authors: marcelofcastro        
# Description: It writes exciter model.
#=========================================================================================
def writeExc(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Test if we have exciter:
	if model == 'None':
		file.write("  //No exciter\n")
	else:
		file.write("  //Writing exciter:\n")
#=========================================================================================      
# Function: connectExc
# Authors: marcelofcastro        
# Description: It connects exciters to machines.
#=========================================================================================
def connectExc(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Test if we have exciter:
	if model == 'None':
		file.write("  connect(machine.EFD,machine.EFD0);\n")
#=========================================================================================      
# Function: writeGov
# Authors: marcelofcastro        
# Description: It writes turbine-governor model.
#=========================================================================================
def writeGov(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Test if we have governor:
	if model == 'None':
		file.write("  //No turbine-governor\n")
	else:
		file.write("  //Writing turbine-governor:\n")
#=========================================================================================      
# Function: connectGov
# Authors: marcelofcastro        
# Description: It connects exciters to machines.
#=========================================================================================
def connectGov(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Test if we have exciter:
	if model == 'None':
		file.write("  connect(machine.PMECH,machine.PMECH0);\n")
#=========================================================================================      
# Function: writeGenMo
# Authors: marcelofcastro        
# Description: It writes the generators package.
#=========================================================================================
def writeGenMo(gdir,pkg_name,pkg_ordr,sysdata,dyrdata):
	# ----- Extracting information from system
	gens = sysdata['gen'] # getting generator data
	ngens = len(gens) # getting number of generators
	# ----- Changing directory to system data directory:
	os.chdir(gdir)
	# ----- Creating machines package .mo file:
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System;\n")
	packagemo.write("package Machines \"Library of machine models translated automatically from PSSE using Python_OpenIPSL.\" \n\n")
	packagemo.write("end Machines;")
	packagemo.close()
	# ----- Creating machines package .order file:
	packageorder = open(pkg_ordr,"w+")
	for ii in range(ngens):
		packageorder.write('Gen%d_%d\n' % ((ii+1),int(gens.iloc[ii,0])))
	packageorder.close()
	# ----- Writing each generator .mo file:
	for ii in range(len(gens)):
		genname = "Gen"+str((ii+1))+"_"+str(int(gens.iloc[ii,0]))
		genmo = open(genname+".mo","w+")
		genmo.write("within System.Machines\n")
		genmo.write("model %s\n" % genname)
		genmo.write("  extends OpenIPSL.Electrical.Essentials.pfComponent;\n")
		genmo.write("  OpenIPSL.Interfaces.PwPin pin;\n")
		# Declaring machines:
		macresult = lookFor('machine',gens.iloc[ii,0],int(gens.iloc[ii,8]),dyrdata)
		writeMac(gens,ii,dyrdata,macresult,genmo)
		# Declaring exciters:
		excresult = lookFor('exciter',gens.iloc[ii,0],int(gens.iloc[ii,8]),dyrdata)
		writeExc(dyrdata,excresult,genmo)
		# Declaring exciters:
		govresult = lookFor('governor',gens.iloc[ii,0],int(gens.iloc[ii,8]),dyrdata)
		writeGov(dyrdata,govresult,genmo)
		# Starting connection:
		genmo.write("equation\n")
		genmo.write("  connect(machine.p,pin.p)\n") # connecting machine to pin
		if macresult[0] != 'GENCLS':
			connectExc(dyrdata,excresult,genmo) # connecting exciter to machine
			connectGov(dyrdata,govresult,genmo) # connecting turbine-governor to machine
		genmo.write("end %s;" % genname)
#=========================================================================================      
# Function: writeMo
# Authors: marcelofcastro       
# Description: It uses the data from readRaw and readDyr to build the system in Modelica.
#=========================================================================================
def writeMo(wdir,sdir,ddir,gdir,system_base,system_frequency,sysdata,dyrdata):
	# ----- Initializing file name:
	networkname = "power_grid"
	pkg_name = "package.mo"
	pkg_ordr = "package.order"
	# ----- Writing System Package:
	writeSysMo(sdir,pkg_name,pkg_ordr,networkname,sysdata,system_frequency,system_base)
	# ----- Writing System Data Package:
	writeDataMo(ddir,pkg_name,pkg_ordr,sysdata)
	# ----- Writing Generator Data:
	writeGenMo(gdir,pkg_name,pkg_ordr,sysdata,dyrdata)








#=========================================================================================      
# Function: getRawBase
# Authors: marcelofcastro and ManuelNvro          
# Description: this function asks for and transforms raw file in list of objects.
# The function also extracts info about the system so it can be confirmed by user.
#=========================================================================================
# def getRawBase(rawfile):
# 	rawContent = [] # starting raw list.
# 	# ----- Opening the .raw file:
# 	with open(rawfile, "r+") as raw_file: # opens the raw file for reading
# 		for line in raw_file:
# 			rawContent.append(line) # adds line
# 	raw_file.close() # closes the raw file
# 	# ----- Finding specific parameters:
# 	FirstLine = rawContent[0] # finding first line of raw file
# 	system_base = float(FirstLine[2:10])*1000000 # finding system base in first line
# 	psse_version = float(FirstLine[12:15]) # finding psse version in first line
# 	system_frequency = float(FirstLine[22:27]) # finding system_frequency in first line
# 	# ----- Finding Indexes for raw file:
# 	rawIndex = [3] # relevant information start at third line
# 	# ----- Finding indexes for bus data:
# 	for ii in range(0,len(rawContent),1):
# 		busix = rawContent[ii].find("0 /")
# 		if busix == 0:
# 			rawIndex.append(ii+1)
# 	# ----- Message for confirming data is correct:
# 	message = " PSS(R)E version: %.0f.\n System power base: %.2f MVA.\n System frequency: %.2f Hz." % (float(psse_version),float(system_base)/1000000,float(system_frequency))
# 	tkMessageBox.showinfo("Data Extracted", message) # displays psse version, base power and system frequency
# 	MsgBox = tkMessageBox.askquestion ('Confirm Extracted Data','Are you sure that extracted information is correct?',icon = 'warning') # asks for data confirmation 
# 	if MsgBox == 'yes':
# 		return [rawContent,rawIndex,system_base,system_frequency] # return data
# 	else:
# 	 	tkMessageBox.showinfo("Failure", "Execution of translation will be terminated") # display failure message
# 	return [system_base,system_frequency]
#=========================================================================================      
# Function: getNode
# Authors: marcelofcastro and ManuelNvro          
# Description: gets raw content and writes all buses as a list of objects. The function 
# also displays the information so data can be checked by the user.
#=========================================================================================
# def getNode(rawContent,rawIndex):
# 	# ----- Calculating the size of bus matrix:
# 	nbuses = int(rawIndex[1])-int(rawIndex[0])-1
# 	BUSES = []
# 	# ----- Start retrieving bus information:
# 	for ii in range(nbuses):
# 		line = rawContent[ii+int(rawIndex[0])]
# 		BUSES.append(Node(ii+1,int(line[0:6]),line[8:20],float(line[22:30]),int(line[32:33]),float(line[49:56]),float(line[57:66])))
# 	# ----- Displaying information:
# 	DataBox = tk.Tk()
# 	DataBox.title("System Structure") 
# 	label = tk.Label(DataBox, text="Bus Information", font=("Arial",22)).grid(row=0, columnspan=7)
# 	cols = ('Element','Bus Number','Name','Base Voltage [kV]','Bus Type','Bus Voltage [pu]','Bus Angle [deg]')
# 	listBox = ttk.Treeview(DataBox, columns=cols, show='headings')
# 	for obj in BUSES:
# 		data = [obj.busOrdr, obj.busNmbr, obj.busName, obj.busKV, obj.busType, obj.busVoltage, obj.busAngle]
# 		listBox.insert("", "end", values=data)
# 	for col in cols:
# 		listBox.heading(col, text=col)
# 	listBox.grid(row=1, column=0, columnspan=2)
# 	closeButton = tk.Button(DataBox, text="Close", width=15, command=DataBox.destroy).grid(row=4, column=1)
# 	DataBox.wait_window()
# 	# ----- Message to confirm bus data structure is correct:
# 	MsgBox = tkMessageBox.askquestion ('Confirm Bus Data','Confirm if bus data is correct.',icon = 'warning') # asks for data confirmation 
# 	if MsgBox == 'yes':
# 		return BUSES # return bus structure
# 	else:
# 		tkMessageBox.showinfo("Failure", "Execution of translation will be terminated") # display failure message
#=========================================================================================      
# Function: getBranch
# Authors: marcelofcastro and ManuelNvro          
# Description: gets raw content and writes all branches a list of objects. The function 
# also displays the information so data can be checked by the user.
#=========================================================================================
# def getBranch(rawContent,rawIndex):
# 	# ----- Calculating the number of branches:
# 	nbranches = int(rawIndex[5])-int(rawIndex[4])-1
# 	BRANCHES = []
# 	# ----- Start retrieving bus information:
# 	for ii in range(nbranches):
# 		line = rawContent[ii+int(rawIndex[4])]
# 		BRANCHES.append(Branch(int(line[0:6]),int(line[8:13]),int(line[15:17]),float(line[19:30]),float(line[31:42]),float(line[43:53])))
# 	# ----- Displaying information:
# 	DataBox = tk.Tk()
# 	DataBox.title("System Structure") 
# 	label = tk.Label(DataBox, text="Branch Information", font=("Arial",22)).grid(row=0, columnspan=6)
# 	cols = ('Bus From','Bus To','Circuit','Branch R [pu]','Branch X [pu]','Branch B [pu]')
# 	listBox = ttk.Treeview(DataBox, columns=cols, show='headings')
# 	for obj in BRANCHES:
# 		data = [obj.busFrom, obj.busTo, obj.branchNmbr, obj.branchR, obj.branchX, obj.branchB]
# 		listBox.insert("", "end", values=data)
# 	for col in cols:
# 		listBox.heading(col, text=col)
# 	listBox.grid(row=1, column=0, columnspan=2)
# 	closeButton = tk.Button(DataBox, text="Close", width=15, command=DataBox.destroy).grid(row=4, column=1)
# 	DataBox.wait_window()
# 	# ----- Message to confirm bus data structure is correct:
# 	MsgBox = tkMessageBox.askquestion ('Confirm Branch Data','Confirm if bus branch is correct.',icon = 'warning') # asks for data confirmation 
# 	if MsgBox == 'yes':
# 		return BRANCHES# return bus structure
# 	else:
# 		tkMessageBox.showinfo("Failure", "Execution of translation will be terminated") # display failure message