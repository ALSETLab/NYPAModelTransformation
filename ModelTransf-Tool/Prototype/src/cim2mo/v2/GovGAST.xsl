<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 12:27:50 CDT 2022 -->

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
	
	<xsl:key match="cim:GovGAST/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governorGAST" use="substring(@rdf:resource,2)"/>
	
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

</xsl:stylesheet>
