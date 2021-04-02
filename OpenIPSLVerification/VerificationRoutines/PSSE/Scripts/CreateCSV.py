# ============================================================================      
# Author: marcelofcastro    
# Description: Code to automatically simulate in PSSE all tests for OpenIPSL.
# ============================================================================
# ----- Init. libraries and commands:
import sys,os
# Point to the pssbin directory:
sys.path.append('C:\\Program Files (x86)\\PTI\\PSSE33\\PSSBIN') 
os.environ['PATH'] += ';' + 'C:\\Program Files (x86)\\PTI\\PSSE33\\PSSBIN'
import redirect
redirect.psse2py()
import psspy
from psspy import _i
from psspy import _f
psspy.throwPsseExceptions = True
# Max no of buses to start psse: 
nbuses=2000;
# Load library of functions for this test:
import test_functions
# Load libraries for exporting csv files:
import dyntools, csv
# Define path used for files:
pathname=r"C:\Users\ALSETPSSE\Desktop\MarceloFiles\PSSE\03_OpenIPSLTesting"
# Name the path for working directory:
workingdirectory = pathname + "/WorkingDir"
# Edit and save output files, halt psse for next simulations:
Model = 'REECCU1'
mdlclass = 'RenewableSources'
outfilename = Model+'.out'
outfile = os.path.join(pathname,outfilename)
test_functions.completeOut('True',pathname,outfile,workingdirectory,Model,mdlclass)
            
            
