#!/usr/bin/env python
# coding: utf-8

# In[1]:


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


# In[2]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/OpenIPSL-master/OpenIPSL/package.mo") 
print("Dymola Power System Stabilizers Simulation Start...\n")


# In[3]:


#Creation of matrix with names, paths and variables
psss = { 'names' : ["PSS2A","PSS2B"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A","OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B"],
            'delta' : ['gENROE.delta'],
           'pelec' : ['gENROE.PELEC'],
            'speed': ['gENROE.SPEED'],
           'vothsg' : ["pSS2A.VOTHSG","pSS2B.VOTHSG"]}


# In[4]:


#Delete old results
shutil.rmtree('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/')
#Create Power System Stabilizers folder
os.makedirs('/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/')
os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/")
for pssNumber, pssName in enumerate(psss['names']):
    os.makedirs(f'{pssName}')


# In[5]:


#For loop that will iterate between power system stabilizers, simulate, and create the .csv fileurb
for pssNumber, pssName in enumerate(psss['names']):
    try:
        print(f"{pssName} Simulation Start...")
        dymola.cd("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/" + pssName)
        resultPath = f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/" + pssName 
        result = dymola.simulateModel(psss['path'][pssNumber], 
                                  stopTime=10.0,
                                  numberOfIntervals = 5000,
                                  resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
            try:
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{pssName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/{pssName}.mat")
            try:
                print('Verifying if it is a GENROU model...')
                #Selecting Variables
                variables = ['Time', psss['delta'][0], psss['pelec'][0], psss['speed'][0], psss['vothsg'][pssNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == psss['delta'][0]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        df_variables[var] = np.array(sim[var].values())
                print(f"{pssName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/")
                df_variables.to_csv(f'{pssName}.csv', index = False)          
                print(f"{pssName} Write OK...")
            except:
                print("Check generator model of the example model...")
        try:
            shutil.rmtree(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerficationRoutines/Dymola/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Power System Stabilizers Simulation OK...')


# In[ ]:




