# =============================================================================================================================================      
# Author: marcelofcastro    
# Description: Library of functions for performing OpenIPSL unit tests
# =============================================================================================================================================
# ----- Import libraries needed for code:
import os, psspy, dyntools, csv, shutil
from psspy import _i
from psspy import _f
# ================================================================================================================================================
# Function: createDir
# Description: the function creates a directory.
# ----- Create directory:   
def createDir(dirpath):
    # create directory:
    try:
        # if the direcotry exists, delete it:
        if os.path.exists(dirpath):
            shutil.rmtree(dirpath)
        # create:
        os.mkdir(dirpath)
    # if there is an error, display message:
    except OSError:
        errmessage = "Creation of directory %s failed\n" % dirpath
        print(errmessage)
# ================================================================================================================================================
# Function: needDir
# Description: the function creates a directory.
# ----- Create directory:   
def needDir(event,mdlclass,dirpath):
    if event == 'LoadVariation':
        if mdlclass == 'RenewableSources':
            errmessage = "Model class %s does not participate in %s event test" % (mdlclass, event)
            print(errmessage)
        else:
            createDir(dirpath)
    elif event == 'ReferenceStep':
        if mdlclass == 'Exciters':
            createDir(dirpath)
        else:
            errmessage = "Model class %s does not participate in %s event test" % (mdlclass, event)
            print(errmessage)
    else:
        createDir(dirpath)
# =============================================================================================================================================
# Function: 
# Description: it loads the correct raw and dyr file depending on the model and model type to be tested
# ----- Load list of models:
def modelsToTest(mdlclass,testlists):
    # Update model list depending on class of model to be tested:
    if mdlclass == 'Machines':
        models_to_test = testlists.MachExamples
    elif mdlclass == 'Exciters':
        models_to_test = testlists.EsysExamples
    elif mdlclass == 'TurbineGovernors':
        models_to_test = testlists.TGovExamples
    elif mdlclass == 'PowerSystemStabilizers':
        models_to_test = testlists.PsstExamples
    elif mdlclass == 'RenewableSources':
        models_to_test = testlists.RwbsExamples
    else:
        # Print error for class without models:
        print('Error. There is no model listed in the class of models named:')
        print(mdlclass)
        models_to_test = 'Void'
    # Output:
    return models_to_test
# =============================================================================================================================================
# Function: initTest
# Description: it loads the correct raw and dyr file depending on the model and model type to be tested
# ----- Load the correct system (there are three possibilites):
def initTest(model,mdlclass,pathname):
    # Load raw file depending on model/model-class:
    if mdlclass == 'RenewableSources':
        rawfile=os.path.join(pathname,"SMIB_Rwb.raw")
    elif mdlclass == 'ShuntElement':
        rawfile=os.path.join(pathname,"SMIB_Shunt.raw")
    else:
        if model == 'CSVGN1':
            rawfile=os.path.join(pathname,"SMIB_Shunt.raw")
        else:
            rawfile=os.path.join(pathname,"SMIB.raw")
    # Load basic dyr file (Infinite bus as classic machine only):
    dyrfile=os.path.join(pathname,"SMIB_basic.dyr")
    # Output:
    return [rawfile,dyrfile]
# =============================================================================================================================================
# Function: initialConditions
# Description: loading raw file, executing newton-raphson to initialize the system
# ----- Initialization of models for each test:
def initialConditions(rawfile,tolerance,iteration):
    # Load .raw file:
    ierr = psspy.read(0,rawfile)
    # Set tolerance and maximum iteration in NR-method:
    ierr = psspy.solution_parameters_4([_i,_i,_i,_i,iteration],[_f,_f,_f,_f,_f,tolerance,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f])
    # Set options in NR-method, and execute solution:
    ierr = psspy.fnsl([0,0,0,0,0,1,99,0])
# =============================================================================================================================================
# Function: prepareDynSim
# Description: the function executes all commands to prepare the dynamic simulation
# ----- Preparing dynamic simulation:
def prepareDynSim(dyrfile,mdlclass):
    # Convert loads (3-step process):
    ierr = psspy.conl(0,1,1,[0,0],[ 100.0,0.0,0.0, 100.0])
    ierr = psspy.conl(0,1,2,[0,0],[ 100.0,0.0,0.0, 100.0])
    ierr = psspy.conl(0,1,3,[0,0],[ 100.0,0.0,0.0, 100.0])
    # Convert generators:
    ierr = psspy.cong()
    # Order and factorize matrices for dynamic simulation:
    ierr = psspy.ordr(0)
    ierr = psspy.fact()
    ierr = psspy.tysl(0)
    # Load .dyr file:
    ierr = psspy.dyre_new([1,1,1,1],dyrfile,"","","")
    # Transform Generator One into a wind machine if model class is Wind:
    if mdlclass == 'RenewableSources':
        ierr = psspy.machine_chng_2(1,r"1",[_i,_i,_i,_i,_i,1],[_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f])
