#!/usr/bin/env python
# coding: utf-8

# In[13]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[14]:


#By default, the code runs in manuelnvro Dell using Dymola 2020. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo"
Dymola = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/"
#Working Directory
FMachinesWorkingDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Fault/Machines/"
#Load Variation Folder Locations
LoadVariationSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"


# In[15]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2019FD01-x86_64/bin64/dymola.sh")


# In[19]:


#Deleting old OpenIPSL library version
try:
    shutil.rmtree(f""+OpenIPSL+"")
except:
    pass
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+Dymola+"").clone(""+GitHubOpenIPSL+"")
#Setting OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 
print("Fault Dymola Machines Simulation Start...\n")


# In[20]:


#Creation of matrix with names, paths and variables
machines = { 'names' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
            'path' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Banks.PSSE.CSVGN1"],
            'delta' : ['gENROU.delta', 'gENSAL.delta', 'gENCLS2.delta', 'gENROE.delta', 'gENSAE.delta', 'cSVGN1.delta'],
           'pelec' : ['gENROU.PELEC', 'gENSAL.PELEC', 'gENCLS2.P', 'gENROE.PELEC', 'gENSAE.PELEC', 'cSVGN1.PELEC'],
           'speed' : ['gENROU.SPEED', 'gENSAL.SPEED', 'gENCLS2.omega', 'gENROE.SPEED', 'gENSAE.SPEED', 'cSVGN1.SPEED'],
           'pmech' : ['gENROU.PMECH', 'gENSAL.PMECH', 'gENCLS2.P', 'gENROE.PMECH', 'gENSAE.PMECH', 'cSVGN1.PMECH']}


# In[21]:


#Delete old results
shutil.rmtree(''+FMachinesWorkingDir+'')
#Create Exciters folder
os.makedirs(''+FMachinesWorkingDir+'')
os.chdir(f""+FMachinesWorkingDir+"")
for machineNumber, machineName in enumerate(machines['names']):
    os.makedirs(f'{machineName}')


# In[28]:


#For loop that will iterate between machines, simulate, and create the .csv file
for machineNumber, machineName in enumerate(machines['names']):
    try:
        print(f"Fault {machineName} Simulation Start...")
        dymola.cd(""+ FMachinesWorkingDir + machineName)
        resultPath = "/"+FMachinesWorkingDir+f"{machineName}/" + machineName
        #Changing the solver if it is CSVGN1
        if machineName == 'CSVGN1':
            result = dymola.simulateModel(machines['path'][machineNumber], 
                                    stopTime=10.0,
                                    method="dassl",
                                    tolerance=1e-4,
                                    numberOfIntervals = 500,
                                    resultFile = resultPath)
        else:
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
            sim = SimRes(""+FMachinesWorkingDir+f"{machineName}/{machineName}.mat")
            #Selecting Variables and discerning if it is CSVGN1
            if machineName == 'CSVGN1':
                variables = ['Time', 'cSVGN1.Q', 'GEN1.V', 'LOAD.V', 'GEN2.V', 'SHUNT.V', 'FAULT.V' ]
            else:
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
            os.chdir(f""+FMachinesWorkingDir+"")
            df_variables.to_csv(f'{machineName}.csv', index = False)          
            print(f"{machineName} Write OK...")       
        try:
            shutil.rmtree(""+FMachinesWorkingDir+f"{machineName}/")
            print("Delete OK...\n")
        except:
            pass          
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Fault Machine Examples Simulation OK...')


# In[ ]:


try:
    print("Closing Dymola...")
    dymola.close()
    print("Dymola Close OK...")
except:
    print("Dymola closing error. Below is the log:")
    log = dymola.getLastErrorLog()
    print(log)

