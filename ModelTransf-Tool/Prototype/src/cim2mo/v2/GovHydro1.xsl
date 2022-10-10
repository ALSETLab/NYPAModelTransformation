<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 12:31:50 CDT 2022 -->

<xsl:stylesheet version="3.0" 
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform" 
	xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions"
	xmlns:xdt="http://www.w3.org/2005/xpath-datatypes"
	xmlns:err="http://www.w3.org/2005/xqt-errors"
	xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#"
	xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
	exclude-result-prefixes="xs xdt err fn">

	<xsl:output method="text" indent="yes"/>
	
	<xsl:key match="cim:GovHydro1/cim:TurbineGovernorDynamics.SynchronousMachineDynamics" name="governorHydro1" use="substring(@rdf:resource,2)"/>
	
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

</xsl:stylesheet>
