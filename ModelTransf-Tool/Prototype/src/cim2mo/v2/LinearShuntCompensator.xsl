<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Thu Mar 02 07:37:34 CST 2023 -->

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
	
	<xsl:template match="cim:LinearShuntCompensator">
<xsl:variable name="baseImpedance" select="gkh:baseImpedance(cim:Equipment.EquipmentContainer/substring(@rdf:resource,2),../cim:BasePower/cim:BasePower.basePower,cim:ShuntCompensator.nomU)"/>

<xsl:text>OpenIPSL.Electrical.Banks.PSSE.Shunt </xsl:text>
	<xsl:value-of select="gkh:equipmentLoadName(@rdf:ID)"/>
<xsl:text>(G = </xsl:text>
	<xsl:value-of select="format-number(cim:LinearShuntCompensator.gPerSection * $baseImpedance,'0.0000000000#')"/>
<xsl:text>,B = </xsl:text>
	<xsl:value-of select="format-number(cim:LinearShuntCompensator.bPerSection * $baseImpedance,'0.0000000000#')"/>
<xsl:text>);
</xsl:text>
	</xsl:template>

</xsl:stylesheet>
