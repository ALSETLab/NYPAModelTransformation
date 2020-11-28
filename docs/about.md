---
title: About the Project
---

## Background

In the upcoming years the electricity landscape of NYS is expected to change based on the NYS Energy Plan with the addition of a large number of wind and solar renewable sources as well as the integration of distributed energy sources as a result of the NY Reforming the Energy Vision (REV) initiative.

Power system modeling and simulation (M&S) is used to support engineering in decision making during planning and operation. M&S encompasses a broad range of time-scales, for which, specialized simulation tools have been developed since the ‘70s, with a design driven by the constraints of those times: the resource constraint computer technologies of the ‘70s and the scarcity of suitable numerical algorithms for differential-algebraic equations. These factors resulted in a fragmented space in the modeling philosophy, simulation methods, and consequently, software tools, which still present today. With the upcoming energy landscape in NYS, new modeling capabilities and tools will be required in order for clean energy technologies to be properly studied and incorporated into the electricity grid.

In today’s environment, grid modeling and operation in NY are limited to few specific and proprietary software traditionally used for M&S over many decades. The ability of introducing new tools has been impractical, due to the way models have been developed and maintained. With interoperability at its core, the proposed work explores a new basis for developing and translating grid models that could facilitate the utilization of multiple tools to leverage the best features that each tool has to offer.

## Objective

The main objective of this work is to develop a grid model “interpreter” capable of transforming the information (parameters & structure) and the physical behavior of the simulation models. This entails to transform each of a grid model’s sub-systems (e.g. generator, turbine, controller, etc.) from one endogenous representation, to many exogenous representations. This will be achieved by using “model transformations” (MT). The aim of using a MT is to save effort and reduce errors by automating the building and modification of models where possible. An MT can be seen as a computer program that takes models as an input (source), and produces models as an output (target), by specifying the metamodel (model of a model) to which target or source models conform. 

In this first phase, the metamodel of the IEC CIM standard  will be used and expanded. To demonstrate the MT approach, models originating from a conventional tool (i.e. PSS/E) will be re-implemented in the Modelica computer language, making sure that their behavior is consistent. Hence, instead of building a disparate number of models that are tool-specific by nature, model-driven software engineering techniques can be used for MTs, enabling high-efficiency model management.

## Benefits

The expected changes in the electricity landscape of NYS mentioned earlier bring challenges to the current engineering practices. Analysts and operation support tools face difficulties with the increase in model complexity, both in terms of scale and the granularity of each of the models components behavior. The need to increase a model’s footprint beyond transmission levels is now beginning to emerge with the adoption of distributed energy resources (DERs) which require to model lower voltage levels for advanced analysis capabilities, such as dynamic simulation and HIL testing. Meanwhile, the adoption of renewable energy sources (RES) increases the granularity of the representation of the source dynamics and electro-magnetic behavior.

Lack of portability, tractability and standardization for models is a tremendous bottleneck that must be urgently solved to enable engineers to work collaboratively and transparently in various software environments. Currently, this creates major barriers in the design, simulation and analysis of electrical power systems. It has tremendous impact on project costs and reliability of results. It creates deployment delays, complicated management issues and stiffens the overall process of grid modernization. 

While it is not possible to determine the benefits in terms of energy savings or emission reductions of the proposed work, it is imperative to realize that new tools that can be used for decision making in planning to operation of the future NYS electrical grid will ultimately enable engineers to make better informed decisions at a faster pace in order to meet the ambitious goals of NYS Energy Plan and NY REV.




<a href="./index">Go back</a> 
