#==========================================================================      
# Authors: marcelofcastro and ManuelNvro     
# Description: Functions used to translate .raw and .dyr files into .mo files
#==========================================================================
# ----- Init. libraries:
import os                       # importing operational system
import time                     # importing time 
import numpy as np              # importing numpy
from numpy.linalg import inv    # importing inv function
import math                     # importing library for math
import cmath                    # importing library for complex numbers
import shutil					# importing library to overwrite folders
from tkinter.filedialog import askdirectory 
#====================================================================================      
# Function: readRaw
# Authors: marcelofcastro and ManuelNvro          
# Description: this function asks for and reads the Raw file
#====================================================================================
rawIndex = [3] # relevant information start at third line
def readRaw(rawfile):
	rawContent = []	
	# ----- Opening the .raw file:
	with open(rawfile, "r+") as raw_file: # opens the raw file for reading
		for line in raw_file:
			rawContent.append(line) # adds line
	raw_file.close() # closes the raw file
	# ----- Finding specific parameters:
	FirstLine = rawContent[0]
	system_base = float(FirstLine[2:10])
	psse_version = float(FirstLine[12:15])
	system_frequency = float(FirstLine[22:27])
	return [rawContent,system_base,psse_version,system_frequency]
# ----- Initializing dictionary:
# Generators:
Gens = ['GENCLS','GENROE','GENROU','GENSAE','GENSAL']
GenP = [['H','D'],['Tpd0','Tppd0','Tpq0','Tppq0','H','D','Xd','Xq','Xpd','Xpq','Xppd','Xl','S10','S12'],['Tpd0','Tppd0','Tpq0','Tppq0','H','D','Xd','Xq','Xpd','Xpq','Xppd','Xl','S10','S12'],['Tpd0','Tppd0','Tppq0','H','D','Xd','Xq','Xpd','Xppd','Xl','S10','S12'],['Tpd0','Tppd0','Tppq0','H','D','Xd','Xq','Xpd','Xppd','Xl','S10','S12']]
# Exciters:
Excs = ['IEEET1','SCRX','SEXS']
ExcP = [['T_R','K_A','T_A','V_RMAX','V_RMIN','K_E','T_E','K_F','T_F','SW','E_1','S_EE_1','E_2','S_EE_2'],['T_AT_B','T_B','K','T_E','E_MIN','E_MAX','C_SWITCH','r_cr_fd'],['T_AT_B','T_B','K','T_E','E_MIN','E_MAX']]
# Turbine and Governors:
Govs = ['HYGOV','TGOV1']
GovP = [['R','r','T_r','T_f','T_g','VELM','G_MAX','G_MIN','T_w','A_t','D_turb','q_NL'],['R','T_1','V_MAX','V_MIN','T_2','T_3','D_t']]
# ----- Initializing file name:
networkname = "power_grid"
pkg_name = "package.mo"
pkg_ordr = "package.order"
# ----- Initializing arrays:
rawContent = []
dyrContent = []
rawIndex = [3] # relevant information start at third line
# ----- Finding indexes for bus data:
for ii in range(0,len(rawContent),1):
	busix = rawContent[ii].find("0 /")
	if busix == 0:
		rawIndex.append(ii)
# ----- Calculating the size of bus matrix:
nbuses = int(rawIndex[1])-int(rawIndex[0])-1
BUSD = np.zeros((nbuses,20)) # initializing bus matrix - 20 here is just a guess
BUSNAME = [] # initializing bus name array
# ----- Start retrieving buses:
for ii in range(nbuses):
	line = rawContent[ii+int(rawIndex[0])]
	BUSD[ii,0] = ii                  # Auxiliary bus number
	BUSD[ii,1] = int(line[0:6])      # Bus number
	BUSNAME.append(line[8:20])       # Bus name
	BUSD[ii,2] = float(line[22:30])  # Bus base voltage
	BUSD[ii,3] = float(line[32:33])  # Bus type
	BUSD[ii,4] = float(line[34:38])  # 
	BUSD[ii,5] = float(line[39:43])  # 
	BUSD[ii,6] = float(line[44:48])  #
	BUSD[ii,7] = float(line[49:56])  # Bus voltage
	BUSD[ii,8] = float(line[57:66])  # Bus angle
	BUSD[ii,9] = float(line[67:74])  #
	BUSD[ii,10] = float(line[75:82]) #
