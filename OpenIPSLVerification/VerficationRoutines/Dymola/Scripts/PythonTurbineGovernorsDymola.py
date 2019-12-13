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


# In[ ]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[2]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/PythonTesting/OpenIPSL-master/OpenIPSL/package.mo") 
print("Dymola Turbine Governors Simulation Start...\n")


# In[3]:


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
            'speed': ['gENROU.SPEED', 'gENROE.SPEED', 'gENSAL.SPEED'],
           'pmech' : ["bBGOV1.PMECH","gAST.PMECH", "gAST2A.PMECH", "gGOV1.PMECH", "hYGOV.PMECH", "iEEG1.PMECH", 
                       "iEESGO.PMECH", "tGOV1.PMECH", "wEHGOV.PMECH", "wESGOV.PMECH", "wSHYDD.PMECH", 
                      "wSHYGP.PMECH"]}


# In[4]:


#Delete old results
shutil.rmtree('/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/')
#Create Turbine Governors folder
os.makedirs('/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/')
os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/")
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    os.makedirs(f'{tgovernorName}')


# In[5]:


#For loop that will iterate between turbine governors, simulate, and create the .csv fileurb
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    try:
        print(f"{tgovernorName} Simulation Start...")
        dymola.cd("/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/" + tgovernorName)
        resultPath = f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/{tgovernorName}/" + tgovernorName 
        result = dymola.simulateModel(tgovernors['path'][tgovernorNumber], 
                                  stopTime=10.0,
                                  numberOfIntervals = 5000,
                                  resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
            try:
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/{tgovernorName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{tgovernorName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/{tgovernorName}/{tgovernorName}.mat")
            try:
                print('Verifying if it is a GENROU model...')
                #Selecting Variables
                variables = ['Time', tgovernors['delta'][0], tgovernors['pelec'][0], tgovernors['speed'][0], tgovernors['pmech'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == tgovernors['delta'][0]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        df_variables[var] = np.array(sim[var].values())
                print(f"{tgovernorName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                pass
            try:
                print('Not a GENROU model...')
                print('Verifying if it is a GENROE model...')
                #Selecting Variables
                variables = ['Time', tgovernors['delta'][1], tgovernors['pelec'][1], tgovernors['speed'][1], tgovernors['pmech'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == tgovernors['delta'][1]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        df_variables[var] = np.array(sim[var].values())
                print(f"{tgovernorName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                pass
            try:
                print('Not a GENROE model...')
                print('Verifying if it is a GENSAL model...')
                #Selecting Variables
                variables = ['Time', tgovernors['delta'][2], tgovernors['pelec'][2], tgovernors['speed'][2], tgovernors['pmech'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == tgovernors['delta'][2]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        df_variables[var] = np.array(sim[var].values())
                print(f"{tgovernorName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/")
                df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
                print(f"{tgovernorName} Write OK...")
            except:
                print("Not a GENSAL model...")
        try:
            shutil.rmtree(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/TurbineGovernors/{tgovernorName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Turbine Governor Examples Simulation OK...')


# In[ ]:




