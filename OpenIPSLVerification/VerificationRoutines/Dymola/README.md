# PythonTesting
## Scripts made for:
- Python-Dymola model simulation
- Python-OpenModeling model simulation
- OpenIPSL element Dymola model verification:
  - Simulate the Machine model examples and create .csv files with selected parameter for verification.
  - Simulate the Exciter model examples and create .csv files with selected parameter for verification.
- All of the result files will be found in .../WorkingDir/ElementType/ElementName/Element.csv
## How to run:
Assuming an Ubuntu computer is being used and the PythonExcitersDymola.py script is being run:
 1. Change the dymola interface location:
 	dymola = DymolaInterface("/YOUR_DYMOLA_LOCATION/dymola.sh")
 2. Open the OpenIPSL library.
 	dymola.openModel("YOUR_OpenIPLS_LOCATION/OpenIPSL/package.mo")
 3. Make sure that the generator names are set correctly:
 	- Find the examples within OpenIPSL at:  OpenIPSL.Examples.Controls.PSSE.ES...
 	- Go through each of the generators in each example and change the name.
 	- If the generator is 'GENROU' then change to 'gENROU'.
 	- If the generator is 'GENROE' then change to 'gENROE'. 
 4. Change the dymola simulation location:
 	dymola.cd("/YOUR_WORKINGDIR_LOCATION/Dymola/Exciters/" + exciterName)
 5. Change the result path location:
 	resultPath = f"/YOUR_WORKIGNDIR_LOCATION/Dymola/Exciters/{exciterName}/" + exciterName 
 6. Cahnge the simulation .mat result location:
 sim = SimRes(f"/YOUR_WORKINGDIR_LOCATION/Dymola/Exciters/{exciterName}/{exciterName}.mat"
 7. Change the current directory location:
 os.chdir(f"/YOUR_WOKRKIGDIR_LOCATION/Dymola/Exciters/{exciterName}/")
 8. Do this for the second section.
 9. Open terminal and enter cd /YOUR_REPOSITORY_LOCATION/Scripts/
 10. Type:
 	python PythonExcitersDymola.py



## Notes
- These scripts were done using Dymola 2020 and OpenModelica 1.13.0.
- These scritpts are made for the latest release of the OpenIPSL library found at: https://github.com/OpenIPSL/OpenIPSL .
- Make sure that you change the file location to the ones of your computer.
- These scripts will only work using Ubuntu, if Windows is needed you need to change the structure of the files and the dymola installation location. 
- It is easier to debug and change file directory using Jupyter Notebook and its files (.ipynb).
- To use the code just run the .py scripts.
- The results(for the ESAC1 exciter) (.csv files) will appear under: .../WorkingDir/Exciters/ESAC1/
