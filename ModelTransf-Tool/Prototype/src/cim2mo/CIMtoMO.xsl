<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet exclude-result-prefixes="xs xdt err fn" version="2.0" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:gkh="https://gkhsoftware.github.io/g#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output indent="yes" method="text"/>
	<xsl:param name="bus" as="xs:double"/>
	<xsl:param name="resistance" as="xs:double"/>
	<xsl:param name="reactance" as="xs:double"/>
	<xsl:param name="time" as="xs:double"/>
	<xsl:param name="duration" as="xs:double"/>
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
	<xsl:key match="cim:GovSteam0/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governor" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:GovSteamSGO/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governorSG" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:GovGAST/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governorGAST" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:GovHydro1/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governorHydro1" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:ExcitationSystemUserDefined/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="execsysuser" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:ExcSCRX/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excscrx" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcSEXS/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excsexs" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcIEEEAC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excieeeac1a" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcIEEEAC2A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excieeeac2a" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcAC2A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excac2a" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcAC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excac1a" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcIEEEDC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excieeedc1a" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:ExcIEEEST1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excieeest1a" use="substring(rdf:resource,2)"/>
	<xsl:key match="cim:LinearShuntCompensator" name="shunt" use="@rdf:ID"/>
	<xsl:key match="cim:NonConformLoad" name="nonconformload" use="@rdf:ID"/>
	<xsl:key match="cim:PowerTransformer" name="powertransformer" use="@rdf:ID"/>
	<xsl:key match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer" name="PTend" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined" name="ppdynamics" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:PowerSystemStabilizerUserDefined/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics" name="PSSUser" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics" name="pssieee2b" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:ProprietaryParameterDynamics/ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined" name="PPD" use="substring(@rdf:resource,2)"/>
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
				<xsl:when test="$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]">
					<xsl:value-of select="concat('SH',$rdf/cim:LinearShuntCompensator[@rdf:ID=$conducting]/cim:IdentifiedObject.name)"/>
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
		<xsl:for-each select="cim:ACLineSegment">
			<xsl:variable name="baseImpedance" select="gkh:baseImpedance(cim:ConductingEquipment.BaseVoltage/substring(@rdf:resource,2),0,0)"/>
<xsl:text>OpenIPSL.Electrical.Branches.PwLine </xsl:text>
			<xsl:value-of select="gkh:compliantName(concat('line',cim:IdentifiedObject.name,substring(@rdf:ID,6,4)))"/>
<xsl:text>(R =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.r div $baseImpedance,'0.000000000#')"/><!-- -->
<xsl:text>, X =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.x div $baseImpedance,'0.0000000000#')"/>
<xsl:text>,G = </xsl:text>
			<xsl:value-of select="gkh:defaultNumbers(cim:ACLineSegment.gch * $baseImpedance div 2,0.00)"/>
<xsl:text>, B =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.bch * $baseImpedance div 2,'0.0000000000#')"/>
<xsl:text>);
			</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Transformers:
</xsl:text>
		<xsl:for-each select="cim:PowerTransformerEnd">
			<xsl:sort select="cim:PowerTransformerEnd.PowerTransformer/@rdf:resource"/>
			<xsl:sort select="cim:TransformerEnd.endNumber"/>
			<xsl:variable name="baseImpedance" select="gkh:baseImpedance('',cim:PowerTransformerEnd.ratedS,cim:PowerTransformerEnd.ratedU)"/>
			<xsl:variable name="transformerCode" select="cim:PowerTransformerEnd.PowerTransformer/substring(@rdf:resource,2)"/>
			<xsl:variable name="terminalCode" select="cim:TransformerEnd.Terminal/substring(@rdf:resource,2)"/>
			<xsl:choose>
				<xsl:when test="cim:TransformerEnd.endNumber=1">
<xsl:text>OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer </xsl:text>
					<xsl:value-of select="gkh:compliantName(concat(gkh:transformerName($transformerCode,''),cim:PowerTransformerEnd.PowerTransformer/substring(@rdf:resource,7,4)))"/>
