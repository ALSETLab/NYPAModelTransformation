#!/usr/bin/env python
# coding: utf-8

# In[6]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil


# In[ ]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[7]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL-master/OpenIPSL/package.mo") 
print("Dymola Exciters Simulation Start...\n")


# In[8]:


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


# In[9]:


#Delete old results
shutil.rmtree('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/')
#Create Exciters folder
os.makedirs('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/')
os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/")
for exciterNumber, exciterName in enumerate(exciters['names']):
    os.makedirs(f'{exciterName}')


# In[11]:


#For loop that will iterate between exciters, simulate, and create the .csv file
for exciterNumber, exciterName in enumerate(exciters['names']):
    try:
        print(f"{exciterName} Simulation Start...")
        dymola.cd("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/" + exciterName)
        resultPath = f"//home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/{exciterName}/" + exciterName 
        result = dymola.simulateModel(exciters['path'][exciterNumber], 
                                stopTime=10.0,
                                method="Rkfix2",
                                tolerance=1e-06,
                                numberOfIntervals = 5000,
                                resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
            try:
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/{exciterName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{exciterName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/{exciterName}/{exciterName}.mat")
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
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/")
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
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/")
                df_variables.to_csv(f'{exciterName}.csv', index = False)          
                print(f"{exciterName} Write OK...")
        try:
            shutil.rmtree(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Exciters/{exciterName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Exciter Examples Simulation OK...')


# In[ ]:




