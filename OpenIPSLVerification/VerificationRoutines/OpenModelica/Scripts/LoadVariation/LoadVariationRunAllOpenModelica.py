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
LoadVariation = RepoDir + "/LoadVariation/"

#Run Exciters
print('---------------------------------------------------------- Load Variation Open Modelica Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationExcitersOpenModelica.py").read())
    print('Load Variation Open Modelica Exciters Testing OK...')
except:
    print('Error in Load Variation Open Modelica Exciters Testing...')

#Run Machines
print('---------------------------------------------------------- Load Variation Open Modelica Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationMachinesOpenModelica.py").read())
    print('Load Variation Open Modelica Machines Testing OK...')
except:
    print('Error in Load Variation Open Modelica in Machines Testing...')

#Run Turbine Governors
print('---------------------------------------------------------- Load Variation Open Modelica Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationTurbineGovernorsOpenModelica.py").read())
    print('Load Variation Open Modelica Turbine Governors Testing OK...')
except:
    print('Error in Load Variation Open Modelica Turbine Governors Testing...')

#Run Power System Stabilizer
print('---------------------------------------------------------- Load Variation Open Modelica Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationPowerSystemStabilizersOpenModelica.py").read())
    print('Load Variation Open Modelica Power System Stabilizer Testing OK...')
except:
    print('Error in Load Variation Open Modelica Power System Stabilizer Testing...')

print('---------------------------------------------------------- End of All Load Variation Open Modelica Simulations ----------------------------------------------------------')

