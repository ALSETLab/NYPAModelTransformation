**Preliminary**

# Quick Introduction for EditiX
  XSLT/XQuery -> Transform a document with XSLT

	XSLT Document(*.xsl *.xslt) :: ~\src\cim2mo\CIMtoMO.xsl
	Document source (*.xml, *.json) :: ~\examples\bus-14\ieee14_EQ.xml
	Result document (*.html) :: C:\Users\<name>\Desktop\Result.MO

	Parameters <tab>
	bus	5
	resistance	0
	reactance	0
	time	0.5
	duration	0.5
	filename ../../examples/bus-14/ieee14
# Introduction
  The direct route of translating proprietary files from PSS/E or PSAT to Modelica is not the best way since the process is transient. Software vendor's file formats can be changed at any moment without notification or accountability.
  
  The best way to translate is to use a certified file exchange – a contract that requires complete accounting of model parameters. This begins with a hierarchical set of standards that describes how model parameters are stored. Certified standards also allow any software vendor to participate, and the model data is ubiquitous.
  
  The members of the European Network of Transmission System Operators (ENTSO-E) are presently the predominant creators of certified standards. Their work within the International Electrotechnical Commission (IEC) Technical Committee (TC) 57 and Work Group (WG) 13 allows comment and adjustment from other countries and creates an open process. Their proposed standards are documented in the Common Grid Model Exchange Standard (CGMES). The implementation of the standard can be certified through conformance testing by UCA International Users Group (UCAIug). CGMES provides the parameter descriptions within the Common Information Model (CIM)  ; therefore, we will use it as our beginning.
  
  CGMES is a set of standards that begins with XML. Extensible markup language (XML) is a standardized data structure like HTML without pre-defined tags. CIM refines the XML standard by creating and defining tags. XSLT is an XML document; therefore, you must understand the basics of XML to differentiate between the documents that depend on it.
  
  As you move from XML to CGMES CIM, you move from a generic xml data structure to CGMES power systems groupings. PSS/E adopts most if not all groupings from CGMES. OpenIPSL uses the same CGMES parameters within their components. Therefore, it is a direct map from the CGMES CIM to Modelica OpenIPSL components.
  
  The Resource Descriptor Framework (RDF) from W3C specifications is part of CGMES. RDF uses statements about resources in expressions of the form subject-predicate-object called triples. The subject denotes the resource, for example Synchronous Machine. The predicate denotes traits, for example Synchronous Machine q percent representing the coordinated reactive control in percent. The object denotes an aspect of the resource, for example 100 percent.
  
  The translation moves CGMES triples into Modelica parameters. While RDF can represent more complicated data structures, CGMES uses something like relational database associations. Therefore, we'll use the rules and techniques for relational databases to transform with XSLT.
  
# Translation Workflow
The CGMES equipment (EQ from IEC 61970-452) and dynamics (DY from IEC 61970-302) files translate to a single MO files using CIMtoMO.xsl (called CIMtoMO). The result is a model like the pssetomo.py translation used from OpenIPSL examples. 

The xsl-files copy the triple to the Modelica parameter. The translation must copy the required Modelica parameters. The CGMES subjects align with UML or relational models. The major result is that one table does not duplicate the data in another. The PSS/E separates files into static and dynamic triples as specified in ENTSO-E models. Modelica uses parameters by component. 

## Modelica Components
Power system equipment is modeled with Modelica components. A 14-bus system which has been used as example of a typical power system can be analyzed during faults or other dynamic events and is composed of the following Modelica components:

Component|partial record|record
---------|--------------|------
OpenIPSL.Electrical|
Buses.Bus|Bus_Template|PF_Bus_00000
Branches|
PwLine|
PSSE.TwoWindingTransformer|Trafos_Template|PF_Trafos_00000
Loads.PSSE.Load|Loads_Template|PF_Loads_00000
Banks.PSSE.Shunt|

The above table identifies how OpenIPSL has chosen to simplify use of measurements. The ‘record’ column, a command within Modelica use to group variables, are the raw measurements and can be quickly swapped out for new measurements. The ‘partial record’ column, also a command within Modelica groups the meta data of the record such as the name used within the model definitions.

