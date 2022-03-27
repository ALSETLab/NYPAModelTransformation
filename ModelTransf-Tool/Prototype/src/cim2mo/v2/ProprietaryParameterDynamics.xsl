<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 14:00:20 CDT 2022 -->

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
	
	<xsl:key match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined" name="ppdynamics" use="substring(@rdf:resource,2)"/>
	<xsl:key match="cim:ExcitationSystemUserDefined/cim:ExcitationSystemDynamics.SynchronousMachineDynamics" name="execsysuser" use="substring(@rdf:resource,2)"/>
	
	<xsl:template match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined">
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='0'">
			<xsl:text>K_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='1'">
			<xsl:text>,T_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='2'">
			<xsl:text>,K_3</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='3'">
			<xsl:text>,T_3</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='4'">
			<xsl:text>,K_4</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='5'">
			<xsl:text>,K_5</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>,T_5</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>,H_LIM</xsl:text>
		</xsl:if>
		<xsl:text> = </xsl:text>
		<xsl:value-of select="format-number(../cim:ProprietaryParameterDynamics.floatParameterValue,'0.00000#')"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
		</xsl:text>
	</xsl:template>
	<xsl:template match="cim:ProprietaryParameterDynamics/cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined">
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='0'">
			<xsl:text>T_R</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='1'">
			<xsl:text>,K_A</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='2'">
			<xsl:text>,T_A</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='3'">
			<xsl:text>,V_RMAX</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='4'">
			<xsl:text>,V_RMIN</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='5'">
			<xsl:text>,K_E</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='6'">
			<xsl:text>,T_E</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='7'">
			<xsl:text>,K_F</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='8'">
			<xsl:text>,T_F</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='10'">
			<xsl:text>,E_1</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='11'">
			<xsl:text>,S_EE_1</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='12'">
			<xsl:text>,E_2</xsl:text>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='13'">
			<xsl:text>,S_EE_2</xsl:text>
		</xsl:if>
		<xsl:if test="not(../cim:ProprietaryParameterDynamics.parameterNumber=9)">
			<xsl:text> = </xsl:text>
			<xsl:value-of select="format-number(../cim:ProprietaryParameterDynamics.floatParameterValue,'0.00000#')"/>
		</xsl:if>
		<xsl:if test="../cim:ProprietaryParameterDynamics.parameterNumber='13'">
			<xsl:text>) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			</xsl:text>
		</xsl:if>
	</xsl:template>

</xsl:stylesheet>
