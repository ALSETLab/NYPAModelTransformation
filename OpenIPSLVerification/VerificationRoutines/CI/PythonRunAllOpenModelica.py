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

RepoDir = os.getcwd() 
Fault = RepoDir 
comma = "\",\""

ResultDir = os.getcwd()
ResultDir = os.path.abspath(os.path.join(ResultDir, os.pardir))

ResultDir = ResultDir + "/WorkingDir/"

compareDir = os.getcwd()
compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))

Fault = RepoDir + "/Fault/"
LoadVariation = RepoDir + "/LoadVariation/"
ReferenceStep = RepoDir + "/ReferenceStep/"

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
    for modelNumber, modelName in enumerate(modelList):  
        print("-------------------------------------------------"+simulationType+" , "+modelName+"-------------------------------------------------")
        totalTests += 1
        DockerDir = modelDir + modelName+".csv"
        PSSEDir = compareDir + "/CSVVerification/PSSE/"+simulationType+"/"+modelType+"/"+modelName+".csv"
        compare = os.system("mono "+compareDir+"/CSVVerification/Compare.exe --mode CsvFileCompare --override --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
        if compare == 0:
            testsPassed += 1
        else:
            testsFailed += 1
    return testsFailed

#Run Fault
print('---------------------------------------------------------- Open Modelica Fault Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultRunAllOpenModelica.py").read())
    print('Fault Testing OK...')
except:
    print('Error in Fault Testing...')

#Run Load Variation
print('---------------------------------------------------------- Open Modelica Load Variation Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationRunAllOpenModelica.py").read())
    print('Load Variation Testing OK...')
except:
    print('Error in Load Variation Testing...')

#Run Reference Step
print('---------------------------------------------------------- Open Modelica Reference Step Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepExcitersOpenModelica.py").read())
    print('Reference Step Testing OK...')
except:
    print('Error in Reference Step Testing...')

print('---------------------------------------------------------- End of All Open Modelica Simulations ----------------------------------------------------------')

print('---------------------------------------------------------- CSV Compare Sart ------------------------------------------------------------------------------')
#Fault
try:
    FexcitersFailed = modelsCompare(models['exciters'], "Exciters","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

try:
    FmachinesFailed = modelsCompare(models['machines'], "Machines","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

try:
    FturbinegovernorsFailed = modelsCompare(models['turbinegovernors'], "TurbineGovernors","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

try:
    FpowersystemstabilizersFailed = modelsCompare(models['powersystemstabilizers'], "PowerSystemsStabilizers","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

try:
    FwindturbinesFailed = modelsCompare(models['windturbines'], "WindTurbines","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

#Load Variation
try:
    LVexcitersFailed = modelsCompare(models['exciters'], "Exciters","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters Comparisons...')

try:
    LVmachinesFailed = modelsCompare(models['machines'], "Machines","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters Comparisons...')

try:
    LVturbinegovernorsFailed = modelsCompare(models['turbinegovernors'], "TurbineGovernors","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters Comparisons...')

try:
    LVpowersystemstabilizersFailed = modelsCompare(models['powersystemstabilizers'], "PowerSystemsStabilizers","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters Comparisons...')

try:
    LVwindturbinesFailed = modelsCompare(models['windturbines'], "WindTurbines","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters Comparisons...')

#Reference Step
try:
    RSexcitersFailed = modelsCompare(models['exciters'], "Exciters","ReferenceStep")
except:
    print('Error in Load Variation Open Modelica Exciters Comparisons...')

#Statistics
FtotalFailed = FexcitersFailed + FmachinesFailed + FpowersystemstabilizersFailed + FturbinegovernorsFailed + FwindturbinesFailed
LVtotalFailed = LVexcitersFailed + LVmachinesFailed + LVpowersystemstabilizersFailed + LVturbinegovernorsFailed + LVwindturbinesFailed
excitersFailed = FexcitersFailed + LVexcitersFailed + RSexcitersFailed
machinesFailed = FmachinesFailed + LVmachinesFailed
turbinegovernorsFailed = FturbinegovernorsFailed + LVturbinegovernorsFailed
powersystemstabilizersFailed = FturbinegovernorsFailed + LVturbinegovernorsFailed
windturbinesFailed = FwindturbinesFailed + LVwindturbinesFailed
totalFailed = excitersFailed + machinesFailed + turbinegovernorsFailed + powersystemstabilizersFailed + windturbinesFailed

#print(compareDir)
#print(ResultDir)

print("--Fault, Exciter Test Errors: " + str(FexcitersFailed) + "/" + str(len(models['exciters'])))

if totalFailed != 0:
    print("Error: some tests did not pass!\n")
    #Fault
    print("--Fault, Exciter Test Errors: " + str(FexcitersFailed) + "/" + str(len(models['exciters'])))
    print("--Fault, Machines Test Errors: " + str(FmachinesFailed) + "/" + str(len(models['machines'])))
    print("--Fault, Turbine Governors Test Errors: " + str(FturbinegovernorsFailed) + "/" + str(len(models['turbinegovernors'])))
    print("--Fault, Power System Stabilizers Test Errors: " + str(FpowersystemstabilizersFailed) + "/ " + str(len(models['powersystemstabilizers'])))
    print("--Fault, Wind Turbines Test Errors: " + str(FwindturbinesFailed) + "/" + str(len(models['windturbines'])))
    print("--Fault, Total Test Errors: " + str(FtotalFailed))
    #Load Variation
    print("--Load Variation, Exciter Test Errors: " + str(LVexcitersFailed) + "/" + str(len(models['exciters'])))
    print("--Load Variation, Machines Test Errors: " + str(LVmachinesFailed) + "/" + str(len(models['machines'])))
    print("--Load Variation, Turbine Governors Test Errors: " + str(LVturbinegovernorsFailed) + "/" + str(len(models['turbinegovernors'])))
    print("--Load Variation, Power System Stabilizers Test Errors: " + str(LVpowersystemstabilizersFailed) + "/" + str(len(models['powersystemstabilizers'])))
    print("--Load Variation, Wind Turbines Test Errors: " + str(LVwindturbinesFailed) + "/" + str(len(models['windturbines'])))
    print("--Load Variation, Total Test Errors: " + str(LVtotalFailed))
    #Reference Step
    print("--Reference Step Exciter Test Errors: " + str(RSexcitersFailed) + "/" + str(len(models['exciters'])))
    #Total
    print("--Total Test Errors: " + str(totalFailed))
    sys.exit(1)
else:
    print("All model ca passed! Ready to merge...")
    sys.exit(0)


    #get this into the nypa git and test
    # Fix Travis Build
