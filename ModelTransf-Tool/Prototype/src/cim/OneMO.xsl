<?xml version="1.0" encoding="UTF-8"?><xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:gkh="https://gkhsoftware.github.io/g#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" exclude-result-prefixes="xs xdt err fn" version="2.0">
	<xsl:output indent="yes" method="text"/>
	<xsl:key match="cim:ConnectivityNode" name="node" use="@rdf:ID"/>
	<xsl:key match="cim:BusbarSection" name="busbar" use="@rdf:ID"/>
	<xsl:key match="cim:Terminal" name="terminal" use="@rdf:ID"/>
	<xsl:key match="cim:PowerTransformer" name="powertrans" use="@rdf:ID"/>
	<xsl:key match="cim:ACLineSegment" name="acsection" use="@rdf:ID"/>
	<xsl:key match="cim:ConformLoad" name="conformload" use="@rdf:ID"/>
	<xsl:key match="cim:NonConformLoad" name="nonconformload" use="@rdf:ID"/>
	<xsl:key match="cim:SynchronousMachine" name="syncmachine" use="@rdf:ID"/>
	<xsl:key match="cim:BasePower" name="basepower" use="@rdf:ID"/>
	<xsl:key match="cim:LinearShuntCompensator" name="shunt" use="@rdf:ID"/>
	<xsl:key match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer" name="PTend" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:BaseVoltage" name="basevoltage" use="@rdf:ID"/>
	<xsl:key match="cim:VoltageLevel" name="voltagelevel" use="@rdf:ID"/>
	<xsl:key match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd" name="tapchanger" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:RegulatingControl" name="regulator" use="@rdf:ID"/>
	
	
<xsl:variable name="dynamic" select="document('examples\bus-14\ieee14_DY.xml')"/>
	
	<xsl:function as="xs:string" name="gkh:compliantName">
		<xsl:param as="xs:string" name="input"/>
			<xsl:choose>
				<xsl:when test="matches($input,'^[0-9]{1}[a-zA-Z0-9]')">
					<xsl:value-of select="concat('B',replace(normalize-space($input),'[^a-zA-Z0-9]','_'))"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="replace(normalize-space($input),'[^a-zA-Z0-9]','_')"/>
				</xsl:otherwise>
			</xsl:choose>
	</xsl:function>
	
	<xsl:template name="gkh:equipmentLookup">
		<xsl:param as="xs:string" name="prefix"/>
		<xsl:param as="xs:string" name="keyCode"/>
					<xsl:if test="key($keyCode,cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:compliantName(concat($prefix,key($keyCode,cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					</xsl:if>
	</xsl:template>
	
	<xsl:function as="xs:decimal" name="gkh:defaultNumbers">
		<xsl:param as="xs:decimal?" name="input"/>
		<xsl:param as="xs:decimal" name="default"/>
		<xsl:choose>
			<xsl:when test="(count($input)=0)">
				<xsl:value-of select="$default"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="format-number($input,'0.0#')"/>
			</xsl:otherwise>
		</xsl:choose>
	
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:substring-after-last-match">
	  <xsl:param as="xs:string?" name="arg"/>
	  <xsl:param as="xs:string" name="regex"/>
	
	  <xsl:sequence select="     replace($arg,concat('^.*',$regex),'')   "/>
	
	</xsl:function>
  	
	<xsl:template match="/rdf:RDF">
<xsl:text>package CimSystem "System automattically translated from PSSE CIM using XSLT_OpenIPSL."
	model </xsl:text>
			<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/>
		<xsl:text>
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =</xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:BasePower/cim:BasePower.basePower,100000000)"/>
		<xsl:text>, fn = 50.00) annotation(Placement(transformation(origin = {-188, 120}, extent = {{-12, -10}, {12, 10}}, rotation = 0), visible = true));
		inner System.Data.pfdata flowdata annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
