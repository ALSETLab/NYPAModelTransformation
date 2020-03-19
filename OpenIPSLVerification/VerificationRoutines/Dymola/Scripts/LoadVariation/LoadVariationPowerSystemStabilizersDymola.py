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


# In[2]:


#By default, the code runs in manuelnvro Dell using Dymola 2020. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo"
Dymola = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/"
#Working Directory
LVPowerSystemStabilizerWorkingDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/LoadVariation/PowerSystemStabilizers/"
#Load Variation Folder Locations
LoadVariationSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"


# In[3]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")


# In[4]:


#Deleting old OpenIPSL library version
shutil.rmtree(f""+OpenIPSL+"")
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+Dymola+"").clone(""+GitHubOpenIPSL+"")


# In[5]:


#Adding Auxiliary Files
try:
    print('Deleting Auxiliary Models')
    os.chdir(LoadVariationDestinationPath)
    os.remove("Load_variation.mo")
    os.chdir(PowerFaultDestinationPath)
    os.remove("PwFault.mo")
except: 
    print('Error Deleting Auxiliar Models...')
try:
    print('Adding Auxiliary models...')
    os.system('cp '+PowerFaultSource+' '+PowerFaultDestination)
    os.system('cp '+LoadVariationSource+' '+LoadVariationDestination)
except:
    print('Error Adding Auxiliary Models...\n')
#Setting OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 
print("Load Variation Dymola Power System Stabilizers Simulation Start...\n")


# In[6]:


#Creation of matrix with names, paths and variables
psss = { 'names' : ["PSS2A","PSS2B"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A","OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B"],
            'delta' : ['gENROE.delta'],
           'pelec' : ['gENROE.PELEC'],
            'pmech' : ['gENROE.PMECH'],
            'speed': ['gENROE.SPEED'],
           'vothsg' : ["pSS2A.VOTHSG","pSS2B.VOTHSG"]}


# In[7]:


#Delete old results
shutil.rmtree(''+LVPowerSystemStabilizerWorkingDir+'')
#Create Exciters folder
os.makedirs(''+LVPowerSystemStabilizerWorkingDir+'')
os.chdir(f""+LVPowerSystemStabilizerWorkingDir+"")
for pssNumber, pssName in enumerate(psss['names']):
    os.makedirs(f'{pssName}')


# In[8]:


#For loop that will iterate between power system stabilizers, simulate, and create the .csv fileurb
for pssNumber, pssName in enumerate(psss['names']):
    try:
        print(f"LoadVariation {pssName} Simulation Start...")
        print("Editing SMIB Partial Model for Load Variation Testing...")
        resultPath = "/"+LVPowerSystemStabilizerWorkingDir+f"/{pssName}/" + pssName
        dymola.translateModel(psss['path'][pssNumber])
        #Get rid of the Fault
        dymola.ExecuteCommand("pwFault.t1 = 20;")
        dymola.ExecuteCommand("pwFault.t2 = 20.15;")
        #Adjust Load Variation
        dymola.ExecuteCommand("constantLoad.d_P = 1;")
        dymola.ExecuteCommand("constantLoad.t1 = 0.5;")
        dymola.ExecuteCommand("constantLoad.d_t = 20;")
        result = dymola.simulateModel(psss['path'][pssNumber], 
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
                os.chdir(LVPowerSystemStabilizerWorkingDir+f"{pssName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{pssName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(""+LVPowerSystemStabilizerWorkingDir+f"{pssName}/{pssName}.mat")
            try:
                print('Verifying if it is a GENROU model...')
                #Selecting Variables
                variables = ['Time', psss['delta'][0], psss['pelec'][0], psss['pmech'][0], psss['speed'][0], psss['vothsg'][pssNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
                df_variables = pd.DataFrame([], columns = variables)
                for var in variables:
                    df_variables.drop(var, axis = 1, inplace = True)
                    #Change from Radians to Degrees
                    if var == psss['delta'][0]:
                        df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                    else:
                        #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                        try:
                            df_variables[var] = np.array(sim[var].values())
                        except:
                            first = np.array(sim[var].values())
                            df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
                print(f"{pssName} Variables OK...")
                #Changing current directory
                os.chdir(f""+LVPowerSystemStabilizerWorkingDir+"")
                df_variables.to_csv(f'{pssName}.csv', index = False)          
                print(f"{pssName} Write OK...")
            except:
                print("Check generator model of the example model...")
        try:
            shutil.rmtree(LVPowerSystemStabilizerWorkingDir+f"{pssName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Fault Power System Stabilizers Simulation OK...')


# In[ ]:


try:
    print("Closing Dymola...")
    dymola.close()
    print("Dymola Close OK...")
except:
    print("Dymola closing error. Below is the log:")
    log = dymola.getLastErrorLog()
    print(log)