Measured values from bus, transformers, loads, and machines are defined with the EQ (equipment) file, but these are placeholders or initial values. Measurements are meant to be used out of the SV (state variable) file and can be rapidly switched out with the record structure.
## Component Naming
Component names must be unique. This can be accomplished simply for line (PwLine) and shunts (Banks.PSSE.Shunt) because the name is the CIM ‘IdentifiedObject.name’ that are unique to each. If it is used with the record structure, the unique name should also group the parameters. For example, all buses have a voltage and angle parameter and VBUS1 and ABUS1 would be grouped by BUS1. Transformers have terminal 1 (T1) and terminal 2 (T2) and are named 470_1_T1 and 470_1_T2 for example.

## XSLT Building Blocks
The OneMO translates the EQ-file and then creates template or function calls to the DY-file. The core building blocks are as follows:

**Output** <xsl:output indent="yes" method="text"/> sets the output of the translation to text.
**Key** <xsl:key match="cim:ConnectivityNode" name="node" use="@rdf:ID"/> uses associations within the CIM. In this case, it associates terminals with their respective components. Terminals are the Modelica bus equivalent.
**Variable** <xsl:variable name="dynamic" select="document('examples\bus-14\ieee14_DY.xml')"/> assigns a tree to a variable.
**Function** <xsl:function as="xs:string" name="gkh:compliantName">
	<xsl:param as="xs:string" name="input"/> takes individual parameters and returns an individual result.
**Template** <xsl:template name="gkh:equipmentLookup"> takes an xml-tree and returns several different types of results including another tree, individual parameters, or anything in-between. This is a push-style, reaching into the xml tree-structure, of programming. You can recursively enter a tree.
**For-each** <xsl:for-each select="cim:BusbarSection"> is very similar to the Template in what it takes and the results. This is a pull-style. It is like traditional languages.
Templates and For-each both can return multiple children of the main feature. If only and individual child is needed, then value-of is used, for example:
<xsl:value-of select="gkh:defaultNumbers(cim:BasePower/cim:BasePower.basePower,100000000)"/>

### Globabl Variables, Fuctions, Templates
Output: text
Variable: 
DY – dynamic file
TP – topology file
SV – state variable file
baseVoltages
Key:  cim namespace
ac section – AC Line Segment
base power – Base Power
bus bar – Busbar Section
bus bar equip – BusBarSection/Equipment.EquipmentContainer
conform load – Conform Load
node – Connectivity Node
execsystem – Excitation System user Defined/ExcitationSystemDynamics.SynchronousMachineDynamics
governor – Gov Steam 0/TurbineGovernorDynamics.SynchronousMachineDynamics
shunt – Linear Shunt Compensator
non conform load – Non Conform Load
power transformer – Power Transformer
PTend - Power Transformer End/PowerTransformerEnd.PowerTransformer
ppdynamics – Proprietary Parameter Dynamics/ProprietaryParameterDynamics.ExcitationSystemUser…
pssieee2b – PssIEEE2B/PowerSystemStabilizerDynamics.ExcitationSystemDynamics
ratio tap changer – Ratio Tap Changer
tap changer – Ratio Tap Changer/RatioTapChanger.TransformerEnd
regulator – Regulating Control
sync machine – Synchronous Machine
terminal – Terminal
terminal equip – Terminal/Terminal.ConductingEquipment
voltage level – Voltage Level
Function: gkh namespace
compliantName(input as string?)
baseVoltage(code as string)
defaultNumbers(input as decimal?, default as decimal)
substring-after-last-match(arg as string?, regex as string)
Template: 
gkh namespace
connectivityNode-equipmentContainer(eCcode as string)
equipmentLookup(prefix as string, keyCode as string)

cim namespace - located at the top
InitialVoltage(code as string, name as string, base as decimal)
InitialPower(code as string, name as string)
MakeMachineForCode(code as string, GenName as string)  selects dynamic parameters
	EQ file
RatioTapChanger(position as integer)
PowerTransformerEnd/PowerTransformerEnd.PowerTransformer(Name as string)
RatioTapChanger/RatioTapChanger.TransformerEnd
SynchronousMachine  selects equipment name
SynchronousMachineSimplified  Modelica GENCLS
	DY file
SynchronousMachineTimeConstantReactance (MainName as string)  Modelica GENROU and GENSAL
GovSteam0/TurbineGovernorDynamics.SynchronousMachineDynamics
ExcitationSystemUserDefined/ExcitationSystemDynamics.SynchronousMachineDynamics
PssIEEE2B/PowerSystemStabilizerDynamics.ExcitationSystemDynamics
ProprietaryParameterDynamics/ProprietaryParameterDynamics.ExcitationSystemUserDefined

