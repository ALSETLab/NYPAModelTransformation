<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Feb 26 16:04:40 CST 2023 -->

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
	
<xsl:template match="cim:PowerTransformerEnd">
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
<xsl:text>,t1 = pf.powerflow.trafos.</xsl:text>
		<xsl:value-of select="gkh:transformerName($transformerCode,$terminalCode)"/>
		</xsl:when>
		<xsl:otherwise>
<xsl:text>,t2 = pf.powerflow.trafos.</xsl:text>
		<xsl:value-of select="gkh:transformerName($transformerCode,$terminalCode)"/>
<xsl:text>);
</xsl:text>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

</xsl:stylesheet>
