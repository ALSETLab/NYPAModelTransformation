# Legacy Scripts
## Overview
This folder contains python functions and PSSE files that were used, at some point, to produce the base results needed for verification of OpenIPSL models. These scripts are now obsolete and are stored here just as backup for particular functions that might become necessary in the future development of this project.

## Files and brief description:
The files are:
  - models_list.py: List of models to be tested, and a list of types of models to be tested.
  - add_models_openipsl.py: List of functions to add correct models and set the correct parameters, depending on tests.
  - FaultTestModelsOpenIPSL.py: Routine to perform Fault event on tested models.
  - LoadVariationTestModelsOpenIPSL.py: Routine to perform Load Variation event on tested models.
  - RefStepTestModelsOpenIPSL.py: Routine to perform Reference Step event on tested models.
  - SMIB1L.raw: PSSE .raw file containing parameters of the single-machine infinite-bus test system.
  - SMIB1L_basic.dyr: PSSE .dyr file containing parameters of the dynamic machine model of the infinite-bus. 
