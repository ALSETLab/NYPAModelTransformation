<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 14:08:34 CDT 2022 -->

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
	
	<xsl:key match="cim:ExcAC2A/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="excac2a" use="substring(rdf:resource,2)"/>
	
	<xsl:template match="cim:ExcAC2A/cim:ExcitationSystemDynamic.SynchronousMachineDynamics"><!-- EXAC2 -->
		<xsl:value-of select="../cim:IdentifiedObject.name"/>
		<xsl:text> exciter(T_R=0.0,T_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.tb,'0.00000#')"/>
		<xsl:text>,T_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.tc,'0.00000#')"/>
		<xsl:text>,K_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ka,'0.00000#')"/>
		<xsl:text>,T_A=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ta,'0.00000#')"/>
		<xsl:text>,K_B=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kb,'0.00000#')"/>
		<xsl:text>,V_RMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vrmax,'0.00000#')"/>
		<xsl:text>,V_RMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vrmin,'0.00000#')"/>
		<xsl:text>,V_AMAX=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vamax,'0.00000#')"/>
		<xsl:text>,V_AMIN=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.vamin,'0.00000#')"/>
		<xsl:text>,T_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.te,'0.00000#')"/>
		<xsl:text>,K_L=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kl,'0.00000#')"/>
		<xsl:text>,K_H=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kh,'0.00000#')"/>
		<xsl:text>,K_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kf,'0.00000#')"/>
		<xsl:text>,T_F=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.tf,'0.00000#')"/>
		<xsl:text>,K_C=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kc,'0.00000#')"/>
		<xsl:text>,K_D=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.kd,'0.00000#')"/>
		<xsl:text>,K_E=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ke,'0.00000#')"/>
		<xsl:text>,V_LR=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.lr,'0.00000#')"/><!-- ?????? -->
		<xsl:text>,E_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ve1,'0.00000#')"/>
		<xsl:text>,E_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.ve2,'0.00000#')"/>
		<xsl:text>,S_EE_1=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.seve1,'0.00000#')"/>
		<xsl:text>,S_EE_2=</xsl:text>
		<xsl:value-of select="format-number(../cim:ExcAC2A.seve2,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
	</xsl:template>

</xsl:stylesheet>
