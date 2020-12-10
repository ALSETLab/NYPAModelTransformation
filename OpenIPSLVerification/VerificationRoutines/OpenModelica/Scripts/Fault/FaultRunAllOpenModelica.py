#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import sys

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd() 
Fault = RepoDir 
comma = "\",\""

ResultDir = os.getcwd()
ResultDir = os.path.abspath(os.path.join(ResultDir, os.pardir))
ResultDir = os.path.abspath(os.path.join(ResultDir, os.pardir))
ResultDir = ResultDir + "/WorkingDir/"

compareDir = os.getcwd()
compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))
compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))

models = { 'exciters' : ["ESAC1A", "ESAC2A", "ESDC1A", "ESST1A", "ESST4B", 
                        "EXAC1", "EXAC2", "EXST1", "IEEET1", "IEEET2", 
                        "SCRX", "SEXS"],
            'machines' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
            'turbinegovernors' : ["GAST", "HYGOV", "IEEEG1", "IEESGO", "TGOV1" ],
           'powersystemstabilizers' : ["PSS2B"],
            'windturbines' : ["WT4G1"]}

def modelsCompare(modelList, modelType, simulationType):
    testsFailed = 0
    testsPassed = 0
    totalTests = 0
    modelDir = ResultDir + ""+simulationType+"/"+modelType+"/"
    #Fault
    for modelNumber, modelName in enumerate(modelList):  
        totalTests += 1
        DockerDir = modelDir + modelName+".csv"
        PSSEDir = compareDir + "/CSVVerification/PSSE/"+simulationType+"/"+modelType+"/"+modelName+".csv"
        compare = os.system("mono "+compareDir+"/CSVVerification/Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
        if compare == 0:
            testsPassed += 1
        else:
            testsFailed += 1
    print(f"Fault {modelType} Models Check Summary:")
    print("--Passed -> " + str(testsPassed))
    print("--Failed -> " + str(testsFailed))
    print("--Total -> " + str(totalTests) + "\n")
    return testsFailed

#Run Exciters
print('---------------------------------------------------------- Fault Open Modelica Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultExcitersOpenModelica.py").read())
    print('Fault Open Modelica Exciters Testing OK...')
except:
    print('Error in Fault Open Modelica Exciters Simulations...')
try:
    excitersFailed = modelsCompare(models['exciters'], "Exciters","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

#Run Machines
print('---------------------------------------------------------- Fault Open Modelica Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultMachinesOpenModelica.py").read())
    print('Fault Open Modelica Machines Testing OK...')
except:
    print('Error in Fault Open Modelica in Machines Testing...')
try:
    machinesFailed = modelsCompare(models['machines'], "Machines","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

#Run Turbine Governors
print('---------------------------------------------------------- Fault Open Modelica Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultTurbineGovernorsOpenModelica.py").read())
    print('Fault Open Modelica Turbine Governors Testing OK...')
except:
    print('Error in Fault Open Modelica Turbine Governors Testing...')
try:
    turbinegovernorsFailed = modelsCompare(models['turbinegovernors'], "TurbineGovernors","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

#Run Power System Stabilizer
print('---------------------------------------------------------- Fault Open Modelica Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultPowerSystemStabilizersOpenModelica.py").read())
    print('Fault Open Modelica Power System Stabilizer Testing OK...')
except:
    print('Error in Fault Open Modelica Power System Stabilizer Testing...')
try:
    powersystemstabilizersFailed = modelsCompare(models['powersystemstabilizers'], "PowerSystemsStabilizers","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

#Run Wind Turbines
print('---------------------------------------------------------- Fault Open Modelica Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultWindTurbinesOpenModelica.py").read())
    print('Fault Open Modelica Wind Turbines Testing OK...')
except:
    print('Error in Fault Open Modelica Wind Turbines Testing...')
try:
    windturbinesFailed = modelsCompare(models['windturbines'], "WindTurbines","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

totalFailed = excitersFailed + machinesFailed + turbinegovernorsFailed + powersystemstabilizersFailed + windturbinesFailed

if totalFailed != 0:
    print("Error: some tests did not pass!\n")
    print("--Exciter Test Errors: " + str(excitersFailed))
    print("--Machines Test Errors: " + str(machinesFailed))
    print("--Turbine Governors Test Errors: " + str(turbinegovernorsFailed))
    print("--Power System Stabilizers Test Errors: " + str(powersystemstabilizersFailed))
    print("--Wind Turbines Test Errors: " + str(windturbinesFailed))
    print("--Total Test Errors: " + str(totalFailed))
    sys.exit(1)
else:
    print("All model ca passed! Ready to merge...")
    sys.exit(0)


# print('---------------------------------------------------------- End of All Fault Open Modelica Simulations ----------------------------------------------------------')




