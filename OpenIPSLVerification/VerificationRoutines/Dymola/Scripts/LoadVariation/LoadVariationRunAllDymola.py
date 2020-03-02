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


# In[ ]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[2]:


#Run Exciters
print('---------------------------------------------------------- Load Variation Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/")
    exec(open("LoadVariationExcitersDymola.py").read())
    print('Load Variation Exciters Testing OK...')
except:
    print('Error in Load Variation Exciters Testing...')


# In[3]:


#Run Machines
print('---------------------------------------------------------- Load Variation Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/")
    exec(open("LoadVariationMachinesDymola.py").read())
    print('Load Variation Machines Testing OK...')
except:
    print('Load Variation Error in Machines Testing...')


# In[6]:


#Run Turbine Governors
print('---------------------------------------------------------- Load Variation Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/")
    exec(open("LoadVariationTurbineGovernorsDymola.py").read())
    print('Load Variation Turbine Governors Testing OK...')
except:
    print('Error in Load Variation Turbine Governors Testing...')


# In[8]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Load Variation Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/")
    exec(open("LoadVariationPowerSystemStabilizersDymola.py").read())
    print('Load Variation Power System Stabilizer Testing OK...')
except:
    print('Error in Load Variation Power System Stabilizer Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Fault Simulations ----------------------------------------------------------')

