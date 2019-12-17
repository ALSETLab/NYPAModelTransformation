# ==========================================================================      
# Author: marcelofcastro    
# Description: Code to automatically simulate in PSSE all the tests from
# OpenIPSL.
# ==========================================================================
# ----- Init. libraries and commands:
import sys,os
sys.path.append('C:\\Program Files (x86)\\PTI\\PSSE33\\PSSBIN') #point to the pssbin directory
os.environ['PATH'] += ';' + 'C:\\Program Files (x86)\\PTI\\PSSE33\\PSSBIN'
import redirect
redirect.psse2py()
import psspy
from psspy import _i
from psspy import _f
psspy.throwPsseExceptions = True
nbuses=2000; #max no of buses
import add_models_openipsl
import dyntools, csv
# ----- Defining path used for files:
pathname=r"C:\Users\ALSETPSSE\Desktop\MarceloFiles\PSSE\02_OpenIPSLExampleTest"
# ----- Loading lists of models needed for simulation:
from models_list import SimType as simulationtype
# ----- Testing functions
for item in simulationtype:
        # ----- Dynamic Simulation:
        if item == 'Machines':
                from models_list import GensExamples as models_tested
        elif item == 'Exciters':
                from models_list import EsysExamples as models_tested
        elif item == 'TurbineGovernors':
                from models_list import TGovExamples as models_tested
        elif item == 'PowerSystemStabilizers':
                from models_list import PsstExamples as models_tested
        else:
                break
        # Loading models for each test:
        for test in models_tested:
                # Identifying models that are going to be loaded:
                [rawfile,dyrfile] = add_models_openipsl.initTest(item,pathname)
                # ----- Solving the power flow - Initialization of the case:
                # Initializing PSSE:
                psspy.psseinit(nbuses)
                # Loading .raw file:
                psspy.read(0,rawfile)
                # Setting tolerance to 1e-6 (0.0001/100) and maximum iteration to 10 in NR-method:
                psspy.solution_parameters_4([_i,_i,_i,_i,10],[_f,_f,_f,_f,_f,0.00001,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f,_f])
                # Setting options in NR-method:
                psspy.fnsl([0,0,0,0,0,1,99,0])
                # ----- Converting loads and generators for dynamic simulation:
                # Converting loads (3-step process):
                psspy.conl(0,1,1,[0,0],[ 100.0,0.0,0.0, 100.0])
                psspy.conl(0,1,2,[0,0],[ 100.0,0.0,0.0, 100.0])
                psspy.conl(0,1,3,[0,0],[ 100.0,0.0,0.0, 100.0])
                # Converting generators:
                psspy.cong()
                # Ordering and factorization for dynamic simulations:
                psspy.ordr(0)
                psspy.fact()
                psspy.tysl(0)
                # ----- Housekeeping for dynamic simulation:
                # Loading the .dyr file:
                psspy.dyre_new([1,1,1,1],dyrfile,"","","")
                # Naming the outfile:
                outfile = add_models_openipsl.includeModel(test,pathname)
                # Definin output channels:
                if item == 'Machines':
                        psspy.chsb(0,1,[-1,-1,-1,1,1,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,2,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,5,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,6,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,7,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,13,0])
                elif item == 'Exciters':
                        psspy.chsb(0,1,[-1,-1,-1,1,1,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,2,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,5,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,6,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,7,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,13,0])
                elif item == 'TurbineGovernors':
                        psspy.chsb(0,1,[-1,-1,-1,1,1,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,2,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,5,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,6,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,7,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,13,0])
                elif item == 'PowerSystemStabilizers':
                        psspy.chsb(0,1,[-1,-1,-1,1,1,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,2,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,5,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,6,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,7,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,10,0])
                        psspy.chsb(0,1,[-1,-1,-1,1,13,0])
                # Preparing for dynamic simulation:
                psspy.strt_2([0,0],outfile)
                # Setting time step equal to 5ms (tolerance of 1e-6):
                psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,0.000001, 0.001,_f,_f,_f,_f,_f])
                # Running dynamic simulation from 0 to 2:
                psspy.run(0,2.0,10,1,0)
                # Stopping simulation and including fault at bus 22:
                psspy.dist_bus_fault(22,1,100.0,[0.0,-0.2E+10])
                # Setting time step equal to 1ms during the fault (tolerance of 1e-6):
                psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,0.000001, 0.001,_f,_f,_f,_f,_f])
                # Running dynamic simulation from 2 to 2.15:
                psspy.run(0,2.15,10,1,0)
                # Stopping simulation and clearing fault:
                psspy.dist_clear_fault(1)
                # Running dynamic simulation from 2.15 to 5:
                psspy.run(0,5.0,10,1,0)
                # Setting time step back to 5ms (tolerance of 1e-6):
                psspy.dynamics_solution_param_2([_i,_i,_i,_i,_i,_i,_i,_i],[_f,0.000001, 0.001,_f,_f,_f,_f,_f])
                # Running dynamic simulation from 5 to 10:
                psspy.run(0,10.0,10,1,0)
                # Preparing to export the outfile:
                result = dyntools.CHNF(outfile) 
                # Getting the csv file:
                resultcsv = add_models_openipsl.outputcsv(result,test,item,pathname)
                # Deleting the .out file:
                resultfilename = os.path.join(pathname,test+".out")
                os.remove(resultfilename)
                # Deleting the .csv file without editions:
                folderpath = os.path.join(pathname,item)
                csvufile = os.path.join(folderpath,test+"u.csv")
                os.remove(csvufile)
                # Closing PSSE (guarantee that every simulation start from scratch)
                psspy.pssehalt_2()
                
                


