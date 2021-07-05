<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet exclude-result-prefixes="xs xdt err fn" version="2.0" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:gkh="https://gkhsoftware.github.io/g#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output indent="yes" method="text"/>
	<xsl:variable name="DY" select="document('examples\bus-14\ieee14_DY.xml')"/>
	<xsl:variable name="TP" select="document('examples\bus-14\ieee14_TP.xml')"/>
	<xsl:variable name="SV" select="document('examples\bus-14\ieee14_SV.xml')"/>
	<xsl:variable name="rdf" select="/rdf:RDF"/>
	
	<xsl:key name="acsection" match="cim:ACLineSegment" use="@rdf:ID"/>
	<xsl:key name="basepower" match="cim:BasePower" use="@rdf:ID"/>
	<xsl:key name="busbar" match="cim:BusbarSection" use="@rdf:ID"/>
	<xsl:key name="busbarequip" match="cim:BusbarSection/cim:Equipment.EquipmentContainer" use="@rdf:resource"/>
	<xsl:key name="conformload" match="cim:ConformLoad" use="@rdf:ID"/>
	<xsl:key name="node" match="cim:ConnectivityNode" use="@rdf:ID"/>
	<xsl:key name="execsysuser" match="cim:ExcitationSystemUserDefined/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" use="substring(@rdf:resource,2)"/>
	<xsl:key name="governor" match="cim:GovSteam0/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" use="substring(@rdf:resource,2)"/>
	<xsl:key name="shunt" match="cim:LinearShuntCompensator" use="@rdf:ID"/>
	<xsl:key name="nonconformload" match="cim:NonConformLoad" use="@rdf:ID"/>
	<xsl:key name="powertransformer" match="cim:PowerTransformer" use="@rdf:ID"/>
	<xsl:key name="PTend" match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer" use="substring(@rdf:resource,2)"/>
	<xsl:key name="ppdynamics" match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined" use="substring(@rdf:resource,2)"/>
	<xsl:key name="pssieee2b" match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics" use="substring(@rdf:resource,2)"/>
	<xsl:key name="ratiotapchanger" match="cim:RatioTapChanger" use="@rdf:ID"/>
	<xsl:key name="tapchanger" match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd" use="substring(@rdf:resource,2)"/>
	<xsl:key name="regulator" match="cim:RegulatingControl" use="@rdf:ID"/>
	<xsl:key name="syncmachine" match="cim:SynchronousMachine" use="@rdf:ID"/>
	<xsl:key name="terminal" match="cim:Terminal" use="@rdf:ID"/>
	<xsl:key name="terminalequip" match="cim:Terminal/cim:Terminal.ConductingEquipment" use="substring(@rdf:resource,2)"/>
	<xsl:key name="voltagelevel" match="cim:VoltageLevel" use="@rdf:ID"/>
	
	<xsl:function as="xs:string" name="gkh:compliantName">
		<xsl:param as="xs:string?" name="input"/>
		<xsl:choose>
			<xsl:when test="matches($input,'^[0-9]{1}[a-zA-Z0-9]')">
				<xsl:value-of select="concat('B',replace(normalize-space($input),'[^a-zA-Z0-9]','_'))"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="replace(replace($input,' ',''),'[^a-zA-Z0-9]','_')"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:function>
	
	<xsl:function as="xs:decimal" name="gkh:baseVoltage">
		<xsl:param as="xs:string" name="code"/>
		<xsl:value-of select="$rdf/cim:BaseVoltage[@rdf:ID=$code]/cim:BaseVoltage.nominalVoltage"/>
	</xsl:function>
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
	
	<xsl:template name="gkh:connectivityNodeBus">
