<?xml version="1.0" encoding="UTF-8"?><xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:gkh="https://gkhsoftware.github.io/g#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" exclude-result-prefixes="xs xdt err fn" version="2.0">
	<xsl:output indent="yes" method="text"/>
	
<xsl:variable name="DY" select="document('examples\bus-14\ieee14_DY.xml')"/>
<xsl:variable name="TP" select="document('examples\bus-14\ieee14_TP.xml')"/>
<xsl:variable name="SV" select="document('examples\bus-14\ieee14_SV.xml')"/>
<xsl:variable name="baseVoltages" select="/rdf:RDF/cim:BaseVoltage"></xsl:variable>

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
	<xsl:key match="cim:VoltageLevel" name="voltagelevel" use="@rdf:ID"/>
	<xsl:key match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd" name="tapchanger" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:RegulatingControl" name="regulator" use="@rdf:ID"/>
	
<xsl:key match="cim:GovSteam0/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governor" use="substring(@rdf:resource,2)"/>
<xsl:key match="cim:ExcitationSystemUserDefined/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="execsysuser" use="substring(@rdf:resource,2)"/>
<xsl:key match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined" name="ppdynamics" use="substring(@rdf:resource,2)"/>
<xsl:key match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics" name="pssieee2b"  use="substring(@rdf:resource,2)"/>

	<xsl:function as="xs:string" name="gkh:compliantName">
		<xsl:param as="xs:string?" name="input"/>
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
	  <xsl:sequence select="replace($arg,concat('^.*',$regex),'')   "/>
	</xsl:function>
	
	<xsl:template match="/rdf:RDF">
<xsl:text>package CimSystem "System automattically translated from PSSE CIM using XSLT_OpenIPSL."
	model </xsl:text>
			<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/>
		parameter Real m(quantity="Mass", unit="kg") "Mass";<xsl:text>
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =</xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:BasePower/cim:BasePower.basePower,100000000)"/>
		<xsl:text>, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner System.Data.pfdata flowdata annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
</xsl:text>
		<xsl:for-each select="cim:BusbarSection">
			<xsl:text>OpenIPSL.Electrical.Buses.Bus </xsl:text>
			<xsl:value-of select="gkh:compliantName(cim:IdentifiedObject.name)"/>
