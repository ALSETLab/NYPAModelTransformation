import os
from OMPython import OMCSessionZMQ

class unitTests():
    def __init__(self, rootPath):
        self.rootPath = rootPath
        self.omc = OMCSessionZMQ()
        os.chdir(rootPath)
        self.omc.sendExpression("loadModel(Modelica)")

    def loadLibrary(self, libraryName, libraryPath):
        # Attempt to load the library
        if self.omc.sendExpression('loadFile("%s")' % (libraryPath)):
            print("Load success: %s" % libraryName)
        else:
            errorMessage = libraryName + " was not loaded! Check the library path:\n" + libraryPath
            print(errorMessage)
            raise Exception(errorMessage)

    def runModelCheck(self, libraryName, libraryPath):
        # Load library
        self.loadLibrary(libraryName,libraryPath)
        print("Model Check Start...")
        totalFailed = 0
        #testList = self.omc.sendExpression('getClassNames(%s,recursive=true)' % libraryName)
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
        #Exciter check
        print("Exciter Model Check Start...")
        totalModels = 0
        testsFailed = 0
        testsPassed = 0
        for test in testList['exciters']:
          totalModels += 1
          if self.omc.sendExpression("isModel(%s)" % (test)):
           passMessage = self.omc.sendExpression("checkModel(%s)" % (test))
           if "completed successfully." in passMessage:
             testsPassed += 1
           else:
             testFailed +=1
             totalFailed +=1
        print(str(testsPassed) + " have passed out of " + str(totalModels) + " Exciter Models.")
        #Machine check
        print("Machine Model Check Start...")
        totalModels = 0
        testsFailed = 0
        testsPassed = 0
        for test in testList['machines']:
          totalModels += 1
          if self.omc.sendExpression("isModel(%s)" % (test)):
           passMessage = self.omc.sendExpression("checkModel(%s)" % (test))
           if "completed successfully." in passMessage:
             testsPassed += 1
           else:
             testFailed +=1
             totalFailed +=1
        print(str(testsPassed) + " have passed out of " + str(totalModels) + " Machine Models.")
        #Turbine Governor check 
        print("Turbine Governor Model Check Start...")
        totalModels = 0
        testsFailed = 0
        testsPassed = 0
        for test in testList['turbinegovernors']:
          totalModels += 1
          if self.omc.sendExpression("isModel(%s)" % (test)):
           passMessage = self.omc.sendExpression("checkModel(%s)" % (test))
           if "completed successfully." in passMessage:
             testsPassed += 1
           else:
             testFailed +=1
             totalFailed +=1
        print(str(testsPassed) + " have passed out of " + str(totalModels) + " Turbine Governor Models.")
        #Power System Stabilizer check 
        print("Power System Stabilizer Model Check Start...")
        totalModels = 0
        testsFailed = 0
        testsPassed = 0
        for test in testList['powersystemstabilizers']:
          totalModels += 1
          if self.omc.sendExpression("isModel(%s)" % (test)):
           passMessage = self.omc.sendExpression("checkModel(%s)" % (test))
           if "completed successfully." in passMessage:
             testsPassed += 1
           else:
             testFailed +=1
             totalFailed +=1
        print(str(testsPassed) + " have passed out of " + str(totalModels) + " Power System Stabilizer Models.")
        #Wind Turbine check
        print("Wind Turbine Model Check Start...")
        totalModels = 0
        testsFailed = 0
        testsPassed = 0
        for test in testList['windturbines']:
          totalModels += 1
          if self.omc.sendExpression("isModel(%s)" % (test)):
           passMessage = self.omc.sendExpression("checkModel(%s)" % (test))
           if "completed successfully." in passMessage:
             testsPassed += 1
           else:
             testFailed +=1
             totalFailed +=1
        print(str(testsPassed) + " have passed out of " + str(totalModels) + " Wind Turbine Models.")
        return (testsFailed)
