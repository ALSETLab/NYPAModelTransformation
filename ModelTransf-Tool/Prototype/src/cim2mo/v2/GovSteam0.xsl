<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 11:34:10 CDT 2022 -->

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
	
	<xsl:key match="cim:GovSteam0/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governor" use="substring(@rdf:resource,2)"/>
	
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

</xsl:stylesheet>
