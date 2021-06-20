---
title: Model Validation
---


The validation of models from the  <a href="https://github.com/OpenIPSL/OpenIPSL">OpenIPSL</a> can be found here. The models were validated using simulation results obtained in Dymola and OpenModelica. Base results were produced using PSSE software version 33. 

## Why to Validate Models?

The Model Transformation tool proposed in this project is based upon the underlying concept that the behavior of a model in one tool should be the same behavior observed in the other tool. Since PSSE is used as a source model and Modelica is used as a target model, the results obtained from the Modelica implementation must be compared with the ones obtained from PSSE in order to provide us, users, the confidence that a model translation will, in fact, be able to maintain all the main aspects from the original source model. 

In order to provide that confidence, a model verification is then, absolutely necessary. Hence, small scale test systems were assembled and simulated under different disturbances in order to generate results from individual (or at least the smallest possible set of) components. The results coming from the Modelica implementation of these small test systems are then compared with the results that are obtained with PSSE. In this project, a tool called CSV Compare was used to create this regression tests and verification procedures.

Note that here, the results coming from two Modelica-compliant tools are provided. This is because different tools are available and they can handle differently with difficulties during Model interpretation and compilation. In addition to that, one tool is a proprietary software and, therefore, a license should be purchased, while the other is an open-source alternative. 

## Dymola Reports

General results for Dymola tests can be found in the table below.

<table>
  <tr>
    <th>Model Type</th>
    <th>General Reports</th>
  </tr>
  <tr>
    <td>1. Machines</td>
    <td>(a)<a href="archive/Dymola/Fault/Machines/2020-04-27-index.html">Fault Report</a><br>
    	  (b)<a href="archive/Dymola/LoadVariation/Machines/2020-04-27-index.html">Load Variation Report</a></td>
  </tr>
  <tr>
    <td>2. Exciters</td>
    <td>(a)<a href="archive/Dymola/Fault/Exciters/2020-02-27-index.html">Fault Report</a><br>
        (b)<a href="archive/Dymola/LoadVariation/Exciters/2020-03-03-index.html">Load Variation Report</a><br>
        (c)<a href="archive/Dymola/ReferenceStep/Exciters/2020-04-26-index.html">Reference Step Report</a></td> 

  </tr>
  <tr>
    <td>3. Turbine Governors</td>
    <td>(a)<a href="archive/Dymola/Fault/TurbineGovernors/2020-04-27-index.html">Fault Report</a><br>
        (b)<a href="archive/Dymola/LoadVariation/TurbineGovernors/2020-04-27-index.html">Load Variation Report</a></td>
  </tr>
  <tr>
    <td>4. Power System Stabilizers</td>
    <td>(a)<a href="archive/Dymola/Fault/PowerSystemStabilizers/2020-04-30-index.html">Fault Report</a><br> 
        (b)<a href="archive/Dymola/LoadVariation/PowerSystemStabilizers/2020-04-30-index.html">Load Variation Report</a><br> </td>
  </tr>
  <tr>
    <td>5. Wind Machines</td>
    <td>(a)<a href="archive/Dymola/Fault/WindTurbines/2020-04-30-index.html">Fault Report</a></td>
  </tr>
</table>

## OpenModelica Reports

General results for OpenModelica tests can be found in the table below.
<table>
  <tr>
    <th>Model Type</th>
    <th>General Reports</th>
  </tr>
  <tr>
    <td>1. Machines</td>
    <td>(a)<a href="archive/OpenModelica/Fault/Machines/2020-05-04-index.html">Fault Report</a><br>
        (b)<a href="archive/OpenModelica/LoadVariation/Machines/2020-05-19-index.html">Load Variation Report</a></td>
  </tr>
  <tr>
    <td>2. Exciters</td>
    <td>(a)<a href="archive/OpenModelica/Fault/Exciters/2020-05-19-index.html">Fault Report</a><br>
        (b)<a href="archive/OpenModelica/LoadVariation/Exciters/2020-05-19-index.html">Load Variation Report</a><br>
        (c)<a href="archive/OpenModelica/ReferenceStep/Exciters/2020-05-19-index.html">Reference Step Report</a></td> 

  </tr>
  <tr>
    <td>3. Turbine Governors</td>
    <td>(a)<a href="archive/OpenModelica/Fault/TurbineGovernors/2020-05-04-index.html">Fault Report</a><br>
        (b)<a href="archive/OpenModelica/LoadVariation/TurbineGovernors/2020-05-04-index.html">Load Variation Report</a></td>
  </tr>
  <tr>
    <td>4. Power System Stabilizers</td>
    <td>(a)<a href="archive/OpenModelica/Fault/PowerSystemStabilizers/2020-05-01-index.html">Fault Report</a><br> 
        (b)<a href="archive/OpenModelica/LoadVariation/PowerSystemStabilizers/2020-05-01-index.html">Load Variation Report</a><br> </td>
  </tr>
  <tr>
    <td>5. Wind Machines</td>
    <td>(a)<a href="archive/OpenModelica/Fault/WindTurbines/2020-05-01-index.html">Fault Report</a></td>
  </tr>
</table>




<a href="./index">Go back</a> 
