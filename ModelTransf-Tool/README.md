# Model Transformation Tool

This folder contains the files related to the model transformation tool, a python-based solution that uses PSS/E files to create Modelica models using the Open Instance Power Systems Library or [OpenIPSL](https://github.com/OpenIPSL/OpenIPSL). 

## Dependencies

1. Python 3.7 or 3.9: The user must have python 3.7 or 3.9 installed in their computer. It is also necessary to know what command is attributed to start an environment in this version of python. For example, in MacOS the command might be:
```
  python3
```
In Linux, this command might be:
```
  python3.7
```
for Python 3.7 or 
```
  python3.9
```
for Python 3.9. Please take note of the adequate command. Here, we will call it 
```
  python3X
```

2. Make sure you use the correct version of pip (python install) which corresponds to de adequate version of Python 3X environment. Some computers might use
```
  pip
```
While others might use
```
  pip3
```
Or
```
  pip3.9
```

Take note of the one used in your machine, so all dependencies are installed for the appropriate python environment. Here we will call the appropriate pip command as 
```
  pipX
```

3. Use the appropriate pip command to install the following dependencies:
```
  pipX install tk-devel
```
```
  pipX install Tcl
```
```
  pipX install numpy
```
```
  pipX install pyyaml
```
```
  pipX install pandas
```

4. Make sure that all the above libraries are installed in the correct Python environment by using the command:
```
  pipX list
```


## Getting Started

After installing the dependencies that are needed for the tool to work properly, the user must download the contents from the directory Prototype. After downlading the directory, the user must use the command terminal to go to that folder. There, the user can execute the GUI by using the following command:

```
  python3X main.py
```

The user can try the translator in the models available in Example folder within Prototype. A step-by-step guide is available at:


If needed, the user can create automation routines that do not use the GUI. More information about is is available at:
