#!/usr/bin/env python
# coding: utf-8

# In[53]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[54]:


#By default, the code runs in manuelnvro Dell using Dymola 2020. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo"
Dymola = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/"
#Working Directory
LVMachinesWorkingDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/Machines/"
#Load Variation Folder Locations
LoadVariationSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"


# In[55]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")


# In[56]:


#Deleting old OpenIPSL library version
shutil.rmtree(f""+OpenIPSL+"")
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+Dymola+"").clone(""+GitHubOpenIPSL+"")


# In[57]:


#Adding Auxiliary Files
try:
    print('Deleting Auxiliary Models')
    os.chdir(LoadVariationDestinationPath)
    os.remove("Load_variation.mo")
    os.chdir(PowerFaultDestinationPath)
    os.remove("PwFault.mo")
except: 
    print('Error Deleting Auxiliar Models...')
try:
    print('Adding Auxiliary models...')
    os.system('cp '+PowerFaultSource+' '+PowerFaultDestination)
    os.system('cp '+LoadVariationSource+' '+LoadVariationDestination)
except:
    print('Error Adding Auxiliary Models...\n')
#Opening OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 
print("Load Variation Dymola Machines Simulation Start...\n")


# In[58]:


#Creation of matrix with names, paths and variables
machines = { 'names' : ["GENROU","GENSAL", "GENROE", "GENSAE", "CSVGN1"],
            'path' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Machines.PSSE.CSVGN1"],
            'delta' : ['gENROU.delta', 'gENSAL.delta', 'gENROE.delta', 'gENSAE.delta', 'cSVGN1.delta'],
           'pelec' : ['gENROU.PELEC', 'gENSAL.PELEC', 'gENROE.PELEC', 'gENSAE.PELEC', 'cSVGN1.PELEC'],
           'speed' : ['gENROU.SPEED', 'gENSAL.SPEED', 'gENROE.SPEED', 'gENSAE.SPEED', 'cSVGN1.SPEED'],
           'pmech' : ['gENROU.PMECH', 'gENSAL.PMECH', 'gENROE.PMECH', 'gENSAE.PMECH', 'cSVGN1.PMECH']}
#machines = { 'names' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
#            'path' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
#                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
#                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Machines.PSSE.CSVGN1"],
#            'delta' : ['gENROU.delta', 'gENSAL.delta', 'gENCLS.delta', 'gENROE.delta', 'gENSAE.delta', 'cSVGN1.delta'],
#           'pelec' : ['gENROU.PELEC', 'gENSAL.PELEC', 'gENCLS.PELEC', 'gENROE.PELEC', 'gENSAE.PELEC', 'cSVGN1.PELEC'],
#           'speed' : ['gENROU.SPEED', 'gENSAL.SPEED', 'gENCLS.SPEED', 'gENROE.SPEED', 'gENSAE.SPEED', 'cSVGN1.SPEED'],
#           'pmech' : ['gENROU.PMECH', 'gENSAL.PMECH', 'gENCLS.PMECH', 'gENROE.PMECH', 'gENSAE.PMECH', 'cSVGN1.PMECH']}
print("Add GENCLS after you know what to do")


# In[59]:


#Delete old results
shutil.rmtree(''+LVMachinesWorkingDir+'')
#Create Exciters folder
os.makedirs(''+LVMachinesWorkingDir+'')
os.chdir(f""+LVMachinesWorkingDir+"")
for machineNumber, machineName in enumerate(machines['names']):
    os.makedirs(f'{machineName}')


# In[60]:


#For loop that will iterate between machines, simulate, and create the .csv file
for machineNumber, machineName in enumerate(machines['names']):
    try:
        print(f"Load Variation {machineName} Simulation Start...")
        print("Editing SMIB Partial Model for Load Variation Testing...")
        resultPath = "/"+LVMachinesWorkingDir+f"{machineName}/" + machineName
        dymola.translateModel(machines['path'][machineNumber])
        #Get rid of the Fault
        dymola.ExecuteCommand("pwFault.t1 = 20;")
        dymola.ExecuteCommand("pwFault.t2 = 20.15;")
        #Adjust Load Variation
        dymola.ExecuteCommand("constantLoad.d_P = 1;")
        dymola.ExecuteCommand("constantLoad.t1 = 0.5;")
        dymola.ExecuteCommand("constantLoad.d_t = 20;")
        result = dymola.simulateModel(machines['path'][machineNumber], 
                                      stopTime=10.0, 
                                      method="Rkfix2", 
                                      tolerance=1e-06, 
                                      numberOfIntervals = 5000, 
                                      resultFile = resultPath) 
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
        else:
            print(f"{machineName} Simulation OK...")
            print(".csv Writing Start...")
            #Selecting Result File
            sim = SimRes(""+LVMachinesWorkingDir+f"{machineName}/{machineName}.mat")
            #Selecting Variables
            variables = ['Time', machines['delta'][machineNumber], machines['pelec'][machineNumber], machines['pmech'][machineNumber], machines['speed'][machineNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == machines['delta'][machineNumber]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{machineName} Variables OK...")
            #Changing current directory
            os.chdir(f""+LVMachinesWorkingDir+"")
            df_variables.to_csv(f'{machineName}.csv', index = False)          
            print(f"{machineName} Write OK...")       
        try:
            shutil.rmtree(""+LVMachinesWorkingDir+f"{machineName}/")
            print("Delete OK...\n")
        except:
            pass          
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Load Variation Machine Examples Simulation OK...')

