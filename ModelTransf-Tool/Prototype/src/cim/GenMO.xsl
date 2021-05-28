<?xml version="1.0" encoding="UTF-8"?><!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sat Jan 16 11:54:55 CST 2021 --><xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:gkh="https://gkhsoftware.github.io/g#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" exclude-result-prefixes="xs xdt err fn" version="2.0">
	<xsl:output indent="no" method="text"/>
	<xsl:variable name="dynamic" select="document('examples\bus-14\ieee14_DY.xml')"/>
	<xsl:function as="xs:string" name="gkh:transformerName">
		<xsl:param as="xs:string" name="input"/>
		<xsl:choose>
			<xsl:when test="matches($input,'^[0-9]{1}[a-zA-Z0-9]')">
				<xsl:value-of select="concat('B',replace($input,'[^a-zA-Z0-9]','_'))"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="replace($input,'[^a-zA-Z0-9]','_')"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:function>
	<xsl:template match="/rdf:RDF">
		<xsl:apply-templates select="cim:SynchronousMachine"/>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachine">
		<xsl:variable name="GName">
			<xsl:text>SM</xsl:text>
			<xsl:value-of select="gkh:transformerName(cim:IdentifiedObject.name)"/>
		</xsl:variable>
		<xsl:text>model </xsl:text>
		<xsl:copy-of select="$GName"/>
		<xsl:text>
		OpenIPSL.Interfaces.PwPin n;
</xsl:text>
		<xsl:call-template name="MakeMachineForCode">
			<xsl:with-param name="code" select="concat('#',@rdf:ID)"/>
			<xsl:with-param name="GenName" select="$GName"/>
		</xsl:call-template>
	</xsl:template>
	<xsl:template name="MakeMachineForCode">
		<xsl:param name="code"/>
		<xsl:param name="GenName"/>
		<xsl:choose>
			<xsl:when test="$dynamic/rdf:RDF/cim:SynchronousMachineTimeConstantReactance/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]">
				<xsl:apply-templates select="$dynamic/rdf:RDF/cim:SynchronousMachineTimeConstantReactance/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]/..">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:when test="$dynamic/rdf:RDF/cim:SynchronousMachineSimplified/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]">
				<xsl:apply-templates select="$dynamic/rdf:RDF/cim:SynchronousMachineSimplified/cim:SynchronousMachineDynamics.SynchronousMachine[@rdf:resource=$code]/..">
					<xsl:with-param name="MainName" select="$GenName"/>
				</xsl:apply-templates>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>Synchronous GLEN</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
end </xsl:text>
<xsl:copy-of select="$GenName"/>
<xsl:text>;
			</xsl:text>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachineSimplified">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType"/>
		<xsl:text>OpenIPSL.Electrical.Machines.PSSE.</xsl:text><!--<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#SynchronousMachineKind.generator'">-->
		<xsl:text>GENCLS </xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>(H = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.inertia"/>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.damping"/>
		<xsl:text>, S10 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor"/>
		<xsl:text>, S12 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor120"/>
		<xsl:text>);
		equation
			connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p, GEN1.p);</xsl:text>
	</xsl:template>
	<xsl:template match="cim:SynchronousMachineTimeConstantReactance">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType">
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.roundRotor'">
				<xsl:text>GENROU</xsl:text>
			</xsl:if>
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.salientPole'">
				<xsl:text>GENSAL</xsl:text>
			</xsl:if>
		</xsl:variable>
		<xsl:text>
OpenIPSL.Electrical.Machines.PSSE.</xsl:text>
		<xsl:copy-of select="$GenType"/>
		<xsl:text> </xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text> (Tpd0 = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tpdo"/>
		<xsl:text>, Tppdo = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tppdo"/>
		<xsl:text>, Tppqo = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tppqo"/>
		<xsl:text>, Xd = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xDirectSync"/>
		<xsl:text>, Xpd = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xDirectTrans"/>
		<xsl:text>, Xppd = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans"/>
		<xsl:text>, Xq = </xsl:text>
		<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xQuadSync"/>
		<xsl:if test="$GenType='GENROU'">
			<xsl:text>, Xppq = </xsl:text>
			<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.xQuadTrans"/>
			<xsl:text>, Tpqo = </xsl:text>
			<xsl:value-of select="cim:SynchronousMachineTimeConstantReactance.tpqo"/>
		</xsl:if>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.damping"/>
		<xsl:text>, H = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.inertia"/>
		<xsl:text>, S10 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor"/>
		<xsl:text>, S12 = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.saturationFactor120"/>
		<xsl:text>, Xl = </xsl:text>
		<xsl:value-of select="cim:RotatingMachineDynamics.statorLeakageReactance"/>
		<xsl:text>);</xsl:text>
		<xsl:text>
equation
  connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.PMECH,</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.PMECH0);
  connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.EFD,</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.EFD0);
  connect(</xsl:text>
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p,</xsl:text>
		<xsl:copy-of select="$MainName" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"/>
		<xsl:text xmlns:xsl="http://www.w3.org/1999/XSL/Transform">.n);
</xsl:text>
	</xsl:template>
</xsl:stylesheet>
