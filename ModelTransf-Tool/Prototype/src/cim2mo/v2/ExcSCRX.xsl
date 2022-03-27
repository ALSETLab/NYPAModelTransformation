<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 12:55:02 CDT 2022 -->

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
	
	<xsl:key match="cim:ExcSCRX/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excscrx" use="substring(rdf:resource,2)"/>
	
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

</xsl:stylesheet>
