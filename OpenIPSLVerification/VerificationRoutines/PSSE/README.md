# PSSE Testing with Python API
- This folder contains everything related to the generation of base results from PSSE. It is divided into three folders and a description for each one of them can be found below.

## Folder LegacyScripts contains:
- Older python scripts were used to produce PSSE results that are used as base values for the CSV comparison. There are five main python files in LegacyScripts folder. These files are:
  - models_list.py: List of models to be tested, and a list of types of models to be tested.
  - add_models_openipsl.py: List of functions to add correct models and set the correct parameters, depending on tests.
  - FaultTestModelsOpenIPSL.py: Routine to perform Fault event on tested models.
  - LoadVariationTestModelsOpenIPSL.py: Routine to perform Load Variation event on tested models.
  - RefStepTestModelsOpenIPSL.py: Routine to perform Reference Step event on tested models.
- In addition, in LegacyScripts folder you will find two other files:
  - SMIB1L.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system.
  - SMIB1L_basic.dyr: PSSE .dyr file containing parameters of the dynamic machine model of the infinite-bus. 

## Folder Scripts contains:
- Automated PSSE model simulation testing:
  - Fault event: A three-phase to-groud fault disturbance occurs in the system and it is cleared by the opening of a transmission line.
  - Load Variation event: Increase in three-phase load during the simulation. Disturbance occurs in systems that have a load model; Wind machines, for example, are tested without loads, so they are not tested under a load variation event.
  - Reference Step event: The voltage reference setpoint of the excitation system is varied during the simulation. Only exciters are tested under this event.  
- There are three main python files in Scripts folder. These files are:
  - test_lists.py: List of models, types of models, and events that can be tested.
  - test_functions.py: List of functions to execute the tests, save and store the results.
  - OpenIPSLTesting.py: Routine to perform the simulation of the chosen event models. 
- In addition, in Scripts folder you will find four other files:
  - SMIB_Shunt.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system used for shunt models, such as CSVGN1.
  - SMIB_Wind.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system used for wind generator models, such as WT4G1 and WT4E1.
  - SMIB.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system used for all other models.
  - SMIB_basic.dyr: PSSE .dyr file containing parameters of the dynamic machine model of the infinite-bus. 

## Folder WorkingDir contains:
- Result files from the events tested using the python scripts. The files are saved in CSV format. 
- Each result file can be found under a folder named after the event tested, which contains another set of folders named after model types. Each CSV result file has the name of the model tested. For instance, if a user wants to check the result obtained from GENSAL under the Fault event, they would need to go to WorkingDir/Fault/Machines/GENSAL.csv.
