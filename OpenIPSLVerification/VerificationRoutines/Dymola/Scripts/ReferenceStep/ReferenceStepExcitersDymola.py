#!/usr/bin/env python
# coding: utf-8

# In[20]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil
import git


# In[21]:


#By default, the code runs in manuelnvro Dell using Dymola 2020. To change the computer change the following folders.
#OpenIPSL Location
OpenIPSL = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/"
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/package.mo"
Dymola = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/"
#Working Directory
RSExcitersWorkingDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/WorkingDir/ReferenceStep/Exciters/"
#Load Variation Folder Locations
LoadVariationSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/Load_variation.mo"
LoadVariationDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/"
LoadVariationDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Loads/PSSE/Load_variation.mo"
# Power Fault Folder Locations
PowerFaultSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/LoadVariation/AuxiliaryModels/PwFault.mo"
PowerFaultDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/"
PowerFaultDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Events/PwFault.mo"
#Reference Step Folder Locations
ReferenceStepSource = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/Scripts/ReferenceStep/AuxiliaryModels/BaseExciter.mo"
ReferenceStepDestinationPath = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Controls/PSSE/ES/BaseClasses/" 
ReferenceStepDestination = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/Dymola/OpenIPSL/OpenIPSL/Electrical/Controls/PSSE/ES/BaseClasses/BaseExciter.mo"


# In[22]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")


# In[23]:


#Deleting old OpenIPSL library version
shutil.rmtree(f""+OpenIPSL+"")
#Pulling latest OpenIPSL library version
print('Pulling latest OpenIPSL library version...\n')
git.Git(""+Dymola+"").clone(""+GitHubOpenIPSL+"")
#Setting OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 
print("Reference Step Dymola Exciters Simulation Start...\n")


# In[24]:


#Adding Auxiliary Files
try:
    print('Deleting Auxiliary Models')
    os.chdir(LoadVariationDestinationPath)
    os.remove("Load_variation.mo")
    os.chdir(PowerFaultDestinationPath)
    os.remove("PwFault.mo")
    os.chdir(ReferenceStepDestinationPath)
    os.remove("BaseExciter.mo")
except: 
    print('Error Deleting Auxiliar Models...')
try:
    print('Adding Auxiliary models...')
    os.system('cp '+PowerFaultSource+' '+PowerFaultDestination)
    os.system('cp '+LoadVariationSource+' '+LoadVariationDestination)
    os.system('cp '+ReferenceStepSource+' '+ReferenceStepDestination)
except:
    print('Error Adding Auxiliary Models...\n')
#Setting OpenIPSL library
dymola.openModel(""+OpenIPSLPackage+"") 


# In[6]:


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
                        "iEEET3.EFD", "iEEET5.EFD", "rEXSYS.EFD", "sCRX.EFD", "sEXS.EFD", "sT6B.EFD"],
           'dV' : ["aC7B.dV","aC8B.dV", "eSAC1A.dV", "eSAC2A.dV", "eSAC6A.dV", "eSDC1A.dV", "eSST1A.dV", "eSST3A.dV", "eSST4B.dV", 
                        "eXAC1.dV", "eXAC2.dV", "eXAC3.dV", "eXDC2.dV", "eXPIC1.dV", "eXST1.dV", "eXST3.dV", "iEEET1.dV", "iEEET2.dV", 
                        "iEEET3.dV", "iEEET5.dV", "rEXSYS.dV", "sCRX.dV", "sEXS.dV", "sT6B.dV"],
           't' : ["aC7B.t","aC8B.t", "eSAC1A.t", "eSAC2A.t", "eSAC6A.t", "eSDC1A.t", "eSST1A.t", "eSST3A.t", "eSST4B.t", 
                        "eXAC1.t", "eXAC2.t", "eXAC3.t", "eXDC2.t", "eXPIC1.t", "eXST1.t", "eXST3.t", "iEEET1.t", "iEEET2.t", 
                        "iEEET3.t", "iEEET5.t", "rEXSYS.t", "sCRX.t", "sEXS.t", "sT6B.t"]}


# In[8]:


#Delete old results
shutil.rmtree(''+RSExcitersWorkingDir+'')
#Create Exciters folder
os.makedirs(''+RSExcitersWorkingDir+'')
os.chdir(f""+RSExcitersWorkingDir+"")
for exciterNumber, exciterName in enumerate(exciters['names']):
    os.makedirs(f'{exciterName}')


# In[9]:


#For loop that will iterate between exciters, simulate, and create the .csv file
for exciterNumber, exciterName in enumerate(exciters['names']):
    try:
        print(f"Reference Step {exciterName} Simulation Start...")
        dymola.cd(""+ RSExcitersWorkingDir + exciterName)
        resultPath = "/"+RSExcitersWorkingDir+f"{exciterName}/" + exciterName 
        dymola.translateModel(exciters['path'][exciterNumber])
        #Get rid of the Fault
        dymola.ExecuteCommand("pwFault.t1 = 20;")
        dymola.ExecuteCommand("pwFault.t2 = 20.15;")
        #Adjust Load Variation
        dymola.ExecuteCommand("constantLoad.d_P = 0;")
        dymola.ExecuteCommand("constantLoad.t1 = 0;")
        dymola.ExecuteCommand("constantLoad.d_t = 0;")
        #Adjust Reference Step       
        dymola.ExecuteCommand(""+exciters['dV'][exciterNumber]+f" = 0.02;")
        dymola.ExecuteCommand(""+exciters['t'][exciterNumber]+f" = 0.5;")
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
                os.chdir(RSExcitersWorkingDir+f"{exciterName}/")
                os.remove("dsin.txt")
            except:
                pass
        else:
            print(f"{exciterName} Simulation OK...")
            print(".csv Writing Start...") 
            sim = SimRes(""+RSExcitersWorkingDir+f"{exciterName}/{exciterName}.mat")
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
                os.chdir(f""+RSExcitersWorkingDir+"")
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
                os.chdir(f""+RSExcitersWorkingDir+"")
                df_variables.to_csv(f'{exciterName}.csv', index = False)          
                print(f"{exciterName} Write OK...")
        try:
            shutil.rmtree(RSExcitersWorkingDir+f"{exciterName}/")
            print("Delete OK...\n")
        except:
            pass
    except DymolaException as ex:
        print("Error: " + str(ex))
print('Reference Step Dymola Exciter Examples Simulation OK...')


# In[ ]:


try:
    print("Closing Dymola...")
    dymola.close()
    print("Dymola Close OK...")
except:
    print("Dymola closing error. Below is the log:")
    log = dymola.getLastErrorLog()
    print(log)
