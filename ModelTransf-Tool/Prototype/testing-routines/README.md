# Automatic Verification Routines

This folder contains different automatic verification routines that can be run to test the tool's functions. This is especially valuable for debugging and also for performance testing of the tool when executed in different machines.

This folder currently contains two functions and their description is presented below:

## Component-Test

This function is designed to automatically create a translation for each of the single-machine infinite-bus systems that are available in the examples folder. The main goal of this function is to create the models that can be loaded into a Modelica-compliant tool in order to test the coverage of the translation tool and to be sure that the translated models are ready for simulation. This allows the translation procedure to be debugged for the nearly-individual components and, therefore, allowing larger grids to be built and to be ready for simulation.

This test is designed to be executed in Mac- or Linux-based machines. For Windows-based machines, another routine should be used. This routine is still under testing.


## Auto-Test

This function is designed to automatically test the translation tool in all the grid examples, i.e., the systems that are not contained in \smib folder. All the grid examples are translated many times and the statistical information about the translation times are registered for possible posterior performance analyses.

This test is designed to be executed in Mac- or Linux-based machines. For Windows-based machines, another routine should be used. This routine is still under testing.