<xsl:text>(</xsl:text>
<xsl:text>R = </xsl:text>
					<xsl:value-of select="format-number(cim:PowerTransformerEnd.r div $baseImpedance,'0.00000000#')"/>
<xsl:text>, X = </xsl:text>
					<xsl:value-of select="format-number(cim:PowerTransformerEnd.x div $baseImpedance,'0.00000000#')"/>
<xsl:text>, G = </xsl:text>
					<xsl:value-of select="format-number(cim:PowerTransformerEnd.g * $baseImpedance div 2,'0.00000000#')"/>
<xsl:text>, B = </xsl:text>
					<xsl:value-of select="format-number(cim:PowerTransformerEnd.b * $baseImpedance div 2,'0.00000000#')"/>
<xsl:text>,t2 = pf.powerflow.trafos.</xsl:text>
					<xsl:value-of select="gkh:transformerName($transformerCode,$terminalCode)"/>
				</xsl:when>
				<xsl:otherwise>
<xsl:text>,t1 = pf.powerflow.trafos.</xsl:text>
					<xsl:value-of select="gkh:transformerName($transformerCode,$terminalCode)"/>
					<xsl:text>);
					</xsl:text>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:for-each>
<xsl:text>// -- Linear Shunt Compensators:
</xsl:text>
		<xsl:for-each select="cim:LinearShuntCompensator">
			<xsl:variable name="baseImpedance" select="gkh:baseImpedance(cim:Equipment.EquipmentContainer/substring(@rdf:resource,2),../cim:BasePower/cim:BasePower.basePower,cim:ShuntCompensator.nomU)"/>
<xsl:text>OpenIPSL.Electrical.Banks.PSSE.Shunt </xsl:text>
			<xsl:value-of select="gkh:equipmentLoadName(@rdf:ID)"/>
<xsl:text>(G = </xsl:text>
			<xsl:value-of select="format-number(cim:LinearShuntCompensator.gPerSection * $baseImpedance,'0.0000000000#')"/>
<xsl:text>,B = </xsl:text>
			<xsl:value-of select="format-number(cim:LinearShuntCompensator.bPerSection * $baseImpedance,'0.0000000000#')"/>
			<xsl:text>);
			</xsl:text>
		</xsl:for-each>
