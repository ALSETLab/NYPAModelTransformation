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
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

#OpenIPSL Location
OpenIPSL = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/package.mo"
OpenModelica = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/"
#Working Directory
LVPowerSystemStabilizersWorkingDir = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/WorkingDir/LoadVariation/PowerSystemStabilizers/"
#Load Variation Folder Locations
LoadVariationSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"
# SMIB Partial Folder Location
SMIBPartialSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/SMIBpartial.mo"
SMIBPartialDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/"
SMIBPartialDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/SMIBpartial.mo"

print(omc.sendExpression("getVersion()"))

#Adding Auxiliary Files
try:
    print('Deleting Auxiliary Models')
    os.chdir(SMIBPartialDestinationPath)
    os.remove("SMIBpartial.mo")
except: 
    print('Error Deleting Auxiliar Models...')
try:
    print('Adding Auxiliary models...')
    os.system('cp '+SMIBPartialSource+' '+SMIBPartialDestination)
except:
    print('Error Adding Auxiliary Models...\n') 
print("Load Variation Open Modelica Power System Stabilizers Simulation Start...\n")

#Creation of matrix with names, paths and variables
psss = { 'names' : ["PSS2A","PSS2B"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A","OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B"],
            'delta' : ['gENROE.delta'],
           'pelec' : ['gENROE.PELEC'],
            'pmech' : ['gENROE.PMECH'],
            'speed': ['gENROE.SPEED'],
           'vothsg' : ["pSS2A.VOTHSG","pSS2B.VOTHSG"]}

#Delete old results
shutil.rmtree(''+LVPowerSystemStabilizersWorkingDir+'')
#Create Exciters folder
os.makedirs(''+LVPowerSystemStabilizersWorkingDir+'')
os.chdir(f""+LVPowerSystemStabilizersWorkingDir+"")
for pssNumber, pssName in enumerate(psss['names']):
    os.makedirs(f'{pssName}')

#For loop that will iterate between machines, simulate, and create the .csv file
for pssNumber, pssName in enumerate(psss['names']):
    print(f"Load Variation {pssName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{LVPowerSystemStabilizersWorkingDir}" + pssName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.PSS.{pssName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
        sim = SimRes(""+LVPowerSystemStabilizersWorkingDir+f"{pssName}/OpenIPSL.Examples.Controls.PSSE.PSS.{pssName}_res.mat")
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
            os.chdir(f""+LVPowerSystemStabilizersWorkingDir+"")
            df_variables.to_csv(f'{pssName}.csv', index = False)          
            print(f"{pssName} Write OK...")
        except:
            print('Check generator model of the example model')
    except:
        print(f"{pssName} variable error...\n")
    shutil.rmtree(""+LVPowerSystemStabilizersWorkingDir+f"{pssName}/")
    print("Delete OK...\n")        
print('Load Variation Power System Stabilizers Examples Open Modelica Simulation OK...')

try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

