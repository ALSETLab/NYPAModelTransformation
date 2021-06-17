#=========================================================================================      
# Description: Functions used to translate .raw and .dyr files into .mo files.
#=========================================================================================  
# ----- Init. libraries:
import os
import tkinter as tk # importing tk for GUI
import tkinter.messagebox as tkMessageBox # functions for meassage box
import tkinter.ttk as ttk # functions for displaying lists
from em_psse import * # importing raw PARSER
from andes_dyr import * # importing dyr PARSER
import argparse # importing additional libraries
import logging # importing additional libraries
import time, datetime # importing time libraries
import math # importing math library for PI constant
#=========================================================================================      
# Function: getRawBase
# Authors: marcelofcastro        
# Description: this function asks for and transforms raw file in list of objects.
# The function also extracts info about the system so it can be confirmed by user.
#=========================================================================================
def getRawBase(rawfile,encode_flag):
	if int(encode_flag) == 1:
		interpret = 'latin1'
	else:
		interpret = 'utf-8'
	rawContent = [] # starting raw list.
	# ----- Opening the .raw file:
	with open(rawfile, "r+", encoding=interpret) as raw_file: # opens the raw file for reading
		for line in raw_file:
			rawContent.append(line) # adds line
	FirstLine = rawContent[0].strip().split('/')
	FirstLine = FirstLine[0].split(',')
	# ----- Finding specific parameters:
	system_base = float(FirstLine[1]) # finding system base in first line
	psse_version = float(FirstLine[2]) # finding psse version in first line
	system_frequency = float(FirstLine[5]) # finding system_frequency in first line
	return [system_base,system_frequency,psse_version]
#=========================================================================================      
# Function: readRaw
# Authors: anderson-optimization and marcelofcastro          
# Description: It uses the PSSE parser developed by https://github.com/anderson-optimization
# The parser can be found in https://github.com/anderson-optimization/em-psse. In 
# addition, the code also extracts information about the system.
#=========================================================================================
def readRaw(rawfile,encode_flag):
	raw_data=parse_raw(rawfile,encode_flag)
	sysdata=format_all(raw_data)
	[system_base,system_frequency,psse_version] = getRawBase(rawfile,encode_flag)
	# df_fixshnt=sysdata['fixedshunt']
	# df_tf=sysdata['transformer']
	# df_gen=sysdata['gen']
	# df_branch=sysdata['branch']
	# df_load=sysdata['load']
	# df_bus=sysdata['bus']
	return [system_base,system_frequency,sysdata,psse_version]
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
	macmodels = ['GENCLS','GENSAL','GENSAE','GENROU','GENROE','CSVGN1','WT4G1']
	excmodels = ['ESAC1A','ESAC2A','ESDC1A','ESDC2A','ESST1A','ESST4B','EXAC1','EXAC2','EXNI','EXST1','IEEET1','IEEET2','IEEEX1','SCRX','SEXS','ST5B','URST5T']
	govmodels = ['GAST','GGOV1','GGOV1DU','HYGOV','IEEEG1','IEESGO','TGOV1']
	pssmodels = ['IEEEST','IEE2ST','PSS2A','PSS2B','STAB2A','STAB3','STABNI','STBSVC']
	wndmodels = ['WT4E1']
	cmpmodels = ['IEEEVC']
	# ----- Determining which list will be used:
	if modeltype == 'machine':
		models = macmodels
	elif modeltype == 'exciter':
		models = excmodels
	elif modeltype == 'governor':
		models = govmodels
	elif modeltype == 'stabilizer':
		models = pssmodels
	elif modeltype == 'wind':
		models = wndmodels
	elif modeltype == 'compensator':
		models = cmpmodels
	# ----- Searching for model:
	mdldata = 'None'
	index = 0
	flag = False
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
						if str(circuits[ii]) == str(circuit):
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
def writeSysMo(sdir,pkg_name,pkg_ordr,networkname,sysdata,dyrdata,system_frequency,system_base,fault_flag,faultinfo):
	# ----- Extracting information from system
	try:
		buses = sysdata['bus'] # getting bus data 
	except:
		buses = []
	try:
		gens = sysdata['gen'] # getting generator data
	except:
		gens = []
	try:
		lines = sysdata['branch'] # getting transmission line data
	except:
		lines = []
	try:
		transf = sysdata['transformer'] # getting transformer data
	except:
		transf = []
	try:
		loads = sysdata['load'] # getting load data
	except:
		loads = []
	try:
		shunts = sysdata['fixedshunt'] # getting shunt data
	except:
		shunts = []
	# ----- Changing directory to system directory
	os.chdir(sdir)
	# ----- Creating system package .mo file:
	packagemo = open(pkg_name,"w+")
	packagemo.write("package System \"System automatically translated from PSSE using Python_OpenIPSL.\" \n\n")
	packagemo.write("annotation (uses(Modelica(version=\"3.2.3\"), Complex, OpenIPSL(version = \"2.0.0-dev\")), \n")
	packagemo.write("            Documentation(info=\"<html> This package contains power system models translated from PSSE using Python_OpenIPSL.</html>\"));\n")
	packagemo.write("end System;")
	packagemo.close()
	# ----- Creating system package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("%s\n" % (str(networkname)))
	packageorder.write("Generators\n")
	packageorder.write("PF_Data")
	packageorder.close()
	# ----- Creating and writing system data into modelica system file:
	system_file = open(networkname+".mo","w+")
	system_file.write("within System;\n")
	system_file.write("model %s\n" % (str(networkname)))
	system_file.write("  inner OpenIPSL.Electrical.SystemBase SysData(S_b = %.0f, fn = %.2f) annotation (Placement(transformation(extent={{-94,80},{-60,100}})));\n" % (float(system_base)*1000000,float(system_frequency)))
	system_file.write("  inner System.PF_Data.Power_Flow pf (redeclare record PowerFlow = System.PF_Data.PF_00000) annotation(Placement(transformation(extent={{-88,60},{-68,80}})));\n")
	# LISTING BUSES in the modelica file:
	system_file.write("// -- Buses:\n")
	if len(buses) != 0:
		for ii in range(len(buses)):
			bn = int(buses.iloc[ii,0])
			vb = float(buses.iloc[ii,2])*1000
			system_file.write("  OpenIPSL.Electrical.Buses.Bus bus_%d (V_b = %.0f, v_0 = pf.powerflow.bus.V%d, angle_0 = pf.powerflow.bus.A%d); \n" % (bn,vb,bn,bn))
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
			ix = ii+1
			system_file.write("  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer twTransformer%d (R = %.4f, X = %.4f, G = 0.0, B = 0.0, t1 = pf.powerflow.trafos.t1_trafo_%d, t2 = pf.powerflow.trafos.t2_trafo_%d); \n" % (ix,float(transf.iloc[ii,2]),float(transf.iloc[ii,3]),ix,ix))
	else:
		system_file.write("// system has no transformer\n")
	# LISTING LOADS in modelica file:
	system_file.write("// -- Loads:\n")
	if len(loads) != 0:
		for ii in range(len(loads)):
			bn = int(loads.iloc[ii,0])
			ix = ii+1
			system_file.write("  OpenIPSL.Electrical.Loads.PSSE.Load load%d_bus%d (V_b = bus_%d.V_b, v_0 = pf.powerflow.bus.V%d, angle_0 = pf.powerflow.bus.A%d, P_0 = pf.powerflow.loads.PL%d, Q_0 = pf.powerflow.loads.QL%d, PQBRAK=0.7, characteristic=2); \n" % ((ii+1),bn,bn,bn,bn,ix,ix))
	else:
		system_file.write("// system has no load\n")
	# LISTING SHUNT in modelica file:
	system_file.write("// -- Shunts:\n")
	if len(shunts) != 0:
		for ii in range(len(shunts)):
			bn = int(shunts.iloc[ii,0]) # bus number
			shunt_id = shunts.iloc[ii,1].strip("'") # equipment id
			g_sh = float(shunts.iloc[ii,2])/float(system_base) # conductance
			b_sh = float(shunts.iloc[ii,3])/float(system_base) # susceptance
			system_file.write("  OpenIPSL.Electrical.Banks.PSSE.Shunt bank%s_%d (G = %.6f, B = %.6f); \n" % (shunt_id.strip(" "),bn,g_sh,b_sh))
	else:
		system_file.write("// system has no shunt bank\n")
	# LISTING GENERATION UNITS in modelica file:
	system_file.write("// -- Generator Units:\n")
	if len(gens) != 0:
		for ii in range(len(gens)):
			bn = gens.iloc[ii,0]
			# Check if machine is declared in DYR
			macresult = lookFor('machine',bn,gens.iloc[ii,8],dyrdata)
			# Test
			if macresult[0] != 'None':
				# Write machine in .order file
				ix = ii+1
				system_file.write("  System.Generators.Gen%d_%d gen%d_%d (V_b = bus_%d.V_b, v_0 = pf.powerflow.bus.V%d, angle_0 = pf.powerflow.bus.A%d, P_0 = pf.powerflow.machines.PG%d, Q_0 = pf.powerflow.machines.QG%d); \n" % (ix,bn,ix,bn,bn,bn,bn,ix,ix))
	else:
		system_file.write("// system has no generator\n")
	# Listing events if any:
	if fault_flag == 1:
		system_file.write("// -- Fault Event:\n")
		system_file.write("  OpenIPSL.Electrical.Events.PwFault Fault (R=%.6f, X=%.6f, t1 = %.6f, t2 = %.6f); \n" % (float(faultinfo[1]),float(faultinfo[2]),float(faultinfo[3]),float(faultinfo[4])))
	else:
		system_file.write("// system has no event\n")
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
			bn = int(shunts.iloc[ii,0]) # bus number
			shunt_id = shunts.iloc[ii,1].strip("'") # equipment id
			system_file.write("  connect(bank%s_%d.p,bus_%d.p); \n" % (shunt_id.strip(" "),bn,bn))
	else:
		system_file.write("// No shunt bank to connect.\n")
	# Starting CONNECTION OF GENERATION UNITS:
	if len(gens) != 0:
		system_file.write("// -- Connecting generation units:\n")
		for ii in range(len(gens)):
			# Check if machine is declared in DYR
			macresult = lookFor('machine',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
			# Test
			if macresult[0] != 'None':
				# Write machine in .order file
				system_file.write("  connect(gen%d_%d.pin,bus_%d.p); \n" % ((ii+1),int(gens.iloc[ii,0]),int(gens.iloc[ii,0])))
	else:
		system_file.write("// No generator to connect.\n")
	# Connecting fault:
	if fault_flag == 1:
		system_file.write("// -- Connect fault event:\n")
		system_file.write("  connect(Fault.p,bus_%d.p); \n" % int(faultinfo[0]))
	else:
		system_file.write("// No fault to be connected.\n")
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
	# buses
	try:
		buses = sysdata['bus'] # getting bus data 
	except:
		buses = []
	# loads
	try:
		loads = sysdata['load'] # getting load data
	except:
		loads = []
	# machines
	try:
		gens = sysdata['gen'] # getting generator data
	except:
		gens = []
	# transformers
	try:
		transf = sysdata['transformer'] # getting transformer data
	except:
		transf = []
	#
	# ----- Changing directory to system data directory:
	os.chdir(ddir)
	# ----- Creating data package .mo file:
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System;\n")
	packagemo.write("package PF_Data \"Modelica records for power flow data.\" \n\n")
	packagemo.write("end PF_Data;")
	packagemo.close()
	# ----- Creating data package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("Power_Flow\n")
	packageorder.write("Power_Flow_Template\n")
	packageorder.write("Bus_Data\n")
	packageorder.write("Loads_Data\n")
	packageorder.write("Trafos_Data\n")
	packageorder.write("Machines_Data\n")
	packageorder.write("PF_00000\n")
	packageorder.close()
	# ----- Writing Power Flow Template .mo file:
	pftdatamo = open("Power_Flow_Template.mo","w+")
	pftdatamo.write("within System.PF_Data;\n")
	pftdatamo.write("record Power_Flow_Template \"Template for power flow\"\n")
	pftdatamo.write("  extends Modelica.Icons.Record;\n")
	pftdatamo.write("end Power_Flow_Template;")
	pftdatamo.close()
	# ----- Writing Power Flow .mo file:
	pfdatamo = open("Power_Flow.mo","w+")
	pfdatamo.write("within System.PF_Data;\n")
	pfdatamo.write("record Power_Flow \" Translated and calculated power flow data.\"\n")
	pfdatamo.write("  extends Modelica.Icons.Record;\n")
	pfdatamo.write("  replaceable record PowerFlow = System.PF_Data.Power_Flow_Template constrainedby System.PF_Data.Power_Flow_Template annotation (choicesAllMatching);\n")
	pfdatamo.write("  PowerFlow powerflow;\n")
	pfdatamo.write("end Power_Flow ;")
	pfdatamo.close()
	# ----- Writing PF Record:
	pfmo = open("PF_00000.mo","w+")
	pfmo.write("within System.PF_Data;\n")
	pfmo.write("record PF_00000\n")
	pfmo.write("  extends System.PF_Data.Power_Flow_Template;\n\n")
	pfmo.write("  replaceable record Bus = System.PF_Data.Bus_Data.PF_Bus_00000 \"Bus power flow result\"\n")
	pfmo.write("  constrainedby System.PF_Data.Bus_Data.Bus_Template;\n")
	pfmo.write("  Bus bus;\n\n")
	pfmo.write("  replaceable record Loads = System.PF_Data.Loads_Data.PF_Loads_00000 \"Loads power flow result\"\n")
	pfmo.write("  constrainedby System.PF_Data.Loads_Data.Loads_Template;\n")
	pfmo.write("  Loads loads;\n\n")
	pfmo.write("  replaceable record Machines = System.PF_Data.Machines_Data.PF_Machines_00000 \"Machines power flow result\"\n")
	pfmo.write("  constrainedby System.PF_Data.Machines_Data.Machines_Template;\n")
	pfmo.write("  Machines machines;\n\n")
	pfmo.write("  replaceable record Trafos = System.PF_Data.Trafos_Data.PF_Trafos_00000 \"Trafos power flow result\"\n")
	pfmo.write("  constrainedby System.PF_Data.Trafos_Data.Trafos_Template;\n")
	pfmo.write("  Trafos trafos;\n\n")
	pfmo.write("end PF_00000;")
	pfmo.close()
	#
	# ----- Changing directory to bus data directory:
	busdir = ddir + "/Bus_Data" # name of bus data
	os.chdir(busdir) # change to bus directory
	# ----- Create package.mo
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System.PF_Data;\n")
	packagemo.write("package Bus_Data \"Record for buses power flow data.\" \n\n")
	packagemo.write("end Bus_Data;")
	packagemo.close()
	# ----- Creating data package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("Bus_Template\n")
	packageorder.write("PF_Bus_00000\n")
	packageorder.close()
	# ----- Writing bus template:
	bustemplate = open("Bus_Template.mo","w+")
	bustemplate.write("within System.PF_Data.Bus_Data;\n")
	bustemplate.write("partial record Bus_Template\n")
	for ii in range(len(buses)):
		bustemplate.write("  //Bus %d - %s \n" % (int(buses.iloc[ii,0]),buses.iloc[ii,1]))
		bustemplate.write("  parameter OpenIPSL.Types.PerUnit V%d;\n" % (int(buses.iloc[ii,0])))
		bustemplate.write("  parameter OpenIPSL.Types.Angle A%d;\n" % (int(buses.iloc[ii,0])))
	bustemplate.write("end Bus_Template;")
	# ----- Writing bus data:
	busdata = open("PF_Bus_00000.mo","w+")
	busdata.write("within System.PF_Data.Bus_Data;\n")
	busdata.write("record PF_Bus_00000\n")
	busdata.write("  extends System.PF_Data.Bus_Data.Bus_Template(\n")
	for ii in range(len(buses)):
		ix = ii+1
		busdata.write("  //Bus %d - %s \n" % (int(buses.iloc[ii,0]),buses.iloc[ii,1]))
		busdata.write("  V%d = %.6f,\n" % (int(buses.iloc[ii,0]), float(buses.iloc[ii,4])))
		angle = float(buses.iloc[ii,5])*math.pi/180 # angle is declared in radians
		if ix == len(buses):
			busdata.write("  A%d = %.6f\n\n" % (int(buses.iloc[ii,0]), angle)) # last angle angle in record
		else:
			busdata.write("  A%d = %.6f,\n\n" % (int(buses.iloc[ii,0]), angle)) # angle in record
	busdata.write(");\n")
	busdata.write("end PF_Bus_00000;")
	#
	# ----- Changing directory to load data directory:
	loadsdir = ddir + "/Loads_Data" # name of loads data
	os.chdir(loadsdir) # change to loads directory
    # ----- Create package.mo
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System.PF_Data;\n")
	packagemo.write("package Loads_Data \"Record for loads power flow data.\" \n\n")
	packagemo.write("end Loads_Data;")
	packagemo.close()
	# ----- Creating data package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("Loads_Template\n")
	packageorder.write("PF_Loads_00000\n")
	packageorder.close()
	# ----- Writing loads template:
	loadtemplate = open("Loads_Template.mo","w+")
	loadtemplate.write("within System.PF_Data.Loads_Data;\n")
	loadtemplate.write("partial record Loads_Template\n")
	if len(loads) != 0:
		for ii in range(len(loads)):
			ix = ii+1
			bn = int(loads.iloc[ii,0])
			loadtemplate.write("  //Load in bus %d: \n" % (bn))
			loadtemplate.write("  parameter OpenIPSL.Types.ActivePower PL%d;\n" % (ix))
			loadtemplate.write("  parameter OpenIPSL.Types.ReactivePower QL%d;\n" % (ix))
	else:
		loadtemplate.write("  //system has no load\n")
	loadtemplate.write("end Loads_Template;")
	# ----- Writing loads data:
	loaddata = open("PF_Loads_00000.mo","w+")
	loaddata.write("within System.PF_Data.Loads_Data;\n")
	loaddata.write("record PF_Loads_00000\n")
	loaddata.write("  extends System.PF_Data.Loads_Data.Loads_Template(\n")
	if len(loads) != 0:
		for ii in range(len(loads)):
			ix = ii+1
			bn = int(loads.iloc[ii,0]) # bus number
			P = float(loads.iloc[ii,1])*1000000 # P in MW
			Q = float(loads.iloc[ii,2])*1000000 # Q in Mvar
			loaddata.write("  //Load %d, in bus %d: \n" % (ix,bn))
			loaddata.write("  PL%d = %.1f,\n" % (ix,P)) # load active power value
			if ix == len(loads):
				loaddata.write("  QL%d = %.1f\n" % (ix,Q)) # last load reactive power value in record
			else:
				loaddata.write("  QL%d = %.1f,\n" % (ix,Q)) # load reactive power value
	else:
		loaddata.write("  //system has no load\n")
	loaddata.write(");\n")
	loaddata.write("end PF_Loads_00000;")
	#
    # ----- Changing directory to machines data directory:
	macdir = ddir + "/Machines_Data" # name of machines data
	os.chdir(macdir) # change to machines directory
    # ----- Create package.mo
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System.PF_Data;\n")
	packagemo.write("package Machines_Data \"Record for machines power flow data.\" \n\n")
	packagemo.write("end Machines_Data;")
	packagemo.close()
	# ----- Creating data package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("Machines_Template\n")
	packageorder.write("PF_Machines_00000\n")
	packageorder.close()
	# ----- Writing machines template:
	mactemplate = open("Machines_Template.mo","w+")
	mactemplate.write("within System.PF_Data.Machines_Data;\n")
	mactemplate.write("partial record Machines_Template\n")
	if len(gens) != 0:
		for ii in range(len(gens)):
			ix = ii+1
			bn = int(gens.iloc[ii,0])
			mactemplate.write("  //Machine in bus %d: \n" % (bn))
			mactemplate.write("  parameter OpenIPSL.Types.ActivePower PG%d;\n" % (ix))
			mactemplate.write("  parameter OpenIPSL.Types.ReactivePower QG%d;\n" % (ix))
	else:
		mactemplate.write("  //system has no machines\n")
	mactemplate.write("end Machines_Template;")
	# ----- Writing machines data:
	macdata = open("PF_Machines_00000.mo","w+")
	macdata.write("within System.PF_Data.Machines_Data;\n")
	macdata.write("record PF_Machines_00000\n")
	macdata.write("  extends System.PF_Data.Machines_Data.Machines_Template(\n")
	if len(gens) != 0:
		for ii in range(len(gens)):
			ix = ii+1
			bn = int(gens.iloc[ii,0]) # bus bumber
			P = float(gens.iloc[ii,2])*1000000 # P in MW
			Q = float(gens.iloc[ii,4])*1000000 # Q in Mvar
			macdata.write("  //Machine %d, in bus %d: \n" % (ix,bn))
			macdata.write("  PG%d = %.1f,\n" % (ix,P)) # machine active power value
			if ix == len(gens):
				macdata.write("  QG%d = %.1f\n" % (ix,Q)) # last machine reactive power value in record
			else:
				macdata.write("  QG%d = %.1f,\n" % (ix,Q)) # last machine reactive power value
	else:
		macdata.write("  //system has no machines\n")
	macdata.write(");\n")
	macdata.write("end PF_Machines_00000;")
	#
    # ----- Changing directory to transformer data directory:
	trafodir = ddir + "/Trafos_Data" # name of transformers data
	os.chdir(trafodir) # change to transformers directory
    # ----- Create package.mo
	packagemo = open(pkg_name,"w+")
	packagemo.write("within System.PF_Data;\n")
	packagemo.write("package Trafos_Data \"Record for transformers power flow data.\" \n\n")
	packagemo.write("end Trafos_Data;")
	packagemo.close()
	# ----- Creating data package .order file:
	packageorder = open(pkg_ordr,"w+")
	packageorder.write("Trafos_Template\n")
	packageorder.write("PF_Trafos_00000\n")
	packageorder.close()
	# ----- Writing machines template:
	transftemplate = open("Trafos_Template.mo","w+")
	transftemplate.write("within System.PF_Data.Trafos_Data;\n")
	transftemplate.write("partial record Trafos_Template\n")
	if len(transf) != 0:
		for ii in range(len(transf)):
			ix = ii+1
			bf = int(transf.iloc[ii,0]) # bus from
			bt = int(transf.iloc[ii,1]) # bus to
			transftemplate.write("  //Transformer %d, from bus %d to bus %d: \n" % (ix,bf,bt))
			transftemplate.write("  parameter Real t1_trafo_%d;\n" % (ix))
			transftemplate.write("  parameter Real t2_trafo_%d;\n" % (ix))
	else:
		transftemplate.write("  //system has no transformer\n")
	transftemplate.write("end Trafos_Template;")
	# ----- Writing machines data:
	transfdata = open("PF_Trafos_00000.mo","w+")
	transfdata.write("within System.PF_Data.Trafos_Data;\n")
	transfdata.write("record PF_Trafos_00000\n")
	transfdata.write("  extends System.PF_Data.Trafos_Data.Trafos_Template(\n")
	if len(transf) != 0:
		for ii in range(len(transf)):
			ix = ii+1
			t1 = float(transf.iloc[ii,12])# t1 from transformer
			t2 = float(transf.iloc[ii,13])# t2 from transformer
			transfdata.write("  //Transformer %d: \n" % (ix))
			transfdata.write("  t1_trafo_%d = %.6f,\n" % (ix,t1)) # primary side tap value
			if ix == len(transf):
				transfdata.write("  t2_trafo_%d = %.6f\n" % (ix,t2)) # last secondary side tap value in record
			else:
				transfdata.write("  t2_trafo_%d = %.6f,\n" % (ix,t2)) # secondary side tap value
	else:
		transfdata.write("  //system has no transformers\n")
	transfdata.write(");\n")
	transfdata.write("end PF_Trafos_00000;")
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
	ra = float(genpdata.iloc[index,10])
	xppd = float(genpdata.iloc[index,11])
	# ----- Writing Parameters for models:
	file.write("  // Writing machine:\n")
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
		file.write("   omega(fixed = true))\n")
	elif model == 'GENSAL':		
		if xppd != float(genlist.iloc[row,10]):
			print('Please verify Xppd in RAW and DYR for GENSAL %d in bus %d' % (int(genpdata.iloc[index,8]),int(genpdata.iloc[index,0])))
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
		file.write("   Xppq = %.4f,\n" % float(genlist.iloc[row,10])) # Xppq = Xppd
		file.write("   R_a = %.4f,\n" % ra)
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0)\n")
	elif model == 'GENSAE':
		if xppd != float(genlist.iloc[row,10]):
			print('Please verify Xppd in RAW and DYR for GENSAL %d in bus %d' % (int(genpdata.iloc[index,8]),int(genpdata.iloc[index,0])))
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
		file.write("   Xppq = %.4f,\n" % float(genlist.iloc[row,10]))
		file.write("   R_a = %.4f,\n" % ra)
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0)\n")
	elif model == 'GENROU':
		if xppd != float(genlist.iloc[row,12]):
			print('Please verify Xppd in RAW and DYR for GENSAL %d in bus %d' % (int(genpdata.iloc[index,8]),int(genpdata.iloc[index,0])))
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
		file.write("   Xppq = %.4f,\n" % float(genlist.iloc[row,12]))
		file.write("   R_a = %.4f,\n" % ra)
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0)\n")
	elif model == 'GENROE':
		if xppd != float(genlist.iloc[row,12]):
			print('Please verify Xppd in RAW and DYR for GENSAL %d in bus %d' % (int(genpdata.iloc[index,8]),int(genpdata.iloc[index,0])))
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
		file.write("   Xppq = %.4f,\n" % float(genlist.iloc[row,12]))
		file.write("   R_a = %.4f,\n" % ra)
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0)\n")
	elif model == 'CSVGN1':
		file.write("  Real BusV(start=v_0);\n")
		file.write("  Modelica.Blocks.Sources.Constant ConstantPSS(k=0) annotation (Placement(transformation(extent={{-40,-40},{-20,-20}})));\n")
		file.write("  Modelica.Blocks.Sources.RealExpression BusVoltageMagnitude(y=BusV) annotation (Placement(transformation(extent={{-40,20},{-20,40}})));\n")
		file.write("  OpenIPSL.Electrical.Banks.PSSE.CSVGN1 statcomp(\n")
		file.write("   P_0 = 0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0,\n")
		file.write("   ra = 0,\n")
		file.write("   x1d = 9999,\n")
		file.write("   K = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   T1 = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   T2 = %.4f,\n" % float(genlist.iloc[row,4]))
		file.write("   T3 = %.4f,\n" % float(genlist.iloc[row,5]))
		file.write("   T4 = %.4f,\n" % float(genlist.iloc[row,6]))
		file.write("   T5 = %.4f,\n" % float(genlist.iloc[row,7]))
		file.write("   RMIN = %.4f,\n" % float(genlist.iloc[row,8]))
		file.write("   VMAX = %.4f,\n" % float(genlist.iloc[row,9]))
		file.write("   VMIN = %.4f,\n" % float(genlist.iloc[row,10]))
		Cb = float(genlist.iloc[row,11])*1000000
		file.write("   CBASE = %.2f,\n" % Cb)
		file.write("   MBASE = %.2f)\n" % Mb)
	elif model == 'WT4G1':
		file.write("  OpenIPSL.Electrical.Wind.PSSE.WT4G.WT4G1 windmachine(\n")
		file.write("   M_b = %.2f,\n" % Mb)
		file.write("   T_IQCmd = %.4f,\n" % float(genlist.iloc[row,2]))
		file.write("   T_IPCmd = %.4f,\n" % float(genlist.iloc[row,3]))
		file.write("   V_LVPL1 = %.4f,\n" % float(genlist.iloc[row,4]))
		file.write("   V_LVPL2 = %.4f,\n" % float(genlist.iloc[row,5]))
		file.write("   G_LVPL = %.4f,\n" % float(genlist.iloc[row,6]))
		file.write("   V_HVRCR = %.4f,\n" % float(genlist.iloc[row,7]))
		file.write("   CUR_HVRCR = %.4f,\n" % float(genlist.iloc[row,8]))
		file.write("   RIp_LVPL = %.4f,\n" % float(genlist.iloc[row,9]))
		file.write("   T_LVPL = %.4f,\n" % float(genlist.iloc[row,10]))
		file.write("   V_b = V_b,\n")
		file.write("   P_0 = P_0,\n")
		file.write("   Q_0 = Q_0,\n")
		file.write("   v_0 = v_0,\n")
		file.write("   angle_0 = angle_0)\n")

	file.write("  annotation(Placement(transformation(extent={{20,-10},{40,10}})));\n")
