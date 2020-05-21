# CSV-Compare

### General Information
This folder contains the executable Compare.exe, which is responsible for performing the CSV comparison procedure as regression test approach. Result files are available in folders PSSE, Dymola and OpenModelica. The comparison report is stored in folder ResultReport in HTML format.

### How to use Compare.exe
The execution of a .exe file depends on the operational system you are using. Windows usually have no issues when running .exe files. On the other hand, debian-based linux systems can find difficulties when executing this type of files. If the linux-user wants to run Compare.exe, they should first install [mono](https://www.mono-project.com/). To run a .exe file using mono, one should use the code below:

```
mono <Executable>.exe
```

The Compare.exe has many attributes that should be written when executing the code. The syntax for executing the comparison in entire folders of result files is displayed below.
```
mono Compare.exe --mode csvTreeCompare --delimiter "," --reportdir "<ComparisonResultReportDirectory>" --tolerance <TOL> "<ComparedResultDirectory>" "<BaseResultDirectory>"
```

In order to present an example, suppose that you want to perform the comparison between exciter results. The base results are from PSSE and you want to compare them with the ones obtained in Dymola. The disturbance you want to check is a Fault event and the absolute tolerance is of 1%. Then you should move to this repository and write the following command in your terminal

```
mono Compare.exe --mode csvTreeCompare --delimiter "," --reportdir "ResultReport/Dymola/Fault/Exciters" --tolerance 1e-2 "../Dymola/WorkingDir/Fault/Exciters" "../PSSE/WorkingDir/Fault/Exciters"
```