<xsl:text>(V_b = flowdata.voltages.BaseVoltage1, v_0 = flowdata.voltages.V1, angle_0 = flowdata.voltages.A1);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Lines:
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
			<xsl:text>(</xsl:text>
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
<xsl:text>// -- Conform Loads:
</xsl:text>
		<xsl:for-each select="cim:ConformLoad">
			<xsl:text>OpenIPSL.Electrical.Loads.PSSE.Load </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('CL-',cim:IdentifiedObject.name))"/>
			<xsl:text>(V_b = flowdata.voltages.BaseVoltage2, v_0 = flowdata.voltages.V2, angle_0 = flowdata.voltages.A2, </xsl:text>
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
<xsl:text>
end Generators;
  package Data "Modelica records for power flow data."
    record pfdata " Translated and calculated power flow data."
      extends Modelica.Icons.Record;
      replaceable record Voltages = voltage_data constrainedby voltage_data annotation(choicesAllMatching);
      Voltages voltages;
      replaceable record Powers = power_data constrainedby power_data annotation(choicesAllMatching);
      Powers powers;
    end pfdata;

    record voltage_data
      extends Modelica.Icons.Record;
</xsl:text>
		<xsl:for-each select="$TP/rdf:RDF/cim:TopologicalNode">
			<xsl:call-template name="baseVoltage">
				<xsl:with-param name="code" select="substring(cim:TopologicalNode.BaseVoltage/@rdf:resource,2)"/>	
				<xsl:with-param name="name" select="gkh:compliantName(cim:IdentifiedObject.description)"/>
			
			</xsl:call-template>
			<xsl:call-template name="InitialVoltage">
				<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
				<xsl:with-param name="name" select="gkh:compliantName(cim:IdentifiedObject.description)"/>
			</xsl:call-template>
      	</xsl:for-each>
	<xsl:text>
	end voltage_data;
	
	record power_data
		extends Modelica.Icons.Record;
</xsl:text>
		<xsl:for-each select="cim:Terminal">
			<xsl:call-template name="InitialPower">
				<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
				<xsl:with-param name="name" select="gkh:compliantName(cim:IdentifiedObject.description)"/>
			</xsl:call-template>
      	</xsl:for-each>
	<xsl:text>
	end power_data;
end Data;
  annotation(uses(Modelica(version = "3.2.3"), Complex, OpenIPSL(version = "2.0.0-dev")), Documentation(info = "&lt;HTML&gt; This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.&lt;HTML&gt;"));
end CimSystem;
</xsl:text>

</xsl:template>


<xsl:template name="baseVoltage">

	<xsl:param name="code"/>
	<xsl:param name="name"/>
<xsl:text>
	// </xsl:text><xsl:copy-of select="$name"/><xsl:text>
	parameter Real BaseV</xsl:text>
<xsl:copy-of select="$name"/><xsl:text>=</xsl:text>
			<xsl:value-of select="$baseVoltages[@rdf:ID=$code]/cim:BaseVoltage.nominalVoltage" />
</xsl:template>

	<xsl:template name="InitialVoltage">
		<xsl:param name="code"/>
		<xsl:param name="name"/>
		<xsl:if test="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource=$code]">
<xsl:text>
	parameter Real Measured</xsl:text><xsl:copy-of select="$name"/><xsl:text>=</xsl:text>
			<xsl:value-of select ="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource = $code]/../cim:SvVoltage.v"/>
<xsl:text>
	parameter Real A</xsl:text><xsl:copy-of select="$name"/><xsl:text>=</xsl:text>
			<xsl:value-of select ="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource = $code]/../cim:SvVoltage.angle"/>
		</xsl:if>
	</xsl:template>
	
	<xsl:template name="InitialPower">
		<xsl:param name="code"/>
		<xsl:param name="name"/>
		<xsl:if test="$SV/rdf:RDF/cim:SvPowerFlow/cim:SvPowerFlow.Terminal[@rdf:resource = $code]">
<xsl:text>	parameter Real P</xsl:text><xsl:copy-of select="$name"/><xsl:text> = </xsl:text>
			<xsl:value-of select="$SV/rdf:RDF/cim:SvPowerFlow/cim:SvPowerFlow.Terminal[@rdf:resource = $code]/../cim:SvPowerFlow.p"/>
			<xsl:text>
	parameter Real Q</xsl:text><xsl:copy-of select="$name"/><xsl:text> = </xsl:text>
			<xsl:value-of select="$SV/rdf:RDF/cim:SvPowerFlow/cim:SvPowerFlow.Terminal[@rdf:resource = $code]/../cim:SvPowerFlow.q"/>
<xsl:text>
</xsl:text>
			</xsl:if>
	</xsl:template>
	
	<xsl:template match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer">
		<xsl:choose>
			<xsl:when test="../cim:TransformerEnd.endNumber='1'">
				<xsl:text>R = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.r,'0.0#')"/>
				<xsl:text>, X = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.x,'0.0#')"/>
				<xsl:text>, G = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.g,'0.0#')"/>
				<xsl:text>, B = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.b,'0.0#')"/>
				<!--<xsl:value-of select="key('tapchanger',../@rdf:ID)/cim:TapChanger.lowStep" />-->
				<xsl:if test="key('tapchanger',../@rdf:ID)">
					<xsl:text>, t1=</xsl:text>
					<xsl:apply-templates select="key('tapchanger',../@rdf:ID)"/>
				</xsl:if>
				<xsl:if test="not(key('tapchanger',../@rdf:ID))">
					<xsl:text>, t1=1.0</xsl:text>
				</xsl:if>
				<xsl:if test="key('tapchanger',../@rdf:ID)">
					<xsl:text>, t2=</xsl:text>
					<xsl:apply-templates select="key('tapchanger',../@rdf:ID)"/>
				</xsl:if>
				<xsl:if test="not(key('tapchanger',../@rdf:ID))">
					<xsl:text>, t2=1.0</xsl:text>
				</xsl:if>
			</xsl:when>
			<xsl:otherwise>
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
	</xsl:template>
	
	<xsl:template name="MakeMachineForCode">
		<xsl:param name="code"/>
		<xsl:param name="GenName"/>
		<xsl:choose>
			<xsl:when test="$DY/rdf:RDF/cim:SynchronousMachineTimeConstantReactance/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]">
				<xsl:apply-templates select="$DY/rdf:RDF/cim:SynchronousMachineTimeConstantReactance/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]/..">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:when test="$DY/rdf:RDF/cim:SynchronousMachineSimplified/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]">
				<xsl:apply-templates select="$DY/rdf:RDF/cim:SynchronousMachineSimplified/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]/..">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>Synchronous GLEN</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>end Gen</xsl:text>
