#!/usr/bin/env python
# coding: utf-8

# In[56]:


from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
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
OpenIPSL = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/package.mo"
OpenModelica = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/"
#Working Directory
FWindTurbinesWorkingDir = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/WorkingDir/Fault/WindTurbines/"
#Load Variation Folder Locations
LoadVariationSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"


# In[58]:


print(omc.sendExpression("getVersion()"))



# In[59]:


#Deleting old OpenIPSL library version
try:
    shutil.rmtree(f""+OpenIPSL+"")
except:
    pass
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+OpenModelica+"").clone(""+GitHubOpenIPSL+"")
print("Fault Open Modelica Wind Turbines Simulation Start...\n")


# In[60]:


#Creation of matrix with names, paths and variables
wturbines = { 'names' : ["WT4G1","WT4E1"],
            'path' : ["OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1","OpenIPSL.Examples.Wind.PSSE.WT4G.WT4E1"],
            'p' : ['wT4G1.P', 'wT4E1.P'],
           'q' : ['wT4G1.Q', 'wT4E1.Q']}


# In[63]:


#Delete old results
shutil.rmtree(''+FWindTurbinesWorkingDir+'')
#Create folder
os.makedirs(''+FWindTurbinesWorkingDir+'')
os.chdir(f""+FWindTurbinesWorkingDir+"")
for wturbineNumber, wturbineName in enumerate(wturbines['names']):
    os.makedirs(f'{wturbineName}')


# In[64]:


#For loop that will iterate between machines, simulate, and create the .csv file
for wturbineNumber, wturbineName in enumerate(wturbines['names']):
    print(f"Fault {wturbineName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{FWindTurbinesWorkingDir}" + wturbineName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        omc.sendExpression(f"simulate(OpenIPSL.Examples.Wind.PSSE.WT4G.{wturbineName}, stopTime=10.0,method=\"dassl\",numberOfIntervals=500,tolerance=1e-04)")
        sim = SimRes(""+FWindTurbinesWorkingDir+f"{wturbineName}/OpenIPSL.Examples.Wind.PSSE.WT4G.{wturbineName}_res.mat")
        print(f"{wturbineName} Simulation Finished...")
    except:
        print(f"{wturbineName} simulation error or model not found...\n")
        failMsg = omc.sendExpression("getErrorString()")
        print(failMsg)
    try:
        print(f"{wturbineName} Simulation OK...")
        print(".csv Writing Start...")    
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
    except:
        print('Variable Error...\n')
    try:
        #shutil.rmtree(""+FWindTurbinesWorkingDir+f"{wturbineName}/")
        print("Delete OK...\n")
    except:
        print('Delete Error...\n')        
print('Fault Wind Turbines Examples Open Modelica Simulation OK...')


# In[ ]:


try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

