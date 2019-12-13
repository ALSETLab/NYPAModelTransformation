#!/usr/bin/env python
# coding: utf-8

# In[2]:


import platform
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
from modelicares import SimRes
import pandas as pd
import numpy as np
import os


# In[3]:


#This is intended to be used in the manuelnvro Dell using Dymola 2020.


# In[4]:


#Setting Dymola Interface
dymola = DymolaInterface("/opt/dymola-2020-x86_64/bin64/dymola.sh")
#Setting OpenIPSL library
dymola.openModel("/home/manuelnvro/dev/Gitted/PythonTesting/OpenIPSL-master/OpenIPSL/package.mo") 
print("Dymola Simulation Start...")


# In[5]:


try:
    #Set WorkingDir
    dymola.cd("/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola")
    resultPath = "/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/EXAC1"
    #Dymola Simulation
    result = dymola.simulateModel("OpenIPSL.Examples.Controls.PSSE.ES.EXAC1", 
                                  numberOfIntervals = 5000,
                                 resultFile = resultPath)
    if not result:
        print("Simulation failed. Below is the translation log.")
        log = dymola.getLastErrorLog()
        print(log)
        exit(1)       
    print("Simulation OK")
    #Close Dymola
    dymola.close()
    #Selecting result file
    sim = SimRes("/home/manuelnvro/dev/Gitted/PythonTesting/WorkingDir/Dymola/EXAC1.mat")
    #Selecting Variables
    variables = ['Time', 'gENROE.delta','gENROE.PELEC', 'eXAC1_1.EFD','gENROE.SPEED', 'GEN1.V', 'LOAD.V', 'GEN2.V', 'FAULT.V' ]
    df_variables = pd.DataFrame([], columns = variables)
    for var in variables:
        df_variables.drop(var, axis = 1, inplace = True)
        df_variables[var] = np.array(sim[var].values())
    print("Vars OK")
    #Changing current directory
    os.chdir("/home/manuelnvro/dev/Gitted/PythonTesting/ResultData/")
    #Creating .csv house
    df_variables.to_csv('dataDymola.csv', index = False)
    print("Write OK")
except DymolaException as ex:
    print(("Error: " + str(ex)))


# In[ ]:




