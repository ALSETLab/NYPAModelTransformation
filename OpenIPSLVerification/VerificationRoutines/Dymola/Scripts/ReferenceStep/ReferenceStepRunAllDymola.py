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
ReferenceStep = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/ReferenceStep/"


# In[3]:


#Run Exciters
print('---------------------------------------------------------- Reference Step Dymola Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepExcitersDymola.py").read())
    print('Reference Step Dymola Exciters Testing OK...')
except:
    print('Error in Reference Step Dymola Exciters Testing...')


# In[4]:


#Run Machines
print('---------------------------------------------------------- Load Variation Dymola Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepMachinesDymola.py").read())
    print('Reference Step Dymola Machines Testing OK...')
except:
    print('Error in Reference Step Dymola Machines Testing...')


# In[5]:


#Run Turbine Governors
print('---------------------------------------------------------- Reference Step Dymola Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepTurbineGovernorsDymola.py").read())
    print('Reference Step Dymola Turbine Governors Testing OK...')
except:
    print('Error in Reference Step Dymola Turbine Governors Testing...')


# In[6]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Reference Step Dymola Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepPowerSystemStabilizersDymola.py").read())
    print('Reference STep Dymola Power System Stabilizer Testing OK...')
except:
    print('Error in Reference Step Dymola Power System Stabilizer Testing...')


# In[ ]:


#Run Wind Turbines
print('---------------------------------------------------------- Reference Step Dymola Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepWindTurbinesDymola.py").read())
    print('Reference Step Dymola Wind Turbines Testing OK...')
except:
    print('Error in Reference Step Dymola Wind Turbines Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Reference Step Dymola  Simulations ----------------------------------------------------------')

