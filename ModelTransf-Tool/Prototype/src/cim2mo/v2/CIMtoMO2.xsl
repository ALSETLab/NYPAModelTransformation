<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet exclude-result-prefixes="xs xdt err fn" version="2.0" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:gkh="https://gkhsoftware.github.io/g#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

	<xsl:output indent="yes" method="text"/>
	
	<xsl:include href="SynchronousMachineTimeConstantReactance.xsl"/>
	<xsl:include href="SynchronousMachine.xsl"/>
	<xsl:include href="ACLineSegment.xsl"/>
	<xsl:include href="PowerTransformerEnd.xsl"/>
	<xsl:include href="SynchronousMachineSimplified.xsl"/>
	<xsl:include href="LinearShuntCompensator.xsl"/>
	<xsl:include href="ConformLoad.xsl"/>
	
	<xsl:param name="bus" as="xs:double"/>
	<xsl:param name="resistance" as="xs:double"/>
	<xsl:param name="reactance" as="xs:double"/>
	<xsl:param name="time" as="xs:double"/>
	<xsl:param name="time2" as="xs:double"/>
	<xsl:param name="filename" as="xs:string"/>
	
	<xsl:variable name="DY" select="document(concat($filename,'_DY.xml'))"/>
	<xsl:variable name="TP" select="document(concat($filename,'_TP.xml'))"/>
	<xsl:variable name="SV" select="document(concat($filename,'_SV.xml'))"/>
	<xsl:variable name="rdf" select="/rdf:RDF"/>
	
	<xsl:key match="cim:ACLineSegment" name="acsection" use="@rdf:ID"/>
	<xsl:key match="cim:BasePower" name="basepower" use="@rdf:ID"/>
	<xsl:key match="cim:BusbarSection" name="busbar" use="@rdf:ID"/>
	<xsl:key match="cim:BusbarSection/cim:Equipment.EquipmentContainer" name="busbarequip" use="@rdf:resource"/>
	<xsl:key match="cim:ConformLoad" name="conformload" use="@rdf:ID"/>
	<xsl:key match="cim:ConnectivityNode/cim:ConnectivityNode.ConnectivityNodeContainer" name="nodeEquipment" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:ConnectivityNode" name="node" use="@rdf:ID"/>
	<xsl:key match="cim:LinearShuntCompensator" name="shunt" use="@rdf:ID"/>
	<xsl:key match="cim:NonConformLoad" name="nonconformload" use="@rdf:ID"/>
	<xsl:key match="cim:PowerTransformer" name="powertransformer" use="@rdf:ID"/>
	<xsl:key match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer" name="PTend" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:RatioTapChanger" name="ratiotapchanger" use="@rdf:ID"/>
	<xsl:key match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd" name="tapchanger" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:RegulatingControl" name="regulator" use="@rdf:ID"/>
	<xsl:key match="cim:SynchronousMachine" name="syncmachine" use="@rdf:ID"/>
	<xsl:key match="cim:Terminal" name="terminal" use="@rdf:ID"/>
	<xsl:key match="cim:Terminal/cim:Terminal.ConductingEquipment" name="terminalequip" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:VoltageLevel" name="voltagelevel" use="@rdf:ID"/>
	<xsl:function as="xs:string" name="gkh:compliantName">
		<xsl:param as="xs:string" name="input"/>
		<xsl:choose>
			<xsl:when test="matches($input,'^\d')"><!-- Is the first position a number?-->
				<xsl:value-of select="concat('B',replace(normalize-space($input),'[^a-zA-Z0-9]','_'))"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="replace(normalize-space($input),'[^a-zA-Z0-9]','_')"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:function>
	<xsl:function as="xs:double" name="gkh:baseVoltage">
		<xsl:param as="xs:string" name="code"/>
		<xsl:sequence select="gkh:defaultNumbers($rdf/cim:BaseVoltage[@rdf:ID=$code]/cim:BaseVoltage.nominalVoltage,0.0)"/>
	</xsl:function>
	<xsl:function as="xs:double" name="gkh:baseImpedance">
		<xsl:param as="xs:string?" name="code"/>
		<xsl:param as="xs:double?" name="basePower"/>
		<xsl:param as="xs:double?" name="baseVoltage"/>
		<xsl:variable name="voltage" select="gkh:defaultNumbers(gkh:baseVoltage($code),$baseVoltage)"/>
		<xsl:value-of select="$voltage * $voltage div gkh:defaultNumbers($basePower,100)"/>
	</xsl:function>
	<xsl:function as="xs:double" name="gkh:defaultNumbers">
		<xsl:param as="xs:double?" name="input"/>
		<xsl:param as="xs:double" name="default"/>
		<xsl:choose>
			<xsl:when test="(count($input)=0) or $input=0">
				<xsl:value-of select="format-number($default,'0.000#')"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="format-number($input,'0.000#')"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:substring-after-last-match">
		<xsl:param as="xs:string?" name="arg"/>
		<xsl:param as="xs:string" name="regex"/>
		<xsl:sequence select="replace($arg,concat('^.*',$regex),'')   "/>
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:transformerName">
		<xsl:param as="xs:string" name="transformerCode"/>
		<xsl:param as="xs:string?" name="terminalCode"/>
		<xsl:variable name="name" select="replace($rdf/cim:PowerTransformer[@rdf:ID=$transformerCode]/cim:IdentifiedObject.description,' ','')"/>
		<xsl:choose>
			<xsl:when test="$terminalCode=''">
				<xsl:value-of select="gkh:compliantName(concat('T',$name))"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:variable name="term" select="$rdf/cim:Terminal[@rdf:ID=$terminalCode]/cim:IdentifiedObject.name"/>
				<xsl:value-of select="gkh:compliantName(concat('T',$name,$term))"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:busTerminalName">
		<xsl:param as="xs:string" name="terminalCode"/>
		<xsl:variable name="topoTerminal" select="$TP/rdf:RDF/cim:Terminal[@rdf:about=$terminalCode]/cim:Terminal.TopologicalNode/substring(@rdf:resource,2)"/>
		<xsl:variable name="topo" select="$TP/rdf:RDF/cim:TopologicalNode[@rdf:ID=$topoTerminal]"/>
		<xsl:value-of select="gkh:compliantName(concat($topo/cim:IdentifiedObject.name,'_',$topo/substring(@rdf:ID,6,4)))"/>
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:busName">
		<xsl:param as="xs:string" name="equipmentCode"/>
		<xsl:variable name="EQterminal" select="$rdf/cim:Terminal/cim:Terminal.ConductingEquipment[substring(@rdf:resource,2)=$equipmentCode]/../@rdf:ID"/>
		<xsl:variable name="TPterminal" select="$TP/rdf:RDF/cim:Terminal[substring(@rdf:about,2)=$EQterminal]/cim:Terminal.TopologicalNode/substring(@rdf:resource,2)"/>
		<xsl:variable name="node" select="$TP/rdf:RDF/cim:TopologicalNode[@rdf:ID=$TPterminal]"/>
		<xsl:value-of select="gkh:compliantName(concat($node/cim:IdentifiedObject.name,'_',$node/substring(@rdf:ID,6,4)))"/>
	</xsl:function>
	<xsl:function name="gkh:terminalConnectName">
		<xsl:param as="xs:string" name="terminalCode"/>
		<xsl:variable name="conducting" select="$rdf/cim:Terminal[@rdf:ID=$terminalCode]/cim:Terminal.ConductingEquipment/substring(@rdf:resource,2)"/>
		<xsl:variable name="name">
			<xsl:choose>
				<xsl:when test="$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('SH',$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:SynchronousMachine[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('gen',$rdf/cim:SynchronousMachine[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:ACLineSegment[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('line',$rdf/cim:ACLineSegment[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:NonConformLoad[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('NCL',$rdf/cim:NonConformLoad[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:ConformLoad[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('CL',$rdf/cim:ConformLoad[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:PowerTransformer[@rdf:ID=$conducting]">
					<xsl:value-of select="gkh:transformerName($conducting,'')"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="'NOT DEFINED'"/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:variable>
		<xsl:value-of select="gkh:compliantName(concat($name,substring($conducting,6,4)))"/>
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:equipmentLoadName">
		<xsl:param as="xs:string" name="equipmentCode"/>
		<xsl:variable name="terminal" select="$rdf/cim:Terminal/cim:Terminal.ConductingEquipment[substring(@rdf:resource,2)=$equipmentCode]/../@rdf:ID"/>
		<xsl:value-of select="gkh:terminalLoadName($terminal)"/>
	</xsl:function>
	<xsl:function as="xs:string" name="gkh:terminalLoadName">
		<xsl:param as="xs:string" name="terminalCode"/>
		<xsl:variable name="conducting" select="$rdf/cim:Terminal[@rdf:ID=$terminalCode]/cim:Terminal.ConductingEquipment/substring(@rdf:resource,2)"/>
		<xsl:variable name="name">
			<xsl:choose>
				<xsl:when test="$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('SH',$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:SynchronousMachine[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('GEN',$rdf/cim:SynchronousMachine[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:NonConformLoad[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('NCL',$rdf/cim:NonConformLoad[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:ConformLoad[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('CL',$rdf/cim:ConformLoad[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:PowerTransformer[@rdf:ID=$conducting]">
					<xsl:value-of select="$rdf/cim:PowerTransformer[@rdf:ID=$conducting]/cim:IdentifiedObject.name"/>
				</xsl:when>
				<xsl:when test="$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]">
					<xsl:value-of select="$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]/cim:IdentifiedObject.name"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="'NOT DEFINED'"/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:variable>
		<xsl:value-of select="gkh:compliantName(concat($name,substring($conducting,6,4)))"/>
	</xsl:function>
	<xsl:template match="/rdf:RDF">
		<xsl:variable name="SystemName" select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/>
		<xsl:text>package </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
	model </xsl:text>
		<xsl:value-of select="$SystemName"/>
		<xsl:text>
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =</xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:BasePower/cim:BasePower.basePower,100000000)"/>
		<xsl:text>, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Power_Flow pf(redeclare record PowerFlow = </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
</xsl:text>
		<xsl:for-each select="$TP/rdf:RDF/cim:TopologicalNode">
			<xsl:variable name="bus" select="gkh:compliantName(concat(cim:IdentifiedObject.name,'_',substring(@rdf:ID,6,4)))"/>
			<xsl:variable name="glen" select="@rdf:ID"/>
<xsl:text>OpenIPSL.Electrical.Buses.Bus </xsl:text>
			<xsl:copy-of select="$bus"/>
<xsl:text>(V_b = </xsl:text>
			<xsl:value-of select="gkh:baseVoltage(cim:TopologicalNode.BaseVoltage/substring(@rdf:resource,2)) * 1000"/>
<xsl:text>, v_0 = pf.powerflow.bus.V</xsl:text>
			<xsl:copy-of select="$bus"/>
<xsl:text>, angle_0 = pf.powerflow.bus.A</xsl:text>
			<xsl:copy-of select="$bus"/>
<xsl:text>);
</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Lines:
</xsl:text>
		<xsl:apply-templates select="cim:ACLineSegment"/>
		
<xsl:text>// -- Transformers:
</xsl:text>
		<xsl:apply-templates select="cim:PowerTransformerEnd">
			<xsl:sort select="cim:PowerTransformerEnd.PowerTransformer/@rdf:resource"/>
			<xsl:sort select="cim:TransformerEnd.endNumber"/>
		</xsl:apply-templates>
		
<xsl:text>// -- Linear Shunt Compensators:
</xsl:text>
		<xsl:apply-templates select="cim:LinearShuntCompensator"/>
<xsl:text>// -- Conform Loads:
</xsl:text>
		<xsl:apply-templates select="cim:ConformLoad"/>
<xsl:text>// -- Non Conform Loads:
</xsl:text>
		<xsl:for-each select="cim:NonConformLoad">
			<xsl:variable name="equipment" select="gkh:compliantName(concat('NCL',cim:IdentifiedObject.name,substring(@rdf:ID,6,4)))"/>
			<xsl:variable name="bus" select="gkh:busName(@rdf:ID)"/>
			<xsl:text>OpenIPSL.Electrical.Loads.PSSE.Load </xsl:text>
			<xsl:copy-of select="$equipment"/>
			<xsl:text>(V_b = </xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>.V_b, v_0 = pf.powerflow.bus.V</xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>,angle_0 = pf.powerflow.bus.A</xsl:text>
			<xsl:copy-of select="$bus"/>
			<xsl:text>,P_0 = pf.powerflow.loads.P</xsl:text>
			<xsl:value-of select="$equipment"/>
			<xsl:text>,Q_0 = pf.powerflow.loads.Q</xsl:text>
			<xsl:value-of select="$equipment"/>
			<xsl:text>, PQBRAK = 0.7, characteristic = 2);
			</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Generator Units:
</xsl:text>
		<xsl:for-each select="cim:SynchronousMachine">
			<xsl:variable name="gName" select="cim:IdentifiedObject.name"/>
			<xsl:variable name="gBus" select="gkh:busName(@rdf:ID)"/>
			<xsl:variable name="gLoad" select="gkh:equipmentLoadName(@rdf:ID)"/>
			<xsl:text>
</xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.Generators.</xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('GEN',$gName,substring(@rdf:ID,6,4)))"/>
			<xsl:text> </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('gen',$gName,substring(@rdf:ID,6,4)))"/>
