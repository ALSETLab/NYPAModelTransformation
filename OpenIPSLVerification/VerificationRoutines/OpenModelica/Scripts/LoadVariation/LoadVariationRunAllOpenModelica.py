#!/usr/bin/env python
# coding: utf-8

# In[2]:


from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[3]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020
LoadVariation = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/"


# In[4]:


#Run Exciters
print('---------------------------------------------------------- Load Variation Open Modelica Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationExcitersOpenModelica.py").read())
    print('Load Variation Open Modelica Exciters Testing OK...')
except:
    print('Error in Load Variation Open Modelica Exciters Testing...')


# In[5]:


#Run Machines
print('---------------------------------------------------------- Load Variation Open Modelica Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationMachinesOpenModelica.py").read())
    print('Load Variation Open Modelica Machines Testing OK...')
except:
    print('Error in Load Variation Open Modelica in Machines Testing...')


# In[5]:


#Run Turbine Governors
print('---------------------------------------------------------- Load Variation Open Modelica Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationTurbineGovernorsOpenModelica.py").read())
    print('Load Variation Open Modelica Turbine Governors Testing OK...')
except:
    print('Error in Load Variation Open Modelica Turbine Governors Testing...')


# In[8]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Load Variation Open Modelica Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationPowerSystemStabilizersOpenModelica.py").read())
    print('Load Variation Open Modelica Power System Stabilizer Testing OK...')
except:
    print('Error in Load Variation Open Modelica Power System Stabilizer Testing...')


# In[6]:


#Run Wind Turbines
print('---------------------------------------------------------- Load Variation Open Modelica Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationWindTurbinesOpenModelica.py").read())
    print('Load Variation Open Modelica Wind Turbines Testing OK...')
except:
    print('Error in Load Variation Open Modelica Wind Turbines Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Load Variation Open Modelica Simulations ----------------------------------------------------------')