<xsl:text>// -- Conform Loads:
</xsl:text>
		<xsl:for-each select="cim:ConformLoad">
			<xsl:variable name="equipment" select="gkh:compliantName(concat('CL',cim:IdentifiedObject.name,substring(@rdf:ID,6,4)))"/>
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
<xsl:text>, t2 = </xsl:text><xsl:value-of select="$duration"/>
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
<xsl:text>// </xsl:text>
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

  annotation(uses(Modelica(version = "3.2.3"), Complex, OpenIPSL(version = "2.0.0-beta.1")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
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
	<xsl:template name="MakeMachineForCode">
		<xsl:param as="xs:string" name="code"/>
		<xsl:param as="xs:string" name="GenName"/>
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
				<xsl:apply-templates select="cim:HydroGeneratingUnit[@rdf:resource=$code]">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
end </xsl:text>
		<xsl:copy-of select="$GenName"/>
		<xsl:text>;</xsl:text>
	</xsl:template>
	<xsl:template match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd">
		<xsl:param as="xs:decimal" name="voltage"/>
		<xsl:value-of select="(../cim:TapChanger.neutralU + (../cim:TapChanger.normalStep - ../cim:TapChanger.neutralStep) * ../cim:RatioTapChanger.stepVoltageIncrement div 100) div $voltage"/>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachine">
		<xsl:variable name="GName">
			<xsl:value-of select="gkh:compliantName(concat('GEN',cim:IdentifiedObject.name,substring(@rdf:ID,6,4)))"/>
		</xsl:variable>
		<xsl:text>
model </xsl:text>
		<xsl:copy-of select="$GName"/>
		<xsl:text>
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	</xsl:text>
		<xsl:call-template name="MakeMachineForCode">
			<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
			<xsl:with-param name="GenName" select="$GName"/>
		</xsl:call-template>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachineSimplified">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType"/>
		<xsl:text>
		OpenIPSL.Electrical.Machines.PSSE.GENCLS machine</xsl:text>
		<xsl:text>(H = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.inertia,'0.000#')"/>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.damping,'0.000#')"/>
		<xsl:text>, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0, omega(fixed = true))  annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
		equation
			connect(machine.p, p);
  annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));</xsl:text><!--
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p, p);</xsl:text>--><!-- GEN1.p);-->
	</xsl:template>
	<xsl:template match="cim:SynchronousMachineTimeConstantReactance">
		<xsl:param name="MainName"/>
		<!-- Governors -->
		<xsl:variable name="governorGAST" select="key('governorGAST',@rdf:ID)"/>
		<xsl:variable name="governorSG" select="key('governorSG',@rdf:ID)"/>
		<xsl:variable name="governor" select="key('governor',@rdf:ID)"/>
		<xsl:variable name="gHydro1" select="key('governorHydro1',@rdf:ID)"/>
		<!-- Exciters -->
		<xsl:variable name="excsexs" select="key('excsexs',@rdf:ID)"/>
		<xsl:variable name="excieeeac1a" select="key('excieeeac1a',@rdf:ID)"/>
		<xsl:variable name="excac1a" select="key('excac1a',@rdf:ID)"/>
		<xsl:variable name="excieeeac2a" select="key('excieeeac2a',@rdf:ID)"/>
		<xsl:variable name="excac2a" select="key('excac2a',@rdf:ID)"/>
		<xsl:variable name="excieeest1a" select="key('excieeest1a',@rdf:ID)"/>
		<xsl:variable name="excieeedc1a" select="key('excieeedc1a',@rdf:ID)"/>
		<xsl:variable name="excsexs" select="key('excsexs',@rdf:ID)"/>
		<xsl:variable name="execsysuser" select="key('execsysuser',@rdf:ID)"/>
		<xsl:variable name="GenType">
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.roundRotor'">
				<xsl:choose>
					<xsl:when test="$governorSG or $governor">
						<xsl:text>GENROU</xsl:text>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>GENROE</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:if>
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.salientPole'">
				<xsl:text>GENSAL</xsl:text>
			</xsl:if>
		</xsl:variable>
		<xsl:text>
	OpenIPSL.Electrical.Machines.PSSE.</xsl:text>
		<xsl:copy-of select="$GenType"/>
		<xsl:text> machine(Tpd0 = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tpdo,'0.0000000#')"/>
		<xsl:text>, Tppd0 = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tppdo,'0.0000000#')"/>
		<xsl:if test="$GenType='GENROU' or $GenType='GENROE'">
			<xsl:text>, Tpq0 = </xsl:text>
			<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tpqo,'0.0000000#')"/>
		</xsl:if>
		<xsl:text>, Tppq0 = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tppqo,'0.0000000#')"/>
		<xsl:text>, H = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.inertia,'0.0000000#')"/>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.damping,'0.0000000#')"/>
		<xsl:text>, Xd = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectSync,'0.0000000#')"/>
		<xsl:text>, Xq = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xQuadSync,'0.0000000#')"/>
		<xsl:text>, Xpd = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectTrans,'0.000000#')"/>
		<xsl:if test="$GenType='GENROU' or $GenType='GENROE'">
			<xsl:text>, Xpq = </xsl:text>
			<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xQuadTrans,'0.000000#')"/>
		</xsl:if>
		<xsl:text>, Xppd = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans,'0.0000000#')"/>
		<xsl:text>, Xl = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.statorLeakageReactance,'0.0000000#')"/>
		<xsl:text>, S10 = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.saturationFactor,'0.0000000#')"/>
		<xsl:text>, S12 = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.saturationFactor120,'0.0000000#')"/>
		<xsl:if test="$GenType='GENROU' or $GenType='GENROE'">
			<xsl:text>, Xppq = </xsl:text>
			<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans,'0.0000000#')"/>
		</xsl:if>
		<xsl:text>, R_a = </xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:SynchronousMachineTimeConstantReactance.statorResistance,0.0000)"/>
		<xsl:text>, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	</xsl:text>
		<xsl:choose>
			<xsl:when test="$governor">
				<xsl:apply-templates select="$governor"/>
			</xsl:when>
			<xsl:when test="$governorSG">
				<xsl:apply-templates select="$governorSG"/>
			</xsl:when>
			<xsl:when test="$gHydro1">
				<xsl:apply-templates select="$gHydro1"/>
			</xsl:when>
			<xsl:when test="$governorGAST">
				<xsl:apply-templates select="$governorGAST"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.ES.</xsl:text>
		<xsl:choose>
			<xsl:when test="$excsexs">
				<xsl:apply-templates select="$excsexs"/>
			</xsl:when>
			<xsl:when test="$excieeeac1a">
				<xsl:apply-templates select="$excieeeac1a"/>
			</xsl:when>
			<xsl:when test="$excac1a">
				<xsl:apply-templates select="$excac1a"/>
			</xsl:when>
			<xsl:when test="$excieeeac2a">
				<xsl:apply-templates select="$excieeeac2a"/>
			</xsl:when>
			<xsl:when test="$excac2a">
				<xsl:apply-templates select="$excac2a"/>
			</xsl:when>
			<xsl:when test="$excieeest1a">
				<xsl:apply-templates select="$excieeest1a"/>
			</xsl:when>
			<xsl:when test="$excieeedc1a">
				<xsl:apply-templates select="$excieeedc1a"/>
			</xsl:when>
			<xsl:when test="$execsysuser">
				<xsl:value-of select="$execsysuser/../cim:IdentifiedObject.name"/>
				<xsl:text> exciter(</xsl:text>
				<xsl:variable name="exciterCode" select="$execsysuser/../@rdf:ID"/><!--Individual Parameters for ExcitationSystemUserDefined -->
				<xsl:apply-templates select="key('ppdynamics',$exciterCode)">
					<xsl:sort data-type="number" order="ascending" select="../cim:ProprietaryParameterDynamics.parameterNumber"/>
				</xsl:apply-templates>
				<xsl:choose>
					<xsl:when test="key('pssieee2b',$exciterCode)">
						<xsl:apply-templates select="key('pssieee2b',$exciterCode)"/>
					</xsl:when>
					<xsl:when test="key('PSSUser',$exciterCode)">
						<xsl:apply-templates select="key('PSSUser',$exciterCode)"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>
  ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
  // No stabilizer, so disabled will be used
  OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
equation
      connect(machine.p, p) annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));
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
	<xsl:template match="cim:GovHydro1/cim:TurbineGovernorDynamics.SynchronousMachineDynamics">
		<xsl:text>OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.rperm,'0.00000#')"/>
		<xsl:text>,r = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.rtemp,'0.00000#')"/>
		<xsl:text>,T_r = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.tr,'0.00000#')"/>
		<xsl:text>,T_f = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.tf,'0.00000#')"/>
		<xsl:text>,T_g = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.tg,'0.00000#')"/>
		<xsl:text>,VELM = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.velm,'0.00000#')"/>
		<xsl:text>,G_MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.gmax,'0.00000#')"/>
		<xsl:text>,G_MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.gmin,'0.00000#')"/>
		<xsl:text>,T_w = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.tw,'0.00000#')"/>
		<xsl:text>,A_t = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.at,'0.00000#')"/>
		<xsl:text>,D_turb = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.dturb,'0.00000#')"/>
		<xsl:text>,q_NL= </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.qnl,'0.00000#')"/>
		<xsl:text>,h0 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovHydro1.hdam,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
	</xsl:template>
	<xsl:template match="cim:GovSteamSGO/cim:TurbineGovernorDynamics.SynchronousMachineDynamics">
		<xsl:text>OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.t1,'0.00000#')"/>
		<xsl:text>,T_2 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.t2,'0.00000#')"/>
		<xsl:text>,T_3 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.t3,'0.00000#')"/>
		<xsl:text>,T_4 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.t4,'0.00000#')"/>
		<xsl:text>,T_5 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.t5,'0.00000#')"/>
		<xsl:text>,T_6 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.t6,'0.00000#')"/>
		<xsl:text>,K_1 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.k1,'0.00000#')"/>
		<xsl:text>,K_2 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.k2,'0.00000#')"/>
		<xsl:text>,K_3 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.k3,'0.00000#')"/>
		<xsl:text>,P_MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.pmax,'0.00000#')"/>
		<xsl:text>,P_MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovSteamSGO.pmin,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
	</xsl:template>
	<xsl:template match="cim:GovGAST/cim:TurbineGovernorDynamics.SynchronousMachineDynamics">
		<xsl:text>OpenIPSL.Electrical.Controls.PSSE.TG.GAST governor(R = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.r,'0.00000#')"/>
		<xsl:text>,T_1 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.t1,'0.00000#')"/>
		<xsl:text>,T_2 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.t2,'0.00000#')"/>
		<xsl:text>,T_3 = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.t3,'0.00000#')"/>
		<xsl:text>,AT = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.at,'0.00000#')"/>
		<xsl:text>,K_T = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.kt,'0.00000#')"/>
		<xsl:text>,V_MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.vmax,'0.00000#')"/>
		<xsl:text>,V_MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.vmin,'0.00000#')"/>
		<xsl:text>,D_turb = </xsl:text>
		<xsl:value-of select="format-number(../cim:GovGAST.dturb,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcIEEEST1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- ESST1 -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_AT_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEST1A.ilr,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEST1A.ka,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEST1A.kc,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEST1A.kf,'0.00000#')"/>
		<xsl:text>,E_MIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEST1A.klr,'0.00000#')"/>
		<xsl:text>,E_MAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEST1A.pssin,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcSEXS/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- SEXS -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_AT_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSEXS.tatb,'0.00000#')"/>
		<xsl:text>,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSEXS.tb,'0.00000#')"/>
		<xsl:text>,K=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSEXS.k,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSEXS.te,'0.00000#')"/>
		<xsl:text>,E_MIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSEXS.emin,'0.00000#')"/>
		<xsl:text>,E_MAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSEXS.emax,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcAC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- EXAC1 -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.tc,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ta,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.vrmin,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.te,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.kf,'0.00000#')"/>
		<xsl:text>,T_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.tf,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.kc,'0.00000#')"/>
		<xsl:text>,K_D=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.kd,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ke,'0.00000#')"/>
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ve1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ve2,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.seve1,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.seve2,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcIEEEAC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- ESAC1A -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.tc,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.ta,'0.00000#')"/>
		<xsl:text>,V_AMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.vamax,'0.00000#')"/>
		<xsl:text>,V_AMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.vamin,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.te,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.kf,'0.00000#')"/>
		<xsl:text>,T_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.tf,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.kc,'0.00000#')"/>
		<xsl:text>,K_D=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.kd,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.ke,'0.00000#')"/>
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.ve1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.ve2,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.seve1,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.seve2,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC1A.vrmin,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcIEEEDC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- ESDC1A -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.ta,'0.00000#')"/>
		<xsl:text>,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.tc,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.vrmin,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.ke,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.te,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.kf,'0.00000#')"/>
		<xsl:text>,T_F1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.tf,'0.00000#')"/>
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.efd1,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.seefd1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.efd2,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.seefd2,'0.00000#')"/>
		<xsl:text>,UE_LIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.uelin,'0.00000#')"/>
		<xsl:text>,EXCLIM=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEDC1A.exclim,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcAC2A/cim:ExcitationSystemDynamic.SynchronousMachineDynamics"><!-- EXAC2 -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.tc,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ta,'0.00000#')"/>
		<xsl:text>,K_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kb,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vrmin,'0.00000#')"/>
		<xsl:text>,V_AMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vamax,'0.00000#')"/>
		<xsl:text>,V_AMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vamin,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.te,'0.00000#')"/>
		<xsl:text>,K_L=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kl,'0.00000#')"/>
		<xsl:text>,K_H=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kh,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kf,'0.00000#')"/>
		<xsl:text>,T_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.tf,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kc,'0.00000#')"/>
		<xsl:text>,K_D=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kd,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ke,'0.00000#')"/>
		<xsl:text>,V_LR=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.lr,'0.00000#')"/><!-- ?????? -->
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ve1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ve2,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.seve1,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.seve2,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="ExcIEEEAC2A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- ESAC2A -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.tc,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.ta,'0.00000#')"/>
		<xsl:text>,V_AMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.vamax,'0.00000#')"/>
		<xsl:text>,V_AMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.vamin,'0.00000#')"/>
		<xsl:text>,K_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.kb,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.vrmin,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.te,'0.00000#')"/>
		<xsl:text>,V_FEMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.vfemax,'0.00000#')"/>
		<xsl:text>,K_H=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.kh,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.kf,'0.00000#')"/>
		<xsl:text>,T_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.tf,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.kc,'0.00000#')"/>
		<xsl:text>,K_D=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.kd,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.ke,'0.00000#')"/>
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.ve1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.ve2,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.seve1,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcIEEEAC2A.seve2,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ExcSCRX/cim:ExcitationSystemDynamics.SynchronousMachineDynamics">
		<xsl:text>OpenIPSL.Electrical.Controls.PSSE.ES.SCRX exciter(T_AT_B = </xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSCRX.tatb,'0.00000#')"/>
		<xsl:text>,T_B = </xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSCRX.tb,'0.00000#')"/>
		<xsl:text>,K = </xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSCRX.k,'0.00000#')"/>
		<xsl:text>,T_E = </xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSCRX.te,'0.00000#')"/>
		<xsl:text>,E_MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSCRX.emin,'0.00000#')"/>
		<xsl:text>,E_MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:ExcSCRX.cswitch,'0.00000#')"/>
		<xsl:text>,C_SWITCH = </xsl:text>
		<xsl:value-of select="../cim:DynamicsFunctionBlock.enabled"/>
		<xsl:text>,r_cr_fd = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
	</xsl:template>
	<xsl:template match="cim:PowerSystemStabilizerUserDefined/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics">
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.PSS.STAB2A pss(</xsl:text>
		<xsl:apply-templates select="key('PPD',@rdf:ID)"/>
	</xsl:template>
	<xsl:template match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined">
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='0'">
			<xsl:text>K_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='1'">
			<xsl:text>,T_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='2'">
			<xsl:text>,K_3</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='3'">
			<xsl:text>,T_3</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='4'">
			<xsl:text>,K_4</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='5'">
			<xsl:text>,K_5</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>,T_5</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>,H_LIM</xsl:text>
		</xsl:if>
		<xsl:text> = </xsl:text>
		<xsl:value-of select="format-number(../cim:ProprietaryParameterDynamics.floatParameterValue,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
		</xsl:text>
	</xsl:template>
	<xsl:template match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics">
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pss(T_w1=</xsl:text>
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
		<xsl:text>,T_10 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t10,'0.00000#')"/>
		<xsl:text>,T_11 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t11,'0.00000#')"/>
		<xsl:text>,V_S1MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi1max,'0.00000#')"/>
		<xsl:text>,V_S1MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi1min,'0.00000#')"/>
		<xsl:text>,V_S2MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi2max,'0.00000#')"/>
		<xsl:text>,V_S2MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi2min,'0.00000#')"/>
		<xsl:text>,V_STMAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vstmax,'0.00000#')"/>
		<xsl:text>,V_STMIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vstmin,'0.00000#')"/>
		<xsl:text>,
M = </xsl:text>
		<xsl:value-of select="../cim:PssIEEE2B.m"/>
		<xsl:text>,N = </xsl:text>
		<xsl:value-of select="../cim:PssIEEE2B.n"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
		</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined">
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='0'">
			<xsl:text>T_R</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='1'">
			<xsl:text>,K_A</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='2'">
			<xsl:text>,T_A</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='3'">
			<xsl:text>,V_RMAX</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='4'">
			<xsl:text>,V_RMIN</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='5'">
			<xsl:text>,K_E</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>,T_E</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='7'">
			<xsl:text>,K_F</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='8'">
			<xsl:text>,T_F</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='10'">
			<xsl:text>,E_1</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='11'">
			<xsl:text>,S_EE_1</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='12'">
			<xsl:text>,E_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='13'">
			<xsl:text>,S_EE_2</xsl:text>
		</xsl:if>
		<xsl:if test="not(../cim:ProprietaryParameterDynamics.parameterNumber=9)">
			<xsl:text> = </xsl:text>
			<xsl:value-of select="format-number(../cim:ProprietaryParameterDynamics.floatParameterValue,'0.00000#')"/>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='13'">
			<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
		</xsl:if>
	</xsl:template>
</xsl:stylesheet>