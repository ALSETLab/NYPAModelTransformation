#!/usr/bin/env python
# coding: utf-8

# In[1]:


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
LVTurbineGovernorsWorkingDir = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/WorkingDir/LoadVariation/TurbineGovernors/"
#Load Variation Folder Locations
LoadVariationSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"
# SMIB Partial Folder Location
SMIBPartialSource = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/AuxiliaryModels/SMIBpartial.mo"
SMIBPartialDestinationPath = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/"
SMIBPartialDestination = RepoDir + "/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/SMIBpartial.mo"

# In[3]:


print(omc.sendExpression("getVersion()"))


# In[4]:


#Deleting old OpenIPSL library version
try:
    shutil.rmtree(f""+OpenIPSL+"")
except:
    pass
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+OpenModelica+"").clone(""+GitHubOpenIPSL+"")
print("Fault Open Modelica Turbine Governors Simulation Start...\n")


# In[5]:


#Adding Auxiliary Files
try:
    print('Deleting Auxiliary Models')
    os.chdir(SMIBPartialDestinationPath)
    os.remove("SMIBpartial.mo")
except: 
    print('Error Deleting Auxiliar Models...')
try:
    print('Adding Auxiliary models...')
    os.system('cp '+SMIBPartialSource+' '+SMIBPartialDestination)
except:
    print('Error Adding Auxiliary Models...\n') 
print("Load Variation Open Modelica Turbine Governors Simulation Start...\n")


# In[6]:


#Creation of matrix with names, paths and variables
tgovernors = { 'names' : ["BBGOV1","GAST", "GAST2A", "GGOV1", "HYGOV", "IEEEG1", "IEESGO", "TGOV1", "WEHGOV", 
                            "WESGOV", "WSHYDD", "WSHYGP"],
            'path' : ["OpenIPSL.Examples.Controls.PSSE.TG.BBGOV1","OpenIPSL.Examples.Controls.PSSE.TG.GAST",
                      "OpenIPSL.Examples.Controls.PSSE.TG.GAST2A", "OpenIPSL.Examples.Controls.PSSE.TG.GGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.HYGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.IEEEG1", "OpenIPSL.Examples.Controls.PSSE.TG.IEESGO",
                      "OpenIPSL.Examples.Controls.PSSE.TG.TGOV1", "OpenIPSL.Examples.Controls.PSSE.TG.WEHGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WESGOV", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYDD", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP", "OpenIPSL.Examples.Controls.PSSE.TG.WSHYGP"],
            'delta' : ['gENROU.delta', 'gENROE.delta', 'gENSAL.delta' ],
           'pelec' : ['gENROU.PELEC', 'gENROE.PELEC', 'gENSAL.PELEC'],
            'pmech' : ['gENROU.PMECH', 'gENROE.PMECH', 'gENSAL.PMECH'],
            'speed': ['gENROU.SPEED', 'gENROE.SPEED', 'gENSAL.SPEED'],
           'pmechgov' : ["bBGOV1.PMECH","gAST.PMECH", "gAST2A.PMECH", "gGOV1.PMECH", "hYGOV.PMECH", "iEEEG1.PMECH_HP", 
                       "iEESGO.PMECH", "tGOV1.PMECH", "wEHGOV.PMECH", "wESGOV.PMECH", "wSHYDD.PMECH", 
                      "wSHYGP.PMECH"]}


# In[7]:


#Delete old results
shutil.rmtree(''+LVTurbineGovernorsWorkingDir+'')
#Create Exciters folder
os.makedirs(''+LVTurbineGovernorsWorkingDir+'')
os.chdir(f""+LVTurbineGovernorsWorkingDir+"")
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    os.makedirs(f'{tgovernorName}')


# In[8]:


#For loop that will iterate between machines, simulate, and create the .csv file
for tgovernorNumber, tgovernorName in enumerate(tgovernors['names']):
    print(f"Load Variation {tgovernorName} Simulation Start...")
    try:
        omc.sendExpression(f"cd(\"{LVTurbineGovernorsWorkingDir}" + tgovernorName +"\")")
        omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
        omc.sendExpression("instantiateModel(OpenIPSL)")
        omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.TG.{tgovernorName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
        sim = SimRes(""+LVTurbineGovernorsWorkingDir+f"{tgovernorName}/OpenIPSL.Examples.Controls.PSSE.TG.{tgovernorName}_res.mat")
        print(f"{tgovernorName} Simulation Finished...")
    except:
        print(f"{tgovernorName} simulation error or model not found...")
    try:
        #Selecting Variables
        print(".csv Writing Start...") 
        try:
            print('Verifying if it is a GENROU model...')
            #Selecting Variables
            variables = ['Time', tgovernors['delta'][0], tgovernors['pelec'][0], tgovernors['pmech'][0], tgovernors['speed'][0], tgovernors['pmechgov'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == tgovernors['delta'][0]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{tgovernorName} Variables OK...")
            #Changing current directory
            os.chdir(f""+LVTurbineGovernorsWorkingDir+"")
            df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
            print(f"{tgovernorName} Write OK...")
        except:
            print('Not a GENROU model...')
        try:    
            print('Verifying if it is a GENROE model...')
            #Selecting Variables
            variables = ['Time', tgovernors['delta'][1], tgovernors['pelec'][1], tgovernors['pmech'][1], tgovernors['speed'][1], tgovernors['pmechgov'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == tgovernors['delta'][1]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{tgovernorName} Variables OK...")
            #Changing current directory
            os.chdir(f""+LVTurbineGovernorsWorkingDir+"")
            df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
            print(f"{tgovernorName} Write OK...")
        except:
            print('Not a GENROE model...')
        try:
            print('Verifying if it is a GENSAL model...')
            #Selecting Variables
            variables = ['Time', tgovernors['delta'][2], tgovernors['pelec'][2], tgovernors['pmech'][2], tgovernors['speed'][2], tgovernors['pmechgov'][tgovernorNumber], 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
            df_variables = pd.DataFrame([], columns = variables)
            for var in variables:
                df_variables.drop(var, axis = 1, inplace = True)
                #Change from Radians to Degrees
                if var == tgovernors['delta'][2]:
                    df_variables[var] = np.array(sim[var].values()*(180/np.pi))    
                else:
                    #check if a variable does not change during the simulation and then and make a ones array and multiply by the value
                    try:
                        df_variables[var] = np.array(sim[var].values())
                    except:
                        first = np.array(sim[var].values())
                        df_variables[var] = first[0] * np.ones(df_variables['Time'].size)
            print(f"{tgovernorName} Variables OK...")
            #Changing current directory
            os.chdir(f""+LVTurbineGovernorsWorkingDir+"")
            df_variables.to_csv(f'{tgovernorName}.csv', index = False)          
            print(f"{tgovernorName} Write OK...")
        except:
             print('Not a GENSAL model...')
    except:
        print(f"{tgovernorName} variable error...\n")
    shutil.rmtree(""+LVTurbineGovernorsWorkingDir+f"{tgovernorName}/")
    print("Delete OK...\n")        
print('Load Variation Turbine Governor Examples Open Modelica Simulation OK...')


# In[9]:


try:
    print("Closing Open Modelica...")
    omc.sendExpression("quit()")
    print("OpenModelica Close OK...")
except:
    print("Open Modelica closing error...")

