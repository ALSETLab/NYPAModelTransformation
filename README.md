
![Build Status](https://travis-ci.com/ALSETLab/NYPAModelTransformation.svg?token=J4R24XzVypVPe2KCRyTM&branch=master)


# NYPA Model Transformation

This is the repository for the 'Model Transformation for High Performing Smart Grid Applications' project.
It is a joint project between New York Power Authority (NYPA) and AlsetLab at Rensselaer Polytechnic Institute (RPI).

The project started on August 2019 and ended on August 2021. 


## About the Project

The main objective of this work is to develop a grid model "translator" capable of transforming the information (parameters & structure) and the physical behavior of the simulation models. This entails to transform each of a grid model’s sub-systems (e.g. generator, turbine, controller, etc.) from one endogenous representation, to many exogenous representations. This is achieved by using a “model transformation” (MT) tool developed in the project. The aim of using an MT solution is to save effort and to reduce errors by automating the building and modification of models where possible. An MT can be seen as a computer program that takes models as an input (source), and produces models as an output (target), by specifying the metamodel (model of a model) to which target or source models conform.

This project then, aims at building a Model Transformation Tool prototype that can be used to take PSS/E models or CIM representations as inputs, transforming them to Modelica models using the OpenIPSL library. The Modelica models can then be exported to many different targets using the Functional Mock-up Interface (FMI) standard as a Functional Mock-up Unit (FMU).
Therefore, this project has basically three steps:

- Implement PSS/E models in Modelica language and verify their behavior, allowing a translation to be effective;
- Assess interoperability of Modelica models by testing the models in different Modelica-compliant software, by exporting test systems using the FMI standard and by loading these FMUs in different tools, such as Simulink and real-time simulators like dSPACE SCALEXIO;
- Creating a Model Transformation Tool that is capable of transforming PSS/E or CIM representations of systems into a Modelica model that can be loaded into different Modelica-compliant software tools or exported via FMI standard.


## Documentation

You can find more about this project, like results and instructions for using the model transformation tool prototype in the public website available [here](https://alsetlab.github.io/NYPAModelTransformation/index). 

If the user wants to download the repository with all its files they will have basically two options. 

- The first one is if the user just wants to dowload and promptly use all the content. If this is the main goal, they should:
	1. Go to the GitHub page [here](https://github.com/ALSETLab/NYPAModelTransformation).
	2. Click the green 'Code' button.
	3. Clock on the 'Download ZIP'.
	4. Extract the files inthe desired directory.
	5. You should see the files downloaded in the desired directory.

- On the other hand, if the user aims at contributing to the project via modificaitons and pull requests, then they are welcome to use git tools for working with the repository. They should:
	1. Go to the GitHub page [here](https://github.com/ALSETLab/NYPAModelTransformation).	
	2. In terminal, navigate to the desired directory.
	3. Type the command: git clone "https://github.com/ALSETLab/NYPAModelTransformation.git".
	4. You should see the files downloaded in the desired directory.


## Developers, Roles and Contact Information

Luigi Vanfretti (vanfrl@rpi.edu) 
- Principal Investigator

Marcelo De Castro (decasm3@rpi.edu)
- PSS/E Testing
- Automation of Model Verification
- Model Transformation Tool Design and Implementation

Giuseppe Laera (laerag@rpi.edu)
- Technical Design
- Modelica Model Implementation
- Modelica Model Verification

Manuel Navarro Catalan (manuelnavarrocatalan@gmail.com)
- Dymola Testing
- OpenModelica Testing

Glen Halley (Glen@gkhsoftware.com)
- Model Transformation Tool Design and Implementation
