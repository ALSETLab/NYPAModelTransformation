#!/usr/bin/env python
# coding: utf-8

# Libraries Import
from OMPython import OMCSessionZMQ
import os
import sys
# import git
# import shutil

###################################################Folder/File Definitions############################################################### 
# get current directory and set it to the beginning of the repository 
RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))
#OpenIPSL Location
OpenIPSL = RepoDir
print(OpenIPSL)
#GitHub Location
GitHubOpenIPSL = "https://github.com/marcelofcastro/OpenIPSL.git"
OpenIPSLPackage = RepoDir + "/OpenIPSL/package.mo"
OpenModelica = RepoDir + "/OpenModelica/"

testList = {'exciters' : ["OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A", "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A","OpenIPSL.Examples.Controls.PSSE.ES.ESST1A",
                      "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B", "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1",
                      "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2", "OpenIPSL.Examples.Controls.PSSE.ES.EXST1",
                      "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1", "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2",
                      "OpenIPSL.Examples.Controls.PSSE.ES.SCRX", "OpenIPSL.Examples.Controls.PSSE.ES.SEXS"],
                'machines' : ["OpenIPSL.Examples.Machines.PSSE.GENROU", "OpenIPSL.Examples.Machines.PSSE.GENSAL",
                      "OpenIPSL.Examples.Machines.PSSE.GENCLS", "OpenIPSL.Examples.Machines.PSSE.GENROE", 
                      "OpenIPSL.Examples.Machines.PSSE.GENSAE", "OpenIPSL.Examples.Banks.PSSE.CSVGN1"],
                'turbinegovernors' : ["OpenIPSL.Examples.Controls.PSSE.TG.GAST", "OpenIPSL.Examples.Controls.PSSE.TG.HYGOV", 
                      "OpenIPSL.Examples.Controls.PSSE.TG.IEEEG1", "OpenIPSL.Examples.Controls.PSSE.TG.IEESGO",
                      "OpenIPSL.Examples.Controls.PSSE.TG.TGOV1"],
                'powersystemstabilizers' : ["OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A","OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B"],
                'windturbines' : ["OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1","OpenIPSL.Examples.Wind.PSSE.WT4G.WT4E1"]}

#######################################Model Check Test Funcitons Definitions################################################################
def excitersCheck(modelList):
	testsFailed = 0
	testsPassed = 0
	totalTests = 0
	for test in modelList:
		totalTests += 1
		if omc.sendExpression("isModel(%s)" % (test)):
			passMessage = omc.sendExpression("checkModel(%s)" % (test))
			if "completed successfully." in passMessage:
				testsPassed += 1
			else:
				testsFailed += 1
				print("Failed:" + test)
	print("Exciters Models Check Summary:")
	print("--Passed -> " + str(testsPassed))
	print("--Failed -> " + str(testsFailed))
	print("--Total -> " + str(totalTests) + "\n")
	return testsFailed

def machinesCheck(modelList):
	testsFailed = 0
	testsPassed = 0
	totalTests = 0
	for test in modelList:
		totalTests += 1
		if omc.sendExpression("isModel(%s)" % (test)):
			passMessage = omc.sendExpression("checkModel(%s)" % (test))
			if "completed successfully." in passMessage:
				testsPassed += 1
			else:
				testsFailed += 1
				print("Failed:" + test)
	print("Machines Models Check Summary:")
	print("--Passed -> " + str(testsPassed))
	print("--Failed -> " + str(testsFailed))
	print("--Total -> " + str(totalTests) + "\n")
	return testsFailed

def turbinegovernorsCheck(modelList):
	testsFailed = 0
	testsPassed = 0
	totalTests = 0
	for test in modelList:
		totalTests += 1
		if omc.sendExpression("isModel(%s)" % (test)):
			passMessage = omc.sendExpression("checkModel(%s)" % (test))
			if "completed successfully." in passMessage:
				testsPassed += 1
			else:
				testsFailed += 1
				print("Failed:" + test)
	print("Turbine Governors Models Check Summary:")
	print("--Passed -> " + str(testsPassed))
	print("--Failed -> " + str(testsFailed))
	print("--Total -> " + str(totalTests) + "\n")
	return testsFailed	

def powersystemstabilizersCheck(modelList):
	testsFailed = 0
	testsPassed = 0
	totalTests = 0
	for test in modelList:
		totalTests += 1
		if omc.sendExpression("isModel(%s)" % (test)):
			passMessage = omc.sendExpression("checkModel(%s)" % (test))
			if "completed successfully." in passMessage:
				testsPassed += 1
			else:
				testsFailed += 1
				print("Failed:" + test)
	print("Power System Stabilizers Models Check Summary:")
	print("--Passed -> " + str(testsPassed))
	print("--Failed -> " + str(testsFailed))
	print("--Total -> " + str(totalTests) + "\n")
	return testsFailed

def windturbinesCheck(modelList):
	testsFailed = 0
	testsPassed = 0
	totalTests = 0
	for test in modelList:
		totalTests += 1
		if omc.sendExpression("isModel(%s)" % (test)):
			passMessage = omc.sendExpression("checkModel(%s)" % (test))
			if "completed successfully." in passMessage:
				testsPassed += 1
			else:
				testsFailed += 1
				print("Failed:" + test)
	print("Wind Turbines Models Check Summary:")
	print("--Passed -> " + str(testsPassed))
	print("--Failed -> " + str(testsFailed))
	print("--Total -> " + str(totalTests) + "\n")
	return testsFailed

##########################################################Main Code######################################
#Deleting old OpenIPSL library version
# try:
# 	shutil.rmtree(OpenIPSL)
# except:
#    pass
#    print("passing")
# #Pulling latest OpenIPSL library version
# try:
# 	git.Git(RepoDir).clone(""+GitHubOpenIPSL+"")
# 	print('Pulled latest OpenIPSL library version...\n')
# except:
# 	print("Error with git...")
print("Model Check Start...\n")
libraryPath = RepoDir + "/OpenIPSL/OpenIPSL/package.mo"
libraryName = "OpenIPSL"
#Initialization
omc = OMCSessionZMQ()
if omc.sendExpression('loadFile("%s")' % (libraryPath)):
	print("Load success: %s" % libraryName + "\n")
else:
	errorMessage = libraryName + " was not loaded! Check the library path:\n" + libraryPath
	print(errorMessage)
	raise Exception(errorMessage)


#loadLibrary("OpenIPSL", RepoDir + "/OpenIPSL/OpenIPSL/package.mo")

excitersFail = excitersCheck(testList['exciters'])

machinesFail = machinesCheck(testList['machines'])

turbinegovernorsFail = turbinegovernorsCheck(testList['turbinegovernors'])

powersystemstabilizersFail = powersystemstabilizersCheck(testList['powersystemstabilizers'])

windturbinesFail = windturbinesCheck(testList['windturbines'])

totalFail = excitersFail + machinesFail + turbinegovernorsFail + powersystemstabilizersFail + windturbinesFail

print("Model Check Done..." + str(totalFail) +"\n")

if totalFail != 0:
	print("Error: some tests did not pass!\n")
	print("Exciter Check Errors: " + str(excitersFail))
	print("Machines Check Errors: " + str(machinesFail))
	print("Turbine Governors Check Errors: " + str(turbinegovernorsFail))
	print("Power System Stabilizers Check Errors: " + str(powersystemstabilizersFail))
	print("Wind Turbines Check Errors: " + str(windturbinesFail))
	sys.exit(1)
else:
	print("All model checks passed! Ready for Unit Tests...")
	sys.exit(0)

