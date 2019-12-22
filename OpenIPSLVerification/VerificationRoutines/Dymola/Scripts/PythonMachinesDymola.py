#!/usr/bin/env python
# coding: utf-8

# In[23]:


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


# In[24]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL-master/OpenIPSL/package.mo") 
print("Dymola Machines Simulation Start...\n")


# In[25]:


#Creation of matrix with names, paths and variables
machines = { 'names' : ["GENROU","GENSAL", "GENCLS", "GENROE", "GENSAE", "CSVGN1"],
            'path' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Machines.PSSE.CSVGN1"],
            'delta' : ['gENROU.delta', 'gENSAL.delta', 'gENCLS.delta', 'gENROE.delta', 'gENSAE.delta', 'cSVGN1.delta'],
           'pelec' : ['gENROU.PELEC', 'gENSAL.PELEC', 'gENCLS.PELEC', 'gENROE.PELEC', 'gENSAE.PELEC', 'cSVGN1.PELEC'],
           'speed' : ['gENROU.SPEED', 'gENSAL.SPEED', 'gENCLS.SPEED', 'gENROE.SPEED', 'gENSAE.SPEED', 'cSVGN1.SPEED'],
           'pmech' : ['gENROU.PMECH', 'gENSAL.PMECH', 'gENCLS.PMECH', 'gENROE.PMECH', 'gENSAE.PMECH', 'cSVGN1.PMECH']}


# In[26]:


#Delete old results
shutil.rmtree('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/')
#Create Exciters folder
os.makedirs('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/')
os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines")
for machineNumber, machineName in enumerate(machines['names']):
    os.makedirs(f'{machineName}')


# In[27]:


#For loop that will iterate between machines, simulate, and create the .csv file
for machineNumber, machineName in enumerate(machines['names']):
    try:
        print(f"{machineName} Simulation Start...")
        dymola.cd("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/" + machineName)
        resultPath = f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/{machineName}/" + machineName
        result = dymola.simulateModel(machines['path'][machineNumber], 
                                stopTime=10.0,
                                method="Rkfix2",
                                tolerance=1e-06,
                                numberOfIntervals = 5000,
                                resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
        else:
            print(f"{machineName} Simulation OK...")
            print(".csv Writing Start...")
            #Selecting Result File
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/{machineName}/{machineName}.mat")
            #Selecting Variables
            variables = ['Time', machines['delta'][machineNumber], machines['pelec'][machineNumber], machines['pmech'][machineNumber], machines['speed'][machineNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == machines['delta'][machineNumber]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{machineName} Variables OK...")
            #Changing current directory
            os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/")
            df_variables.to_csv(f'{machineName}.csv', index = False)          
            print(f"{machineName} Write OK...")       
        try:
            shutil.rmtree(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Machines/{machineName}/")
            print("Delete OK...\n")
        except:
            pass          
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Machine Examples Simulation OK...')


# In[ ]:




