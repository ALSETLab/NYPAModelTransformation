<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 12:59:31 CDT 2022 -->

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
	
	<xsl:key match="cim:ExcIEEEAC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excieeeac1a" use="substring(rdf:resource,2)"/>
	
	<xsl:template match="cim:ExcAC1A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics"><!-- EXAC1 -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.tc,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ta,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.vrmin,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.te,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.kf,'0.00000#')"/>
		<xsl:text>,T_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.tf,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.kc,'0.00000#')"/>
		<xsl:text>,K_D=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.kd,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ke,'0.00000#')"/>
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ve1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.ve2,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.seve1,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC1A.seve2,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>

</xsl:stylesheet>