# =============================================================================================================================================
# Function: includeModel
# Description: the function adds the correct model/model-combination to perform the correct test in PSSE
# ----- Load models for each test:        
def includeModel(Model):
    if Model == "GENCLS":
        # - Load GENCLS generator:
        psspy.add_plant_model(1,r"1",1,r"GENCLS",0,"",0,[],[],2,[6.0,0.0])
    elif Model == "GENSAL":
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[5.0,0.07,0.09,4.28,0.0,1.84,1.75,0.41,0.2,0.12,0.11,0.39])
    elif Model == "GENSAE":
        # - Load GENSAE generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAE",0,"",0,[],[],12,[5.0,0.07,0.09,4.28,0.0,1.84,1.75,0.41,0.2,0.12,0.11,0.39])
    elif Model == "GENROU":
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
    elif Model == "GENROE":
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
    elif Model == 'EXAC2':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXAC2 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXAC2",0,"",0,[],[],23,[0.005,0.005,0.005,400.0,0.02,9.0,-5.34,2.0,4.0,-4.0,0.8,1.0,2.0,0.03,1.0,0.2,0.48,1.0,10.0,5.25,0.03,7.0,0.1])
    elif Model == 'ESAC2A':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load ESAC2A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESAC2A",0,"",0,[],[],22,[0.0,0.0,0.0,400.0,0.02,9.0,-5.43,1.0,4.0,-4.0,0.8,10.0,0.0,0.03,1.0,0.2,0.48,1.0,5.25,0.03,7.0,0.1])
    elif Model == 'ESST4B':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load ESST4B exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST4B",0,"",0,[],[],17,[0.3,2.97,2.97,1.0,-0.87,0.01,1.0,0.2,1.0,-0.87,0.1,6.73,0.1,8.41,0.1,0.0,0.0])
    elif Model == 'URST5T':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load URST5T exciter:
        psspy.add_plant_model(1,r"1",6,r"URST5T",0,"",0,[],[],10,[0.025,0.1,0.2,1.0,1.0,1.0,10.0,-10.0,0.58,0.3])
    elif Model == 'SEXS':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load SEXS exciter:
        psspy.add_plant_model(1,r"1",6,r"SEXS",0,"",0,[],[],6,[0.1,1.0,100.0,0.1,-10.0,10.0])
    elif Model == 'SCRX':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load SCRX generator:
        psspy.add_plant_model(1,r"1",6,r"SCRX",0,"",0,[],[],8,[0.1,1.0,100.0,0.005,-10.0,10.0,0.0,0.0])
    elif Model == 'EXAC1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXAC1 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXAC1",0,"",0,[],[],17,[0.004,0.004,0.004,400.0,0.02,9.0,-5.43,0.8,0.03,1.0,0.2,0.48,1.0,5.25,0.03,7.0,0.1])
    elif Model == 'EXST1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXST1 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXST1",0,"",0,[],[],12,[0.02,10.0,-10.0,0.1,1.0,80.0,0.05,8.0,-3.0,0.2,0.1,1.0])
    elif Model == 'ESST1A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[1,1],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
    elif Model == 'IEEEX1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load IEEEX1 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEEX1",0,"",0,[],[],16,[0.04,75.0,0.05,1.0,1.0,3.9,-3.9,0.0,0.5,0.07,1.0,0.0,2.47,0.035,4.5,0.47])
    elif Model == 'ESAC1A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESAC1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESAC1A",0,"",0,[],[],19,[0.04,2.0,10.0,400.0,0.02,9.0,-5.34,0.8,0.03,1.0,0.2,0.48,1.0,5.25,0.03,7.0,0.1,3.0,-3.0])
    elif Model == 'ESDC1A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESDC1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESDC1A",0,"",0,[],[],16,[0.04,75.0,0.05,1.0,1.0,0.0,-3.9,0.0,0.5,0.07,1.0,0.0,2.47,0.035,4.5,0.47])
    elif Model == 'ESDC2A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESDC2A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESDC2A",0,"",0,[],[],16,[0.04,75.0,0.05,1.0,1.0,0.0,-3.9,0.0,0.5,0.07,1.0,0.0,2.47,0.035,4.5,0.47])
    elif Model == 'IEEET2':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load IEEET2 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET2",0,"",0,[],[],14,[0.02,200.0,0.001,2.0,-2.0,0.1,0.55,0.06,0.3,0.6,2.85,0.3,3.8,0.6])
    elif Model == 'ST5B':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ST5B exciter:
        psspy.add_plant_model(1,r"1",6,r"ST5B",0,"",0,[],[],18,[0.0,0.8,6.0,0.08,0.01,200.0,5.0,-4.0,0.001,0.004,2.0,10.0,0.1,0.05,0.1,2.0,0.08,0.08])
    elif Model == 'IEEET1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load IEEET1 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET1",0,"",0,[],[],14,[0.02,200.0,0.001,2.0,-2.0,0.1,0.55,0.06,1.0,0.0,2.85,0.3,3.8,0.6])
    elif Model == 'EXNI':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXNI exciter:
        psspy.add_plant_model(1,r"1",6,r"EXNI",0,"",0,[],[],10,[0.06,150.0,0.0,4.0,-4.0,0.011,0.4,0.7,0.0,10.0])
    elif Model == 'EXAC3':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXAC3 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXAC3",0,"",0,[],[],22,[0.0,0.0,0.0,78.04,0.013,1,-0.95,3.71,0.167,6.99,0.143,1,0.05,1.603,0.14,1.02,1,0.46,4.64,0.186,6.19,1.391])
    elif Model == 'AC7B':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[3.9,0.031,0.495,0.158,2.12,0.0,1.68,1.62,0.245,0.455,0.175,0.145,0.0859,0.4286])
        # - Load AC7B exciter:
        psspy.add_plant_model(1,r"1",6,r"AC7B",0,"",0,[],[],27,[0.0,4.06,4.06,0.0,0.0,5.41,-5.41,47.56,25.16,1.0,-0.95,12.31,10.0,0.203,0.0,0.0,10.0,0.10,0.49,1.0,1.89,5.9,0.0,4.37,0.134,5.82,0.342])
    elif Model == 'AC8B':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[3.9,0.031,0.495,0.158,2.12,0.0,1.68,1.62,0.245,0.455,0.175,0.145,0.0859,0.4286])
        # - Load AC8B exciter:
        psspy.add_plant_model(1,r"1",6,r"AC8B",0,"",0,[],[],21,[0.02,160.0,6.0,8.0,0.08,999.0,-999.0,1.0,0.01,7.76,-6.96,0.2,0.2,1.0,1.0,8.0,0.0,1.0,0.05,2.0,0.5])
    elif Model == 'DC4B':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.5,0.035,0.75,0.07,2.71,0.0,1.9,1.8,0.27,0.6,0.15,0.101,0.11,0.48])
        # - Load DC4B exciter:
        psspy.add_plant_model(1,r"1",6,r"DC4B",0,"",2,[1,1],["",""],18,[0.01,40.0,14.0,15.0,0.01,10.9,0.0,0.15,0.01,1.0,1.0,0.0,1.0,0.0,1.5,0.03,3.0,1.2])
    elif Model == 'ST6B':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ST6B exciter:
        psspy.add_plant_model(1,r"1",6,r"ST6B",0,"",1,[1],[""],16,[0.012,18.038,45.094,0.0,1.0,4.81,-3.85,1.0,1.0,1.0577,17.33,4.164,4.81,-3.85,1.0,0.02])
    elif Model == 'IEEET3':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load IEEET3 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET3",0,"",0,[],[],12,[0.0,120.0,0.15,1.2,-1.2,0.5,0.02,0.53,1.19,1.86,2.82,1.0])
    elif Model == 'REXSYS':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ST6B exciter:
        psspy.add_plant_model(1,r"1",6,r"REXSYS",0,"",1,[1],[""],31,[0.028,350.0,0.0,999.0,0.02,0.0,0.0,0.0,0.0,101.6,-101.6,0.0487,2.0,0.0,0.0,1,1.0,0.0,0.0,999.0,-999.0,0.0,1.0,0.55,0.0,0.0,3.06,0.1,4.08,0.3,0])
    elif Model == 'IEEEVC':
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[7.0,0.035,0.03,3,0.0,1.16,0.81,0.42,0.36,0.136,0.16,0.61])
        # - Load IEEEVC Voltage Compensator:
        psspy.add_plant_model(1,r"1",2,r"IEEEVC",0,"",0,[],[],2,[0.0,0.08])
        # - Load ESDC1A turbine/governor:
        psspy.add_plant_model(1,r"1",6,r"ESDC1A",0,"",0,[],[],16,[0.01,50.0,0.02,0.0,0.0,22.5,-22.5,0.0,0.7,0.03,0.45,0.0,2.322,0.221,3.096,0.549])
    elif Model == 'IEEEG2':
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[4.1,0.05,0.06,1.4631,0.0,0.852,0.61,0.395,0.293,0.237,0.11,0.48])
        # - Load IEEEG2 turbine/governor:
        psspy.add_plant_model(1,r"1",6,r"IEEEG2",0,"",0,[],[],7,[20.0,50.0,5.0,1.0,1.19,0.0,1.0])
    elif Model == 'IEESGO':
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[6.7,0.028,0.0358,4.41,0.0,1.22,0.76,0.297,0.2,0.12,0.186,0.802])
        # - Load SCRX exciter:
        psspy.add_plant_model(1,r"1",6,r"SCRX",0,"",0,[],[],8,[0.1,10.0,100.0,0.05,0.0,5.0,0.0,0.0])
        # - Load IEESGO turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"IEESGO",0,"",0,[],[],11,[0.01,0.0,0.15,0.3,8.0,0.4,0.1,0.7,0.43,1.0,0.0])
    elif Model == 'HYGOV':
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[6.7,0.028,0.0358,4.41,0.0,1.22,0.76,0.297,0.2,0.12,0.186,0.802])
        # - Load SCRX exciter:
        psspy.add_plant_model(1,r"1",6,r"SCRX",0,"",0,[],[],8,[0.1,10.0,100.0,0.05,0.0,5.0,0.0,0.0])
        # - Load HYGOV turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"HYGOV",0,"",0,[],[],12,[0.05,0.3,5.0,0.05,0.5,0.02,0.415,0.0,1.25,1.2,0.2,0.08])
    elif Model == 'GGOV1':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load GGOV1 turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"GGOV1",0,"",2,[0,0],["",""],33,[0.0,1.0,0.05,-0.05,10.0,2.0,0.0,1.0,1.0,0.15,0.5,1.5,0.2,0.1,0.0,0.0,3.0,2.0,0.67,1.0,0.0,0.1,-0.1,0.0,0.1,10.0,0.1,0.0,0.0,4.0,5.0,99.0,-99.0])
    elif Model == 'TGOV1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load TGOV1 turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"TGOV1",0,"",0,[],[],7,[0.04,0.4,0.86,0.3,2.0,6.0,0.0])
    elif Model == 'IEEEG1':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load IEEET1 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET1",0,"",0,[],[],14,[0.06,200.0,0.001,2.0,-2.0,0.1,0.55,0.06,1.0,0.0,2.85,0.3,3.8,0.6])
        # - Load IEEEG1 turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"IEEEG1",0,"",0,[],[],20,[20.0,0.15,0.0,0.2,0.1,-0.1,0.903,0.0,0.25,0.25,0.0,7.5,0.25,0.0,0.4,0.5,0.0,9999.0,0.0,0.0])
    elif Model == 'GAST':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load IEEET1 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET1",0,"",0,[],[],14,[0.06,200.0,0.001,2.0,-2.0,0.1,0.55,0.06,1.0,0.0,2.85,0.3,3.8,0.6])
        # - Load GAST turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"GAST",0,"",0,[],[],9,[0.05,0.4,0.1,3.0,0.9,2.0,1.0,-0.05,0.0])
    elif Model == 'PSS2A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[1,2],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
        # - Load PSS2A stabilizer:
        psspy.add_plant_model(1,r"1",3,r"PSS2A",0,"",6,[1,0,3,0,5,1],["","","","","",""],17,[5.0,0.0,0.0,5.0,5.0,5.0,0.758,1.0,0.12,0.1,2.0,0.47,0.07,0.47,0.07,0.1,-0.1])
    elif Model == 'IEEEST':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[1,1],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
        # - Load IEEEST stabilizer:
        psspy.add_plant_model(1,r"1",3,r"IEEEST",0,"",2,[0,0],["",""],17,[48.743,4.7488,0.0,0.0,-85.776,0.0459,0.7361,1.5868,0.0,0.02,13.892,0.1057,0.0099,0.1,-0.1,0.0,0.0])
    elif Model == 'PSS2B':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[1,2],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
        # - Load PSS2B stabilizer:
        psspy.add_plant_model(1,r"1",3,r"PSS2B",0,"",6,[1,0,3,0,0,0],["","","","","",""],23,[2.0,2.0,0.0,2.0,0.0,2.0,0.1564,1.0,0.0,0.0,10.0,0.25,0.03,0.15,0.015,0.0,0.0,999.0,-999.0,999.0,-999.0,0.1,-0.1])
    elif Model == 'WT4G1':
        # - Load WT4G1 wind machine:
        psspy.add_wind_model(1,r"1",1,r"WT4G1",0,[],[],9,[0.02,0.02,0.4,0.9,1.11,1.2,2.0,2.0,0.02])
    elif Model == 'WT4E1':
        # - Load WT4G1 wind machine:
        psspy.add_wind_model(1,r"1",1,r"WT4G1",0,[],[],9,[0.02,0.02,0.4,0.9,1.11,1.2,2.0,2.0,0.02])
        # - Load WT4E1 wind electrical control:
        psspy.add_wind_model(1,r"1",2,r"WT4E1",4,[0,0,1,0],["","","",""],23,[0.15,18.0,5.0,0.05,0.15,0.0,0.08,0.48,-0.47,1.1,0.1,0.5,-0.5,0.05,0.15,0.9,1.1,120,0.05,0.05,1.7,1.11,1.11])
    elif Model == 'REECBU1':
        # - Load RECGAU1 general inverter-based generator:
        psspy.add_wind_model(1,r"1",1,r"REGCAU1",1,[1],[""],14,[0.02,10.0,0.9,0.5,1.22,1.2,0.8,0.4,-1.3,0.02,0.7,9999.0,-9999.0,1.0])
        # - Load REECBU1 solar electrical control:
        psspy.add_wind_model(1,r"1",2,r"REECBU1",5,[0,0,1,1,0],["","","","",""],25,[-99.0,99.0,0.0,-0.05,-0.05,0.0,1.05,-1.05,0.0,0.05,0.436,-0.436,1.1,0.9,0.0,0.1,0.0,40.0,0.02,99.0,-99.0,1.0,0.0,1.82,0.02])
    elif Model == 'REECCU1':
        # - Load RECGAU1 general inverter-based generator:
        psspy.add_wind_model(1,r"1",1,r"REGCAU1",1,[1],[""],14,[0.017,10.0,0.1,0.05,1.22,1.2,0.2,0.05,-1.3,0.02,0.7,99.0,-99.0,0.7])
        # - Load REECCU1 battery electrical control:
        psspy.add_wind_model(1,r"1",2,r"REECCU1",5,[0,1,1,0,0],["","","","",""],45,[-99.0,99.0,0.01,-0.05,0.05,15.0,0.75,-0.75,1.0,0.05,0.75,-0.75,1.1,0.9,0.0,1.0,0.0,1.0,0.017,99.0,-99.0,1.0,-0.667,1.11,0.017,0.0,0.75,0.2,0.75,0.5,0.75,1.0,0.75,0.2,1.11,0.5,1.11,0.75,1.11,1.0,1.11,999.0,0.5,0.8,0.2])
    elif Model == 'CSVGN1':
        # - Load GENSAL generator on bus 1:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[5.0,0.07,0.09,4.28,0.0,1.84,1.75,0.41,0.2,0.12,0.11,0.39])
        # - Load CSVGN1 compensator on bus 4:
        psspy.add_plant_model(4,r"1",1,r"CSVGN1",0,"",0,[],[],10,[5.0,0.01,0.0,10.0,0.0,0.05,0.0,1.05,0.0,40.0])
# =============================================================================================================================================
# Function: defineOutput
# Description: Define output file and output channels to be recorded
# ----- Load models for each test:
def defineOutput(mdlclass,Model,pathname):
    # Create output file:
    outfilename = Model+'.out'
    outfile = os.path.join(pathname,outfilename)
    # Select output channels to be saved:
    if mdlclass == 'Machines' or mdlclass == 'Exciters' or mdlclass == 'TurbineGovernors':
        if Model == 'CSVGN1':
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,3,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,13,0])
        else:
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,1,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,2,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,5,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,6,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,7,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,13,0])
    elif mdlclass == 'PowerSystemStabilizers':
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,1,0])
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,2,0])
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,5,0])
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,6,0])
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,7,0])
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,10,0])
        ierr = psspy.chsb(0,1,[-1,-1,-1,1,13,0])
    elif mdlclass == 'RenewableSources':
        if Model == 'REECBU1' or Model == 'REECCU1':
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,2,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,3,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,13,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,35,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,36,0])
        else:
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,2,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,3,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,13,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,35,0])
            ierr = psspy.chsb(0,1,[-1,-1,-1,1,36,0])
    return outfile
# ================================================================================================================================================
# Function: simulateEvent
# Description: This function simulates the model according to the event and model class
# ----- Selecting correct event to be simulated using correct parameters.
def simulateEvent(event,model,mdlclass,outfile):
    # Prepare dynamic simulation:
    if model == 'REECBU1' or model == 'REECCU1':
        # Start dynamic simulation - initialize
        ierr = psspy.strt_2([0,1],outfile)
    else:
        # Start dynamic simulation - initialize
        ierr = psspy.strt_2([0,0],outfile)
    # Set time steps:
    step1 = 0.001 # time step before disturbance to 1ms
    step2 = 0.00001 # time step during disturbance to 0.01ms
    step3 = 0.00005 # time step a bit after disturbance to 0.05ms
    step4 = 0.0001 # time step at the end of simulation to 0.1ms
    # Set tolerance:
    tol = 0.000001
    # Simulation of fault event:
    if event == 'Fault':
        # Set flag - Simulation will occur:
        SimOccur = True 
        # Parameters for simulation before disturbance:
        ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step1,_f,_f,_f,_f,_f])
        # Run simulation from 0 to 1.9, print every 10 and save every time step into output file:
        ierr = psspy.run(0,1.9,10,1,0)
        # Set a smaller time step during disturbance:
        ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step2,_f,_f,_f,_f,_f])
        # Run simulation from 1.9 to 2.0, print every 50 and save every 20 time steps into output file:
        ierr = psspy.run(0,2,50,20,0)
        # Stop simulation and include fault at bus 22:
        if mdlclass == 'RenewableSources':
            ierr = psspy.dist_bus_fault(2,3,100.0,[50,50])
        else:
            psspy.dist_bus_fault(22,1,100.0,[0.0,-0.2E+10])
        # Run dynamic simulation to 2.15, print every 50 and save every 20 time steps into output file:
        ierr = psspy.run(0,2.15,50,20,0)
        # Clear fault:
        ierr = psspy.dist_clear_fault(1)
        # Run dynamic simulation to 4.00, print every 50 and save every 20 time steps into output file:
        ierr = psspy.run(0,4,50,20,0)
        # Set a larger time step in a period after disturbance:
        ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step3,_f,_f,_f,_f,_f])
        # Run dynamic simulation to 8.00, print every 50 and save every 20 time steps into output file:
        ierr = psspy.run(0,8,50,20,0)
        # Set an even larger time step for the end of simulation:
        ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step4,_f,_f,_f,_f,_f])
        # Run simulation to the end, print every 10 and save every 10 time steps into output file:
        ierr = psspy.run(0,10.0,10,10,0)
    elif event == 'LoadVariation':
        # Check if model class should be tested under this event:
        if mdlclass == 'RenewableSources':
            # Set flag - Simulation will not occur:
            SimOccur = False
        else:
            # Set flag - Simulation will occur:
            SimOccur = True
            # Parameters for simulation before disturbance:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step1,_f,_f,_f,_f,_f])
            # Run simulation to 0.45, print every 10 and save every time step into output file:
            ierr = psspy.run(0,0.45,10,1,0)
            # Set a smaller time step during disturbance:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step2,_f,_f,_f,_f,_f])
            # Run simulation to 0.5, print every 50 and save every 20 time steps into output file:
            ierr = psspy.run(0,0.5,50,20,0)
            # Increase load in 1 per unit (active and reactive powers):
            ierr = psspy.load_chng_4(2,r"""1""",[1,_i,_i,_i,_i,_i],[100,20,_f,_f,_f,_f])
            # Run simulation to 2, print every 50 and save every 20 time steps into output file:
            ierr = psspy.run(0,2.0,50,20,0)
            # Set a larger time step in a period after disturbance:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step3,_f,_f,_f,_f,_f])
            # Run simulation to 6, print every 50 and save every 20 time steps into output file:
            ierr = psspy.run(0,6.0,50,20,0)
            # Set a larger time step for the end of simulation:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step4,_f,_f,_f,_f,_f])
            # Run simulation to the end, print every 10 and save every 10 time steps into output file:
            ierr = psspy.run(0,10.0,10,10,0)
    elif event == 'ReferenceStep':
        # Check if model class should be tested under this event:
        if mdlclass == 'Exciters':
            # Set flag - Simulation will occur:
            SimOccur = True
            # Parameters for simulation before disturbance:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step1,_f,_f,_f,_f,_f])
            # Run simulation to 0.45, print every 10 and save every time step into output file:
            ierr = psspy.run(0,0.45,10,1,0)
            # Set a smaller time step during disturbance:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step2,_f,_f,_f,_f,_f])
            # Run simulation to 0.5, print every 50 and save every 20 time steps into output file:
            ierr = psspy.run(0,0.5,50,20,0)
            # Increase Vref by 0.02 per unit:
            ierr = psspy.increment_vref(1,r"1",0.02)
            # Run simulation to 2, print every 50 and save every 20 time steps into output file:
            ierr = psspy.run(0,2.0,50,20,0)
            # Set a larger time step in a period after disturbance:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step3,_f,_f,_f,_f,_f])
            # Run simulation to 6, print every 50 and save every 20 time steps into output file:
            ierr = psspy.run(0,6.0,50,20,0)
            # Set a larger time step for the end of simulation:
            ierr = psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,tol,step4,_f,_f,_f,_f,_f])
            # Run simulation to the end, print every 10 and save every 10 time steps into output file:
            ierr = psspy.run(0,10.0,10,10,0)
        else:
            # Set flag - Simulation will not occur:
            SimOccur = False
    # Return flag and output file:
    return [SimOccur,outfile]