</xsl:text>
		<xsl:for-each select="cim:BusbarSection">
			<xsl:text>OpenIPSL.Electrical.Buses.Bus </xsl:text>
			<xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>;
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Lines
:
</xsl:text>
		<xsl:for-each select="cim:ACLineSegment">
			<xsl:text>OpenIPSL.Electrical.Branches.PwLine </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('line',cim:IdentifiedObject.name))"/>
			<xsl:text>(R =</xsl:text>
			<xsl:value-of select="cim:ACLineSegment.r"/>
			<xsl:text>, X =</xsl:text>
			<xsl:value-of select="cim:ACLineSegment.x"/>
			<xsl:text>,G = </xsl:text>
			<xsl:value-of select="gkh:defaultNumbers(cim:ACLineSegment.gch,0.0)"/>
			<xsl:text>, B =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.bch,'0.0#')"/>
<xsl:text>);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Transformers:
</xsl:text>
		<xsl:for-each select="cim:PowerTransformer">
			<xsl:text>OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('XF_',cim:IdentifiedObject.description))"/>
			<xsl:text>(CZ = </xsl:text>
			<xsl:value-of select="gkh:defaultNumbers(pti:PowerTransformer.cz,1.0)"/>
			<xsl:text>, CW = </xsl:text>

			<xsl:value-of select="gkh:defaultNumbers(pti:PowerTransformer.cw,1.0)"/>
			<xsl:apply-templates select="key('PTend',@rdf:ID)"/>
			<xsl:text>);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Linear Shunt Compensators:
</xsl:text>
		<xsl:for-each select="cim:LinearShuntCompensator">
			<xsl:text>OpenIPSL.Electrical.Banks.PSSE.Shunt </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('SH-',cim:IdentifiedObject.name))"/>
			<xsl:text>(B = </xsl:text>
			<xsl:value-of select="cim:LinearShuntCompensator.bPerSection"/>
			<xsl:text>, G = </xsl:text>
			<xsl:value-of select="cim:LinearShuntCompensator.gPerSection"/>
<xsl:text>);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Conform Loads
:
</xsl:text>
		<xsl:for-each select="cim:ConformLoad">
			<xsl:text>OpenIPSL.Electrical.Loads.PSSE.Load </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('CL-',cim:IdentifiedObject.name))"/>
			<xsl:text>(angle_0 = 0</xsl:text><!--
need this-->
			<xsl:text>, v_0=</xsl:text>
			<xsl:value-of select="key('basevoltage',substring(key('voltagelevel',cim:Equipment.EquipmentContainer/substring(@rdf:resource,2))/cim:VoltageLevel.BaseVoltage/@rdf:resource,2))/cim:BaseVoltage.nominalVoltage"/>
			<xsl:text>, P_0 = </xsl:text>
			<xsl:value-of select="cim:EnergyConsumer.pfixed"/>
			<xsl:text>, Q_0 = </xsl:text>
			<xsl:value-of select="cim:EnergyConsumer.qfixed"/>
<xsl:text>);
</xsl:text>

		</xsl:for-each>
<xsl:text>// -- Generator Units:</xsl:text>
		<xsl:for-each select="cim:SynchronousMachine">
<xsl:text>
CimSystem.Generators.</xsl:text>
			<xsl:value-of select="concat('GEN',gkh:compliantName(cim:IdentifiedObject.name))"/>
<xsl:text> </xsl:text><xsl:value-of select="concat('gen',gkh:compliantName(cim:IdentifiedObject.name))"/>
<xsl:text>(V_b = flowdata.voltages.BaseVoltage</xsl:text><xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>, v_0 = flowdata.voltages.V</xsl:text><xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>, angle_0 = flowdata.voltages.A</xsl:text><xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>, P_0 = flowdata.powers.P</xsl:text><xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>, Q_0 = flowdata.powers.Q</xsl:text><xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>);</xsl:text>
		</xsl:for-each>

		<xsl:text>
