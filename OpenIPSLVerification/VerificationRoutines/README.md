# Verification of OpenIPSL models

### General Information
This part of the repository is concerned with the files needed to perform the verification of OpenIPSL models.
The verification is carried through the comparison of the CSV result files. The results are obtained from three software packages: PSSE, Dymola and OpenModelica. 
- PSSE results serve as base for comparison.
- Dymola results test the models available in OpenIPSL using a modelica-based proprietary tool.
- OpenModelica results test the models available in OpenIPSL using a modelica-based free-of-cost alternative tool.

### CSV-Compare
This folder contains the executable to perform the CSV comparison and the result report stored as html. Results for comparison between PSSE and Dymola are stored in folder named Dymola, while results for comparison for comparison between PSSE and OpenModelica are stored in folder named OpenModelica.

### Dymola
This folder contains the routines used to generate the results using Dymola. The user can also find the CSV result files here.

### OpenModelica
This folder contains the routines used to generate the results using OpenModelica. The user can also find the CSV result files here.

### PSSE
This folder conains the routines used to generate the results using PSSE. The user can also find the CSV result files here.