<xsl:text>(V_b = </xsl:text>
			<xsl:value-of select="$gBus"/>
<xsl:text>.V_b, v_0 = pf.powerflow.bus.V</xsl:text>
			<xsl:value-of select="$gBus"/>
<xsl:text>, angle_0 = pf.powerflow.bus.A</xsl:text>
			<xsl:value-of select="$gBus"/>
<xsl:text>, P_0 = pf.powerflow.loads.P</xsl:text>
			<xsl:value-of select="$gLoad"/>
<xsl:text>, Q_0 = pf.powerflow.loads.Q</xsl:text>
			<xsl:value-of select="$gLoad"/>
			<xsl:text>);
			</xsl:text>
		</xsl:for-each>
		<xsl:text>
// -- Fault Event
OpenIPSL.Electrical.Events.PwFault Fault(R = </xsl:text><xsl:value-of select="$resistance"/>
<xsl:text>, X = </xsl:text><xsl:value-of select="$reactance"/>
<xsl:text>, t1 = </xsl:text><xsl:value-of select="$time"/>
<xsl:text>, t2 = </xsl:text><xsl:value-of select="$time2"/>
<xsl:text>);

</xsl:text>
<xsl:text>equation
</xsl:text>
		<xsl:for-each select="cim:Terminal">
			<xsl:choose>
				<xsl:when test="key('busbar',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))"/>
				<xsl:otherwise>
					<xsl:text>connect(</xsl:text>
					<xsl:value-of select="gkh:busTerminalName(concat('#',@rdf:ID))"/>
					<xsl:text>.p, </xsl:text>
					<xsl:value-of select="gkh:terminalConnectName(@rdf:ID)"/>
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
// -- Connect fault event:
connect(Fault.p, bus_5.p);

end </xsl:text>
		<xsl:value-of select="$SystemName"/>
		<xsl:text>;</xsl:text>
<xsl:text>package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."</xsl:text>
		<xsl:apply-templates select="cim:SynchronousMachine"/>
		<xsl:text>
end Generators;

package PF_Data "Modelica records for power flow data."
record Power_Flow " Translated and calculated power flow data."
  	extends Modelica.Icons.Record;
  	replaceable record PowerFlow = </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Power_Flow_Template constrainedby </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
  	PowerFlow powerflow;
end Power_Flow;
record Power_Flow_Template "Template for power flow"
	 extends Modelica.Icons.Record;
end Power_Flow_Template;  

record Bus_Data

partial record Bus_Template</xsl:text>
		<xsl:for-each select="$TP/rdf:RDF/cim:TopologicalNode">
			<xsl:variable name="name" select="gkh:compliantName(concat(cim:IdentifiedObject.name,'_',substring(@rdf:ID,6,4)))"/>
<xsl:text>
// </xsl:text>
			<xsl:copy-of select="$name"/>
<xsl:text>
parameter OpenIPSL.Types.PerUnit V</xsl:text>
			<xsl:copy-of select="$name"/>
<xsl:text>;
parameter OpenIPSL.Types.Angle A</xsl:text>
			<xsl:copy-of select="$name"/>
<xsl:text>;</xsl:text>
		</xsl:for-each>
		<xsl:text>end Bus_Template;
record PF_Bus_00000
	extends </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Bus_Data.Bus_Template(</xsl:text>
		<xsl:for-each select="$TP/rdf:RDF/cim:TopologicalNode">
			<xsl:call-template name="InitialVoltage">
				<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
				<xsl:with-param name="name" select="gkh:compliantName(concat(cim:IdentifiedObject.name,'_',substring(@rdf:ID,6,4)))"/>
				<xsl:with-param name="base" select="gkh:baseVoltage(substring(cim:TopologicalNode.BaseVoltage/@rdf:resource,2))"/>
			</xsl:call-template>
			<xsl:if test="position()!=last()">,</xsl:if>
		</xsl:for-each>
		<xsl:text>);
end PF_Bus_00000;
end Bus_Data;

record Loads_Data

partial record Loads_Template
</xsl:text>
		<xsl:for-each select="$SV/rdf:RDF/cim:SvPowerFlow">
			<xsl:variable name="load" select="gkh:terminalLoadName(cim:SvPowerFlow.Terminal/substring(@rdf:resource,2))"/>
			<xsl:if test="$load!=''">
<xsl:text>parameter OpenIPSL.Types.ActivePower P</xsl:text>
				<xsl:copy-of select="$load"/>
<xsl:text>;
</xsl:text>
<xsl:text>parameter OpenIPSL.Types.ReactivePower Q</xsl:text>
				<xsl:copy-of select="$load"/>
<xsl:text>;
</xsl:text>
			</xsl:if>
		</xsl:for-each>
		<xsl:text>end Loads_Template;

record PF_Loads_00000
	extends </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Loads_Data.Loads_Template(</xsl:text>
		<xsl:choose>
			<xsl:when test="$SV/rdf:RDF/cim:SvPowerFlow">
				<xsl:for-each select="$SV/rdf:RDF/cim:SvPowerFlow">
					<xsl:variable name="load" select="gkh:terminalLoadName(cim:SvPowerFlow.Terminal/substring(@rdf:resource,2))"/>
					<xsl:if test="$load!=''">
						<xsl:text>P</xsl:text>
						<xsl:copy-of select="$load"/>
						<xsl:text> = </xsl:text>
						<xsl:value-of select="abs(cim:SvPowerFlow.p*1000000)"/>
						<xsl:text>,Q</xsl:text>
						<xsl:copy-of select="$load"/>
						<xsl:text> = </xsl:text>
						<xsl:value-of select="abs(cim:SvPowerFlow.q*1000000)"/>
						<xsl:if test="position()!=last()">,</xsl:if>
					</xsl:if>
				</xsl:for-each>
			</xsl:when>
			<xsl:otherwise>
				<xsl:for-each select="cim:ConformLoad">
					<xsl:variable name="cload" select="gkh:compliantName(cim:IdentifiedObject.name)"/>
					<xsl:if test="$cload!=''">
						<xsl:text>P</xsl:text>
						<xsl:copy-of select="$cload"/>
						<xsl:text> = </xsl:text>
						<xsl:value-of select="cim:EnergyConsumer.pfixed"/>
						<xsl:text>Q</xsl:text>
						<xsl:copy-of select="$cload"/>
						<xsl:text> = </xsl:text>
						<xsl:value-of select="cim:EnergyConsumer.qfixed"/>
					</xsl:if>
				</xsl:for-each>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>);
		end PF_Loads_00000;
	end Loads_Data;

	record Trafos_Data
		partial record Trafos_Template
</xsl:text>
		<xsl:for-each select="cim:PowerTransformerEnd">
			<xsl:variable name="transformerCode" select="cim:PowerTransformerEnd.PowerTransformer/substring(@rdf:resource,2)"/>
			<xsl:variable name="terminalCode" select="cim:TransformerEnd.Terminal/substring(@rdf:resource,2)"/>
			<xsl:variable name="name" select="gkh:transformerName($transformerCode,$terminalCode)"/>

<xsl:text>parameter Real </xsl:text>
<xsl:value-of select="$name"/>
<xsl:text>;
</xsl:text>


</xsl:for-each>
<xsl:text>		end Trafos_Template;

	record PF_Trafos_00000
		extends </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Trafos_Data.Trafos_Template(</xsl:text>
		<xsl:for-each select="cim:PowerTransformerEnd">
			<xsl:variable name="transformerCode" select="cim:PowerTransformerEnd.PowerTransformer/substring(@rdf:resource,2)"/>
			<xsl:variable name="terminalCode" select="cim:TransformerEnd.Terminal/substring(@rdf:resource,2)"/>
			<xsl:value-of select="gkh:transformerName($transformerCode,$terminalCode)"/>
			<xsl:text>=</xsl:text>
			<xsl:choose>
				<xsl:when test="not(key('tapchanger',@rdf:ID))">
					<xsl:value-of select="1.0"/>
				</xsl:when>
				<xsl:otherwise><!--						<xsl:apply-templates select="key('tapchanger',@rdf:ID)">
							<xsl:with-param name="voltage" select="cim:PowerTransformerEnd.ratedU"/>
						
</xsl:apply-templates>
-->
					<xsl:value-of select="1.0"/>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:if test="position()!=last()">,</xsl:if>
		</xsl:for-each>
		<xsl:text>);
	end PF_Trafos_00000;
end Trafos_Data;

	record PF_00000
  		extends </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Power_Flow_Template;
  		replaceable record Bus = </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Bus_Data.PF_Bus_00000 constrainedby </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Bus_Data.Bus_Template "Bus power flow result";
  		Bus bus;
  		replaceable record Loads = </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Loads_Data.PF_Loads_00000 constrainedby </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Loads_Data.Loads_Template "Loads power flow result";
  		Loads loads;
		replaceable record Trafos = </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Trafos_Data.PF_Trafos_00000 constrainedby </xsl:text><xsl:value-of select="$SystemName"/><xsl:text>_package.PF_Data.Trafos_Data.Trafos_Template "Trafos power flow result";
  		Trafos trafos;
	end PF_00000;
end PF_Data;

  annotation(uses(Modelica(version = "4.0.0"), Complex, OpenIPSL(version = "3.1.0-dev")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end </xsl:text><xsl:value-of select="$SystemName"/>
<xsl:text>_package;</xsl:text>
	</xsl:template>
	<xsl:template name="InitialVoltage">
		<xsl:param as="xs:string" name="code"/>
		<xsl:param as="xs:string" name="name"/>
		<xsl:param as="xs:double" name="base"/>
		<xsl:variable name="voltNode" select="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource=$code]"/>
		<xsl:if test="$SV/rdf:RDF/cim:SvVoltage/cim:SvVoltage.TopologicalNode[@rdf:resource=$code]">
			<xsl:text>V</xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>=</xsl:text>
			<xsl:value-of select="format-number($voltNode/../cim:SvVoltage.v div $base,'0.00000#')"/>
			<xsl:text>,A</xsl:text>
			<xsl:copy-of select="$name"/>
			<xsl:text>=</xsl:text>
			<xsl:value-of select="format-number($voltNode/../cim:SvVoltage.angle*3.14159 div 180,'0.00000#')"/>
		</xsl:if>
	</xsl:template>
	<xsl:template match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd">
		<xsl:param as="xs:decimal" name="voltage"/>
		<xsl:value-of select="(../cim:TapChanger.neutralU + (../cim:TapChanger.normalStep - ../cim:TapChanger.neutralStep) * ../cim:RatioTapChanger.stepVoltageIncrement div 100) div $voltage"/>
	</xsl:template>
</xsl:stylesheet>
