#!/usr/bin/env python
# coding: utf-8

import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os

RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
ReferenceStep = RepoDir + "/ReferenceStep/"

#Run Exciters
print('---------------------------------------------------------- Reference Step Dymola Exciters Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepExcitersDymola.py").read())
    print('Reference Step Dymola Exciters Testing OK...')
except:
    print('Error in Reference Step Dymola Exciters Testing...')

print('---------------------------------------------------------- End of All Reference Step Dymola  Simulations ----------------------------------------------------------')

