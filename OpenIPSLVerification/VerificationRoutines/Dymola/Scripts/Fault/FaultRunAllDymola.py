#!/usr/bin/env python
# coding: utf-8

import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
Fault = RepoDir + "/Fault/"

#Run Exciters
print('---------------------------------------------------------- Fault Dymola Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultExcitersDymola.py").read())
    print('Fault Dymola Exciters Testing OK...')
except:
    print('Error in Fault Dymola Exciters Testing...')

#Run Machines
print('---------------------------------------------------------- Fault Dymola Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultMachinesDymola.py").read())
    print('Fault Dymola Machines Testing OK...')
except:
    print('Error in Fault Dymola in Machines Testing...')

#Run Turbine Governors
print('---------------------------------------------------------- Fault Dymola Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultTurbineGovernorsDymola.py").read())
    print('Fault Dymola Turbine Governors Testing OK...')
except:
    print('Error in Fault Dymola Turbine Governors Testing...')

#Run Power System Stabilizer
print('---------------------------------------------------------- Fault Dymola Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultPowerSystemStabilizersDymola.py").read())
    print('Fault Dymola Power System Stabilizer Testing OK...')
except:
    print('Error in Fault Dymola Power System Stabilizer Testing...')

#Run Wind Turbines
print('---------------------------------------------------------- Fault Dymola Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultWindTurbinesDymola.py").read())
    print('Fault Dymola Wind Turbines Testing OK...')
except:
    print('Error in Fault Dymola Wind Turbines Testing...')

print('---------------------------------------------------------- End of All Fault Dymola Simulations ----------------------------------------------------------')