# ----- Opening and cleaning the .dyr file:
with open("testsystem.dyr", "r+") as dyr_file: # opens the file for reading
    for line in dyr_file:
    	if line[0] != "/": 
    		if line.find("\'USRMDL\'") < 0 and line.find("\'USRMSC\'") < 0:
    			dyrContent.append(line) # adds line
dyr_file.close() # closes the file
# ----- Reading and extracting parameters from original .dyr file:
dyrInfo = []
holding = []
line = 0
while line != len(dyrContent):
	while ' /' not in dyrContent[line]: #read the lines and add the next line to the last until you find /
		holding.extend(dyrContent[line].split()) #get the last element
		line+=1
	holding.extend(dyrContent[line].split())
	holding.pop(len(holding)-1) #delete the / at the end of evevery element
	dyrInfo.append(holding)
	holding = []
	line+=1
# ----- Counting the number of generators in dyrInfo:
rawIndex[3] +=1
ngens = int(rawIndex[4])-int(rawIndex[3])# Generator data starts at Index 3 and ends at Index4
# ----- Counting the number of devices per generator and number of generators per bus:
device_info = np.zeros((ngens,3))
line = 0
for ii in range(ngens):
	row = rawContent[ii+int(rawIndex[3])]
	device_info[ii,0] = int(row[0:6])         # Bus number for machine
	device_info[ii,2] = int(dyrInfo[line][2]) # Circuit number for machine
	while int(dyrInfo[line][0]) == device_info[ii,0] and int(dyrInfo[line][2]) == device_info[ii,2]:
			device_info[ii,1] += 1
			line+=1
			if line == len(dyrInfo):
				break
# ----- Creating system package .mo file:
os.chdir(systemdirectory)
packagemo = open(pkg_name,"w+")
packagemo.write("package TestSystem \"Library of models translated from PSSE using Python_OpenIPSL.\" \n")
packagemo.write("annotation (uses(Modelica(version=\"3.2.2\"), Complex(version = \"3.2.2\"), OpenIPSL(version = \"2.0.0-dev\")), \n")
packagemo.write("            Documentation(info=\"<html> This package contains power system models translated from PSSE using Python_OpenIPSL.</html>\"));\n")
packagemo.write("end TestSystem;")
packagemo.close()
# ----- Creating system package .order file:
packageorder = open(pkg_ordr,"w+")
packageorder.write("%s\n" % (str(networkname)))
packageorder.write("Generators\n")
packageorder.write("Data")
packageorder.close()
# ----- Creating data package .mo file:
os.chdir(sysdatadirectory)
packagemo = open(pkg_name,"w+")
packagemo.write("within TestSystem;\n")
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
pfdatamo.write("within TestSystem.Data;\n")
pfdatamo.write("record pfdata \" Translated and calculated power flow data.\"\n")
pfdatamo.write("  extends Modelica.Icons.Record;\n")
pfdatamo.write("  replaceable record voltages = voltage_data constrainedby voltage_data annotation (choicesAllMatching);\n ")
pfdatamo.write("  replaceable record powers = power_data constrainedby power_data annotation (choicesAllMatching);\n ")
pfdatamo.write("end pfdata;")
pfdatamo.close()
# ----- Writing voltage record:
vdatamo = open("voltage_data.mo","w+")
vdatamo.write("within TestSystem.Data;\n")
vdatamo.write("record voltage_data\n")
vdatamo.write("  extends Modelica.Icons.Record;\n")
for ii in range(0,nbuses,1):
	vdatamo.write("  //Bus %d\n" % (BUSD[ii,1]))
	vdatamo.write("  parameter Real V%d = %.4f;\n" % (BUSD[ii,1], BUSD[ii,7]))
	vdatamo.write("  parameter Real A%d = %.4f;\n" % (BUSD[ii,1], BUSD[ii,8]))
