import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
#This is intended to be used in the manuelnvro Dell using Dymola 2020
Fault = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/Fault/"
LoadVariation = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/"
ReferenceStep = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/ReferenceStep/"
#Run Exciters
print('---------------------------------------------------------- Fault Testing ----------------------------------------------------------')
try:
    os.chdir(f""+Fault+"")
    exec(open("FaultRunAllDymola.py").read())
    print('Fault Testing OK...')
except:
    print('Error in Fault Testing...')


#Run Machines
print('---------------------------------------------------------- Load Variation Testing ----------------------------------------------------------')
try:
    os.chdir(f""+LoadVariation+"")
    exec(open("LoadVariationRunAllDymola.py").read())
    print('Load Variation Testing OK...')
except:
    print('Error in Load Variation Testing...')

#Run Exciters
print('---------------------------------------------------------- Reference Step Testing ----------------------------------------------------------')
try:
    os.chdir(f""+ReferenceStep+"")
    exec(open("ReferenceStepRunAllDymola.py").read())
    print('Reference Step Testing OK...')
except:
    print('Error in Reference Step Testing...')

print('---------------------------------------------------------- End of All Simulations ----------------------------------------------------------')