# ================================================================================================================================================
# Function: createCsv
# Description: the function is responsible for creating the csv files that will store the results to be later compared.
# ----- Create CSV files needed:   
def createCsv(Model,outfile,classdirectory):
    # use dyntools to export outfile into csv:
    result = dyntools.CHNF(outfile)
    # CSV files:
    outfilename_csvu = Model+'u.csv' # unedited csv result file
    outfilename_csv = Model+'.csv' # edited csv result file
    # Placing files in directory:
    outfilename = os.path.join(classdirectory,outfilename_csv) # unedited csv result file
    outfilenameu = os.path.join(classdirectory,outfilename_csvu) # edited csv result file
    return [result,outfilename,outfilenameu]
# ================================================================================================================================================
# Function: outputCsv
# Description: the function is responsible for getting the output into a CSV file.
# ----- Save result in CSV:  
def outputCsv(Model,mdlclass,result,outfilenameu):
    # Set channels to be saved in csv file when Machine or TG:
    if mdlclass == 'Machines' or mdlclass == 'TurbineGovernors':
        if Model == 'CSVGN1':
            # CSVGN needs less channels:
            result.csvout(channels=[3,4,5,6,7,8], csvfile=outfilenameu)
        else:
            # Common channels to be saved:
            result.csvout(channels=[1,3,7,9,11,12,13,14], csvfile=outfilenameu)
    # Set channels to be saved in csv file when Exciters:
    elif mdlclass == 'Exciters':
        result.csvout(channels=[1,3,5,7,9,11,12,13,14], csvfile=outfilenameu)
    # Set channels to be saved in csv file when PSS:
    elif mdlclass == 'PowerSystemStabilizers':
        result.csvout(channels=[1,3,7,9,11,13,14,15,16], csvfile=outfilenameu)
    # Set channels to be saved in csv file when Wind:
    elif mdlclass == 'RenewableSources':
        if Model == 'REECBU1' or Model == 'REECCU1':
            result.csvout(channels=[1,3,7,8,9], csvfile=outfilenameu)
        else:
            result.csvout(channels=[1,3,5,6,7], csvfile=outfilenameu)
        
    # Retunrs new outfilenameu (unedited csv file):
    return outfilenameu