<!--Conform Load 'Bus' for SV Load-->
		<xsl:param as="xs:string" name="equipmentContainerCode" />
		<xsl:variable name="cNcode" select="key('terminalequip',$equipmentContainerCode)/../cim:Terminal.ConnectivityNode/substring(@rdf:resource,2)"/>
		<xsl:value-of select="normalize-space(key('node',$cNcode)/cim:IdentifiedObject.name)"/>
	</xsl:template>
	
	<xsl:function name="gkh:conformloadName"><!--Conform Load parameters name for SV Load-->
		<xsl:param as="xs:string" name="terminalCode"/>
		<xsl:variable name="conducting" select="$rdf/cim:Terminal[@rdf:ID=$terminalCode]/cim:Terminal.ConductingEquipment/substring(@rdf:resource,2)"/>
		<xsl:value-of select="$rdf/cim:ConformLoad[@rdf:ID=$conducting]/cim:IdentifiedObject.name"/>
		<xsl:value-of select="$rdf/cim:SynchronousMachine[@rdf:ID=$conducting]/cim:IdentifiedObject.name"/>
		<xsl:value-of select="$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]/cim:IdentifiedObject.name"/>
	</xsl:function>
	
	<xsl:template name="gkh:equipmentLookup">
		<xsl:param as="xs:string" name="prefix"/>
		<xsl:param as="xs:string" name="keyCode"/>
		<xsl:if test="key($keyCode,cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
			<xsl:value-of select="gkh:compliantName(concat($prefix,key($keyCode,cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
		</xsl:if>
	</xsl:template>
	
	<xsl:template match="/rdf:RDF">
		<xsl:text>)package CimSystem "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
	model </xsl:text>
		<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/>
		<xsl:text>
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =</xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:BasePower/cim:BasePower.basePower,100000000)"/>
		<xsl:text>, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner System.PF_Data.Power_Flow pf(redeclare record PowerFlow = System.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
</xsl:text>
		<xsl:for-each select="cim:BusbarSection">
			<xsl:variable name="bus" select="gkh:compliantName(cim:IdentifiedObject.name)"/>
			<xsl:text>OpenIPSL.Electrical.Buses.Bus </xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>(V_b = </xsl:text>
			<xsl:value-of select="gkh:baseVoltage(key('voltagelevel',cim:Equipment.EquipmentContainer/substring(@rdf:resource,2))/cim:VoltageLevel.BaseVoltage/substring(@rdf:resource,2)) * 1000"/>
			<xsl:text>, v_0 = pf.powerflow.bus.V</xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>, angle_0 = pf.powerflow.bus.A</xsl:text>
			<xsl:copy-of select="$bus"/>
<xsl:text>);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Lines:
</xsl:text>
		<xsl:for-each select="cim:ACLineSegment">
			<xsl:text>OpenIPSL.Electrical.Branches.PwLine </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('line',cim:IdentifiedObject.name))"/>
			<xsl:text>(R =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.r,'0.0000000000#')"/>
			<xsl:text>, X =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.x,'0.0000000000#')"/>
			<xsl:text>,G = </xsl:text>
			<xsl:value-of select="gkh:defaultNumbers(cim:ACLineSegment.gch,0.0)"/>
			<xsl:text>, B =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.bch,'0.0000000000#')"/>
