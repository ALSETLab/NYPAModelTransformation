#!/usr/bin/env python
# coding: utf-8

from OMPython import OMCSessionZMQ
from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd()
print(RepoDir) 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
print(RepoDir)

#OpenIPSL Location
OpenIPSL = RepoDir + "/OpenIPSL/"
OpenIPSLPackage = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
#Working Directory
FExcitersWorkingDir = RepoDir + "/WorkingDir/Fault/Exciters/"
print(FExcitersWorkingDir)


libraryPath = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
libraryName = "OpenIPSL"

omc = OMCSessionZMQ()
if omc.sendExpression('loadFile("%s")' % (libraryPath)):
	print("Load success: %s" % libraryName + "\n")
else:
	errorMessage = libraryName + " was not loaded! Check the library path:\n" + libraryPath
	print(errorMessage)
	raise Exception(errorMessage)

print('Test Start...')
exciterName = "ESAC1A"
print(f"Fault {exciterName} Simulation Start...")
one = omc.sendExpression(f"cd(\"{FExcitersWorkingDir}" + exciterName +"\")")
print(one)
two = omc.sendExpression(f"loadFile(\"{OpenIPSLPackage}\")")
print(two)
three = omc.sendExpression("instantiateModel(OpenIPSL)")
# print(three)
# five =omc.sendExpression(f"checkModel(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName})")
# print(five)
# six =omc.sendExpression(f"translate(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName})")
# print(six)
# seven =omc.sendExpression(f"buildModel(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName})")
# print(seven)
eight =omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
print(eight)
sim = SimRes(""+FExcitersWorkingDir+f"{exciterName}/OpenIPSL.Examples.Controls.PSSE.ES.{exciterName}_res.mat")
print(f"{exciterName} Simulation Finished...")
#try:
	#four = omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName})")
	#print(four)
#except:
#	print("error")

# try:
#   four = omc.sendExpression(f"simulate(OpenIPSL.Examples.Controls.PSSE.ES.{exciterName}, stopTime=10.0,method=\"rungekutta\",numberOfIntervals=5000,tolerance=1e-06)")
#   print(four)
# except:
#     print("Error...")
# try:
#   sim = SimRes(""+FExcitersWorkingDir+f"{exciterName}/OpenIPSL.Examples.Controls.PSSE.ES.{exciterName}_res.mat")
#   print(f"{exciterName} Simulation Finished...")
# except:
#   print("Error 2")