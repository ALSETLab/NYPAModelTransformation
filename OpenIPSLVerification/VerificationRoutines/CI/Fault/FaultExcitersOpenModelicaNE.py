#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

#By default, the code runs in manuelnvro Dell using Dymola 2020. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/package.mo"
OpenModelica = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/"
#Working Directory
FExcitersWorkingDir = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/WorkingDir/Fault/Exciters/"
#Load Variation Folder Locations
LoadVariationSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"

print(omc.sendExpression("getVersion()"))

#Creation of matrix with names, paths and variables
exciters = { 'names' : ["AC7B","AC8B", "ESAC1A", "ESAC2A", "ESAC6A", "ESDC1A", "ESST1A", "ESST3A", "ESST4B", 
                        "EXAC1", "EXAC2", "EXAC3", "EXDC2", "EXPIC1", "EXST1", "EXST3", "IEEET1", "IEEET2", 
                        "IEEET3", "IEEET5", "REXSYS", "SCRX", "SEXS", "ST6B"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.ES.AC7B", "OpenIPSL.Examples.Controls.PSSE.ES.AC8B",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A", "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESAC6A", "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A", "OpenIPSL.Examples.Controls.PSSE.ES.ESST3A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B", "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2", "OpenIPSL.Examples.Controls.PSSE.ES.EXAC3",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXDC2", "OpenIPSL.Examples.Controls.PSSE.ES.EXPIC1",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXST1", "OpenIPSL.Examples.Controls.PSSE.ES.EXST3",
                      "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1", "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2",
                      "OpenIPSL.Examples.Controls.PSSE.ES.IEEET3", "OpenIPSL.Examples.Controls.PSSE.ES.IEEET5",
                      "OpenIPSL.Examples.Controls.PSSE.ES.REXSYS", "OpenIPSL.Examples.Controls.PSSE.ES.SCRX",
                      "OpenIPSL.Examples.Controls.PSSE.ES.SEXS", "OpenIPSL.Examples.Controls.PSSE.ES.ST6B"],
            'delta' : ['gENROU.delta', 'gENROE.delta' ],
           'pelec' : ['gENROU.PELEC', 'gENROE.PELEC'],
            'pmech' : ['gENROU.PMECH', 'gENROE.PMECH'],
           'speed' : ['gENROU.SPEED', 'gENROE.SPEED'],
           'efd': ["aC7B.EFD","aC8B.EFD", "eSAC1A.EFD", "eSAC2A.EFD", "eSAC6A.EFD", "eSDC1A.EFD", "eSST1A.EFD", "eSST3A.EFD", "eSST4B.EFD", 
                        "eXAC1.EFD", "eXAC2.EFD", "eXAC3.EFD", "eXDC2.EFD", "eXPIC1.EFD", "eXST1.EFD", "eXST3.EFD", "iEEET1.EFD", "iEEET2.EFD", 
                        "iEEET3.EFD", "iEEET5.EFD", "rEXSYS.EFD", "sCRX.EFD", "sEXS.EFD", "sT6B.EFD"]}

#Delete old results
shutil.rmtree(''+FExcitersWorkingDir+'')
#Create Exciters folder
os.makedirs(''+FExcitersWorkingDir+'')
os.chdir(f""+FExcitersWorkingDir+"")
for exciterNumber, exciterName in enumerate(exciters['names']):
    os.makedirs(f'{exciterName}')

#For loop that will iterate between machines, simulate, and create the .csv file
for exciterNumber, exciterName in enumerate(exciters['names']):
    print(f"Fault {exciterName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{FExcitersWorkingDir}" + exciterName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
        sim = SimRes(""+FExcitersWorkingDir+f"{exciterName}/OpenIPSL.Examples.Controls.PSSE.ES.{exciterName}_res.mat")
        print(f"{exciterName} Simulation Finished...")
    except:
        print(f"{exciterName} simulation error or model not found...\n")
    try:
        #Selecting Variables
        print(".csv Writing Start...") 
        try:
            print('Verifying if it is a GENROU model...')
            #Selecting Variables
            variables = ['Time', exciters['delta'][0], exciters['pelec'][0], exciters['pmech'][0], exciters['speed'][0], exciters['efd'][exciterNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == exciters['delta'][0]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{exciterName} Variables OK...")
            #Changing current directory
            os.chdir(f""+FExcitersWorkingDir+"")
            df_variables.to_csv(f'{exciterName}.csv', index = False)          
            print(f"{exciterName} Write OK...")
        except:
            print('Not a GENROU model...')
            print('Verifying if it is a GENROE model...')
            #Selecting Variables
            variables = ['Time', exciters['delta'][1], exciters['pelec'][1], exciters['pmech'][1], exciters['speed'][1],exciters['efd'][exciterNumber] , 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == exciters['delta'][1]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{exciterName} Variables OK...")
            #Changing current directory
            os.chdir(f""+FExcitersWorkingDir+"")
            df_variables.to_csv(f'{exciterName}.csv', index = False)          
            print(f"{exciterName} Write OK...")
    except:
        print(f"{exciterName} variable error...\n")
    shutil.rmtree(""+FExcitersWorkingDir+f"{exciterName}/")
    print("Delete OK...\n")        
print('Fault Exciter Examples Open Modelica Simulation OK...')

try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

