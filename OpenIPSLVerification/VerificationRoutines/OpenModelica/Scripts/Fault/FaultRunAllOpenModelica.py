#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git

RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
Fault = RepoDir + "/Fault/"

#Run Exciters
print('---------------------------------------------------------- Fault Open Modelica Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultExcitersOpenModelica.py").read())
    print('Fault Open Modelica Exciters Testing OK...')
except:
    print('Error in Fault Open Modelica Exciters Testing...')


#Run Machines
print('---------------------------------------------------------- Fault Open Modelica Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultMachinesOpenModelica.py").read())
    print('Fault Open Modelica Machines Testing OK...')
except:
    print('Error in Fault Open Modelica in Machines Testing...')

#Run Turbine Governors
print('---------------------------------------------------------- Fault Open Modelica Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultTurbineGovernorsOpenModelica.py").read())
    print('Fault Open Modelica Turbine Governors Testing OK...')
except:
    print('Error in Fault Open Modelica Turbine Governors Testing...')


#Run Power System Stabilizer
print('---------------------------------------------------------- Fault Open Modelica Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultPowerSystemStabilizersOpenModelica.py").read())
    print('Fault Open Modelica Power System Stabilizer Testing OK...')
except:
    print('Error in Fault Open Modelica Power System Stabilizer Testing...')


#Run Wind Turbines
print('---------------------------------------------------------- Fault Open Modelica Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultWindTurbinesOpenModelica.py").read())
    print('Fault Open Modelica Wind Turbines Testing OK...')
except:
    print('Error in Fault Open Modelica Wind Turbines Testing...')


print('---------------------------------------------------------- End of All Fault Open Modelica Simulations ----------------------------------------------------------')