equation
</xsl:text>
		<xsl:for-each select="cim:Terminal">
			<xsl:choose>
				<xsl:when test="key('busbar',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))"/>
				<xsl:otherwise>
					<xsl:text>connect(</xsl:text>
					<xsl:value-of select="gkh:compliantName(normalize-space(key('node',cim:Terminal.ConnectivityNode/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					<xsl:text>.p, </xsl:text>
					<xsl:if test="key('powertrans',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:compliantName(concat('twTransformer',key('powertrans',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.description))"/>
					</xsl:if>
					<xsl:call-template name="gkh:equipmentLookup">
						<xsl:with-param name="prefix" select="'line'"/>
						<xsl:with-param name="keyCode" select="'acsection'"/>
					</xsl:call-template>
					<xsl:call-template name="gkh:equipmentLookup">
						<xsl:with-param name="prefix" select="'CL-'"/>
						<xsl:with-param name="keyCode" select="'conformload'"/>
					</xsl:call-template>
					<xsl:call-template name="gkh:equipmentLookup">
						<xsl:with-param name="prefix" select="'gen'"/>
						<xsl:with-param name="keyCode" select="'syncmachine'"/>
					</xsl:call-template>
					<xsl:call-template name="gkh:equipmentLookup">
						<xsl:with-param name="prefix" select="'NL-'"/>
						<xsl:with-param name="keyCode" select="'nonconformload'"/>
					</xsl:call-template>
					<xsl:call-template name="gkh:equipmentLookup">
						<xsl:with-param name="prefix" select="'SH-'"/>
						<xsl:with-param name="keyCode" select="'shunt'"/>
					</xsl:call-template>
					<xsl:choose>
						<xsl:when test="cim:IdentifiedObject.name='T2'">
							<xsl:text>.n);</xsl:text>
						</xsl:when>
						<xsl:otherwise>
<xsl:text>.p);</xsl:text>
						</xsl:otherwise>
					</xsl:choose>
<xsl:text>
</xsl:text>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:for-each>
<xsl:text>
end </xsl:text>
<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/><xsl:text>;

</xsl:text>
<xsl:text>package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."
</xsl:text>
				
		<xsl:apply-templates select="cim:SynchronousMachine"/>
		
</xsl:template>
	<xsl:template match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer">
		<xsl:choose>
			<xsl:when test="../cim:TransformerEnd.endNumber='1'">
				<xsl:text>,R = </xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.r"/>
				<xsl:text>, X = </xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.x"/>
				<xsl:text>, G = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.g,'0.0#')"/>
				<xsl:text>, B = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.b,'0.0#')"/>
				<xsl:text>, ANG1 = </xsl:text>
				<xsl:value-of select="gkh:defaultNumbers(../cim:PowerTransformerEnd.phaseAngleClock,0.0)"/>
				<xsl:text>, S_n = </xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.ratedS"/>
				<xsl:text>*1e6</xsl:text>
				<xsl:text>, VB1=</xsl:text>
				<xsl:value-of select="key('basevoltage',../cim:TransformerEnd.BaseVoltage/substring(@rdf:resource,2))/cim:BaseVoltage.nominalVoltage"/>
				<xsl:text>, VNOM1=</xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.ratedU"/>
				<!--<xsl:value-of select="key('tapchanger',../@rdf:ID)/cim:TapChanger.lowStep" />-->
				<xsl:if test="key('tapchanger',../@rdf:ID)">
					<xsl:text>, t1=</xsl:text>
					<xsl:apply-templates select="key('tapchanger',../@rdf:ID)"/>
				</xsl:if>
				<xsl:if test="not(key('tapchanger',../@rdf:ID))">
					<xsl:text>, t1=1.0</xsl:text>
				</xsl:if>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>, VB2=</xsl:text>
				<xsl:value-of select="key('basevoltage',../cim:TransformerEnd.BaseVoltage/substring(@rdf:resource,2))/cim:BaseVoltage.nominalVoltage"/>
				<xsl:text>, VNOM2=</xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.ratedU"/>
				<xsl:if test="key('tapchanger',../@rdf:ID)">
					<xsl:text>, t2=</xsl:text>
					<xsl:apply-templates select="key('tapchanger',../@rdf:ID)"/>
				</xsl:if>
				<xsl:if test="not(key('tapchanger',../@rdf:ID))">
					<xsl:text>, t2=1.0</xsl:text>
				</xsl:if>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	<xsl:template match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd">
		<xsl:value-of select="../cim:RatioTapChanger.stepVoltageIncrement"/>
	</xsl:template>
	
	<xsl:template match="cim:SynchronousMachine">
		<xsl:variable name="GName">
			<xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
		</xsl:variable>