<xsl:copy-of select="$GenName"/>
<xsl:text>;
</xsl:text>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachineSimplified">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType"/>
		<xsl:text>OpenIPSL.Electrical.Machines.PSSE.GENCLS machine</xsl:text>
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
		<xsl:text> machine(Tpd0 = </xsl:text>
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
		<xsl:text>) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	</xsl:text>
<xsl:choose>
<xsl:when test="key('governor',@rdf:ID)">
	<xsl:apply-templates select="key('governor',@rdf:ID)"/>
</xsl:when>
<xsl:otherwise><xsl:text>// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text></xsl:otherwise>
</xsl:choose>
<xsl:if test="key('execsysuser',@rdf:ID)">
	<xsl:apply-templates select="key('execsysuser',@rdf:ID)"/>
</xsl:if>
<xsl:text>
equation
      connect(machine.p, pin) annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));
      connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0, 0, 127}));
      connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0, 0, 127}));
      connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0, 0, 127}));
      connect(machine.ETERM, exciter.ECOMP) annotation(Line(points = {{41, -3}, {50, -3}, {50, -30}, {-22, -30}, {-22, -10}, {-17, -10}}, color = {0, 0, 127}));
      connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0, 0, 127}));
      connect(uel.y, exciter.VUEL) annotation(Line(points = {{-19, -52}, {-10, -52}, {-10, -21}}, color = {0, 0, 127}));
      connect(oel.y, exciter.VOEL) annotation(Line(points = {{-19, -84}, {-6, -84}, {-6, -21}}, color = {0, 0, 127}));
      connect(machine.SPEED, pss.V_S1) annotation(Line(points = {{41, 7}, {46, 7}, {46, 50}, {-76, 50}, {-76, 4}, {-71, 4}}, color = {0, 0, 127}));
      connect(machine.PELEC, pss.V_S2) annotation(Line(points = {{41, 3}, {54, 3}, {54, 70}, {-84, 70}, {-84, -4}, {-71, -4}}, color = {0, 0, 127}));
      connect(governor.PMECH, machine.PMECH) annotation(Line(visible = true, points = {{-9, 30}, {10, 30}, {10, 5}, {18, 5}}, color = {0, 0, 127}));
      connect(machine.SPEED, governor.SPEED) annotation(Line(visible = true, points = {{41, 7}, {46, 7}, {46, 50}, {-34.805, 50}, {-34.805, 35.396}, {-28, 35.396}, {-28, 36}}, color = {0, 0, 127}));
      connect(machine.PMECH0, governor.PMECH0) annotation(Line(visible = true, points = {{41, 5}, {50, 5}, {50, 60}, {-40, 60}, {-40, 24}, {-28, 24}}, color = {0, 0, 127}));
      annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));
</xsl:text>
	</xsl:template>
	
