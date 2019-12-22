#!/usr/bin/env python
# coding: utf-8

# In[5]:


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


# In[4]:


#Run Exciters
print('---------------------------------------------------------- Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/")
    exec(open("PythonExcitersDymola.py").read())
    print('Exciters Testing OK...')
except:
    print('Error in Exciters Testing...')


# In[3]:


#Run Machines
print('---------------------------------------------------------- Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/")
    exec(open("PythonMachinesDymola.py").read())
    print('Machines Testing OK...')
except:
    print('Error in Machines Testing...')


# In[ ]:


#Run Turbine Governors
print('---------------------------------------------------------- Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/")
    exec(open("PythonTurbineGovernorsDymola.py").read())
    print('Turbine Governors Testing OK...')
except:
    print('Error in Turbine Governors Testing...')


# In[5]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/")
    exec(open("PythonPowerSystemStabilizerDymola.py").read())
    print('Power System Stabilizer Testing OK...')
except:
    print('Error in Power System Stabilizer Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Simulations ----------------------------------------------------------')

