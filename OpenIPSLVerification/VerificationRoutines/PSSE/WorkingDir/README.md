# WorkingDir
## Overview
This folder contains the base results from PSSE saved in CSV format. This format was chosen to facilitate result comparison that provides validation for OpenIPSL models.

## Organization:
Result files are organized by event and then by model type. Therefore, the organization would be as follows:
- Event Folder (Load Step, Fault or Reference Step):
  - Model Type Folder (Machine, Exciter, Turbine Governor, Power System Stabilizer, Wind):
    - Result File in CSV format.

As an illustration, if a user wants to check the result obtained from GENSAL under the Fault event, they would need to go to WorkingDir/Fault/Machines/GENSAL.csv.
