<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Thu Mar 02 08:12:14 CST 2023 -->

<xsl:stylesheet version="2.0" 
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform" 
	xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions"
	xmlns:xdt="http://www.w3.org/2005/xpath-datatypes"
	xmlns:err="http://www.w3.org/2005/xqt-errors"
	xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#"
	xmlns:gkh="https://gkhsoftware.github.io/g#"
	xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#"
	xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#"
	xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
	exclude-result-prefixes="xs xdt err fn">

	<xsl:output method="text" indent="yes"/>
	
	<xsl:template match="cim:ConformLoad">
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
	</xsl:template>

</xsl:stylesheet>