<xsl:text>);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Transformers:
</xsl:text>
		<xsl:for-each select="cim:PowerTransformer">
			<xsl:variable name="Name" select="gkh:compliantName(cim:IdentifiedObject.description)"/>
			<xsl:text>OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer </xsl:text>
			<xsl:value-of select="concat('twTransformer',$Name)"/>
			<xsl:text>(</xsl:text>
			<xsl:apply-templates select="key('PTend',@rdf:ID)">
				<xsl:with-param name="Name" select="$Name"/>
			</xsl:apply-templates>
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
			<xsl:variable name="bus">
				<xsl:call-template name="gkh:connectivityNodeBus">
					<xsl:with-param name="equipmentContainerCode" select="@rdf:ID"/>
				</xsl:call-template>
			</xsl:variable>
			<xsl:text>OpenIPSL.Electrical.Loads.PSSE.Load </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('CL-',cim:IdentifiedObject.name))"/>
			<xsl:text>(V_b = </xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>.V_b, v_0 = pf.powerflow.bus.V</xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>, angle_0 = pf.powerflow.bus.A</xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>, P</xsl:text><xsl:value-of select="cim:IdentifiedObject.name"/><xsl:text> = </xsl:text>
			<xsl:value-of select="cim:EnergyConsumer.pfixed"/>
			<xsl:text>, Q</xsl:text><xsl:value-of select="cim:IdentifiedObject.name"/><xsl:text> = </xsl:text>
			<xsl:value-of select="cim:EnergyConsumer.qfixed"/>
<xsl:text>);
</xsl:text>
		</xsl:for-each>
		<xsl:text>// -- Generator Units:</xsl:text>
		<xsl:for-each select="cim:SynchronousMachine">
			<xsl:variable name="gName" select="gkh:compliantName(cim:IdentifiedObject.name)"/>
			<xsl:variable name="gBus" select="key('busbarequip',cim:Equipment.EquipmentContainer/@rdf:resource)/../cim:IdentifiedObject.name"/>
			<xsl:text>
