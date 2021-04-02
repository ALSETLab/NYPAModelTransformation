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
# Create directory:
test_functions.createDir(workingdirectory)
# ----- Load type of event and list of models needed for simulation:
import test_lists as testlists
# Import list of events:
EventType = testlists.EventType
# Import list of classes of models:
ModelClass = testlists.ModelClass
# ----- For each type of event:
for event in EventType:
    # Name the event result directory:
    eventdirectory = workingdirectory + "/" + event
    # Create the directory:
    test_functions.createDir(eventdirectory)
    # ----- For each class of models:
    for mdlclass in ModelClass:
        # Name the model class result directory:
        classdirectory = eventdirectory + "/" + mdlclass
        # Create directory if needed:
        test_functions.needDir(event,mdlclass,classdirectory)
        # Import list of models:
        models_to_test = test_functions.modelsToTest(mdlclass,testlists)
        # Break if there is error with importing list of models:
        if models_to_test == 'Void':
            break
        # ----- For each model:
        for model in models_to_test:
            # Load correct system (raw+dyr file) for the test:
            [rawfile,dyrfile] = test_functions.initTest(model,mdlclass,pathname)
            # Start PSSE:
            ierr = psspy.psseinit(nbuses)
            # Execute power flow with tolerance set to 1e-6 (0.0001/100) and maximum iteration set to 10:
            test_functions.initialConditions(rawfile,0.000001,10)
            # Prepare everything for dynamic simulation:
            test_functions.prepareDynSim(dyrfile,mdlclass)
            # Include models to be tested:
            test_functions.includeModel(model)
            # Define output file and output channels:
            outfile = test_functions.defineOutput(mdlclass,model,pathname)
            # Simulate model under desired perturbation:
            SimOccur = False
            [SimOccur,outfile] = test_functions.simulateEvent(event,model,mdlclass,outfile)
            # Edit and save output files, halt psse for next simulations:
            test_functions.completeOut(SimOccur,pathname,outfile,classdirectory,model,mdlclass)
            
            
