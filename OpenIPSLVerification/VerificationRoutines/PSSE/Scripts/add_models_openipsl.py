# ----- Importing libraries needed:
import os
import psspy
# ----- Loading the correct system (there are three possibilites):
def initTest(Test,pathname):
    if Test == 'Machines' or Test == 'Exciters' or Test == 'TurbineGovernors' or Test == 'PowerSystemStabilizers':
        rawfile=os.path.join(pathname,"SMIB1L.raw")
        dyrfile=os.path.join(pathname,"SMIB1L_basic.dyr")
        return [rawfile,dyrfile]
# ----- Loading models for each test and creating outfile:        
def includeModel(Model,pathname):
    if Model == "GENSAL":
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[5.0,0.07,0.09,4.28,0.0,1.84,1.75,0.41,0.2,0.12,0.11,0.39])
    elif Model == "GENSAE":
        # - Load GENSAE generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAE",0,"",0,[],[],12,[5.0,0.07,0.09,4.28,0.0,1.84,1.75,0.41,0.2,0.12,0.11,0.39])
    elif Model == "GENROU":
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
    elif Model == "GENROE":
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
    elif Model == 'EXAC2':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXAC2 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXAC2",0,"",0,[],[],23,[0.005,0.005,0.005,400.0,0.02,9.0,-5.34,2.0,4.0,-4.0,0.8,1.0,2.0,0.03,1.0,0.2,0.48,1.0,10.0,5.25,0.03,7.0,0.1])
    elif Model == 'ESAC2A':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load ESAC2A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESAC2A",0,"",0,[],[],22,[0.0,0.0,0.0,400.0,0.02,9.0,-5.43,1.0,4.0,-4.0,0.8,10.0,0.0,0.03,1.0,0.2,0.48,1.0,5.25,0.03,7.0,0.1])
    elif Model == 'ESST4B':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load ESST4B exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST4B",0,"",0,[],[],17,[0.3,2.97,2.97,1.0,-0.87,0.01,1.0,0.2,1.0,-0.87,0.1,6.73,0.1,8.41,0.1,0.0,0.0])
    elif Model == 'URST5T':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load URST5T exciter:
        psspy.add_plant_model(1,r"1",6,r"URST5T",0,"",0,[],[],10,[0.025,0.1,0.2,1.0,1.0,1.0,10.0,-10.0,0.58,0.3])
    elif Model == 'SEXS':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load SEXS exciter:
        psspy.add_plant_model(1,r"1",6,r"SEXS",0,"",0,[],[],6,[0.1,1.0,100.0,0.1,-10.0,10.0])
    elif Model == 'SCRX':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load SCRX generator:
        psspy.add_plant_model(1,r"1",6,r"SCRX",0,"",0,[],[],8,[0.1,1.0,100.0,0.005,-10.0,10.0,0.0,0.0])
    elif Model == 'EXAC1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXAC1 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXAC1",0,"",0,[],[],17,[0.004,0.004,0.004,400.0,0.02,9.0,-5.43,0.8,0.03,1.0,0.2,0.48,1.0,5.25,0.03,7.0,0.1])
    elif Model == 'EXST1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXST1 exciter:
        psspy.add_plant_model(1,r"1",6,r"EXST1",0,"",0,[],[],12,[0.02,10.0,-10.0,0.1,1.0,80.0,0.05,8.0,-3.0,0.2,0.1,1.0])
    elif Model == 'ESST1A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[0,0],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
    elif Model == 'IEEEX1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load IEEEX1 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEEX1",0,"",0,[],[],16,[0.04,75.0,0.05,1.0,1.0,3.9,-3.9,0.0,0.5,0.07,1.0,0.0,2.47,0.035,4.5,0.47])
    elif Model == 'ESAC1A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESAC1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESAC1A",0,"",0,[],[],19,[0.04,2.0,10.0,400.0,0.02,9.0,-5.34,0.8,0.03,1.0,0.2,0.48,1.0,5.25,0.03,7.0,0.1,3.0,-3.0])
    elif Model == 'ESDC1A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESDC1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESDC1A",0,"",0,[],[],16,[0.04,75.0,0.05,1.0,1.0,0.0,-3.9,0.0,0.5,0.07,1.0,0.0,2.47,0.035,4.5,0.47])
    elif Model == 'ESDC2A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESDC2A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESDC2A",0,"",0,[],[],16,[0.04,75.0,0.05,1.0,1.0,0.0,-3.9,0.0,0.5,0.07,1.0,0.0,2.47,0.035,4.5,0.47])
    elif Model == 'IEEET2':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load IEEET2 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET2",0,"",0,[],[],14,[0.02,200.0,0.001,2.0,-2.0,0.1,0.55,0.06,0.3,0.6,2.85,0.3,3.8,0.6])
    elif Model == 'ST5B':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ST5B exciter:
        psspy.add_plant_model(1,r"1",6,r"ST5B",0,"",0,[],[],18,[0.0,0.8,6.0,0.08,0.01,200.0,5.0,-4.0,0.001,0.004,2.0,10.0,0.1,0.05,0.1,2.0,0.08,0.08])
    elif Model == 'IEEET1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load IEEET1 exciter:
        psspy.add_plant_model(1,r"1",6,r"IEEET1",0,"",0,[],[],14,[0.02,200.0,0.001,2.0,-2.0,0.1,0.55,0.06,1.0,0.0,2.85,0.3,3.8,0.6])
    elif Model == 'EXNI':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load EXNI exciter:
        psspy.add_plant_model(1,r"1",6,r"EXNI",0,"",0,[],[],10,[0.06,150.0,0.0,4.0,-4.0,0.011,0.4,0.7,0.0,10.0])
    elif Model == 'IEESGO':
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[6.7,0.028,0.0358,4.41,0.0,1.22,0.76,0.297,0.2,0.12,0.186,0.802])
        # - Load SCRX exciter:
        psspy.add_plant_model(1,r"1",6,r"SCRX",0,"",0,[],[],8,[0.1,10.0,100.0,0.05,0.0,5.0,0.0,0.0])
        # - Load IEESGO turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"IEESGO",0,"",0,[],[],11,[0.01,0.0,0.15,0.3,8.0,0.4,0.1,0.7,0.43,1.0,0.0])
    elif Model == 'HYGOV':
        # - Load GENSAL generator:
        psspy.add_plant_model(1,r"1",1,r"GENSAL",0,"",0,[],[],12,[6.7,0.028,0.0358,4.41,0.0,1.22,0.76,0.297,0.2,0.12,0.186,0.802])
        # - Load SCRX exciter:
        psspy.add_plant_model(1,r"1",6,r"SCRX",0,"",0,[],[],8,[0.1,10.0,100.0,0.05,0.0,5.0,0.0,0.0])
        # - Load HYGOV turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"HYGOV",0,"",0,[],[],12,[0.05,0.3,5.0,0.05,0.5,0.02,0.415,0.0,1.25,1.2,0.2,0.08])
    elif Model == 'GGOV':
        # - Load GENROU generator:
        psspy.add_plant_model(1,r"1",1,r"GENROU",0,"",0,[],[],14,[5.0,0.05,0.7,0.1,4.0,0.0,1.41,1.35,0.3,0.6,0.2,0.12,0.1,0.5])
        # - Load GGOV turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"GGOV1",0,"",2,[0,0],["",""],33,[0.04,1.0,0.05,-0.05,10.0,2.0,0.0,1.0,1.0,0.15,0.5,1.5,0.2,0.1,0.0,0.0,3.0,2.0,0.67,1.0,0.0,0.1,-0.1,0.0,0.1,10.0,0.1,0.0,0.0,4.0,5.0,99.0,-99.0])
    elif Model == 'TGOV1':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load TGOV1 turbine/governor:
        psspy.add_plant_model(1,r"1",7,r"TGOV1",0,"",0,[],[],7,[0.04,0.4,0.86,0.3,2.0,6.0,0.0])
    elif Model == 'PSS2A':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[0,0],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
        # - Load PSS2A stabilizer:
        psspy.add_plant_model(1,r"1",3,r"PSS2A",0,"",6,[1,0,3,0,5,1],["","","","","",""],17,[5.0,0.0,0.0,5.0,5.0,5.0,0.758,1.0,0.12,0.1,2.0,0.47,0.07,0.47,0.07,0.1,-0.1])
    elif Model == 'IEEEST':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[0,0],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
        # - Load IEEEST stabilizer:
        psspy.add_plant_model(1,r"1",3,r"IEEEST",0,"",2,[0,0],["",""],17,[48.743,4.7488,0.0,0.0,-85.776,0.0459,0.7361,1.5868,0.0,0.02,13.892,0.1057,0.0099,0.1,-0.1,0.0,0.0])
    elif Model == 'PSS2B':
        # - Load GENROE generator:
        psspy.add_plant_model(1,r"1",1,r"GENROE",0,"",0,[],[],14,[5.0,0.07,0.9,0.09,4.28,0.0,1.84,1.75,0.41,0.6,0.2,0.12,0.11,0.39])
        # - Load ESST1A exciter:
        psspy.add_plant_model(1,r"1",6,r"ESST1A",0,"",2,[0,0],["",""],18,[0.1,0.3,-0.3,2.0,10.0,0.08,0.083,300.0,0.1,7.0,-7.0,5.2,-5.2,0.38,1.0,1.0,1.0,0.0])
        # - Load PSS2B stabilizer:
        psspy.add_plant_model(1,r"1",3,r"PSS2B",0,"",6,[1,0,3,0,0,0],["","","","","",""],23,[2.0,2.0,0.0,2.0,0.0,2.0,0.1564,1.0,0.0,0.0,10.0,0.25,0.03,0.15,0.015,0.0,0.0,999.0,-999.0,999.0,-999.0,0.1,-0.1])
    # - Creating output file
    outfilename = Model+'.out'
    outfile = os.path.join(pathname,outfilename)
    return outfile