Main Program
template /rdf:RDF
	for-each – cim namespace
		BusBarSection  Modelica OpenIPSL.Electrical.Buses.Bus
		ACLineSegment  Modelica OpenIPSL.Electrical.Branches.PwLine
		PowerTransformer  Modelica OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer
		LinearShuntCompensator  Modelica OpenIPSL.Electrical.Banks.PSSE.Shunt
		ConformLoad  Modelica OpenIPSL.Electrical.Loads.PSSE.Load
		SynchronousMachine  Modelica CimSystem.Generators section
		Terminal  Modelica connect section
Template – gkh:equipmentLookup
				Busbar
				Powertrans
				Acsection
				Conformload
				Shunt
				Syncmachine
				nonconformload
apply-template SynchronousMachine
for-each
TP file Topological Node  Modelica Bus_Template
TP file Topological Node  Modelica PF_Bus_00000
Power Transformer End  Modelica Trafos_Template
Power Transformer End  Modelica PF_Trafos_00000

TP/TopologicalNode – bus connections
TP/TopologicalNode – bus voltages
SV/SvPowerFlow – load flow

## Synchronous Machine
The equipment PSS/E file (ending in EQ) contains static triples. The dynamic PSS/E file (ending in DY) contains dynamic triples. Let us work through the OpenIPSL PSSE GENROU Machine (Solid Rotor Generator represented by equal mutual inductance rotor modeling). Table 1 is from the DY file.

Table 1. Map from Modelica OpenIPSL GENROU parameters to PSS/E predicatefor the dynamic triples of resource 'SynchronousMachineTimeConstantReactance'. The predicates used in this table have a prefix with the same name as the resource; for example 'RotatingMachineDynamics'. A period separates the prefix from the able PSS/E predicate name. For example, the table shows 'RotatingMachineDynamics.damping' as 'damping'.

**Modelica parameter description (name) unit|PSS/E Predicate**
d-axis transient open-circuit time constant (Tpd0) s|tpdo
d-axis sub-transient open-circuit time constant (Tppd0) s|tppdo
q-axis sub-transient open-circuit time constant (Tppq0) s|tppqo
Inertia constant (H) s|inertia
Speed damping (D)|damping
d-axis reactance (Xd)|xDirectSync
q-axis reactance (Xq)|xQuadSync
d-axis transient reactance (Xpd)|xDirectTrans
d-axis sub-transient reactance (Xppd)|xDirectSubtrans
q-axis sub-transient reactance (Xppq)|
leakage reactance (Xl)|statorLeakageReactance
Saturation factor at 1.0 pu (S10)|saturationFactor
Saturation factor at 1.2 pu (S12)|saturationFactor120
Armature resistance (R_a)|
q-axis transient reactance (Xpq)|xQuadTrans
q-axis transient open-circuit time constant (Tpq0)|tpqo
Sub-transient reactance (Xpp)|equal to Xppd by default

###Modelica parameters compared with CIM triples
Modelica OpenIPSL Directory Path: Examples -> Machines -> PSSE -> GENROU

CIM file: *_DY.xml
Top Element: cim:SynchronousMachineTimeConstantReactance
Sub-element: cim:SynchronousMachineTimeConstantReactance.modelType is equal to http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.roundRotor

#Tools
An API engine translates XSLT. Common programming languages such as .NET or Python have their own API for XSLT version 1.0. The file size of the 500 bus CIM model has forced the use of XSLT version 2.0. For XSLT (and XML) development, JAPISOFT provides an IDE called EditiX. It uses the Saxonica engine. Ultimately creation of a .NET interface by using the home edition API downloaded from http://saxon.sourceforge.net/ .

#Summary
Understanding CGMES CIM in terms of database modeling techniques simplifies the paradigm for translating the CIM to Modelica. This paper relates the XSLT commands to data modeling structures which can systematically be used to map CIM to Modelica.
Many of these database modeling techniques could be used in something other than a XSLT such as Python or .NET. However, most languages support XSLT version 1.0 and can use it with existing commands with their own XSLT engine.
Rapid translation of ENTSO-E CIM will provide system planners the advantages of Modelica in their work.
