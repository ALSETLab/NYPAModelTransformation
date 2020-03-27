#!/usr/bin/env python
# coding: utf-8

# In[10]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[11]:


#By default, the code runs in manuelnvro Dell using Dymola 2020. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo"
Dymola = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/"
#Working Directory
FTurbineGovernorsWorkingDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Fault/TurbineGovernors/"
#Load Variation Folder Locations
LoadVariationSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"


# In[12]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")


# In[13]:


#Deleting old OpenIPSL library version
shutil.rmtree(f""+OpenIPSL+"")
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+Dymola+"").clone(""+GitHubOpenIPSL+"")
#Setting OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 
print("Fault Dymola Turbine Governors Simulation Start...\n")


# In[14]:


#Creation of matrix with names, paths and variables
tgovernors = { 'names' : ["BBGOV1","GAST", "GAST2A", "GGOV1", "HYGOV", "IEEEG1", "IEESGO", "TGOV1", "WEHGOV", 
                            "WESGOV", "WSHYDD", "WSHYGP"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.TG.BBGOV1","OpenIPSL.Examples.Controls.PSSE.TG.GAST",
                      "OpenIPSL.Examples.Controls.PSSE.TG.GAST2A", "OpenIPSL.Examples.Controls.PSSE.TG.GGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.HYGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.IEEEG1", "OpenIPSL.Examples.Controls.PSSE.TG.IEESGO",
                      "OpenIPSL.Examples.Controls.PSSE.TG.TGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.WEHGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WESGOV", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYDD", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP"],
            'delta' : ['gENROU.delta', 'gENROE.delta', 'gENSAL.delta' ],
           'pelec' : ['gENROU.PELEC', 'gENROE.PELEC', 'gENSAL.PELEC'],
            'pmech' : ['gENROU.PMECH', 'gENROE.PMECH', 'gENSAL.PMECH'],
            'speed': ['gENROU.SPEED', 'gENROE.SPEED', 'gENSAL.SPEED'],
           'pmechgov' : ["bBGOV1.PMECH","gAST.PMECH", "gAST2A.PMECH", "gGOV1.PMECH", "hYGOV.PMECH", "iEEEG1.PMECH", 
                       "iEESGO.PMECH", "tGOV1.PMECH", "wEHGOV.PMECH", "wESGOV.PMECH", "wSHYDD.PMECH", 
                      "wSHYGP.PMECH"]}


# In[15]:


#Delete old results
shutil.rmtree(''+FTurbineGovernorsWorkingDir+'')
#Create folder
os.makedirs(''+FTurbineGovernorsWorkingDir+'')
os.chdir(f""+FTurbineGovernorsWorkingDir+"")
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    os.makedirs(f'{tgovernorName}')


# In[18]:


#For loop that will iterate between turbine governors, simulate, and create the .csv fileurb
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    try:
        print(f"Fault {tgovernorName} Simulation Start...")
        dymola.cd(""+ FTurbineGovernorsWorkingDir + tgovernorName)
        resultPath = "/"+FTurbineGovernorsWorkingDir+f"{tgovernorName}/" + tgovernorName 
        result = dymola.simulateModel(tgovernors['path'][tgovernorNumber], 
                                stopTime=10.0,
                                method="Rkfix2",
                                tolerance=1e-06,
                                numberOfIntervals = 5000,
                                resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
            try:
                os.chdir(FTurbineGovernorsWorkingDir+f"{tgovernorName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{tgovernorName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(""+FTurbineGovernorsWorkingDir+f"{tgovernorName}/{tgovernorName}.mat")
            try:
                print('Verifying if it is a GENROU model...')
                #Selecting Variables
                variables = ['Time', tgovernors['delta'][0], tgovernors['pelec'][0], tgovernors['pmech'][0], tgovernors['speed'][0], tgovernors['pmechgov'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == tgovernors['delta'][0]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                        try:
                            df_variables[var] = np.array(sim[var].values())
                        except:
                            first = np.array(sim[var].values())
                            df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
                print(f"{tgovernorName} Variables OK...")
                #Changing current directory
                os.chdir(f""+FTurbineGovernorsWorkingDir+"")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                pass
            try:
                print('Not a GENROU model...')
                print('Verifying if it is a GENROE model...')
                #Selecting Variables
                variables = ['Time', tgovernors['delta'][1], tgovernors['pelec'][1], tgovernors['pmech'][1], tgovernors['speed'][1], tgovernors['pmechgov'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == tgovernors['delta'][1]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                        try:
                            df_variables[var] = np.array(sim[var].values())
                        except:
                            first = np.array(sim[var].values())
                            df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
                print(f"{tgovernorName} Variables OK...")
                #Changing current directory
                os.chdir(f""+FTurbineGovernorsWorkingDir+"")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                pass
            try:
                print('Not a GENROE model...')
                print('Verifying if it is a GENSAL model...')
                #Selecting Variables
                variables = ['Time', tgovernors['delta'][2], tgovernors['pelec'][2], tgovernors['pmech'][2], tgovernors['speed'][2], tgovernors['pmechgov'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == tgovernors['delta'][2]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                        try:
                            df_variables[var] = np.array(sim[var].values())
                        except:
                            first = np.array(sim[var].values())
                            df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
                print(f"{tgovernorName} Variables OK...")
                #Changing current directory
                os.chdir(f""+FTurbineGovernorsWorkingDir+"")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                print("Not a GENSAL model...")
        try:
            shutil.rmtree(FTurbineGovernorsWorkingDir+f"{tgovernorName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Fault Dymola Turbine Governor Examples Simulation OK...')


# In[ ]:


try:
    print("Closing Dymola...")
    dymola.close()
    print("Dymola Close OK...")
except:
    print("Dymola closing error. Below is the log:")
    log = dymola.getLastErrorLog()
    print(log)

