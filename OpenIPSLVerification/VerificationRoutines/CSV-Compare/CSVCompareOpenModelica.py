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

SimResultDir = os.getcwd()
SimResultDir = os.path.abspath(os.path.join(SimResultDir, os.pardir))
SimResultDir = os.path.abspath(os.path.join(SimResultDir, os.pardir))
SimResultDir = SimResultDir + "/VerificationRoutines/OpenModelica/WorkingDir/"

compareDir = os.getcwd()
compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))
compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))
compareDir = compareDir + "/VerificationRoutines/CSV-Compare"

ReportDir = os.getcwd()
ReportDir = os.path.abspath(os.path.join(ReportDir, os.pardir))
ReportDir = os.path.abspath(os.path.join(ReportDir, os.pardir))
ReportDir = ReportDir + "/VerificationRoutines/CSV-Compare/ResultReport/OpenModelica/"

PSSEDir = compareDir
PSSEDir = os.path.abspath(os.path.join(PSSEDir, os.pardir))
PSSEDir = PSSEDir + "/PSSE/"

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
    modelDir = SimResultDir + ""+simulationType+"/"+modelType+"/"
    for modelNumber, modelName in enumerate(modelList):  
        totalTests += 1
        OpenModelicaDir = modelDir + modelName+".csv"
        PSSE = PSSEDir + "/WorkingDir/"+simulationType+"/"+modelType+"/"+modelName+".csv"
        Report = ReportDir + simulationType+"/"+modelType+"/"
        compare = os.system("mono "+compareDir+"/Compare.exe --override --mode CsvFileCompare --delimiter " +comma+ " --reportdir " + Report + " --tolerance 1e-2 " +OpenModelicaDir+ " " +PSSE)
        if compare == 0:
            testsPassed += 1
        else:
            testsFailed += 1
    print(f"{simulationType} {modelType} Models Check Summary:")
    print("--Passed -> " + str(testsPassed))
    print("--Failed -> " + str(testsFailed))
    print("--Total -> " + str(totalTests) + "\n")
    return testsFailed

#Fault
#Run Exciters
print('---------------------------------------------------------- Fault Open Modelica Exciters CSV Comparison ----------------------------------------------------------')
try:
    excitersFailed = modelsCompare(models['exciters'], "Exciters","Fault")
except:
    print('Error in Fault Open Modelica Exciters CSV Comparison...')

#Run Machines
print('---------------------------------------------------------- Fault Open Modelica Machines CSV Comparison ----------------------------------------------------------')
try:
    machinesFailed = modelsCompare(models['machines'], "Machines","Fault")
except:
    print('Error in Fault Open Modelica Exciters CSV Comparison...')

#Run Turbine Governors
print('---------------------------------------------------------- Fault Open Modelica Turbine Governors CSV Comparison ----------------------------------------------------------')
try:
    turbinegovernorsFailed = modelsCompare(models['turbinegovernors'], "TurbineGovernors","Fault")
except:
    print('Error in Fault Open Modelica Exciters CSV Comparison...')

#Run Power System Stabilizer
print('---------------------------------------------------------- Fault Open Modelica Power System Stabilizers CSV Comparison ----------------------------------------------------------')
try:
    powersystemstabilizersFailed = modelsCompare(models['powersystemstabilizers'], "PowerSystemsStabilizers","Fault")
except:
    print('Error in Fault Open Modelica Exciters CSV Comparison...')

#Run Wind Turbines
print('---------------------------------------------------------- Fault Open Modelica Wind Turbines CSV Comparison ----------------------------------------------------------')
try:
    windturbinesFailed = modelsCompare(models['windturbines'], "WindTurbines","Fault")
except:
    print('Error in Fault Open Modelica Exciters CSV Comparison...')

totalFailed = excitersFailed + machinesFailed + turbinegovernorsFailed + powersystemstabilizersFailed + windturbinesFailed

if totalFailed != 0:
    print("Fault Error: some tests did not pass!\n")
    print("--Exciter Test Errors: " + str(excitersFailed))
    print("--Machines Test Errors: " + str(machinesFailed))
    print("--Turbine Governors Test Errors: " + str(turbinegovernorsFailed))
    print("--Power System Stabilizers Test Errors: " + str(powersystemstabilizersFailed))
    print("--Wind Turbines Test Errors: " + str(windturbinesFailed))
    print("--Total Test Errors: " + str(totalFailed))
else:
    print("All models passed! Ready to merge...")
    
#Load Variation
#Run Exciters
print('---------------------------------------------------------- Load Variation Open Modelica Exciters CSV Comparison ----------------------------------------------------------')
try:
    excitersFailed = modelsCompare(models['exciters'], "Exciters","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters CSV Comparison...')

#Run Machines
print('---------------------------------------------------------- Load Variation Open Modelica Machines CSV Comparison ----------------------------------------------------------')
try:
    machinesFailed = modelsCompare(models['machines'], "Machines","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters CSV Comparison...')

#Run Turbine Governors
print('---------------------------------------------------------- Load Variation Open Modelica Turbine Governors CSV Comparison ----------------------------------------------------------')
try:
    turbinegovernorsFailed = modelsCompare(models['turbinegovernors'], "TurbineGovernors","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters CSV Comparison...')

#Run Power System Stabilizer
print('---------------------------------------------------------- Load Variation Open Modelica Power System Stabilizers CSV Comparison ----------------------------------------------------------')
try:
    powersystemstabilizersFailed = modelsCompare(models['powersystemstabilizers'], "PowerSystemsStabilizers","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters CSV Comparison...')

#Run Wind Turbines
print('---------------------------------------------------------- Load Variation Open Modelica Wind Turbines CSV Comparison ----------------------------------------------------------')
try:
    windturbinesFailed = modelsCompare(models['windturbines'], "WindTurbines","LoadVariation")
except:
    print('Error in Load Variation Open Modelica Exciters CSV Comparison...')

totalFailed = excitersFailed + machinesFailed + turbinegovernorsFailed + powersystemstabilizersFailed + windturbinesFailed

if totalFailed != 0:
    print("Load Variation Error: some tests did not pass!\n")
    print("--Exciter Test Errors: " + str(excitersFailed))
    print("--Machines Test Errors: " + str(machinesFailed))
    print("--Turbine Governors Test Errors: " + str(turbinegovernorsFailed))
    print("--Power System Stabilizers Test Errors: " + str(powersystemstabilizersFailed))
    print("--Wind Turbines Test Errors: " + str(windturbinesFailed))
    print("--Total Test Errors: " + str(totalFailed))
else:
    print("All models passed! Ready to merge...")

#ReferenceStep
#Run Exciters
print('---------------------------------------------------------- Reference Step Open Modelica Exciters CSV Comparison ----------------------------------------------------------')
try:
    excitersFailed = modelsCompare(models['exciters'], "Exciters","ReferenceStep")
except:
    print('Error in Reference Step Open Modelica Exciters CSV Comparison...')

print('---------------------------------------------------------- End of All Open Modelica CSV Comparison ----------------------------------------------------------')




