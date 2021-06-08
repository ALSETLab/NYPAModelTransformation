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
FMachinesWorkingDir = RepoDir + "/WorkingDir/Fault/Machines/"
print(omc.sendExpression("getVersion()"))

#Creation of matrix with names, paths and variables
machines = { 'names' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
            'path' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Banks.PSSE.CSVGN1"],
            'delta' : ['gENROU.delta', 'gENSAL.delta', 'gENCLS2.delta', 'gENROE.delta', 'gENSAE.delta', 'cSVGN1.delta'],
           'pelec' : ['gENROU.PELEC', 'gENSAL.PELEC', 'gENCLS2.P', 'gENROE.PELEC', 'gENSAE.PELEC', 'cSVGN1.PELEC'],
           'speed' : ['gENROU.SPEED', 'gENSAL.SPEED', 'gENCLS2.omega', 'gENROE.SPEED', 'gENSAE.SPEED', 'cSVGN1.SPEED'],
           'pmech' : ['gENROU.PMECH', 'gENSAL.PMECH', 'gENCLS2.P', 'gENROE.PMECH', 'gENSAE.PMECH', 'cSVGN1.PMECH']}

#Delete old results
try:
    shutil.rmtree(''+FMachinesWorkingDir+'')
except:
    pass
#Create Exciters folder
os.makedirs(''+FMachinesWorkingDir+'')
os.chdir(f""+FMachinesWorkingDir+"")
for machineNumber, machineName in enumerate(machines['names']):
    os.makedirs(f'{machineName}')

#For loop that will iterate between machines, simulate, and create the .csv file
for machineNumber, machineName in enumerate(machines['names']):
    print(f"Fault {machineName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{FMachinesWorkingDir}" + machineName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        if machineName == 'CSVGN1':
            omc.sendExpression(f"simulate(OpenIPSL.Examples.Banks.PSSE.{machineName}, stopTime=10.0,method=\"dassl\",numberOfIntervals=500,tolerance=1e-04)")
            sim = SimRes(""+FMachinesWorkingDir+f"{machineName}/OpenIPSL.Examples.Banks.PSSE.{machineName}_res.mat")
        else:
            omc.sendExpression(f"simulate(OpenIPSL.Examples.Machines.PSSE.{machineName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
            sim = SimRes(""+FMachinesWorkingDir+f"{machineName}/OpenIPSL.Examples.Machines.PSSE.{machineName}_res.mat")
        print(f"{machineName} Simulation Finished...")
    except:
        print(f"{machineName} simulation error or model not found...")
    try:
        print(".csv Writing Start...")
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
    except:
        print(f"{machineName} variable error... \n")       
    try:
        shutil.rmtree(""+FMachinesWorkingDir+f"{machineName}/")
        print("Delete OK...\n")
    except:
        print("Error...\n")          
print('Fault Machine Examples Open Modelica Simulation OK...')

try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