# ================================================================================================================================================
# Function: editCsv
# Description: the function corrects the titles for csv file and save the csv file.
# ----- Setting correct output csv files and the correct labels:   
def editCsv(Model,outfilenameu,outfilename):
    # Set correct titles depending on simulated model:
    if Model == "GENCLS":
        titles = ['Time','gENCLS.delta','gENCLS.PELEC','gENCLS.PMECH','gENCLS.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENSAL":
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','gENSAL.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENSAE":
        titles = ['Time','gENSAE.delta','gENSAE.PELEC','gENSAE.PMECH','gENSAE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENROU":
        titles = ['Time','gENROU.delta','gENROU.PELEC','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENROE":
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXAC2':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXAC2.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESAC2A':
        titles = ['Time','gENROU.delta','gENROU.PELEC','eSAC2A.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESST4B':
        titles = ['Time','gENROU.delta','gENROU.PELEC','eSST4B.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'URST5T':
        titles = ['Time','gENROU.delta','gENROU.PELEC','uRST5T.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'SEXS':
        titles = ['Time','gENROU.delta','gENROU.PELEC','sEXS.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'SCRX':
        titles = ['Time','gENROU.delta','gENROU.PELEC','sCRX.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXAC1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXAC1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXST1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXST1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESST1A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSST1A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEX1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','iEEEX1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESAC1A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSAC1A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESDC1A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSDC1A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESDC2A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSDC2A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEET2':
        titles = ['Time','gENROE.delta','gENROE.PELEC','iEEET2.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ST5B':
        titles = ['Time','gENROE.delta','gENROE.PELEC','sT5B.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEET1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','iEEET1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXNI':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXNI.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXAC3':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXAC3.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'AC7B':
        titles = ['Time','gENROU.delta','gENROU.PELEC','aC7B.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'AC8B':
        titles = ['Time','gENROU.delta','gENROU.PELEC','aC8B.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'DC4B':
        titles = ['Time','gENROU.delta','gENROU.PELEC','dC4B.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ST6B':
        titles = ['Time','gENROE.delta','gENROE.PELEC','sT6B.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEET3':
        titles = ['Time','gENROU.delta','gENROU.PELEC','iEEET3.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'REXSYS':
        titles = ['Time','gENROE.delta','gENROE.PELEC','rEXSYS.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEVC':
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','eSDC1A.EFD','gENSAL.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEG2':
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','iEEEG2.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEESGO':
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','iEESGO.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'HYGOV':
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','hYGOV.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'GGOV1':
        titles = ['Time','gENROU.delta','gENROU.PELEC','gGOV1.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'TGOV1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','tGOV1.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEG1':
        titles = ['Time','gENROU.delta','gENROU.PELEC','iEEEG1.PMECH_HP','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'GAST':
        titles = ['Time','gENROU.delta','gENROU.PELEC','gAST.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'PSS2A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','pSS2A.VOTHSG','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEST':
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','iEEEST.VOTHSG','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'PSS2B':
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','pSS2B.VOTHSG','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'WT4G1':
        titles = ['Time','wT4G1.P','wT4G1.Q','GEN1.V','FAULT.V','GEN2.V']
    elif Model == 'WT4E1':
        titles = ['Time','wT4G1.P','wT4G1.Q','GEN1.V','FAULT.V','GEN2.V']
    elif Model == 'REECBU1':
        titles = ['Time','rECGAU1.P','rECGAU1.Q','GEN1.V','FAULT.V','GEN2.V']
    elif Model == 'REECCU1':
        titles = ['Time','rECGAU1.P','rECGAU1.Q','GEN1.V','FAULT.V','GEN2.V']
    elif Model == 'CSVGN1':
        titles = ['Time','cSVGN1.Q','GEN1.V','LOAD.V','GEN2.V','SHUNT.V','FAULT.V']
    # Edit the u-csv file to include correct titles and set delimiter as ',':
    with open(outfilenameu, 'rb') as inp, open(outfilename, 'wb') as out:
        # Set delimiter:
        writer = csv.writer(out, delimiter = ",")
        # Starts from row zero:
        count = 0
        # For each row, checks content and save it:
        for row in csv.reader(inp):
            if row[0] != '0' or count != 0:
                count = count+1
                if row[0] == 'Time(s)':
                    writer.writerow(titles) # fix titles
                else:
                    writer.writerow(row) # append row with data
    return outfilename
# ================================================================================================================================================
# Function: deleteOut
# Description: the function deletes the .out file after csv was saved and edited.
# ----- Delete outputfile:
def deleteOut(pathname,classdirectory,Model):
    # Get name and path of .csv file without editions:
    csvufile = os.path.join(classdirectory,Model+"u.csv")
    # Delete file:
    os.remove(csvufile)
    # Get name and path of .out file:
    pssefile = os.path.join(pathname,Model+".out")
    # Delete file:
    os.remove(pssefile)
# ================================================================================================================================================
# Function: completeOut
# Description: Executes csv-related functions if simulation occured and delete output filen. The function also halts PSSE
# ----- Perform necessary editions to output if simulation occured:
def completeOut(SimOccur,pathname,outfile,classdirectory,Model,mdlclass):
    if SimOccur:
        # Create result and csv files that will be filled:
        [result,outfilename,outfilenameu] = createCsv(Model,outfile,classdirectory)
        # Fill csv file with results:
        outfilenameu = outputCsv(Model,mdlclass,result,outfilenameu)
        # Edit csv file to be adequate for comparison:
        outfilename = editCsv(Model,outfilenameu,outfilename)
        # Delete outputs:
        deleteOut(pathname,classdirectory,Model)
    else:
        # Get name and path of empty .out file:
        pssefile = os.path.join(pathname,Model+".out")
        # Delete the empty file:
        os.remove(pssefile)
    # Close PSSE to guarantee that every simulation starts from scratch:
    ierr = psspy.pssehalt_2()
        