<xsl:text>
	model Gen</xsl:text>
<xsl:copy-of select="$GName"/>
<xsl:text>
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin pin annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;</xsl:text>
		<xsl:call-template name="MakeMachineForCode">
			<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
			<xsl:with-param name="GenName" select="$GName"/>
		</xsl:call-template>
<xsl:text>Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));</xsl:text>
	</xsl:template>
	<xsl:template name="MakeMachineForCode">
		<xsl:param name="code"/>
		<xsl:param name="GenName"/>
		<xsl:choose>
			<xsl:when test="$dynamic/rdf:RDF/cim:SynchronousMachineTimeConstantReactance/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]">
				<xsl:apply-templates select="$dynamic/rdf:RDF/cim:SynchronousMachineTimeConstantReactance/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]/..">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:when test="$dynamic/rdf:RDF/cim:SynchronousMachineSimplified/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]">
				<xsl:apply-templates select="$dynamic/rdf:RDF/cim:SynchronousMachineSimplified/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]/..">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>Synchronous GLEN</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
end </xsl:text>
<xsl:copy-of select="$GenName"/>
<xsl:text>;
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachineSimplified">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType"/>
		<xsl:text>OpenIPSL.Electrical.Machines.PSSE.</xsl:text><!--<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#SynchronousMachineKind.generator'">-->
		<xsl:text>GENCLS </xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>(H = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.inertia"/>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.damping"/>
		<xsl:text>, S10 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor"/>
		<xsl:text>, S12 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor120"/>
		<xsl:text>);
		equation
			connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p, GEN1.p);</xsl:text>
	</xsl:template>
	
	<xsl:template match="cim:SynchronousMachineTimeConstantReactance">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType">
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.roundRotor'">
				<xsl:text>GENROU</xsl:text>
			</xsl:if>
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.salientPole'">
				<xsl:text>GENSAL</xsl:text>
			</xsl:if>
		</xsl:variable>
		<xsl:text>
OpenIPSL.Electrical.Machines.PSSE.</xsl:text>
		<xsl:copy-of select="$GenType"/>
		<xsl:text> </xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text> (Tpd0 = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tpdo"/>
		<xsl:text>, Tppd0 = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tppdo"/>
		<xsl:text>, Tppq0 = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tppqo"/>
		<xsl:text>, Xd = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xDirectSync"/>
		<xsl:text>, Xpd = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xDirectTrans"/>
		<xsl:text>, Xppd = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans"/>
		<xsl:text>, Xq = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xQuadSync"/>
		<xsl:if test="$GenType='GENROU'">
			<xsl:text>, Xppq = </xsl:text>
			<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xQuadTrans"/>
			<xsl:text>, Tpq0 = </xsl:text>
			<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tpqo"/>
		</xsl:if>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.damping"/>
		<xsl:text>, H = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.inertia"/>
		<xsl:text>, S10 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor"/>
		<xsl:text>, S12 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor120"/>
		<xsl:text>, Xl = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.statorLeakageReactance"/>
		<xsl:text>);</xsl:text>
		<xsl:text>
equation
  connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.PMECH,</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.PMECH0);
  connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.EFD,</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.EFD0);
  connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p,</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p);
</xsl:text>
	</xsl:template>
	
</xsl:stylesheet>