<xsl:template match="cim:GovSteam0/cim:TurbineGovernorDynamics.SynchronousMachineDynamics">
<xsl:text>OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 governor(R = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.r,'0.00000#')"/>
		<xsl:text>,T_1 = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.t1,'0.00000#')"/>
		<xsl:text>,V_MAX = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.vmax,'0.00000#')"/>
		<xsl:text>,V_MIN = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.vmin,'0.00000#')"/>
		<xsl:text>,T_2 = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.t2,'0.00000#')"/>
		<xsl:text>,T_3 = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.t3,'0.00000#')"/>
		<xsl:text>,D_t = </xsl:text>
<xsl:value-of select="format-number(../cim:GovSteam0.dt,'0.00000#')"/>
<xsl:text>) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
	</xsl:template>
	
	<xsl:template match="cim:ExcitationSystemUserDefined/cim:ExcitationSystemDynamics.SynchronousMachineDynamics">
	
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(</xsl:text>
		<xsl:apply-templates select="key('ppdynamics',../@rdf:ID)"/>
		<xsl:if test="key('pssieee2b',../@rdf:ID)">
			<xsl:apply-templates select="key('pssieee2b',../@rdf:ID)"/>
		</xsl:if>
	</xsl:template>
	

<xsl:template match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics">
	
	<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2A pss(M = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.m,'0.00000#')"/>
		<xsl:text>,N = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.n,'0.00000#')"/>
		<xsl:text>,T_w1 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.tw1,'0.00000#')"/>
		<xsl:text>,T_w2 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.tw2,'0.00000#')"/>
		<xsl:text>,T_6= </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t6,'0.00000#')"/>
		<xsl:text>,T_w3 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.tw3,'0.00000#')"/>
		<xsl:text>,T_w4 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.tw4,'0.00000#')"/>
		<xsl:text>,T_7 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t7,'0.00000#')"/>
		<xsl:text>,K_S2 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.ks2,'0.00000#')"/>
		<xsl:text>,K_S3 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.ks3,'0.00000#')"/>
		<xsl:text>,T_8 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t8,'0.00000#')"/>
		<xsl:text>,T_9 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t9,'0.00000#')"/>
		<xsl:text>,K_S1 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.ks1,'0.00000#')"/>
		<xsl:text>,T_1 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t1,'0.00000#')"/>
		<xsl:text>,T_2 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t2,'0.00000#')"/>

		<xsl:text>,T_3 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t3,'0.00000#')"/>

		<xsl:text>,T_4 = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.t4,'0.00000#')"/>

		<xsl:text>,V_STMAX = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.vstmax,'0.00000#')"/>

		<xsl:text>,V_STMIN = </xsl:text>
<xsl:value-of select="format-number(../cim:PssIEEE2B.vstmin,'0.00000#')"/>

		<xsl:text>) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));</xsl:text>
	
</xsl:template>

	<xsl:template match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined">
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='0'"><xsl:text>T_R</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='1'"><xsl:text>K_A</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='2'"><xsl:text>T_A</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='3'"><xsl:text>V_RMAX</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='4'"><xsl:text>V_RMIN</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='5'"><xsl:text>K_E</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'"><xsl:text>T_E</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='7'"><xsl:text>K_F</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='8'"><xsl:text>T_F</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='9'"><xsl:text>?????????</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='10'"><xsl:text>E_1</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='11'"><xsl:text>S_EE_1</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='12'"><xsl:text>E_2</xsl:text></xsl:if>
	<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='13'"><xsl:text>S_EE_2</xsl:text></xsl:if>
	<xsl:text> = </xsl:text><xsl:value-of select="format-number(../cim:ProprietaryParameterDynamics.floatParameterValue,'0.00000#')"/>
	<xsl:choose>
		<xsl:when test="../cim:ProprietaryParameterDynamics.parameterNumber='13'"><xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));</xsl:text></xsl:when>
		<xsl:otherwise><xsl:text>,</xsl:text></xsl:otherwise>
	</xsl:choose>
	</xsl:template>
</xsl:stylesheet>