vdatamo.write("end voltage_data;")
# ----- Writing power record:
vdatamo = open("power_data.mo","w+")
vdatamo.write("within TestSystem.Data;\n")
vdatamo.write("record power_data\n")
vdatamo.write("  extends Modelica.Icons.Record;\n\n")
vdatamo.write("end power_data;")
# ----- Creating generators package .mo file:
os.chdir(sysgensdirectory)
packagemo = open(pkg_name,"w+")
packagemo.write("within TestSystem;\n")
packagemo.write("package Generators \"Library of generators models translated from PSSE using Python_OpenIPSL.\" \n\n")
packagemo.write("end Generators;")
packagemo.close()
# ----- Creating generators package .order file:
packageorder = open(pkg_ordr,"w+")
for ii in range(len(device_info)):
	packageorder.write('Gen_%d\n' % (device_info[ii,0]))
packageorder.close()
# ----- Writing each generator .mo file:
for ii in range(len(device_info)):
	genname = "Gen_"+str(int(device_info[ii,0]))
	genmo = open(genname+".mo","w+")
	genmo.write("within TestSystem.Generators\n")
	genmo.write("model %s\n" % genname)
	genmo.write("end %s;" % genname)
# ----- Creating and writing system data into modelica system file:
os.chdir(systemdirectory)
system_file = open(networkname+".mo","w+")
system_file.write("within TestSystem;")
system_file.write("model %s\n" % (str(networkname)))
system_file.write("  inner OpenIPSL.Electrical.SystemBase SysData(S_b = %.0fe6, fn = %.2f) annotation (Placement(transformation(extent={{-94,80},{-60,100}})));\n" % (float(system_base),float(system_frequency)))
system_file.write("  TestSystem.Data.pfdata pfdata  annotation (Placement(transformation(extent={{-88,60},{-68,80}})));\n")
system_file.close()
# Listing buses in the modelica file:
nameornumber = 1
if nameornumber == 0:
	system_file = open(networkname+".mo","a")
	for ii in range(0,nbuses,1):
		system_file.write("  OpenIPSL.Electrical.Buses.Bus %s (V_b = %.1fe3, v_0 = pfdata.voltages.V%d, angle_0 = pfdata.voltages.A%d); \n" % (str(BUSNAME[ii]), BUSD[ii,2],BUSD[ii,1],BUSD[ii,1]))
	system_file.close()
else:
	system_file = open(networkname+".mo","a")
	for ii in range(0,nbuses,1):
		system_file.write("  OpenIPSL.Electrical.Buses.Bus bus_%d (V_b = %.1fe3, v_0 = pfdata.voltages.V%d, angle_0 = pfdata.voltages.A%d); \n" % (BUSD[ii,1], BUSD[ii,2],BUSD[ii,1],BUSD[ii,1]))
	system_file.close()
# Listing all generators in modelica file:
system_file = open(networkname+".mo","a")
for ii in range(len(device_info)):
	system_file.write("  TestSystem.Generators.Gen_%d gen_%d;" % (device_info[ii,0],device_info[ii,0]))
system_file.close()
# ----- Ending modelica file:
system_file = open(networkname+".mo","a")
system_file.write("end %s;" % (str(networkname)))
system_file.close()
# ----- Finishing counting time:		
elapsedtime = time.time() - start_time
# ----- Printing report file:
os.chdir(workingdirectory)
report = open("report_file.txt","w+")
report.write("=================================================================\n")
report.write("                     File Translation Report                     \n")
report.write("\n")
report.write("=================================================================\n")
report.write("PSS(r)E version from .raw file: %.0f\n" % (float(psse_version)))
report.write("System power base: %.2f MVA\n" % (float(system_base)))
report.write("System frequency: %.0f Hz\n" % (float(system_frequency)))
report.write("=================================================================\n")
report.close()
# ----- Printing intermediate files:
#np.savetxt('dev.txt',device_info, fmt='%.4f')