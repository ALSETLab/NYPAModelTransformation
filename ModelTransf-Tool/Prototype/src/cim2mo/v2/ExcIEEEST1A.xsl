<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 12:51:25 CDT 2022 -->

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
	
	<xsl:key match="cim:ExcIEEEST1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excieeest1a" use="substring(rdf:resource,2)"/>
	
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

</xsl:stylesheet>