#=========================================================================================      
# Function: writeExc
# Authors: marcelofcastro        
# Description: It writes exciter model.
#=========================================================================================
def writeExc(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Extract list of models that match:
	if model != 'None':
		eslist = dyrdata[model]
	# ----- List of special models:
	special_cases = ['ESST4B']
	# ----- Test if we have exciter:
	if model == 'None':
		file.write("  // No exciter, so constant excitation will be used\n")
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter\n")
	elif model == 'ESAC1A':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ESAC1A exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_AMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_AMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   K_D = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   S_EE_2 = %.4f,\n" % float(eslist.iloc[row,18]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,19]))
		file.write("   V_RMIN = %.4f)\n" % float(eslist.iloc[row,20]))
	elif model == 'ESAC2A':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ESAC2A exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_AMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_AMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_B = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   V_FEMAX = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   K_H = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   K_D = %.4f,\n" % float(eslist.iloc[row,18]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,19]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,20]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,21]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,22]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,23]))
	elif model == 'ESDC1A':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ESDC1A exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_F1 = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,17]))
	elif model == 'ESDC2A':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ESDC2A exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_F1 = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,17]))
	elif model == 'ESST1A':
		file.write("  Modelica.Blocks.Sources.Constant uel1(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant uel2(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{32,-62},{12,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant VOS_NotActive(k=0) annotation (Placement(transformation(extent={{-70,-40},{-50,-20}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ESST1A exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   V_IMAX = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   V_IMIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   T_C1 = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_B1 = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   V_AMAX = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   V_AMIN = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,18]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,19]))
		file.write("   K_LR = %.4f,\n" % float(eslist.iloc[row,20]))
		file.write("   I_LR = %.4f)\n" % float(eslist.iloc[row,21]))
	elif model == 'ESST4B':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{20,-60},{40,-40}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=Modelica.Constants.inf) annotation(Placement(transformation(extent={{20,-94},{40,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ESST4B exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_PR = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   K_IR = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   K_PM = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_IM = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   V_MMAX = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   V_MMIN = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   K_G = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   K_P = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   K_I = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   V_BMAX = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   X_L = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   THETAP = %.4f)\n" % float(eslist.iloc[row,18]))
	elif model == 'EXAC1':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.EXAC1 exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   K_D = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,18]))
	elif model == 'EXAC2':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.EXAC2 exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_AMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_AMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_B = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   K_L = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   K_H = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   K_D = %.4f,\n" % float(eslist.iloc[row,18]))
		file.write("   V_LR = %.4f,\n" % float(eslist.iloc[row,19]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,20]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,21]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,22]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,23]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,24]))
	elif model == 'EXNI':
		# switch parameter
		sw_fl = int(eslist.iloc[row,10])
		if sw_fl == 1:
			sw = "true"
		else:
			sw = "false"
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.EXNI exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   T_F1 = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   T_F2 = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   SWITCH = %s,\n" % sw)
		file.write("   r_cr_fd = %.4f)\n" % float(eslist.iloc[row,11]))
	elif model == 'EXST1':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.EXST1 exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   V_IMAX = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   V_IMIN = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   T_F = %.4f)\n" % float(eslist.iloc[row,13]))
	elif model == 'IEEET1':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,15]))
	elif model == 'IEEET2':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.IEEET2 exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_F1 = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   T_F2 = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,15]))
	elif model == 'IEEEX1':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.IEEEX1 exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   K_A = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_A = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_C = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   K_E = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_F = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_F = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   E_1 = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   S_EE_1 = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   E_2 = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   S_EE_2 = %.4f)\n" % float(eslist.iloc[row,17]))
	elif model == 'SCRX':
		# switch parameter
		sw_fl = int(eslist.iloc[row,8])
		if sw_fl == 1:
			sw = "true"
		else:
			sw = "false"
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.SCRX exciter(\n")
		file.write("   T_AT_B = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   K = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   E_MIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   E_MAX = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   C_SWITCH = %s,\n" % sw)
		file.write("   r_cr_fd = %.4f)\n" % float(eslist.iloc[row,9]))
	elif model == 'SEXS':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=0) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=0) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.SEXS exciter(\n")
		file.write("   T_AT_B = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_B = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   K = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_E = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   E_MIN = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   E_MAX = %.4f)\n" % float(eslist.iloc[row,7]))
	elif model == 'ST5B':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_C1 = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_B1 = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_C2 = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_B2 = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   K_R = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_1 = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_C = %.4f,\n" % float(eslist.iloc[row,11]))
		file.write("   T_UC1 = %.4f,\n" % float(eslist.iloc[row,12]))
		file.write("   T_UB1 = %.4f,\n" % float(eslist.iloc[row,13]))
		file.write("   T_UC2 = %.4f,\n" % float(eslist.iloc[row,14]))
		file.write("   T_UB2 = %.4f,\n" % float(eslist.iloc[row,15]))
		file.write("   T_OC1 = %.4f,\n" % float(eslist.iloc[row,16]))
		file.write("   T_OB1 = %.4f,\n" % float(eslist.iloc[row,17]))
		file.write("   T_OC2 = %.4f,\n" % float(eslist.iloc[row,18]))
		file.write("   I_OB2 = %.4f)\n" % float(eslist.iloc[row,19]))
	elif model == 'URST5T':
		file.write("  Modelica.Blocks.Sources.Constant uel(k=-Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-62},{-20,-42}})));\n")
		file.write("  Modelica.Blocks.Sources.Constant oel(k=Modelica.Constants.inf) annotation(Placement(transformation(extent={{-40,-94},{-20,-74}})));\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.ES.URST5T exciter(\n")
		file.write("   T_R = %.4f,\n" % float(eslist.iloc[row,2]))
		file.write("   T_C1 = %.4f,\n" % float(eslist.iloc[row,3]))
		file.write("   T_B1 = %.4f,\n" % float(eslist.iloc[row,4]))
		file.write("   T_C2 = %.4f,\n" % float(eslist.iloc[row,5]))
		file.write("   T_B2 = %.4f,\n" % float(eslist.iloc[row,6]))
		file.write("   KR = %.4f,\n" % float(eslist.iloc[row,7]))
		file.write("   V_RMAX = %.4f,\n" % float(eslist.iloc[row,8]))
		file.write("   V_RMIN = %.4f,\n" % float(eslist.iloc[row,9]))
		file.write("   T_1 = %.4f,\n" % float(eslist.iloc[row,10]))
		file.write("   K_C = %.4f)\n" % float(eslist.iloc[row,11]))
	
	if model not in special_cases:
		file.write("    annotation(Placement(transformation(extent={{-16,-20},{4,0}})));\n")
	elif model == 'ESST4B':
		file.write("    annotation(Placement(transformation(extent={{62,-18},{82,2}})));\n")
#=========================================================================================      
# Function: connectExc
# Authors: marcelofcastro        
# Description: It connects exciters to machines.
#=========================================================================================
def connectExc(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Extract parameters from exciter list:
	if model != 'None':
		eslist = dyrdata[model]
	# ----- List of Exciters by Group:
	# list: need additional inputs or different connection
	special_cases = ['ESST1A','ESST4B','ESDC2A','URST5T'] 
	# ----- Connect exciter:
	if model not in special_cases:
		file.write("  connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0,0,127}));\n")
		file.write("  connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0,0,127}));\n")
		file.write("  connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0,0,127}));\n")
		file.write("  connect(machine.ETERM, exciter.ECOMP) annotation(Line(points={{41,-3},{50,-3},{50,-30},{-22,-30},{-22,-10},{-17,-10}},color = {0,0,127}));\n")
		file.write("  connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0,0,127}));\n")
		file.write("  connect(uel.y,exciter.VUEL) annotation(Line(points={{-19,-52},{-10,-52},{-10,-21}}, color={0,0,127}));\n")
		file.write("  connect(oel.y,exciter.VOEL) annotation(Line(points={{-19,-84},{-6,-84},{-6,-21}}, color={0,0,127}));\n")
	elif model == 'ESST1A':
		file.write("  connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0,0,127}));\n")
		file.write("  connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0,0,127}));\n")
		file.write("  connect(machine.ETERM, exciter.ECOMP) annotation(Line(points={{41,-3},{50,-3},{50,-30},{-22,-30},{-22,-10},{-17,-10}},color = {0,0,127}));\n")
		file.write("  connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0,0,127}));\n")
		file.write("  connect(exciter.VT, exciter.ECOMP) annotation (Line(points={{-16.975,-17.825},{-18,-17.825},{-18,-30},{-21.71,-30},{-21.71,-10},{-17,-10}}, color={0,0,127}));\n")
		file.write("  connect(uel1.y,exciter.VUEL) annotation(Line(points={{-19,-52},{-10,-52},{-10,-21}}, color={0,0,127}));\n")
		file.write("  connect(uel2.y, exciter.VUEL2) annotation (Line(points={{11,-52},{-2.99,-52},{-2.99,-20.99}}, color={0,0,127}));\n")
		file.write("  connect(uel2.y, exciter.VUEL3) annotation (Line(points={{11,-52},{-0.815,-52},{-0.815,-20.995}}, color={0,0,127}));\n")
		file.write("  connect(oel.y,exciter.VOEL) annotation(Line(points={{-19,-84},{-6,-84},{-6,-21}}, color={0,0,127}));\n")
		pss_flag = int(eslist.iloc[row,3])
		if pss_flag == 2:
			file.write("  connect(pss.VOTHSG, exciter.VOTHSG2) annotation (Line(points={{-49,0},{-40,0},{-40,-2},{-17,-2}}, color={0,0,127}));\n")
			file.write("  connect(VOS_NotActive.y, exciter.VOTHSG) annotation (Line(points={{-49,-30},{-40,-30},{-40,-6},{-17,-6}}, color={0,0,127}));\n")
		else:
			file.write("  connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0,0,127}));\n")
			file.write("  connect(VOS_NotActive.y, exciter.VOTHSG2) annotation (Line(points={{-49,-30},{-32,-30},{-32,-2},{-17,-2}}, color={0,0,127}));\n")
	elif model == 'ESDC2A':
		file.write("  connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0,0,127}));\n")
		file.write("  connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0,0,127}));\n")
		file.write("  connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0,0,127}));\n")
		file.write("  connect(exciter.VT, exciter.ECOMP) annotation (Line(points={{-16.975,-17.825},{-18,-17.825},{-18,-30},{-21.71,-30},{-21.71,-10},{-17,-10}}, color={0,0,127}));\n")
		file.write("  connect(machine.ETERM, exciter.ECOMP) annotation(Line(points={{41,-3},{50,-3},{50,-30},{-22,-30},{-22,-10},{-17,-10}},color = {0,0,127}));\n")
		file.write("  connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0,0,127}));\n")
		file.write("  connect(uel.y,exciter.VUEL) annotation(Line(points={{-19,-52},{-10,-52},{-10,-21}}, color={0,0,127}));\n")
		file.write("  connect(oel.y,exciter.VOEL) annotation(Line(points={{-19,-84},{-6,-84},{-6,-21}}, color={0,0,127}));\n")
	elif model == 'URST5T':
		file.write("  connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0,0,127}));\n")
		file.write("  connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0,0,127}));\n")
		file.write("  connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0,0,127}));\n")
		file.write("  connect(machine.ETERM, exciter.VT) annotation (Line(points={{41,-3},{50,-3},{50,-30},{-22,-30},{-22,-2},{-17,-2}}, color={0,0,127}));\n")
		file.write("  connect(machine.ETERM, exciter.ECOMP) annotation(Line(points={{41,-3},{50,-3},{50,-30},{-22,-30},{-22,-10},{-17,-10}},color = {0,0,127}));\n")
		file.write("  connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0,0,127}));\n")
		file.write("  connect(uel.y,exciter.VUEL) annotation(Line(points={{-19,-52},{-10,-52},{-10,-21}}, color={0,0,127}));\n")
		file.write("  connect(oel.y,exciter.VOEL) annotation(Line(points={{-19,-84},{-6,-84},{-6,-21}}, color={0,0,127}));\n")
	elif model == 'ESST4B':
		file.write("  connect(pss.VOTHSG, exciter.VOTHSG) annotation (Line(points={{-49,0},{4,0},{4,-20},{58,-20},{58,-4},{61,-4}}, color={0,0,127}));\n")
		file.write("  connect(machine.XADIFD, exciter.XADIFD) annotation (Line(points={{41,-9},{50,-9},{50,-24},{80,-24},{80,-19}}, color={0,0,127}));\n")
		file.write("  connect(machine.EFD0, exciter.EFD0) annotation (Line(points={{41,-5},{52,-5},{52,-12},{61,-12}}, color={0,0,127}));\n")
		file.write("  connect(machine.ETERM, exciter.ECOMP) annotation (Line(points={{41,-3},{54,-3},{54,-8},{61,-8}}, color={0,0,127}));\n")
		file.write("  connect(exciter.EFD, machine.EFD) annotation (Line(points={{83,-8},{90,-8},{90,-26},{10,-26},{10,-5},{18,-5}}, color={0,0,127}));\n")
		file.write("  connect(uel.y, exciter.VUEL) annotation (Line(points={{41,-50},{68,-50},{68,-19}}, color={0,0,127}));\n")
		file.write("  connect(oel.y, exciter.VOEL) annotation (Line(points={{41,-84},{72,-84},{72,-19}}, color={0,0,127}));\n")



		
	#if model in es_type_02:
		#file.write("  connect(exciter.ECOMP,exciter.VT);")
#=========================================================================================      
# Function: writePss
# Authors: marcelofcastro        
# Description: It writes stabilizers model.
#=========================================================================================
def writePss(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Extract parameters from stabilizer list:
	if model != 'None':
		stlist = dyrdata[model]
	# ----- Test if we have stabilizer:
	if model == 'None':
		file.write("  // No stabilizer, so disabled will be used\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss\n")
	elif model == 'IEEEST':
		# check flag for input:
		inp_flag = int(stlist.iloc[row,2])
		if inp_flag == 4:
			file.write("  Modelica.Blocks.Math.Add getAccPot(k2=-1) annotation (Placement(transformation(extent={{-50,38},{-70,18}})));\n")
		# filling parameters:
		file.write("  OpenIPSL.Electrical.Controls.PSSE.PSS.IEEEST pss(\n")
		file.write("   A_1 = %.4f,\n" % float(stlist.iloc[row,4]))
		file.write("   A_2 = %.4f,\n" % float(stlist.iloc[row,5]))
		file.write("   A_3 = %.4f,\n" % float(stlist.iloc[row,6]))
		file.write("   A_4 = %.4f,\n" % float(stlist.iloc[row,7]))
		file.write("   A_5 = %.4f,\n" % float(stlist.iloc[row,8]))
		file.write("   A_6 = %.4f,\n" % float(stlist.iloc[row,9]))
		file.write("   T_1 = %.4f,\n" % float(stlist.iloc[row,10]))
		file.write("   T_2 = %.4f,\n" % float(stlist.iloc[row,11]))
		file.write("   T_3 = %.4f,\n" % float(stlist.iloc[row,12]))
		file.write("   T_4 = %.4f,\n" % float(stlist.iloc[row,13]))
		file.write("   T_5 = %.4f,\n" % float(stlist.iloc[row,14]))
		file.write("   T_6 = %.4f,\n" % float(stlist.iloc[row,15]))
		file.write("   K_S = %.4f,\n" % float(stlist.iloc[row,16]))
		file.write("   L_SMAX = %.4f,\n" % float(stlist.iloc[row,17]))
		file.write("   L_SMIN = %.4f,\n" % float(stlist.iloc[row,18]))
		file.write("   V_CU = %.4f,\n" % float(stlist.iloc[row,19]))
		file.write("   V_CL = %.4f)\n" % float(stlist.iloc[row,20]))
	elif model == 'PSS2A':
		# check flag for input 1:
		inp_1_flag = int(stlist.iloc[row,2])
		# check flag for input 2:
		inp_2_flag = int(stlist.iloc[row,4])
		# if flag is 4, need an extra block
		if inp_1_flag == 4 or inp_2_flag == 4:
			file.write("  Modelica.Blocks.Math.Add getAccPot(k2=-1) annotation (Placement(transformation(extent={{-50,38},{-70,18}})));\n")
		# filling parameters:
		file.write("  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2A pss(\n")
		file.write("   M = %d,\n" % int(stlist.iloc[row,6]))
		file.write("   N = %d,\n" % int(stlist.iloc[row,7]))
		file.write("   T_w1 = %.4f,\n" % float(stlist.iloc[row,8]))
		file.write("   T_w2 = %.4f,\n" % float(stlist.iloc[row,9]))
		file.write("   T_6 = %.4f,\n" % float(stlist.iloc[row,10]))
		file.write("   T_w3 = %.4f,\n" % float(stlist.iloc[row,11]))
		file.write("   T_w4 = %.4f,\n" % float(stlist.iloc[row,12]))
		file.write("   T_7 = %.4f,\n" % float(stlist.iloc[row,13]))
		file.write("   K_S2 = %.4f,\n" % float(stlist.iloc[row,14]))
		file.write("   K_S3 = %.4f,\n" % float(stlist.iloc[row,15]))
		file.write("   T_8 = %.4f,\n" % float(stlist.iloc[row,16]))
		file.write("   T_9 = %.4f,\n" % float(stlist.iloc[row,17]))
		file.write("   K_S1 = %.4f,\n" % float(stlist.iloc[row,18]))
		file.write("   T_1 = %.4f,\n" % float(stlist.iloc[row,19]))
		file.write("   T_2 = %.4f,\n" % float(stlist.iloc[row,20]))
		file.write("   T_3 = %.4f,\n" % float(stlist.iloc[row,17]))
		file.write("   T_4 = %.4f,\n" % float(stlist.iloc[row,18]))
		file.write("   V_STMAX = %.4f,\n" % float(stlist.iloc[row,19]))
		file.write("   V_STMIN = %.4f)\n" % float(stlist.iloc[row,20]))
	elif model == 'PSS2B':
		# check flag for input 1:
		inp_1_flag = int(stlist.iloc[row,2])
		# check flag for input 2:
		inp_2_flag = int(stlist.iloc[row,4])
		# if flag is 4, need an extra block
		if inp_1_flag == 4 or inp_2_flag == 4:
			file.write("  Modelica.Blocks.Math.Add getAccPot(k2=-1) annotation (Placement(transformation(extent={{-50,38},{-70,18}})));\n")
		# filling parameters:
		file.write("  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pss(\n")
		file.write("   M = %d,\n" % int(stlist.iloc[row,6]))
		file.write("   N = %d,\n" % int(stlist.iloc[row,7]))
		file.write("   T_w1 = %.4f,\n" % float(stlist.iloc[row,8]))
		file.write("   T_w2 = %.4f,\n" % float(stlist.iloc[row,9]))
		file.write("   T_6 = %.4f,\n" % float(stlist.iloc[row,10]))
		file.write("   T_w3 = %.4f,\n" % float(stlist.iloc[row,11]))
		file.write("   T_w4 = %.4f,\n" % float(stlist.iloc[row,12]))
		file.write("   T_7 = %.4f,\n" % float(stlist.iloc[row,13]))
		file.write("   K_S2 = %.4f,\n" % float(stlist.iloc[row,14]))
		file.write("   K_S3 = %.4f,\n" % float(stlist.iloc[row,15]))
		file.write("   T_8 = %.4f,\n" % float(stlist.iloc[row,16]))
		file.write("   T_9 = %.4f,\n" % float(stlist.iloc[row,17]))
		file.write("   K_S1 = %.4f,\n" % float(stlist.iloc[row,18]))
		file.write("   T_1 = %.4f,\n" % float(stlist.iloc[row,19]))
		file.write("   T_2 = %.4f,\n" % float(stlist.iloc[row,20]))
		file.write("   T_3 = %.4f,\n" % float(stlist.iloc[row,17]))
		file.write("   T_4 = %.4f,\n" % float(stlist.iloc[row,18]))
		file.write("   T_10 = %.4f,\n" % float(stlist.iloc[row,19]))
		file.write("   T_11 = %.4f,\n" % float(stlist.iloc[row,20]))
		file.write("   V_S1MAX = %.4f,\n" % float(stlist.iloc[row,19]))
		file.write("   V_S1MIN = %.4f,\n" % float(stlist.iloc[row,20]))
		file.write("   V_S2MAX = %.4f,\n" % float(stlist.iloc[row,21]))
		file.write("   V_S2MIN = %.4f,\n" % float(stlist.iloc[row,22]))
		file.write("   V_STMAX = %.4f,\n" % float(stlist.iloc[row,23]))
		file.write("   V_STMIN = %.4f)\n" % float(stlist.iloc[row,24]))
	elif model == 'STAB2A':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.PSS.STAB2A pss(\n")
		file.write("   K_2 = %.4f,\n" % float(stlist.iloc[row,2]))
		file.write("   T_2 = %.4f,\n" % float(stlist.iloc[row,3]))
		file.write("   K_3 = %.4f,\n" % float(stlist.iloc[row,4]))
		file.write("   T_3 = %.4f,\n" % float(stlist.iloc[row,5]))
		file.write("   K_4 = %.4f,\n" % float(stlist.iloc[row,6]))
		file.write("   K_5 = %.4f,\n" % float(stlist.iloc[row,7]))
		file.write("   T_5 = %.4f,\n" % float(stlist.iloc[row,8]))
		file.write("   H_LIM = %.4f)\n" % float(stlist.iloc[row,9]))
	# place pss:
	file.write("  annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));\n")
#=========================================================================================      
# Function: connectPss
# Authors: marcelofcastro        
# Description: It connects stabilizers to machines and exciters.
#=========================================================================================
def connectPss(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Extract parameters from stabilizer list:
	if model != 'None':
		stlist = dyrdata[model]
	# ----- List of stabilizers with similar structure:
	pss2_list = ['PSS2A','PSS2B']
	ieeest_list = ['IEEEST']
	single_list = ['STAB2A']
	# ----- Test if we have exciter:
	if model == 'None':
		file.write("  connect(machine.PELEC, pss.V_S2) annotation (Line(points={{41,3},{54,3},{54,66},{-84,66},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		file.write("  connect(machine.SPEED, pss.V_S1) annotation (Line(points={{41,7},{46,7},{46,50},{-76,50},{-76,4},{-71,4}},color={0,0,127}));\n")
	elif model in pss2_list:
		# check flag for input 1:
		inp_1_flag = int(stlist.iloc[row,2])
		if inp_1_flag == 1: # 1- rotor speed deviation
			file.write("  connect(machine.SPEED, pss.V_S1) annotation (Line(points={{41,7},{46,7},{46,50},{-76,50},{-76,4},{-71,4}},color={0,0,127}));\n")
		elif inp_1_flag == 3: # generator electrical power in machine base power
			file.write("  connect(machine.PELEC, pss.V_S1) annotation (Line(points={{41,3},{54,3},{54,70},{-76,70},{-76,4},{-71,4}}, color={0,0,127}));\n")
		elif inp_1_flag == 4: # accelerating power:
			file.write("  connect(governor.PMECH, getAccPot.u1) annotation (Line(points={{-9,29.8},{10,29.8},{10,14},{-40,14},{-40,22},{-48,22}}, color={0,0,127}));\n")
			file.write("  connect(getAccPot.u2, machine.PELEC) annotation (Line(points={{-48,34},{-44,34},{-44,70},{54,70},{54,3},{41,3}}, color={0,0,127}));\n")
			file.write("  connect(getAccPot.y, pss.V_S1) annotation (Line(points={{-71,28},{-76,28},{-76,4},{-71,4}}, color={0,0,127}));\n")
		elif inp_1_flag == 5: # bus voltage
			file.write("  connect(machine.ETERM, pss.V_S1) annotation (Line(points={{41,-3},{54,-3},{54,70},{-76,70},{-76,4},{-71,4}}, color={0,0,127}));\n")
		else: # go to rotor speed deviation:
			file.write("  connect(machine.SPEED, pss.V_S1) annotation (Line(points={{41,7},{46,7},{46,50},{-76,50},{-76,4},{-71,4}},color={0,0,127}));\n")
		# check flag for input 2:
		inp_2_flag = int(stlist.iloc[row,4])
		if inp_2_flag == 1: # 1- rotor speed deviation
			file.write("  connect(machine.SPEED, pss.V_S2) annotation (Line(points={{41,7},{46,7},{46,50},{-84,50},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		elif inp_2_flag == 3: # generator electrical power in machine base power
			file.write("  connect(machine.PELEC, pss.V_S2) annotation (Line(points={{41,3},{54,3},{54,70},{-84,70},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		elif inp_2_flag == 4: # accelerating power:
			file.write("  connect(governor.PMECH, getAccPot.u1) annotation (Line(points={{-9,29.8},{10,29.8},{10,14},{-40,14},{-40,22},{-48,22}}, color={0,0,127}));\n")
			file.write("  connect(getAccPot.u2, machine.PELEC) annotation (Line(points={{-48,34},{-44,34},{-44,70},{54,70},{54,3},{41,3}}, color={0,0,127}));\n")
			file.write("  connect(getAccPot.y, pss.V_S2) annotation (Line(points={{-71,28},{-84,28},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		elif inp_2_flag == 5: # bus voltage
			file.write("  connect(machine.ETERM, pss.V_S2) annotation (Line(points={{41,-3},{54,-3},{54,70},{-84,70},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		else: # go to rotor speed deviation:
			file.write("  connect(machine.SPEED, pss.V_S2) annotation (Line(points={{41,7},{46,7},{46,50},{-84,50},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
	elif model in ieeest_list:
		file.write("  connect(machine.ETERM, pss.V_CT) annotation (Line(points={{41,-3},{54,-3},{54,70},{-76,70},{-76,4},{-72,4}}, color={0,0,127}));\n")
		# check flag for input:
		inp_flag = int(stlist.iloc[row,2])
		if inp_flag == 1: # 1- rotor speed deviation
			file.write("  connect(machine.SPEED, pss.V_S) annotation (Line(points={{41,7},{46,7},{46,50},{-84,50},{-84,-4},{-72,-4}}, color={0,0,127}));\n")
		elif inp_flag == 3: # generator electrical power in machine base power
			file.write("  connect(machine.PELEC, pss.V_S) annotation (Line(points={{41,3},{54,3},{54,70},{-84,70},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		elif inp_flag == 4: # accelerating power:
			file.write("  connect(governor.PMECH, getAccPot.u1) annotation (Line(points={{-9,29.8},{10,29.8},{10,14},{-40,14},{-40,22},{-48,22}}, color={0,0,127}));\n")
			file.write("  connect(getAccPot.u2, machine.PELEC) annotation (Line(points={{-48,34},{-44,34},{-44,70},{54,70},{54,3},{41,3}}, color={0,0,127}));\n")
			file.write("  connect(getAccPot.y, pss.V_S) annotation (Line(points={{-71,28},{-84,28},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		elif inp_flag == 5: # bus voltage
			file.write("  connect(machine.ETERM, pss.V_S) annotation (Line(points={{41,-3},{54,-3},{54,70},{-84,70},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
		else: # go to rotor speed deviation:
			file.write("  connect(machine.SPEED, pss.V_S) annotation (Line(points={{41,7},{46,7},{46,50},{-84,50},{-84,-4},{-71,-4}}, color={0,0,127}));\n")
	elif model in single_list:
		file.write("  connect(pss.PELEC, machine.PELEC) annotation (Line(points={{-72,0},{-80,0},{-80,68},{54,68},{54,3},{41,3}}, color={0,0,127}));\n")
#=========================================================================================      
# Function: writeGov
# Authors: marcelofcastro        
# Description: It writes turbine-governor models.
#=========================================================================================
def writeGov(genpdata,index,dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- List of governors:
	gov_list = ['IEEEG1']
	# ----- Extract list of models that match:
	if model != 'None':
		tglist = dyrdata[model]
	# ----- Test if we have governor:
	if model == 'None':
		file.write("  // No turbine-governor, so disabled will be used:\n")
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor \n")
	elif model == 'GAST':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.GAST governor(\n")
		file.write("   R = %.4f,\n" % float(tglist.iloc[row,2]))
		file.write("   T_1 = %.4f,\n" % float(tglist.iloc[row,3]))
		file.write("   T_2 = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   T_3 = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   AT = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   K_T = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   V_MAX = %.4f,\n" % float(tglist.iloc[row,8]))
		file.write("   V_MIN = %.4f,\n" % float(tglist.iloc[row,9]))
		file.write("   D_turb = %.4f)\n" % float(tglist.iloc[row,10]))
	elif model == 'GGOV1':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.GGOV1 governor(\n")
		file.write("   Rselect = %d,\n" % int(tglist.iloc[row,2]))
		file.write("   Flag = %d,\n" % int(tglist.iloc[row,3]))
		file.write("   R = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   T_pelec = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   maxerr = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   minerr = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   Kpgov = %.4f,\n" % float(tglist.iloc[row,8]))
		file.write("   Kigov = %.4f,\n" % float(tglist.iloc[row,9]))
		file.write("   Kdgov = %.4f,\n" % float(tglist.iloc[row,10]))
		file.write("   Tdgov = %.4f,\n" % float(tglist.iloc[row,11]))
		file.write("   Vmax = %.4f,\n" % float(tglist.iloc[row,12]))
		file.write("   Vmin = %.4f,\n" % float(tglist.iloc[row,13]))
		file.write("   Tact = %.4f,\n" % float(tglist.iloc[row,14]))
		file.write("   Kturb = %.4f,\n" % float(tglist.iloc[row,15]))
		file.write("   Wfnl = %.4f,\n" % float(tglist.iloc[row,16]))
		file.write("   Tb = %.4f,\n" % float(tglist.iloc[row,17]))
		file.write("   Tc = %.4f,\n" % float(tglist.iloc[row,18]))
		file.write("   Teng = %.4f,\n" % float(tglist.iloc[row,19]))
		file.write("   Tfload = %.4f,\n" % float(tglist.iloc[row,20]))
		file.write("   Kpload = %.4f,\n" % float(tglist.iloc[row,21]))
		file.write("   Kiload = %.4f,\n" % float(tglist.iloc[row,22]))
		file.write("   Ldref = %.4f,\n" % float(tglist.iloc[row,23]))
		file.write("   Dm = %.4f,\n" % float(tglist.iloc[row,24]))
		file.write("   Ropen = %.4f,\n" % float(tglist.iloc[row,25]))
		file.write("   Rclose = %.4f,\n" % float(tglist.iloc[row,26]))
		file.write("   Kimw = %.4f,\n" % float(tglist.iloc[row,27]))
		file.write("   Aset = %.4f,\n" % float(tglist.iloc[row,28]))
		file.write("   Ka = %.4f,\n" % float(tglist.iloc[row,29]))
		file.write("   Ta = %.4f,\n" % float(tglist.iloc[row,30]))
		file.write("   Trate = %.4f,\n" % float(tglist.iloc[row,31]))
		file.write("   db = %.4f,\n" % float(tglist.iloc[row,32]))
		file.write("   Tsa = %.4f,\n" % float(tglist.iloc[row,33]))
		file.write("   Tsb = %.4f,\n" % float(tglist.iloc[row,34]))
		file.write("   Rup = %.4f,\n" % float(tglist.iloc[row,35]))
		file.write("   Rdown = %.4f,\n" % float(tglist.iloc[row,36]))
		file.write("   DELT = 0.005)\n")
	elif model == 'GGOV1DU':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.GGOV1DU governor(\n")
		file.write("   Rselect = %d,\n" % int(tglist.iloc[row,2]))
		file.write("   Flag = %d,\n" % int(tglist.iloc[row,3]))
		file.write("   R = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   T_pelec = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   maxerr = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   minerr = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   Kpgov = %.4f,\n" % float(tglist.iloc[row,8]))
		file.write("   Kigov = %.4f,\n" % float(tglist.iloc[row,9]))
		file.write("   Kdgov = %.4f,\n" % float(tglist.iloc[row,10]))
		file.write("   Tdgov = %.4f,\n" % float(tglist.iloc[row,11]))
		file.write("   Vmax = %.4f,\n" % float(tglist.iloc[row,12]))
		file.write("   Vmin = %.4f,\n" % float(tglist.iloc[row,13]))
		file.write("   Tact = %.4f,\n" % float(tglist.iloc[row,14]))
		file.write("   Kturb = %.4f,\n" % float(tglist.iloc[row,15]))
		file.write("   Wfnl = %.4f,\n" % float(tglist.iloc[row,16]))
		file.write("   Tb = %.4f,\n" % float(tglist.iloc[row,17]))
		file.write("   Tc = %.4f,\n" % float(tglist.iloc[row,18]))
		file.write("   Teng = %.4f,\n" % float(tglist.iloc[row,19]))
		file.write("   Tfload = %.4f,\n" % float(tglist.iloc[row,20]))
		file.write("   Kpload = %.4f,\n" % float(tglist.iloc[row,21]))
		file.write("   Kiload = %.4f,\n" % float(tglist.iloc[row,22]))
		file.write("   Ldref = %.4f,\n" % float(tglist.iloc[row,23]))
		file.write("   Dm = %.4f,\n" % float(tglist.iloc[row,24]))
		file.write("   Ropen = %.4f,\n" % float(tglist.iloc[row,25]))
		file.write("   Rclose = %.4f,\n" % float(tglist.iloc[row,26]))
		file.write("   Kimw = %.4f,\n" % float(tglist.iloc[row,27]))
		file.write("   Aset = %.4f,\n" % float(tglist.iloc[row,28]))
		file.write("   Ka = %.4f,\n" % float(tglist.iloc[row,29]))
		file.write("   Ta = %.4f,\n" % float(tglist.iloc[row,30]))
		file.write("   Trate = %.4f,\n" % float(tglist.iloc[row,31]))
		file.write("   db = %.4f,\n" % float(tglist.iloc[row,32]))
		file.write("   Tsa = %.4f,\n" % float(tglist.iloc[row,33]))
		file.write("   Tsb = %.4f,\n" % float(tglist.iloc[row,34]))
		file.write("   Rup = %.4f,\n" % float(tglist.iloc[row,35]))
		file.write("   Rdown = %.4f,\n" % float(tglist.iloc[row,36]))
		file.write("   DELT = 0.005)\n")
	elif model == 'HYGOV':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(\n")
		file.write("   R = %.4f,\n" % float(tglist.iloc[row,2]))
		file.write("   r = %.4f,\n" % float(tglist.iloc[row,3]))
		file.write("   T_r = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   T_f = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   T_g = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   VELM = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   G_MAX = %.4f,\n" % float(tglist.iloc[row,8]))
		file.write("   G_MIN = %.4f,\n" % float(tglist.iloc[row,9]))
		file.write("   T_w = %.4f,\n" % float(tglist.iloc[row,10]))
		file.write("   A_t = %.4f,\n" % float(tglist.iloc[row,11]))
		file.write("   D_turb = %.4f,\n" % float(tglist.iloc[row,12]))
		file.write("   q_NL = %.4f)\n" % float(tglist.iloc[row,13]))
	elif model == 'IEEEG1':
		# ----- Adding powers:
		file.write("  Modelica.Blocks.Math.Add add_pwr annotation(Placement(transformation(extent={{-16,20},{4,40}})));\n")
		# Find P0 in per unit:
		# ----- Extract Mb:
		Mb = float(genpdata.iloc[index,9])
		# ----- Extract P0:
		P0 = float(genpdata.iloc[index,2])
		# ----- Calculate P0 in per unit:
		p0_pu = P0/Mb;
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.IEEEG1 governor(\n")
		file.write("   P0 = %.6f,\n" % p0_pu)
		file.write("   K = %.4f,\n" % float(tglist.iloc[row,2]))
		file.write("   T_1 = %.4f,\n" % float(tglist.iloc[row,3]))
		file.write("   T_2 = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   T_3 = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   U_o = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   U_c = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   P_MAX = %.4f,\n" % float(tglist.iloc[row,8]))
		file.write("   P_MIN = %.4f,\n" % float(tglist.iloc[row,9]))
		file.write("   T_4 = %.4f,\n" % float(tglist.iloc[row,10]))
		file.write("   K_1 = %.4f,\n" % float(tglist.iloc[row,11]))
		file.write("   K_2 = %.4f,\n" % float(tglist.iloc[row,12]))
		file.write("   T_5 = %.4f,\n" % float(tglist.iloc[row,13]))
		file.write("   K_3 = %.4f,\n" % float(tglist.iloc[row,14]))
		file.write("   K_4 = %.4f,\n" % float(tglist.iloc[row,15]))
		file.write("   T_6 = %.4f,\n" % float(tglist.iloc[row,16]))
		file.write("   K_5 = %.4f,\n" % float(tglist.iloc[row,17]))
		file.write("   K_6 = %.4f,\n" % float(tglist.iloc[row,18]))
		file.write("   T_7 = %.4f,\n" % float(tglist.iloc[row,19]))
		file.write("   K_7 = %.4f,\n" % float(tglist.iloc[row,20]))
		file.write("   K_8 = %.4f)\n" % float(tglist.iloc[row,21]))
	elif model == 'IEESGO':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(\n")
		file.write("   T_1 = %.4f,\n" % float(tglist.iloc[row,2]))
		file.write("   T_2 = %.4f,\n" % float(tglist.iloc[row,3]))
		file.write("   T_3 = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   T_4 = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   T_5 = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   T_6 = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   K_1 = %.4f,\n" % float(tglist.iloc[row,8]))
		file.write("   K_2 = %.4f,\n" % float(tglist.iloc[row,9]))
		file.write("   K_3 = %.4f,\n" % float(tglist.iloc[row,10]))
		file.write("   P_MAX = %.4f,\n" % float(tglist.iloc[row,11]))
		file.write("   P_MIN = %.4f)\n" % float(tglist.iloc[row,12]))
	elif model == 'TGOV1':
		file.write("  OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 governor(\n")
		file.write("   R = %.4f,\n" % float(tglist.iloc[row,2]))
		file.write("   T_1 = %.4f,\n" % float(tglist.iloc[row,3]))
		file.write("   V_MAX = %.4f,\n" % float(tglist.iloc[row,4]))
		file.write("   V_MIN = %.4f,\n" % float(tglist.iloc[row,5]))
		file.write("   T_2 = %.4f,\n" % float(tglist.iloc[row,6]))
		file.write("   T_3 = %.4f,\n" % float(tglist.iloc[row,7]))
		file.write("   D_t = %.4f)\n" % float(tglist.iloc[row,8]))
	# placing turbine governors:
	if model not in gov_list:
		file.write("    annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));\n")
	else:
		file.write("    annotation(Placement(transformation(extent = {{-46, 20}, {-26, 40}})));\n")
#=========================================================================================      
# Function: connectGov
# Authors: marcelofcastro        
# Description: It connects turbine-governors to machines.
#=========================================================================================
def connectGov(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- List of governors:
	gov_list = ['IEEEG1']
	# ----- Connect TG:
	if model not in gov_list:
		file.write("  connect(governor.PMECH, machine.PMECH) annotation(Line(visible = true, points = {{-9, 30}, {10, 30}, {10, 5}, {18, 5}}, color = {0,0,127}));\n")
		file.write("  connect(machine.SPEED, governor.SPEED) annotation(Line(visible = true, points={{41,7},{46,7},{46,50},{-34.805,50},{-34.805,35.396},{-28,35.396},{-28,36}},color = {0,0,127}));\n")
		file.write("  connect(machine.PMECH0, governor.PMECH0) annotation(Line(visible = true, points = {{41, 5}, {50, 5}, {50, 60}, {-40, 60}, {-40, 24}, {-28, 24}}, color = {0, 0, 127}));\n")
	else:
		file.write("  connect(governor.SPEED_HP, pss.V_S1) annotation (Line(points={{-44,30},{-54,30},{-54,50},{-76,50},{-76,4},{-71,4}}, color={0,0,127}));\n")
		file.write("  connect(governor.PMECH_HP, add_pwr.u1) annotation (Line(points={{-25,34},{-22,34},{-22,36},{-18,36}}, color={0,0,127}));\n")
		file.write("  connect(governor.PMECH_LP, add_pwr.u2) annotation (Line(points={{-25,26},{-22,26},{-22,24},{-18,24}}, color={0,0,127}));\n")
		file.write("  connect(add_pwr.y, machine.PMECH) annotation (Line(points={{5,30},{10,30},{10,5},{18,5}}, color={0,0,127}));\n")
#=========================================================================================      
# Function: writeWnd
# Authors: marcelofcastro        
# Description: It writes wind machine electrical control models.
#=========================================================================================
def writeWnd(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Extract list of models that match:
	if model != 'None':
		wdlist = dyrdata[model]
	# ----- Test if we have governor:
	if model == 'None':
		file.write("  // No electrical control found for wind generator\n")
	elif model == 'WT4E1':
		# pf fast control enabling flag
		pfaflg = int(wdlist.iloc[row,3])
		if pfaflg == 1:
			pfa = "true"
		else:
			pfa = "false"
		# flag for Qord source
		varflg = int(wdlist.iloc[row,4])
		if varflg == 1:
			vfa = "true"
		else:
			vfa = "false"
		# pq priority flag
		pqflg = int(wdlist.iloc[row,5])
		if pqflg == 1:
			pqf = "true"
		else:
			pqf = "false"
		file.write("  OpenIPSL.Electrical.Wind.PSSE.WT4G.WT4E1 control(\n")
		file.write("   PFAFLG = %s,\n" % pfa)
		file.write("   VARFLG = %s,\n" % vfa)
		file.write("   PQFLAG = %s,\n" % pqf)
		file.write("   Tfv = %.4f,\n" % float(wdlist.iloc[row,6]))
		file.write("   Kpv = %.4f,\n" % float(wdlist.iloc[row,7]))
		file.write("   KIV = %.4f,\n" % float(wdlist.iloc[row,8]))
		file.write("   Kpp = %.4f,\n" % float(wdlist.iloc[row,9]))
		file.write("   KIP = %.4f,\n" % float(wdlist.iloc[row,10]))
		file.write("   Kf = %.4f,\n" % float(wdlist.iloc[row,11]))
		file.write("   Tf = %.4f,\n" % float(wdlist.iloc[row,12]))
		file.write("   QMX = %.4f,\n" % float(wdlist.iloc[row,13]))
		file.write("   QMN = %.4f,\n" % float(wdlist.iloc[row,14]))
		file.write("   IPMAX = %.4f,\n" % float(wdlist.iloc[row,15]))
		file.write("   TRV = %.4f,\n" % float(wdlist.iloc[row,16]))
		file.write("   dPMX = %.4f,\n" % float(wdlist.iloc[row,17]))
		file.write("   dPMN = %.4f,\n" % float(wdlist.iloc[row,18]))
		file.write("   T_Power = %.4f,\n" % float(wdlist.iloc[row,19]))
		file.write("   KQI = %.4f,\n" % float(wdlist.iloc[row,20]))
		file.write("   VMINCL = %.4f,\n" % float(wdlist.iloc[row,21]))
		file.write("   VMAXCL = %.4f,\n" % float(wdlist.iloc[row,22]))
		file.write("   KVI = %.4f,\n" % float(wdlist.iloc[row,23]))
		file.write("   Tv = %.4f,\n" % float(wdlist.iloc[row,24]))
		file.write("   Tp = %.4f,\n" % float(wdlist.iloc[row,25]))
		file.write("   ImaxTD = %.4f,\n" % float(wdlist.iloc[row,26]))
		file.write("   Iphl = %.4f,\n" % float(wdlist.iloc[row,27]))
		file.write("   Iqhl = %.4f,\n" % float(wdlist.iloc[row,28]))
		file.write("   PSSEMATCH = true)")

	file.write("    annotation (Placement(transformation(extent={{-16,10},{4,-10}})));\n")
#=========================================================================================      
# Function: connectWnd
# Authors: marcelofcastro        
# Description: It connects electrical control to wind machines.
#=========================================================================================
def connectWnd(dyrdata,result,file):
	# ----- Extract results:
	model = result[0]
	row = result[1]
	# ----- Connect Wind Control:
	if model == 'None':
		file.write("  connect(windmachine.I_qcmd0, windmachine.I_qcmd) annotation (Line(points={{24,11},{24,14},{16,14},{16,8},{21,8}}, color={0,0,127}));\n")
		file.write("  connect(windmachine.I_pcmd0, windmachine.I_pcmd) annotation (Line(points={{28,11},{28,16},{14,16},{14,4},{21,4}}, color={0,0,127}));\n")
	elif model == 'WT4E1':
		file.write("  connect(control.WIQCMD, windmachine.I_qcmd) annotation (Line(points={{5,7},{12,7},{12,8},{21,8}}, color={0,0,127}));\n")
		file.write("  connect(control.WIPCMD, windmachine.I_pcmd) annotation (Line(points={{5,3},{12,3},{12,4},{21,4}}, color={0,0,127}));\n")
		file.write("  connect(windmachine.P, control.P) annotation (Line(points={{19,-4},{16,-4},{16,-2},{3,-2}}, color={0,0,127}));\n")
		file.write("  connect(windmachine.Q, control.Q) annotation (Line(points={{19,-8},{14,-8},{14,-5},{3,-5}}, color={0,0,127}));\n")
		file.write("  connect(windmachine.V, control.V) annotation (Line(points={{19,0},{10,0},{10,-8},{3,-8}}, color={0,0,127}));\n")
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
	packagemo.write("package Generators \"Library of machine models translated automatically from PSSE using Python_OpenIPSL.\" \n\n")
	packagemo.write("end Generators;")
	packagemo.close()
	# ----- Creating machines package .order file:
	packageorder = open(pkg_ordr,"w+")
	for ii in range(ngens):
		# Check if machine is declared in DYR
		macresult = lookFor('machine',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
		# Test
		if macresult[0] != 'None':
			# Write machine in .order file
			packageorder.write('Gen%d_%d\n' % ((ii+1),int(gens.iloc[ii,0])))
		else:
			# Print warning message:
			print("Warning: Bus %d declared as PV but has unrecognized generator declared in DYR. Model is: %s." % (int(gens.iloc[ii,0]),str(macresult[0])))
	packageorder.close()
	# ----- Writing each generator .mo file:
	for ii in range(len(gens)):
		# Check if machine is declared in DYR
		macresult = lookFor('machine',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
		if macresult[0] != 'None':
			genname = "Gen"+str((ii+1))+"_"+str(int(gens.iloc[ii,0]))
			genmo = open(genname+".mo","w+")
			genmo.write("within System.Generators;\n")
			genmo.write("model %s\n" % genname)
			genmo.write("  extends OpenIPSL.Electrical.Essentials.pfComponent;\n")
			genmo.write("  OpenIPSL.Interfaces.PwPin pin  annotation (Placement(transformation(extent={{100,-10},{120,10}})));\n")
			# Declaring machines:
			writeMac(gens,ii,dyrdata,macresult,genmo)
			# List of special machines:
			special_mac = ['GENCLS','CSVGN1','WT4G1']
			if macresult[0] not in special_mac:
				# Declaring exciters:
				excresult = lookFor('exciter',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
				writeExc(dyrdata,excresult,genmo)
				# Declaring stabilizers:
				pssresult = lookFor('stabilizer',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
				writePss(dyrdata,pssresult,genmo)
				# Declaring governors:
				govresult = lookFor('governor',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
				writeGov(gens,ii,dyrdata,govresult,genmo)
			elif macresult[0] == 'WT4G1':
				# Declaring electrical control:
				wndresult = lookFor('wind',gens.iloc[ii,0],gens.iloc[ii,8],dyrdata)
				writeWnd(dyrdata,wndresult,genmo)

			# Starting connection:
			list_exc = ['ESST4B'] # list of exciters with an integrated voltage compensator
			genmo.write("equation\n")
			if macresult[0] not in special_mac:
				if excresult[0] in list_exc:
					genmo.write("  connect(machine.p, exciter.Gen_terminal) annotation (Line(points={{40,0},{63,0}}, color={0,0,255}));\n") # connecting machine to pin if exciter has an integrated voltage compensator
					genmo.write("  connect(exciter.Bus, pin) annotation (Line(points={{81,0},{110,0}}, color={0,0,255}));\n") # connecting machine to pin if exciter has an integrated voltage compensator
				else:
					genmo.write("  connect(machine.p,pin)  annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));\n") # connecting machine to pin if no voltage compensator is present
			else:
				if macresult[0] == 'CSVGN1':
					genmo.write("  BusV = sqrt(pin.vr*pin.vr + pin.vi*pin.vi);\n")
					genmo.write("  connect(ConstantPSS.y, statcomp.VOTHSG) annotation (Line(points={{-19,-30},{0,-30},{0,-5},{18,-5}}, color={0,0,127}));\n")
					genmo.write("  connect(BusVoltageMagnitude.y, statcomp.V) annotation (Line(points={{-19,30},{0,30},{0,5},{18,5}}, color={0,0,127}));\n")
					genmo.write("  connect(statcomp.p,pin)  annotation (Line(points={{30,10},{30,32},{60,32},{60,0},{110,0}}, color={0,0,255}));\n") # connecting machine to pin if CSVGN
				elif macresult[0] == 'WT4G1':
					genmo.write("  connect(windmachine.p,pin)  annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));\n") # connecting machine to pin if WT4G1
				else:
					genmo.write("  connect(machine.p,pin)  annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));\n") # connecting machine to pin if GENCLS
				
			
			if macresult[0] not in special_mac:
				# Connecting all devices:
				connectExc(dyrdata,excresult,genmo) # connecting exciter to machine
				connectPss(dyrdata,pssresult,genmo) # connecting pss to machine
				connectGov(dyrdata,govresult,genmo) # connecting turbine-governor to machine
			elif macresult[0] == 'WT4G1':
				# Connects control:
				connectWnd(dyrdata,wndresult,genmo) # connects electrical control to machine
			# Create icon for generator:
			genmo.write("  annotation (\n")
			genmo.write("    Icon(coordinateSystem(\n")
			genmo.write("           extent={{-100,-100},{100,100}},\n")
			genmo.write("           preserveAspectRatio=false, grid={1,1}),\n")
			genmo.write("         graphics={Line(\n")
			genmo.write("           points={{-76,-26},{-28,52},{27,-52},{74,23}},\n")
			genmo.write("           color={0,0,255},\n")
			genmo.write("           smooth=Smooth.Bezier), Ellipse(extent={{-100,-100},{100,100}},\n")
			genmo.write("           lineColor={0,0,255})}));\n")
			# End model:
			genmo.write("end %s;" % genname)
#=========================================================================================      
# Function: writeMo
# Authors: marcelofcastro       
# Description: It uses the data from readRaw and readDyr to build the system in Modelica.
#=========================================================================================
def writeMo(wdir,sdir,ddir,gdir,system_base,system_frequency,sysdata,dyrdata,fault_flag,faultinfo):
	# ----- Initializing file name:
	networkname = "power_grid" # name of the network
	pkg_name = "package.mo" # package name (modelica standard)
	pkg_ordr = "package.order" # package order name (modelica standard)
	# ----- Writing System Package:
	writeSysMo(sdir,pkg_name,pkg_ordr,networkname,sysdata,dyrdata,system_frequency,system_base,fault_flag,faultinfo)
	# ----- Writing System Data Package:
	writeDataMo(ddir,pkg_name,pkg_ordr,sysdata)
	# ----- Writing Generator Data:
	writeGenMo(gdir,pkg_name,pkg_ordr,sysdata,dyrdata)
#=========================================================================================      
# Function: writeLog
# Authors: marcelofcastro          
# Description: It uses the information from the usual procedure to create an output log
# that can be used to extract information from the translation procedure.
#=========================================================================================
def writeLog(wdir,system_base,system_frequency,psse_version,sysdata,dyrdata,times,fault_flag,faultinfo):
	logname = "tlog.txt" # output log name
	# ----- Changing directory to working directory
	os.chdir(wdir)
	# ----- Creating log file:
	logfile = open(logname,"w+")
	# ----- Writing basic information:
	logfile.write("Log-file of translation program\n")
	unix_time = time.time() # time right now in unix timestamp
	now_time = datetime.datetime.fromtimestamp(unix_time) # converting time to date
	logfile.write("(generated: %s)\n\n\n" % (str(now_time))) # printing info in log
	# ----- Writing information about RAW file:
	logfile.write("RAW Parser Started... \n")
	logfile.write("   PSS(R)E version: %.0f\n" % psse_version) 
	logfile.write("   System power base: %.1f MVA\n" % system_base) 
	logfile.write("   System frequency: %.0f Hz\n" % system_frequency)
	nbuses = len(sysdata['bus']) # number of buses
	ngens = len(sysdata['gen']) # number of machines
	logfile.write("   Number of buses in system: %d\n" % int(nbuses)) 
	logfile.write("   Number of generation units in system: %d\n\n\n" % int(ngens))
	# ----- Writing information about DYR file:
	logfile.write("DYR Parser Started... \n\n\n")
	# ----- Writing information about Translation file:
	logfile.write("Translation Started... \n\n\n")
	# ----- Writing information about event:
	if fault_flag == 1:
		logfile.write("Fault event was added...\n")
		logfile.write("   Fault on Bus: %d\n" % int(faultinfo[0]))
		logfile.write("   Fault starts at: %.4f\n" % float(faultinfo[3]))
		logfile.write("   Fault is cleared at: %.4f\n" % float(faultinfo[4]))
		logfile.write("   Fault resistance R (pu, system base): %.6f\n" % float(faultinfo[1]))
		logfile.write("   Fault resistance X (pu, system base): %.6f\n" % float(faultinfo[2]))
	else:
		logfile.write("No event was added...\n")
	# ----- Writing information about CPU consumption:
	logfile.write("Process Terminated\n")
	logfile.write("   Execution time for reading RAW file          : %.6f\n" % float(times[0]))
	logfile.write("   Execution time for reading DYR file          : %.6f\n" % float(times[1]))
	logfile.write("   Execution time for translation of the system : %.6f\n" % float(times[2]))
	logfile.write("   Total execution time                         : %.6f\n\n" % float(times[3]))
	# ----- Closing file:
	logfile.close()
