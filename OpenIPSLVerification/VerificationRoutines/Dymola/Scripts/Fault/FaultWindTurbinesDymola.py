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
OpenIPSL = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo"
Dymola = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/"
#Working Directory
FWindTurbinesWorkingDir = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/Fault/WindTurbines/"
#Load Variation Folder Locations
LoadVariationSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"



#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2019FD01-x86_64/bin64/dymola.sh")


# In[4]:


#Deleting old OpenIPSL library version
try:
    shutil.rmtree(f""+OpenIPSL+"")
except:
    pass
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+Dymola+"").clone(""+GitHubOpenIPSL+"")
#Setting OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 
print("Fault Dymola Wind Turbine Simulation Start...\n")


# In[5]:


#Creation of matrix with names, paths and variables
wturbines = { 'names' : ["WT4G1","WT4E1"],
            'path' : ["OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1","OpenIPSL.Examples.Wind.PSSE.WT4G.WT4E1"],
            'p' : ['wT4G1.P', 'wT4E1.P'],
           'q' : ['wT4G1.Q', 'wT4E1.Q']}


# In[6]:


#Delete old results
shutil.rmtree(''+FWindTurbinesWorkingDir+'')
#Create folder
os.makedirs(''+FWindTurbinesWorkingDir+'')
os.chdir(f""+FWindTurbinesWorkingDir+"")
for wturbineNumber, wturbineName in enumerate(wturbines['names']):
    os.makedirs(f'{wturbineName}')


# In[7]:


#For loop that will iterate between Wind Turbines, simulate, and create the .csv fileurb
for wturbineNumber, wturbineName in enumerate(wturbines['names']):
    try:
        print(f"Fault {wturbineName} Simulation Start...")
        dymola.cd(""+ FWindTurbinesWorkingDir + wturbineName)
        resultPath = "/"+FWindTurbinesWorkingDir+f"{wturbineName}/" + wturbineName
        result = dymola.simulateModel(wturbines['path'][wturbineNumber], 
                                    stopTime=10.0,
                                    method="dassl",
                                    tolerance=1e-4,
                                    numberOfIntervals = 500,
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
            print(f"{wturbineName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(""+FWindTurbinesWorkingDir+f"{wturbineName}/{wturbineName}.mat")
            if wturbineName == 'WT4E1':
                variables = ['Time', wturbines['p'][wturbineNumber], wturbines['q'][wturbineNumber], 'wT4G1.P', 'wT4G1.Q', 'GEN1.V', 'FAULT.V', 'GEN2.V']
            else:
                variables = ['Time', wturbines['p'][wturbineNumber], wturbines['q'][wturbineNumber], 'GEN1.V', 'FAULT.V', 'GEN2.V']
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                df_variables[var] = np.array(sim[var].values())
            print(f"{wturbineName} Variables OK...")
            #Changing current directory
            os.chdir(f""+FWindTurbinesWorkingDir+"")
            df_variables.to_csv(f'{wturbineName}.csv', index = False)          
            print(f"{wturbineName} Write OK...")
        try:
            shutil.rmtree(""+FWindTurbinesWorkingDir+f"{wturbineName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Fault Wind Turbines Simulation OK...')


# In[ ]:




