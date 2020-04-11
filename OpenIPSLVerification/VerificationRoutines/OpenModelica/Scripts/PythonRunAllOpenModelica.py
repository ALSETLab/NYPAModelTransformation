#!/usr/bin/env python
# coding: utf-8

# In[7]:


from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[9]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020
Fault = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/"
LoadVariation = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/"
ReferenceStep = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/ReferenceStep/"


# In[1]:


#Run Exciters
print('---------------------------------------------------------- Open Modelica Fault Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultRunAllOpenModelica.py").read())
    print('Fault Testing OK...')
except:
    print('Error in Fault Testing...')


# In[3]:


#Run Machines
print('---------------------------------------------------------- Open Modelica Load Variation Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationRunAllOpenModelica.py").read())
    print('Load Variation Testing OK...')
except:
    print('Error in Load Variation Testing...')

#Run Exciters
print('---------------------------------------------------------- Open Modelica Reference Step Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepRunAllOpenModelica.py").read())
    print('Reference Step Testing OK...')
except:
    print('Error in Reference Step Testing...')


# In[ ]:


print('---------------------------------------------------------- End of All Open Modelica Simulations ----------------------------------------------------------')

