#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
Fault = RepoDir + "/Scripts/Fault/"
LoadVariation = RepoDir + "/Scripts/LoadVariation/"
ReferenceStep = RepoDir + "/Scripts/ReferenceStep/"

#Run Exciters
print('---------------------------------------------------------- Open Modelica Model Check----------------------------------------------------------')
try:
    exec(open("modelCheck.py").read())
    print('Model Check OK...')
except:
    print('Error in Model Check...')

#Run Exciters
print('---------------------------------------------------------- Open Modelica Fault Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultRunAllOpenModelica.py").read())
    print('Fault Testing OK...')
except:
    print('Error in Fault Testing...')

#Run Machines
print('---------------------------------------------------------- Open Modelica Load Variation Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationRunAllOpenModelica.py").read())
    print('Load Variation Testing OK...')
except:
    print('Error in Load Variation Testing...')

#Run Exciters
print('---------------------------------------------------------- Open Modelica Reference Step Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepRunAllOpenModelica.py").read())
    print('Reference Step Testing OK...')
except:
    print('Error in Reference Step Testing...')

print('---------------------------------------------------------- End of All Open Modelica Simulations ----------------------------------------------------------')

