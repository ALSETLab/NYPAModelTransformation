# Open Modelica Python Testing Scripts

This folder contains the Python scripts that will the Python scripts that verify the Open Modelica-developed OpenIPSL Modelica models against their PSS/E counter parts. The scripts have various options and all of the results are automatically outputted to the result directory.

## Folder Structure
This folder contains 3 main subfolders:
1. OpenIPSL - contains the latest version of the OpenIPSL library. 
2. Scripts - contains all of the '.py' scripts. 
3. WorkingDir - contains the results of the selected singals of the model in '.csv' file form.

## Scripts
The scripts are separated by the different tests performed: Fault, Load Variation, Reference Step. From there, each of the different model type has its own '.py' and '.ipynb' script. The Jupyter Notebooks were initialy created for development purposes. Now, the team only uses the '.py' scripts and the '.ipynb' scripts may be outdated. 

## Verification Tests Performed
There are three different tests that are performed on both PSS/E and Modelica. The one-line-diagram and specifications are outlined below:

- Fault - Three phase fault applied to the bus FAULT.  This test intends to check the dynamic behavior of the Modelica models against the reference models in PSS@E. The main idea is to verify the correspondence of the fast dynamics and non-linearities of the models between the two tools.

![Fault Characteristics](figures/faultcharacteristics.png)

![Fault Diagram](figures/faultdiagram.png)


- Load Variation - Variation of the Load in the system at Load Bus. This test intends to verify the similar behavior between the models developed in Modelica and PSS@E focusing on testing the slow dynamics of the systems.

![Load Variation Characteristics](figures/loadvariationcharacteristics.png)

![Load Variation Diagram](figures/loadvariationdiagram.png)

- Reference Step - Step in the Exciter voltage reference. The implementation of this test in Modelica has been performed by modifying the existing base class of the Exciter model. This test intends to validate the Modelica models against PSS@E checking the dynamic behavior, in particular in the saturation region of the components, that is determined by this type of event. 

![Refernce Step Characteristics](figures/referencestepcharacteristics.png)

## Auxiliary Models
The folder 'Auxiliary Models' [here](), has the purpose to change the SMIB model in order to be able to create the following two tests: Load Variation and Reference Step.

## How to run?
There are a few different scripts that can be run: 
1. [Open Modelica - Fault - Exciters](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/FaultExcitersOpenModelica.py).
2. [Open Modelica - Fault - Machines](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/FaultMachinesOpenModelica.py).
3. [Open Modelica - Fault - Power Systems Stabilizers](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/FaultPowerSystemStabilizersOpenModelica.py).
4. [DymoOpen Modelicala - Fault - Turbine Governors](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/FaultturbineGovernorsOpenModelica.py).
5. [Open Modelica - Fault - Wind Turbines](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/FaultwindTurbinessOpenModelica.py).
6. [Open Modelica - Fault - All Models](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/FaultRunAllOpenModelica.py).
7. [Open Modelica - Load Variation - Exciters](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/LoadVariationExcitersOpenModelica.py).
8. [Open Modelica - Load Variation - Machines](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/LoadVariationMachinesOpenModelica.py).
9. [Open Modelica - Load Variation - Power Systems Stabilizers](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/LoadVariationPowerSystemsStabilizersOpenModelica.py).
10. [Open Modelica - Load Variation - Turbine Governors](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/LoadVariationTurbineGovernorsOpenModelica.py).
11. [Open Modelica - Load Variation - All Models](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/LoadVariation/LoadVariationRunAllOpenModelica.py).
12. [Open Modelica - Step Reference - Exciters](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/ReferenceStep/ReferenceStepExcitersOpenModelica.py).
13. [Open Modelica - Step Reference - All Models](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/ReferenceStep/ReferenceStepRunAllOpenModelica.py).
14. [Open Modelica - All Tests - All Models](https://github.com/ALSETLab/NYPAModelTransformation/blob/master/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/PythonRunAllOpenModelica.py).

Once selected the appropiate script, you can:
- Use a Python IDE (PyCharm, Spyder, etc) and run the desired '.py' script. 
- User Terminal:
	1. Navigate to the desired script location (i.e. '../NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/Scripts/Fault/..').
	2. Write the command: python FaultExcitersOpenModelica.py
The terminal will display the progress of the process, the results will be outputted to the WorkingDir folder. 

## User Interface
The interface is a simple text based interface. However, it is really useful to diplay progres, and possible errors in verfications of the models. A sample interface is shown below;

![Console](figures/console.png)


## Results
All of the results can be found in the 'WorkingDir' folder. The results are separated by:
	- Tests - Fault, Load Variation, Reference Step.
		- Model Type - Exciters, Machines, etc.
Results are all time series of the selected variables that will be compared to PSS/E models in '.csv' file. 

## How to cusotmize?
In order to change the code here are a few examples:
	- Adding a new model - first the model needs to be added to the OpenIpsl  library and repository. Then the path and name (spelling counts!) must be added to the name, path and 	applicable variables to the name matrix of **each** of the '.py' scripts for **all** tests. an example of adding an exciter is shown below;
	![Adding Exciter](figures/addingmodel.png)
	- Running a single model - the best way is to manually run it using Dymola, OpenModelica and PSS/E.
	- Keeping **all** of the restuls from the simulations (not just the '.csv' files) - this is done by deleting the 'shutil...' delete comand at the end of each simulation. This is 	  done by finding the bottom of the for loop and commenting out the lines below for **each** of the '.py' scripts for which you want to keep the restuls.
	![Keeping Results](figures/keepingresults.png)

## Troubleshooting
Some of the most common issues are:
- The 'OpenIPSL folder cannot be found' - this can be fixed by creating a folder 'OpenIPSL' at this directory: '../NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/..'.
- 'Simulation failed or model was not found', this happens when a model is either missing or the Modelica simulation has failed. 


## Further Development
Further development of the scripts/verification routines can be done by creating an issue or pull request in the [GitHub](https://github.com/ALSETLab/NYPAModelTransformation) repository. 

## Notes
- This repository does **not** contain any of the Modelica models, they all come from the OpenIPSL library.
- OpenIPSL folder is updated **every** time that a verification script is run.
- Results folder is updated **every** time that a verification script is run.
- The scripts were run mostly on an Ubuntu 18.04 LTS machine.
- The scripts were run using latest version of OpenIPSL found [here](https://github.com/OpenIPSL/OpenIPSL).
- The scripts were run using Dymola version 2020x.
- The scripts were run using OpenModelica version 1.16.
- The scripts were run using Python 3.7.0. 
- Auxiliary models are Modelica models.
