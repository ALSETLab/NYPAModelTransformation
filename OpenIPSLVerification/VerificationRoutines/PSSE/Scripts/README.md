# Scripts
## Overview
This folder contains python functions and PSSE files that are used to produce the base results needed for verification of OpenIPSL models. 

## Files and brief description:
The files are:
  - test_lists.py: List of models, types of models, and events that can be tested.
  - test_functions.py: List of functions to execute the tests, save and store the results.
  - OpenIPSLTesting.py: Routine to perform the simulation of the chosen event models. 
  - SMIB_Shunt.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system used for shunt models, such as CSVGN1.
  - SMIB_Wind.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system used for wind generator models, such as WT4G1 and WT4E1.
  - SMIB.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system used for all other models.
  - SMIB_basic.dyr: PSSE .dyr file containing parameters of the dynamic machine model of the infinite-bus. 
