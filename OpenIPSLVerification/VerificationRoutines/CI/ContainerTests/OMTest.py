#!/usr/bin/env python
# coding: utf-8

from modelicares import SimRes
import pandas as pd
import numpy as np
import os
import shutil

# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd()
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

#OpenIPSL Location
OpenIPSL = RepoDir + "/OpenIPSL/"
OpenIPSLPackage = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
#Working Directory
FExcitersWorkingDir = RepoDir + "/OpenModelica/WorkingDir/Fault/Exciters/"

libraryPath = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
libraryName = "OpenIPSL"

from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()
one = omc.sendExpression("getVersion()")
two = omc.sendExpression("cd()")
three = omc.sendExpression("loadModel(Modelica)")
four = omc.sendExpression("loadFile(getInstallationDirectoryPath() + \"/share/doc/omc/testmodels/BouncingBall.mo\")")
five = omc.sendExpression("instantiateModel(BouncingBall)")

print(one)
print(two)
print(three)
print(four)
print(five)

## Stage 2
six = omc.sendExpression("getClassNames()")
seven = omc.sendExpression("isPartial(BouncingBall)")
eight = omc.sendExpression("isPackage(BouncingBall)")
nine = omc.sendExpression("isModel(BouncingBall)")
ten = omc.sendExpression("checkModel(BouncingBall)")
eleven =  omc.sendExpression("getClassRestriction(BouncingBall)")
twelve =  omc.sendExpression("getClassInformation(BouncingBall)")
thirteen =  omc.sendExpression("getConnectionCount(BouncingBall)")
fourteen = omc.sendExpression("getInheritanceCount(BouncingBall)")
fifteen =  omc.sendExpression("getComponentModifierValue(BouncingBall,e)")
sixteen =  omc.sendExpression("checkSettings()")

print("======================")
print(six)
print(seven)
print(eight)
print(nine)
print(ten)
print(eleven)
print(twelve)
print(thirteen)
print(fourteen)
print(fifteen)
print(sixteen)


# ## Stage 3

seventeen = omc.sendExpression("simulate(BouncingBall, stopTime=3.0)")
eighteen = omc.sendExpression("val(h , 2.0)")

print("===================")
print(seventeen)
print(eighteen)