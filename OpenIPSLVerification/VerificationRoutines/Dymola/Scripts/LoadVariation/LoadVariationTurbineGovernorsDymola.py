#!/usr/bin/env python
# coding: utf-8

# In[1]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[ ]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[2]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")


# In[3]:


#Deleting old OpenIPSL library version
#shutil.rmtree(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/")
#Pulling latest OpenIPSL library version
##print('Pulling latest OpenIPSL library version...\n')
##git.Git("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/").clone("https://github.com/marcelofcastro/OpenIPSL.git")
#Setting OpenIPSL library
##dymola.openModel("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo") 
dymola.openModel("/home/manuelnvro/Desktop/OpenIPSL/OpenIPSL/package.mo")
print("Load Variation Dymola Turbine Governors Simulation Start...\n")


# In[4]:


#Creation of matrix with names, paths and variables
tgovernors = { 'names' : ["BBGOV1","GAST", "GAST2A", "GGOV1", "HYGOV", "IEEG1", "IEESGO", "TGOV1", "WEHGOV", 
                            "WESGOV", "WSHYDD", "WSHYGP"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.TG.BBGOV1","OpenIPSL.Examples.Controls.PSSE.TG.GAST",
                      "OpenIPSL.Examples.Controls.PSSE.TG.GAST2A", "OpenIPSL.Examples.Controls.PSSE.TG.GGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.HYGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.IEEG1", "OpenIPSL.Examples.Controls.PSSE.TG.IEESGO",
                      "OpenIPSL.Examples.Controls.PSSE.TG.TGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.WEHGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WESGOV", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYDD", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP"],
            'delta' : ['gENROU.delta', 'gENROE.delta', 'gENSAL.delta' ],
           'pelec' : ['gENROU.PELEC', 'gENROE.PELEC', 'gENSAL.PELEC'],
            'pmech' : ['gENROU.PMECH', 'gENROE.PMECH', 'gENSAL.PMECH'],
            'speed': ['gENROU.SPEED', 'gENROE.SPEED', 'gENSAL.SPEED'],
           'pmechgov' : ["bBGOV1.PMECH","gAST.PMECH", "gAST2A.PMECH", "gGOV1.PMECH", "hYGOV.PMECH", "iEEG1.PMECH", 
                       "iEESGO.PMECH", "tGOV1.PMECH", "wEHGOV.PMECH", "wESGOV.PMECH", "wSHYDD.PMECH", 
                      "wSHYGP.PMECH"]}


# In[5]:


#Delete old results
shutil.rmtree('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/')
#Create Turbine Governors folder
os.makedirs('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/')
os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/")
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    os.makedirs(f'{tgovernorName}')


# In[6]:


#For loop that will iterate between turbine governors, simulate, and create the .csv fileurb
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    try:
        print(f"Load Variation {tgovernorName} Simulation Start...")
        print("Editing SMIB Partial Model for Load Variation Testing...")
        resultPath = f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/{tgovernorName}/" + tgovernorName
        dymola.translateModel(tgovernors['path'][tgovernorNumber])
        #Get rid of the Fault
        dymola.ExecuteCommand("pwFault.t1 = 20;")
        dymola.ExecuteCommand("pwFault.t2 = 20.15;")
        #Adjust Load Variation
        dymola.ExecuteCommand("constantLoad.d_P = 1;")
        dymola.ExecuteCommand("constantLoad.t1 = 0.5;")
        dymola.ExecuteCommand("constantLoad.d_t = 20;")
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
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/{tgovernorName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{tgovernorName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/{tgovernorName}/{tgovernorName}.mat")
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
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/")
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
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/")
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
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                print("Not a GENSAL model...")
        try:
            pass
            #shutil.rmtree(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/TurbineGovernors/{tgovernorName}/")
            #print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Load Variation Turbine Governor Examples Simulation OK...')


# In[ ]:




