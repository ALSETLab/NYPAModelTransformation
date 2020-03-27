#!/usr/bin/env python
# coding: utf-8

# In[1]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil


# In[2]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020
Fault = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/Fault/"


# In[3]:


#Run Exciters
print('---------------------------------------------------------- Fault Dymola Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultExcitersDymola.py").read())
    print('Fault Dymola Exciters Testing OK...')
except:
    print('Error in Fault Dymola Exciters Testing...')


# In[4]:


#Run Machines
print('---------------------------------------------------------- Fault Dymola Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultMachinesDymola.py").read())
    print('Fault Dymola Machines Testing OK...')
except:
    print('Error in Fault Dymola in Machines Testing...')


# In[5]:


#Run Turbine Governors
print('---------------------------------------------------------- Fault Dymola Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultTurbineGovernorsDymola.py").read())
    print('Fault Dymola Turbine Governors Testing OK...')
except:
    print('Error in Fault Dymola Turbine Governors Testing...')


# In[8]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Fault Dymola Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultPowerSystemStabilizersDymola.py").read())
    print('Fault Dymola Power System Stabilizer Testing OK...')
except:
    print('Error in Fault Dymola Power System Stabilizer Testing...')


# In[6]:


#Run Wind Turbines
print('---------------------------------------------------------- Fault Dymola Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultWindTurbinesDymola.py").read())
    print('Fault Dymola Wind Turbines Testing OK...')
except:
    print('Error in Fault Dymola Wind Turbines Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Fault Dymola Simulations ----------------------------------------------------------')