CimSystem.Generators.</xsl:text>
			<xsl:value-of select="concat('GEN',$gName)"/>
			<xsl:text> </xsl:text>
			<xsl:value-of select="concat('gen',$gName)"/>
			<xsl:text>(V_b = </xsl:text>
			<xsl:value-of select="$gBus"/>
			<xsl:text>.V_b, v_0 = flowdata.voltages.V</xsl:text>
			<xsl:value-of select="$gBus"/>
			<xsl:text>, angle_0 = flowdata.voltages.A</xsl:text>
			<xsl:value-of select="$gBus"/>
			<xsl:text>, P_0 = flowdata.powers.P</xsl:text>
			<xsl:value-of select="$gName"/>
			<xsl:text>, Q_0 = flowdata.powers.Q</xsl:text>
			<xsl:value-of select="$gName"/>
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
					<xsl:if test="key('powertransformer',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:compliantName(concat('twTransformer',key('powertransformer',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.description))"/>
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
		<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/>
		<xsl:text>;
</xsl:text>
		<xsl:text>package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."</xsl:text>
		<xsl:apply-templates select="cim:SynchronousMachine"/>
		<xsl:text>
end Generators;

package PF_Data "Modelica records for power flow data."
record Power_Flow " Translated and calculated power flow data."
  	extends Modelica.Icons.Record;
  	replaceable record PowerFlow = System.PF_Data.Power_Flow_Template constrainedby System.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
  	PowerFlow powerflow;
end Power_Flow;
record PowerFlow = System.PF_Data.Power_Flow_Template;
record Power_Flow_Template "Template for power flow"
	 extends Modelica.Icons.Record;
end Power_Flow_Template;  

record Bus_Data

partial record Bus_Template
</xsl:text>
		<xsl:for-each select="$TP/rdf:RDF/cim:TopologicalNode">
			<xsl:variable name="name" select="gkh:compliantName(cim:IdentifiedObject.description)"/>
			<xsl:text>// </xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>
parameter OpenIPSL.Types.PerUnit V</xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>
parameter OpenIPSL.Types.Angle A</xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>
</xsl:text>
		</xsl:for-each>
		<xsl:text>end Bus_Template;
record PF_Bus_00000
	extends System.PF_Data.Bus_Data.Bus_Template(</xsl:text>
		<xsl:for-each select="$TP/rdf:RDF/cim:TopologicalNode">
			<xsl:call-template name="InitialVoltage">
				<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
				<xsl:with-param name="name" select="gkh:compliantName(cim:IdentifiedObject.description)"/>
				<xsl:with-param name="base" select="gkh:baseVoltage(substring(cim:TopologicalNode.BaseVoltage/@rdf:resource,2))"/>
			</xsl:call-template>
			<xsl:text>,</xsl:text>
		</xsl:for-each>
		<xsl:text>)
end PF_Bus_00000;
end Bus_Data;

record Loads_Data

partial record Load_Template
</xsl:text>
		<xsl:for-each select="$SV/rdf:RDF/cim:SvPowerFlow">
			<xsl:variable name="load" select="gkh:conformloadName(cim:SvPowerFlow.Terminal/substring(@rdf:resource,2))"/>
<xsl:text>parameter OpenIPSL.Types.ActivePower P</xsl:text>
<xsl:copy-of select="$load"/>
<xsl:text>;
</xsl:text>
<xsl:text>parameter OpenIPSL.Types.ReactivePower Q</xsl:text>
<xsl:copy-of select="$load"/>
<xsl:text>;
</xsl:text>
		</xsl:for-each>
<xsl:text>end Loads_Template;

record PF_Loads_00000
	extends System.PF_Data.Loads_Data.Loads_Template(</xsl:text>
<xsl:choose>
	<xsl:when test="$SV/rdf:RDF/cim:SvPowerFlow">
		<xsl:for-each select="$SV/rdf:RDF/cim:SvPowerFlow">
			<xsl:variable name="load" select="gkh:conformloadName(cim:SvPowerFlow.Terminal/substring(@rdf:resource,2))"/>
	<xsl:text>P</xsl:text>
<xsl:copy-of select="$load"/>
<xsl:text> = </xsl:text>
	<xsl:value-of select="cim:SvPowerFlow.p*1000000"/>
	<xsl:text>,Q</xsl:text>
<xsl:copy-of select="$load"/>
<xsl:text> = </xsl:text>
	<xsl:value-of select="cim:SvPowerFlow.q*1000000"/>
	<xsl:text>,</xsl:text>
		</xsl:for-each>
	</xsl:when>
	<xsl:otherwise>
		<xsl:for-each select="cim:ConformLoad">
			<xsl:variable name="cload" select="gkh:compliantName(cim:IdentifiedObject.name)"/>
			<xsl:text>P</xsl:text><xsl:copy-of select="$cload"/><xsl:text> = </xsl:text><xsl:value-of select="cim:EnergyConsumer.pfixed"/>
			<xsl:text>Q</xsl:text><xsl:copy-of select="$cload"/><xsl:text> = </xsl:text><xsl:value-of select="cim:EnergyConsumer.qfixed"/>
		</xsl:for-each>
	</xsl:otherwise>
</xsl:choose>
<xsl:text>)
end PF_Loads_00000;

end Loads_Data;

record Trafos_Data

partial record Trafos_Template</xsl:text>
	<xsl:for-each select="cim:PowerTransformerEnd">
			<xsl:variable name="name" select="gkh:compliantName(key('powertransformer',cim:PowerTransformerEnd.PowerTransformer/substring(@rdf:resource,2))/cim:IdentifiedObject.description)" />
			<xsl:variable name="term" select="key('terminal',cim:TransformerEnd.Terminal/substring(@rdf:resource,2))/cim:IdentifiedObject.name"/>
<xsl:text>
parameter Real </xsl:text><xsl:value-of select="concat($name,$term)"/><xsl:text>;</xsl:text>
	</xsl:for-each>
<xsl:text>
end Trafos_Template;

record PF_Trafos_00000
  extends System.PF_Data.Trafos_Data.Trafos_Template(</xsl:text>

			<xsl:for-each select="cim:PowerTransformerEnd">
				<xsl:variable name="name" select="gkh:compliantName(key('powertransformer',cim:PowerTransformerEnd.PowerTransformer/substring(@rdf:resource,2))/cim:IdentifiedObject.description)" />
				<xsl:variable name="term" select="key('terminal',cim:TransformerEnd.Terminal/substring(@rdf:resource,2))/cim:IdentifiedObject.name"/>
				<xsl:text>,</xsl:text>
				<xsl:value-of select="concat($name,$term)"/><xsl:text>=</xsl:text>
				<xsl:choose>
					<xsl:when test="not(key('tapchanger',@rdf:ID))">
						<xsl:value-of select="format-number(cim:PowerTransformerEnd.ratedU,'0.0#')"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:apply-templates select="key('tapchanger',@rdf:ID)"/>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:for-each>
<xsl:text>)
end PF_Trafos_00000;

end Trafos_Data;

end PF_Data;

  annotation(uses(Modelica(version = "3.2.3"), Complex, OpenIPSL(version = "2.0.0-dev")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end CimSystem;</xsl:text>
	</xsl:template>
	
	<xsl:template name="InitialVoltage">
		<xsl:param name="code"/>
		<xsl:param name="name"/>
		<xsl:param name="base"/>
		<xsl:if test="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource=$code]">
			<xsl:text>V</xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>=</xsl:text>
			<xsl:value-of select="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource = $code]/../cim:SvVoltage.v div $base"/>
			<xsl:text>,A</xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>=</xsl:text>
			<xsl:value-of select="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource = $code]/../cim:SvVoltage.angle*2*3.14159 div 180"/>
		</xsl:if>
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
		<xsl:text>;</xsl:text>
	</xsl:template>
	
	<xsl:template match="cim:RatioTapChanger">
		<xsl:param name="position"/>
		<xsl:copy-of select="$position"></xsl:copy-of>
		<xsl:value-of select="cim:TapChanger.neutralU + ($position - cim:TapChanger.neutralStep) * cim:RatioTapChanger.stepVoltageIncrement div 100"></xsl:value-of>
	</xsl:template>
	
	<xsl:template match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer">
		<xsl:param name="Name"/>
		<xsl:variable name="term" select="key('terminal',../cim:TransformerEnd.Terminal/substring(@rdf:resource,2))/cim:IdentifiedObject.name"/>
		<xsl:choose>
			<xsl:when test="'T1'=$term">
				<xsl:text>R = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.r,'0.0#')"/>
				<xsl:text>, X = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.x,'0.0#')"/>
				<xsl:text>, G = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.g,'0.0#')"/>
				<xsl:text>, B = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.b,'0.0#')"/>
				<xsl:text>,</xsl:text><xsl:value-of select="lower-case($term)"/>
				<xsl:text> = pf.powerflow.trafos.</xsl:text>