def outputcsv(result,Model,Type,pathname):
    import dyntools, csv
    if Model == "GENSAL":
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','gENSAL.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENSAE":
        titles = ['Time','gENSAE.delta','gENSAE.PELEC','gENSAE.PMECH','gENSAE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENROU":
        titles = ['Time','gENROU.delta','gENROU.PELEC','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == "GENROE":
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXAC2':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXAC2.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESAC2A':
        titles = ['Time','gENROU.delta','gENROU.PELEC','eSAC2A.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESST4B':
        titles = ['Time','gENROU.delta','gENROU.PELEC','eSST4B.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'URST5T':
        titles = ['Time','generator.delta','generator.PELEC','uRST5T.EFD','generator.PMECH','generator.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'SEXS':
        titles = ['Time','gENROU.delta','gENROU.PELEC','sEXS.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'SCRX':
        titles = ['Time','gENROU.delta','gENROU.PELEC','sCRX.EFD','gENROU.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXAC1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXAC1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXST1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXST1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESST1A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSST1A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEX1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','iEEEX1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESAC1A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSAC1A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESDC1A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSDC1A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ESDC2A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eSDC2A.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEET2':
        titles = ['Time','gENROE.delta','gENROE.PELEC','iEEET2.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'ST5B':
        titles = ['Time','gENROE.delta','gENROE.PELEC','sT5B.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEET1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','iEEET1.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'EXNI':
        titles = ['Time','gENROE.delta','gENROE.PELEC','eXNI.EFD','gENROE.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEESGO':
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','iEESGO.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'HYGOV':
        titles = ['Time','gENSAL.delta','gENSAL.PELEC','hYGOV.PMECH','gENSAL.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'GGOV':
        titles = ['Time','gENROU.delta','gENROU.PELEC','gGOV.PMECH','gENROU.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'TGOV1':
        titles = ['Time','gENROE.delta','gENROE.PELEC','tGOV1.PMECH','gENROE.SPEED','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'PSS2A':
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','pSS2A.VOTHSG','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'IEEEST':
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','iEEEST.VOTHSG','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    elif Model == 'PSS2B':
        titles = ['Time','gENROE.delta','gENROE.PELEC','gENROE.PMECH','gENROE.SPEED','pSS2B.VOTHSG','GEN1.V','LOAD.V','GEN2.V','FAULT.V']
    # - Creating output file
    outfilename_csvu = Model+'u.csv'
    outfilename_csv = Model+'.csv'
    if Type == 'Machines':
        csvpath = os.path.join(pathname,'WorkingDir/'+Type)
        outfilename = os.path.join(csvpath,outfilename_csv)
        outfilenameu = os.path.join(csvpath,outfilename_csvu)
        result.csvout(channels=[1,3,7,9,11,12,13,14], csvfile=outfilenameu)
    elif Type == 'TurbineGovernors':
        csvpath= os.path.join(pathname,'WorkingDir/'+Type)
        outfilename = os.path.join(csvpath,outfilename_csv)
        outfilenameu = os.path.join(csvpath,outfilename_csvu)
        result.csvout(channels=[1,3,7,9,11,12,13,14], csvfile=outfilenameu)
    elif Type == 'Exciters':
        csvpath = os.path.join(pathname,'WorkingDir/'+Type)
        outfilename = os.path.join(csvpath,outfilename_csv)
        outfilenameu = os.path.join(csvpath,outfilename_csvu)
        result.csvout(channels=[1,3,5,7,9,11,12,13,14], csvfile=outfilenameu)
    elif Type == 'PowerSystemStabilizers':
        csvpath = os.path.join(pathname,'WorkingDir/'+Type)
        outfilename = os.path.join(csvpath,outfilename_csv)
        outfilenameu = os.path.join(csvpath,outfilename_csvu)
        result.csvout(channels=[1,3,7,9,11,13,14,15,16], csvfile=outfilenameu)
    with open(outfilenameu, 'rb') as inp, open(outfilename, 'wb') as out:
        writer = csv.writer(out, delimiter = ",")
        count = 0
        for row in csv.reader(inp):
            if row[0] != '0' or count != 0:
                count = count+1
                if row[0] == 'Time(s)':
                    writer.writerow(titles)
                else:
                    writer.writerow(row)
    return outfilename
