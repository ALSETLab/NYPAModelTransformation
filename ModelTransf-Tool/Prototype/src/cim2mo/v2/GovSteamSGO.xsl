<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 12:39:23 CDT 2022 -->

<xsl:stylesheet version="2.0" 
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform" 
	xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions"
	xmlns:xdt="http://www.w3.org/2005/xpath-datatypes"
	xmlns:err="http://www.w3.org/2005/xqt-errors"
	xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#"
	xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
	exclude-result-prefixes="xs xdt err fn">

	<xsl:output method="text" indent="yes"/>
	
	<xsl:key match="cim:GovSteamSGO/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governorSG" use="substring(@rdf:resource,2)"/>
	
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

</xsl:stylesheet>
