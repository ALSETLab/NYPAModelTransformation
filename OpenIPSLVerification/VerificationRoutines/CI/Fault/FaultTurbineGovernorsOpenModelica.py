#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd()
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

#OpenIPSL Location
OpenIPSL = RepoDir + "/OpenIPSL/"
OpenIPSLPackage = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
#Working Directory
FTurbineGovernorsWorkingDir = RepoDir + "/WorkingDir/Fault/TurbineGovernors/"
print(omc.sendExpression("getVersion()"))


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
           'pmechgov' : ["bBGOV1.PMECH","gAST.PMECH", "gAST2A.PMECH", "gGOV1.PMECH", "hYGOV.PMECH", "iEEEG1.PMECH_HP", 
                       "iEESGO.PMECH", "tGOV1.PMECH", "wEHGOV.PMECH", "wESGOV.PMECH", "wSHYDD.PMECH", 
                      "wSHYGP.PMECH"]}

#Delete old results
try:
    shutil.rmtree(''+FTurbineGovernorsWorkingDir+'')
except:
    pass
#Create Exciters folder
os.makedirs(''+FTurbineGovernorsWorkingDir+'')
os.chdir(f""+FTurbineGovernorsWorkingDir+"")
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    os.makedirs(f'{tgovernorName}')

#For loop that will iterate between machines, simulate, and create the .csv file
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    print(f"Fault {tgovernorName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{FTurbineGovernorsWorkingDir}" + tgovernorName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.TG.{tgovernorName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
        sim = SimRes(""+FTurbineGovernorsWorkingDir+f"{tgovernorName}/OpenIPSL.Examples.Controls.PSSE.TG.{tgovernorName}_res.mat")
        print(f"{tgovernorName} Simulation Finished...")
    except:
        print(f"{tgovernorName} simulation error or model not found...")
    try:
        #Selecting Variables
        print(".csv Writing Start...") 
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
            print('Not a GENROU model...')
        try:    
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
            print('Not a GENROE model...')
        try:
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
             print('Not a GENSAL model...')
    except:
        print(f"{tgovernorName} variable error...\n")
    shutil.rmtree(""+FTurbineGovernorsWorkingDir+f"{tgovernorName}/")
    print("Delete OK...\n")
print('Fault Turbine Governors Examples Open Modelica Simulation OK...')

try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

