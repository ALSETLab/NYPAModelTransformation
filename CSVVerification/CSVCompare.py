#!/usr/bin/env python
# coding: utf-8
import os
import shutil


RepoDir = os.getcwd() 
RepoDir = os.path.abspath(os.path.join(RepoDir, os.pardir))

ResultDir = RepoDir + "/CSVVerification/"
DockerDir = RepoDir + "/CSVVerification/Docker/Fault/Exciters/ESAC1A.csv"
PSSEDir = RepoDir + "/CSVVerification/PSSE/Fault/Exciters/ESAC1A.csv"
comma = "\",\""

print("mono Compare.exe --mode CsvFileCompare --delimiter "+comma+ " --tolerance 1e-2 "+ DockerDir + " "+ PSSEDir)

result = os.system("mono Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir + "--comparisonFlag")
print(result)


testList = {'exciters' : ["ESAC1A","ESAC2A","ESDC1A","ESST1A","ESST4B","EXAC1","EXAC2", "EXST1","IEEET1", "IEEET2","SCRX", "SEXS"],
                'machines' : ["GENROU","GENSAL","GENCLS", "GENROE","GENSAE","CSVGN1"],
                'turbinegovernors' : ["GAST", "HYGOV","IEEEG1", "IEESGO","TGOV1"],
                'powersystemstabilizers' : ["PSS2A","PSS2B"],                
                'windturbines' : ["WT4G1","WT4E1"]}

# def excitersCompare(modelList):
# 	FtestsFailed = 0
# 	FtestsPassed = 0
# 	FtotalTests = 0
# 	LVtestsFailed = 0
# 	LVtestsPassed = 0
# 	LVtotalTests = 0
# 	RStestsFailed = 0
# 	RStestsPassed = 0
# 	RStotalTests = 0
# 	#Fault
# 	for model in modelList:
# 		FtotalTests += 1
# 		DockerDir = RepoDir + "/CSVVerification/Docker/Fault/Exciters/"+model+".csv"
# 		PSSEDir = RepoDir + "/CSVVerification/PSSE/Fault/Exciters/"+model+".csv"
# 		compare = os.system("mono Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
# 		if compare == 0:
# 			FtestsPassed += 1
# 		else:
# 			FtestsFailed += 1
# 	print("Fault Exciters Models Check Summary:")
# 	print("--Passed -> " + str(FtestsPassed))
# 	print("--Failed -> " + str(FtestsFailed))
# 	print("--Total -> " + str(FtotalTests) + "\n")
# 	#Load Variation
# 	for model in modelList:
# 		LVtotalTests += 1
# 		DockerDir = RepoDir + "/CSVVerification/Docker/LoadVariation/Exciters/"+model+".csv"
# 		PSSEDir = RepoDir + "/CSVVerification/PSSE/LoadVariation/Exciters/"+model+".csv"
# 		compare = os.system("mono Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
# 		if compare == 0:
# 			LVtestsPassed += 1
# 		else:
# 			LVtestsFailed += 1
# 	print("Load Variation Exciters Models Check Summary:")
# 	print("--Passed -> " + str(LVtestsPassed))
# 	print("--Failed -> " + str(LVtestsFailed))
# 	print("--Total -> " + str(LVtotalTests) + "\n")
# 	#Reference Step
# 	for model in modelList:
# 		RStotalTests += 1
# 		DockerDir = RepoDir + "/CSVVerification/Docker/ReferenceStep/Exciters/"+model+".csv"
# 		PSSEDir = RepoDir + "/CSVVerification/PSSE/ReferenceStep/Exciters/"+model+".csv"
# 		compare = os.system("mono Compare.exe --mode CsvFileCompare --delimiter " +comma+ " --tolerance 1e-2 " +DockerDir+ " " +PSSEDir)
# 		if compare == 0:
# 			RStestsPassed += 1
# 		else:
# 			RStestsFailed += 1
# 	print("Reference Step Exciters Models Check Summary:")
# 	print("--Passed -> " + str(RStestsPassed))
# 	print("--Failed -> " + str(RStestsFailed))
# 	print("--Total -> " + str(RStotalTests) + "\n")
# 	testsFailed = LVtestsFailed + LVtestsFailed + RStestsFailed
# 	return testsFailed

# ##################MAIN#################
# print("CSV Compare Start...")
# print("Fault Exciter Verification Start...")
# excitersFail = excitersCompare(testList['exciters'])