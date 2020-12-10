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
ReferenceStep = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/ReferenceStep/"


# In[4]:


#Run Exciters
print('---------------------------------------------------------- Reference Step Open Modelica Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepExcitersOpenModelica.py").read())
    print('Reference Step Open Modelica Exciters Testing OK...')
except:
    print('Error in Reference Step Open Modelica Exciters Testing...')


# In[5]:


#Run Machines
print('---------------------------------------------------------- Reference Step Open Modelica Machines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepMachinesOpenModelica.py").read())
    print('Reference Step Open Modelica Machines Testing OK...')
except:
    print('Error in Reference Step Open Modelica in Machines Testing...')


# In[5]:


#Run Turbine Governors
print('---------------------------------------------------------- Reference Step Open Modelica Turbine Governors Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepTurbineGovernorsOpenModelica.py").read())
    print('Reference Step Open Modelica Turbine Governors Testing OK...')
except:
    print('Error in Reference Step Open Modelica Turbine Governors Testing...')


# In[8]:


#Run Power System Stabilizer
print('---------------------------------------------------------- Reference Step Open Modelica Power System Stabilizers Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepPowerSystemStabilizersOpenModelica.py").read())
    print('Reference Step Open Modelica Power System Stabilizer Testing OK...')
except:
    print('Error in Reference Step Open Modelica Power System Stabilizer Testing...')


# In[6]:


#Run Wind Turbines
print('---------------------------------------------------------- Reference Step Open Modelica Wind Turbines Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepWindTurbinesOpenModelica.py").read())
    print('Reference Step Open Modelica Wind Turbines Testing OK...')
except:
    print('Error in Reference Step Open Modelica Wind Turbines Testing...')


# In[ ]:


print('---------------------------------------------------------- End of Reference Step Open Modelica Simulations ----------------------------------------------------------')

