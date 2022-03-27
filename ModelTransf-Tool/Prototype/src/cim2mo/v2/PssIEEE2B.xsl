<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 13:37:12 CDT 2022 -->

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
	
	<xsl:key match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics" name="pssieee2b" use="substring(@rdf:resource,2)"/>
	
	<xsl:template match="cim:PssIEEE2B/cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics">
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pss(T_w1=</xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.tw1,'0.00000#')"/>
		<xsl:text>,T_w2 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.tw2,'0.00000#')"/>
		<xsl:text>,T_6= </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t6,'0.00000#')"/>
		<xsl:text>,T_w3 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.tw3,'0.00000#')"/>
		<xsl:text>,T_w4 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.tw4,'0.00000#')"/>
		<xsl:text>,T_7 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t7,'0.00000#')"/>
		<xsl:text>,K_S2 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.ks2,'0.00000#')"/>
		<xsl:text>,K_S3 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.ks3,'0.00000#')"/>
		<xsl:text>,T_8 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t8,'0.00000#')"/>
		<xsl:text>,T_9 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t9,'0.00000#')"/>
		<xsl:text>,K_S1 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.ks1,'0.00000#')"/>
		<xsl:text>,T_1 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t1,'0.00000#')"/>
		<xsl:text>,T_2 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t2,'0.00000#')"/>
		<xsl:text>,T_3 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t3,'0.00000#')"/>
		<xsl:text>,T_4 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t4,'0.00000#')"/>
		<xsl:text>,T_10 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t10,'0.00000#')"/>
		<xsl:text>,T_11 = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.t11,'0.00000#')"/>
		<xsl:text>,V_S1MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi1max,'0.00000#')"/>
		<xsl:text>,V_S1MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi1min,'0.00000#')"/>
		<xsl:text>,V_S2MAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi2max,'0.00000#')"/>
		<xsl:text>,V_S2MIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vsi2min,'0.00000#')"/>
		<xsl:text>,V_STMAX = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vstmax,'0.00000#')"/>
		<xsl:text>,V_STMIN = </xsl:text>
		<xsl:value-of select="format-number(../cim:PssIEEE2B.vstmin,'0.00000#')"/>
		<xsl:text>,
M = </xsl:text>
		<xsl:value-of select="../cim:PssIEEE2B.m"/>
		<xsl:text>,N = </xsl:text>
		<xsl:value-of select="../cim:PssIEEE2B.n"/>
		<xsl:text>) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
		</xsl:text>
	</xsl:template>

</xsl:stylesheet>