<xsl:value-of select="concat($Name,$term)"/>
			</xsl:when>
			<xsl:otherwise>
<xsl:text>,</xsl:text><xsl:value-of select="lower-case($term)"/>
<xsl:text> = pf.powerflow.trafos.</xsl:text>
<xsl:value-of select="concat($Name,$term)"/>
<xsl:text>);
</xsl:text>
			</xsl:otherwise>
			</xsl:choose>
	</xsl:template>
	<xsl:template match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd">
		<xsl:value-of select="../cim:TapChanger.neutralU + (../cim:TapChanger.normalStep - ../cim:TapChanger.neutralStep) * ../cim:RatioTapChanger.stepVoltageIncrement div 100"></xsl:value-of>
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
			<xsl:otherwise>
				<xsl:text>// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
			</xsl:otherwise>
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
      annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));</xsl:text>
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
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='0'">
			<xsl:text>T_R</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='1'">
			<xsl:text>K_A</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='2'">
			<xsl:text>T_A</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='3'">
			<xsl:text>V_RMAX</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='4'">
			<xsl:text>V_RMIN</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='5'">
			<xsl:text>K_E</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>T_E</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='7'">
			<xsl:text>K_F</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='8'">
			<xsl:text>T_F</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='9'">
			<xsl:text>?????????</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='10'">
			<xsl:text>E_1</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='11'">
			<xsl:text>S_EE_1</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='12'">
			<xsl:text>E_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='13'">
			<xsl:text>S_EE_2</xsl:text>
		</xsl:if>
		<xsl:text> = </xsl:text>
		<xsl:value-of select="format-number(../cim:ProprietaryParameterDynamics.floatParameterValue,'0.00000#')"/>
		<xsl:choose>
			<xsl:when test="../cim:ProprietaryParameterDynamics.parameterNumber='13'">
				<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>,</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
</xsl:stylesheet>
