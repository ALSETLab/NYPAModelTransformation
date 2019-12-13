#!/usr/bin/env python
# coding: utf-8

# In[29]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os


# In[26]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[30]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/PythonTesting/OpenIPSL-master/OpenIPSL/package.mo") 
print("Dymola Exciters Simulation Start...\n")


# In[33]:


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
           'speed' : ['gENROU.SPEED', 'gENROE.SPEED']}


# In[35]:


#For loop that will iterate between exciters, simulate, and create the .csv file
for exciterNumber, exciterName in enumerate(exciters['names']):
    try:
        print(f"{exciterName} Simulation Start...")
        dymola.cd("/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/Exciters/" + exciterName)
        resultPath = f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/Exciters/{exciterName}/" + exciterName 
        result = dymola.simulateModel(exciters['path'][exciterNumber], 
                                  stopTime=10.0,
                                  numberOfIntervals = 5000,
                                  resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
        else:
            print(f"{exciterName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/Exciters/{exciterName}/{exciterName}.mat")
            try:
                print('Verifying if it is a GENROU model...')
                #Selecting Variables
                variables = ['Time', exciters['delta'][0], exciters['pelec'][0], exciters['speed'][0], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    df_variables[var] = np.array(sim[var].values())
                print(f"{exciterName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/Exciters/{exciterName}/")
                df_variables.to_csv(f'{exciterName}.csv', index = False)          
                print(f"{exciterName} Write OK...\n") 
            except:
                print('Not a GENROU model...')
                print('Verifying if it is a GENROE model...')
                #Selecting Variables
                variables = ['Time', exciters['delta'][1], exciters['pelec'][1], exciters['speed'][1], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    df_variables[var] = np.array(sim[var].values())
                print(f"{exciterName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/Exciters/{exciterName}/")
                df_variables.to_csv(f'{exciterName}.csv', index = False)          
                print(f"{exciterName} Write OK...\n") 
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Exciter Examples Simulation OK...')


# In[ ]:




