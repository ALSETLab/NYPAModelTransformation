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
ReferenceStep = RepoDir + "/ReferenceStep/"

#Run Exciters
print('---------------------------------------------------------- Reference Step Open Modelica Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepExcitersOpenModelica.py").read())
    print('Reference Step Open Modelica Exciters Testing OK...')
except:
    print('Error in Reference Step Open Modelica Exciters Testing...')

print('---------------------------------------------------------- End of Reference Step Open Modelica Simulations ----------------------------------------------------------')

