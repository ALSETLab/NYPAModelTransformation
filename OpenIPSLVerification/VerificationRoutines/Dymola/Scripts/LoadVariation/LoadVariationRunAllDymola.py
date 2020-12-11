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
LoadVariation = RepoDir + "/LoadVariation/"

#Run Exciters
print('---------------------------------------------------------- Load Variation Dymola Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationExcitersDymola.py").read())
    print('Load Variation Dymola Exciters Testing OK...')
except:
    print('Error in Load Variation Dymola Exciters Testing...')

#Run Machines
print('---------------------------------------------------------- Load Variation Dymola Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationMachinesDymola.py").read())
    print('Load Variation Dymola Machines Testing OK...')
except:
    print('Error in Load Variation Dymola Machines Testing...')

#Run Turbine Governors
print('---------------------------------------------------------- Load Variation Dymola Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationTurbineGovernorsDymola.py").read())
    print('Load Variation Dymola Turbine Governors Testing OK...')
except:
    print('Error in Load Variation Dymola Turbine Governors Testing...')

#Run Power System Stabilizer
print('---------------------------------------------------------- Load Variation Dymola Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationPowerSystemStabilizersDymola.py").read())
    print('Load Variation Dymola Power System Stabilizer Testing OK...')
except:
    print('Error in Load Variation Dymola Power System Stabilizer Testing...')

print('---------------------------------------------------------- End of All Load Variation Dymola  Simulations ----------------------------------------------------------')

