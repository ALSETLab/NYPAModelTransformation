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
FPowerSystemStabilizersWorkingDir = RepoDir + "/WorkingDir/Fault/PowerSystemStabilizers/"
print(omc.sendExpression("getVersion()"))

#Creation of matrix with names, paths and variables
psss = { 'names' : ["PSS2A","PSS2B"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A","OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B"],
            'delta' : ['gENROE.delta'],
           'pelec' : ['gENROE.PELEC'],
            'pmech' : ['gENROE.PMECH'],
            'speed': ['gENROE.SPEED'],
           'vothsg' : ["pSS2A.VOTHSG","pSS2B.VOTHSG"]}
#Delete old results
try:
    shutil.rmtree(''+FPowerSystemStabilizersWorkingDir+'')
except:
    pass
#Create Exciters folder
os.makedirs(''+FPowerSystemStabilizersWorkingDir+'')
os.chdir(f""+FPowerSystemStabilizersWorkingDir+"")
for pssNumber, pssName in enumerate(psss['names']):
    os.makedirs(f'{pssName}')

#For loop that will iterate between machines, simulate, and create the .csv file
for pssNumber, pssName in enumerate(psss['names']):
    print(f"Fault {pssName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{FPowerSystemStabilizersWorkingDir}" + pssName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.PSS.{pssName}, stopTime=10.0,method=\"dassl\",numberOfIntervals=5000,tolerance=1e-06)")
        sim = SimRes(""+FPowerSystemStabilizersWorkingDir+f"{pssName}/OpenIPSL.Examples.Controls.PSSE.PSS.{pssName}_res.mat")
        print(f"{pssName} Simulation Finished...")
    except:
        print(f"{pssName} simulation error or model not found...")
    try:
        #Selecting Variables
        print(".csv Writing Start...") 
        try:
            print('Verifying if it is a GENROU model...')
            #Selecting Variables
            variables = ['Time', psss['delta'][0], psss['pelec'][0], psss['pmech'][0], psss['speed'][0], psss['vothsg'][pssNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == psss['delta'][0]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{pssName} Variables OK...")
            #Changing current directory
            os.chdir(f""+FPowerSystemStabilizersWorkingDir+"")
            df_variables.to_csv(f'{pssName}.csv', index = False)          
            print(f"{pssName} Write OK...")
        except:
            print('Check generator model of the example model')
    except:
        print(f"{pssName} variable error...\n")
    shutil.rmtree(""+FPowerSystemStabilizersWorkingDir+f"{pssName}/")
    print("Delete OK...\n")        
print('Fault Power System Stabilizers Examples Open Modelica Simulation OK...')


# In[ ]:


try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

