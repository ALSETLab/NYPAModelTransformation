#!/usr/bin/env python
# coding: utf-8

# In[14]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil


# In[15]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020
LoadVariation = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/"


# In[16]:


#Run Exciters
print('---------------------------------------------------------- Load Variation Dymola Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationExcitersDymola.py").read())
    print('Load Variation Dymola Exciters Testing OK...')
except:
    print('Error in Load Variation Dymola Exciters Testing...')


# In[17]:


#Run Machines
print('---------------------------------------------------------- Load Variation Dymola Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationMachinesDymola.py").read())
    print('Load Variation Dymola Machines Testing OK...')
except:
    print('Error in Load Variation Dymola Machines Testing...')


# In[18]:


#Run Turbine Governors
print('---------------------------------------------------------- Load Variation Dymola Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationTurbineGovernorsDymola.py").read())
    print('Load Variation Dymola Turbine Governors Testing OK...')
except:
    print('Error in Load Variation Dymola Turbine Governors Testing...')


# In[19]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Load Variation Dymola Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationPowerSystemStabilizersDymola.py").read())
    print('Load Variation Dymola Power System Stabilizer Testing OK...')
except:
    print('Error in Load Variation Dymola Power System Stabilizer Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Load Variation Dymola  Simulations ----------------------------------------------------------')

