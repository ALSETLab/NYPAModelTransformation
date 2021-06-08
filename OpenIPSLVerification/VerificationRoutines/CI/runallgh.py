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

# ResultDir = os.getcwd()
# ResultDir = os.path.abspath(os.path.join(ResultDir, os.pardir))
# #ResultDir = os.path.abspath(os.path.join(ResultDir, os.pardir))
# ResultDir = ResultDir + "/WorkingDir/"

# compareDir = os.getcwd()
# compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))
# #compareDir = os.path.abspath(os.path.join(compareDir, os.pardir))
# print(compareDir)


# #This is intended to be used in the manuelnvro Dell using Dymola 2020
# Fault = RepoDir + "/Fault/"
# LoadVariation = RepoDir + "/LoadVariation/"
# ReferenceStep = RepoDir + "/ReferenceStep/"

# models = { 'exciters' : ["ESAC1A", "ESAC2A", "ESDC1A", "ESST1A", "ESST4B", 
#                         "EXAC1", "EXAC2", "EXST1", "IEEET1", "IEEET2", 
#                         "SCRX", "SEXS"],
#             'machines' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
#             'turbinegovernors' : ["GAST", "HYGOV", "IEEEG1", "IEESGO", "TGOV1" ],
#            'powersystemstabilizers' : ["PSS2B"],
#             'windturbines' : ["WT4G1"]}

# def modelsCompare(modelList, modelType, simulationType):
#     testsFailed = 0
#     testsPassed = 0
#     totalTests = 0
#     modelDir = ResultDir + ""+simulationType+"/"+modelType+"/"
#     #Fault
#     for modelNumber, modelName in enumerate(modelList):  
#         print("--------------------------------------------"+modelName+"--------------------------------------------")
#         totalTests += 1
#         DockerDir = modelDir + modelName+".csv"
#         PSSEDir = compareDir + "/manuelnvro/CSVVerification/PSSE/"+simulationType+"/"+modelType+"/"+modelName+".csv"
#         compare = os.system("mono "+compareDir+"/CSVVerification/Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
#         if compare == 0:
#             testsPassed += 1
#         else:
#             testsFailed += 1
#     return testsFailed


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
    #Fault
    for modelNumber, modelName in enumerate(modelList):  
        print("-------------------------------------------------"+simulationType+" , "+modelName+"-------------------------------------------------")
        totalTests += 1
        # DockerDir = modelDir + modelName+".csv"
        # PSSEDir = compareDir + "/CSVVerification/PSSE/"+simulationType+"/"+modelType+"/"+modelName+".csv"
        # compare = os.system("mono "+compareDir+"/CSVVerification/Compare.exe --mode=CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
    
        DockerDir = modelDir + modelName+".csv"
        PSSEDir = compareDir + "/CSVVerification/PSSE/"+simulationType+"/"+modelType+"/"+modelName+".csv"
        compare = os.system("mono "+compareDir+"/CSVVerification/Compare.exe --mode CsvFileCompare --override --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
        print(PSSEDir)
        print(DockerDir)

        if compare == 0:
            testsPassed += 1
        else:
            testsFailed += 1
    return testsFailed

# #Run Fault
# print('---------------------------------------------------------- Open Modelica Fault Testing ----------------------------------------------------------')
# try:
#     os.chdir(f""+Fault+"")
#     exec(open("FaultRunAllOpenModelica.py").read())
#     print('Fault Testing OK...')
# except:
#     print('Error in Fault Testing...')

# os.chdir(f""+Fault+"")
# exec(open("ExcitersTrialFromOtherRepo.py").read())
# print('Fault Testing OK...')

print('---------------------------------------------------------- End of All Open Modelica Simulations ----------------------------------------------------------')

print('---------------------------------------------------------- CSV Compare Sart ------------------------------------------------------------------------------')
#Fault
try:
    FexcitersFailed = modelsCompare(models['exciters'], "Exciters","Fault")
except:
    print('Error in Fault Open Modelica Exciters Comparisons...')

print("--Fault, Exciter Test Errors: " + str(FexcitersFailed) + "/" + str(len(models['exciters'])))

