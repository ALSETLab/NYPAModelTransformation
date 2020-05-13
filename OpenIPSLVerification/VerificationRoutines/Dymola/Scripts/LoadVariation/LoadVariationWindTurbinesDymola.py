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
import git


# In[ ]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020


# In[2]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2019FD01-x86_64/bin64/dymola.sh")


# In[3]:


#Deleting old OpenIPSL library version
shutil.rmtree(f"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/")
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/").clone("https://github.com/marcelofcastro/OpenIPSL.git")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo") 
print("Dymola Fault Wind Turbines Simulation Start...\n")


# In[4]:


#Creation of matrix with names, paths and variables
wturbines = { 'names' : ["WT4G1","WT4E1"],
            'path' : ["OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1","OpenIPSL.Examples.Wind.PSSE.WT4G.WT4E1"],
            'p' : ['wT4G1.P', 'wT4E1.P'],
           'q' : ['wT4G1.Q', 'wT4E1.Q']}


# In[5]:


#Delete old results
shutil.rmtree('/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola///PowerSystemStabilizers/')
#Create Wind Turbine folder
os.makedirs('/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/')
os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/")
for pssNumber, pssName in enumerate(psss['names']):
    os.makedirs(f'{pssName}')


# In[6]:


#For loop that will iterate between Wind Turbines, simulate, and create the .csv fileurb
for pssNumber, pssName in enumerate(psss['names']):
    try:
        print(f"{pssName} Simulation Start...")
        dymola.cd("/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/" + pssName)
        resultPath = f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/" + pssName 
        result = dymola.simulateModel(psss['path'][pssNumber], 
                                  stopTime=10.0,
                                  numberOfIntervals = 5000,
                                  resultFile = resultPath)
        if not result:
            print("Simulation failed or model was not found. Below is the translation log:\n")
            log = dymola.getLastErrorLog()
            print(log)
            try:
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{pssName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/{pssName}.mat")
            try:
                print('Verifying if it is a GENROU model...')
                #Selecting Variables
                if wturbineName == 'WT4E1':
                    variables = ['Time', wturbines['p'][wturbineNumber], wturbines['q'][wturbineNumber], 'wT4G1.P', 'wT4G1.Q', 'GEN1.V', 'FAULT.V', 'GEN2.V']
                else:
                    variables = ['Time', wturbines['p'][wturbineNumber], wturbines['q'][wturbineNumber], 'GEN1.V', 'FAULT.V', 'GEN2.V']
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    df_variables[var] = np.array(sim[var].values())
                print(f"{pssName} Variables OK...")
                #Changing current directory
                os.chdir(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/")
                df_variables.to_csv(f'{pssName}.csv', index = False)          
                print(f"{pssName} Write OK...")
            except:
                print("Check generator model of the example model...")
        try:
            shutil.rmtree(f"/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/PowerSystemStabilizers/{pssName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Turbine Wind Turbines Simulation OK...')


# In[ ]:




