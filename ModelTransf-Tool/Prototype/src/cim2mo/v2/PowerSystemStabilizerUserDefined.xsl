<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 13:52:00 CDT 2022 -->

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

	
	<xsl:key match="cim:ProprietaryParameterDynamics/ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined" name="PPD" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:PowerSystemStabilizerUserDefined/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics" name="PSSUser" use="substring(@rdf:resource,2)"/>
	
	<xsl:template match="cim:PowerSystemStabilizerUserDefined/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics">
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.PSS.STAB2A pss(</xsl:text>
		<xsl:apply-templates select="key('PPD',@rdf:ID)"/>
	</xsl:template>

</xsl:stylesheet>
