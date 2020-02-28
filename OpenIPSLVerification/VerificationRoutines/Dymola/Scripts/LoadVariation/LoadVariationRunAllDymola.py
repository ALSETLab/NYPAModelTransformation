#!/usr/bin/env python
# coding: utf-8

# In[2]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil


# In[ ]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[3]:


#Run Exciters
print('---------------------------------------------------------- Fault Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/Fault/")
    exec(open("FaultExcitersDymola.py").read())
    print('Fault Exciters Testing OK...')
except:
    print('Error in Fault Exciters Testing...')


# In[3]:


#Run Machines
print('---------------------------------------------------------- Fault Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/Fault/")
    exec(open("FaultMachinesDymola.py").read())
    print('Fault Machines Testing OK...')
except:
    print('Fault Error in Machines Testing...')


# In[6]:


#Run Turbine Governors
print('---------------------------------------------------------- Fault Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/Fault/")
    exec(open("FaultTurbineGovernorsDymola.py").read())
    print('Fault Turbine Governors Testing OK...')
except:
    print('Error in Fault Turbine Governors Testing...')


# In[8]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Fault Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/Fault/")
    exec(open("FaultPowerSystemStabilizersDymola.py").read())
    print('Fault Power System Stabilizer Testing OK...')
except:
    print('Error in Fault Power System Stabilizer Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Fault Simulations ----------------------------------------------------------')

