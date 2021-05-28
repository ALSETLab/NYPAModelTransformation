<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Thu Dec 10 19:48:29 CST 2020 -->

<xsl:stylesheet version="2.0" exclude-result-prefixes="xs xdt err fn" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:err="http://www.w3.org/2005/xqt-errors" xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#" xmlns:pti="http://www.pti-us.com/PTI_CIM-schema-cim16#" xmlns:entsoe="http://entsoe.eu/CIM/SchemaExtension/3/1#" xmlns:md="http://iec.ch/TC57/61970-552/ModelDescription/1#" xmlns:gkh="https://gkhsoftware.github.io/g#">
	<xsl:output method="text" indent="yes"/>
	<xsl:key name="node" match="cim:ConnectivityNode" use="@rdf:ID"/>
	<xsl:key name="busbar" match="cim:BusbarSection" use="@rdf:ID"/>
	<xsl:key name="terminal" match="cim:Terminal" use="@rdf:ID"/>
	<xsl:key name="powertrans" match="cim:PowerTransformer" use="@rdf:ID"/>
	<xsl:key name="acsection" match="cim:ACLineSegment" use="@rdf:ID"/>
	<xsl:key name="conformload" match="cim:ConformLoad" use="@rdf:ID"/>
	<xsl:key name="nonconformload" match="cim:NonConformLoad" use="@rdf:ID"/>
	<xsl:key name="syncmachine" match="cim:SynchronousMachine" use="@rdf:ID"/>
	<xsl:key name="basepower" match="cim:BasePower" use="@rdf:ID"/>
	<xsl:key name="shunt" match="cim:LinearShuntCompensator" use="@rdf:ID"/>
	<xsl:key name="PTend" match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer" use="substring(@rdf:resource,2)"/>
	<xsl:key name="basevoltage" match="cim:BaseVoltage" use="@rdf:ID"/>
	<xsl:key name="voltagelevel" match="cim:VoltageLevel" use="@rdf:ID"/>
	<xsl:key name="tapchanger" match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd" use="substring(@rdf:resource,2)"/>
	<xsl:key name="regulator" match="cim:RegulatingControl" use="@rdf:ID"/>
	<xsl:function name="gkh:transformerName" as="xs:string">
		<xsl:param name="input" as="xs:string"/>
			<xsl:choose>
				<xsl:when test ="matches($input,'^[0-9]{1}[a-zA-Z0-9]')">
					<xsl:value-of select="concat('B',replace($input,'[^a-zA-Z0-9]','_'))"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="replace($input,'[^a-zA-Z0-9]','_')"/>
				</xsl:otherwise>
			</xsl:choose>
	</xsl:function>
	<xsl:function name="gkh:defaultNumbers" as="xs:decimal">
		<xsl:param name="input" as="xs:decimal?"/>
		<xsl:param name="default" as="xs:decimal" />
		<xsl:choose>
			<xsl:when test="(count($input)=0)">
				<xsl:value-of select="$default"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:value-of select="format-number($input,'0.0#')"/>
			</xsl:otherwise>
		</xsl:choose>
	
	</xsl:function>
	<xsl:function name="gkh:substring-after-last-match" as="xs:string"
>
	  <xsl:param name="arg" as="xs:string?"/>
	  <xsl:param name="regex" as="xs:string"/>
	
	  <xsl:sequence select="
	   replace($arg,concat('^.*',$regex),'')
	 "/>
	
	</xsl:function>
  	
	<xsl:template match="/rdf:RDF">
		<xsl:text>model </xsl:text>
			<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/>
		<xsl:text>
		import Modelica.Constants.pi;
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =</xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:BasePower/cim:BasePower.basePower,100.0)"/>
		<xsl:text>, fn = 60) annotation(Placement(transformation(origin = {-188, 120}, extent = {{-12, -10}, {12, 10}}, rotation = 0), visible = true));
		</xsl:text>
		<xsl:for-each select="cim:BusbarSection">
			<xsl:text>OpenIPSL.Electrical.Buses.Bus </xsl:text>
			<xsl:value-of select="gkh:transformerName(cim:IdentifiedObject.name)"/>
			<xsl:text>;
			</xsl:text>
		</xsl:for-each>
		<xsl:for-each select="cim:LinearShuntCompensator">
			<xsl:text>OpenIPSL.Electrical.Banks.PSSE.Shunt </xsl:text>
			<xsl:value-of select="gkh:transformerName(concat('SH-',cim:IdentifiedObject.name,entsoe:IdentifiedObject.shortName))"/>
			<xsl:text>(B = </xsl:text>
			<xsl:value-of select="cim:LinearShuntCompensator.bPerSection"/>
			<xsl:text>, G = </xsl:text>
			<xsl:value-of select="cim:LinearShuntCompensator.gPerSection"/>
			<xsl:text>)
;
			</xsl:text>
		</xsl:for-each>
		<xsl:for-each select="cim:ACLineSegment">
			<xsl:text>OpenIPSL.Electrical.Branches.PwLine </xsl:text>
			<xsl:value-of select="gkh:transformerName(concat('PL-',cim:IdentifiedObject.name))"/>
			<xsl:text>(R =</xsl:text>
			<xsl:value-of select="cim:ACLineSegment.r"/>
			<xsl:text>, X =</xsl:text>
			<xsl:value-of select="cim:ACLineSegment.x"/>
			<xsl:choose>
				<xsl:when test="cim:ACLineSegment.gch">
					<xsl:text>,G = </xsl:text>
					<xsl:value-of select="cim:ACLineSegment.gch"/>
				</xsl:when>
				<xsl:otherwise>
					<xsl:text>, G = Modelica.Constants.eps</xsl:text>
				</xsl:otherwise>
			</xsl:choose>
			<xsl:text>, B =</xsl:text>
			<xsl:value-of select="format-number(cim:ACLineSegment.bch,'0.0#')"/>
			<xsl:text>);
			</xsl:text>
		</xsl:for-each>
		<xsl:for-each select="cim:ConformLoad">
			<xsl:text>OpenIPSL.Electrical.Loads.PSSE.Load </xsl:text>
			<xsl:value-of select="gkh:transformerName(concat('CL-',cim:IdentifiedObject.name))"/>
			<xsl:text>(angle_0 = 0</xsl:text><!--
need this-->
			<xsl:text>, v_0=</xsl:text>
			<xsl:value-of select="key('basevoltage',substring(key('voltagelevel',cim:Equipment.EquipmentContainer/substring(@rdf:resource,2))/cim:VoltageLevel.BaseVoltage/@rdf:resource,2))/cim:BaseVoltage.nominalVoltage"/>
			<xsl:text>, P_0 = </xsl:text>
			<xsl:value-of select="cim:EnergyConsumer.pfixed"/>
			<xsl:text>, Q_0 = </xsl:text>
			<xsl:value-of select="cim:EnergyConsumer.qfixed"/>
			<xsl:text>);
			</xsl:text>
		</xsl:for-each>
		<xsl:for-each select="cim:PowerTransformer">
			<xsl:text>OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer </xsl:text>
			<xsl:value-of select="gkh:transformerName(concat('XF-',cim:IdentifiedObject.description))"/>
			<xsl:text>(CZ = </xsl:text>
			<xsl:value-of select="gkh:defaultNumbers(pti:PowerTransformer.cz,1.0)"/>
			<xsl:text>, CW = </xsl:text>

			<xsl:value-of select="gkh:defaultNumbers(pti:PowerTransformer.cw,1.0)"/>
			<xsl:apply-templates select="key('PTend',@rdf:ID)"/>
			<xsl:text>);
			</xsl:text>
		</xsl:for-each>
		<xsl:text>equation
		</xsl:text>
		<xsl:for-each select="cim:Terminal">
			<xsl:choose>
				<xsl:when test="key('busbar',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))"/>
				<xsl:otherwise>
					<xsl:text>connect(</xsl:text>
					<xsl:value-of select="gkh:transformerName(normalize-space(key('node',cim:Terminal.ConnectivityNode/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					<xsl:text>.p, </xsl:text>
					<xsl:if test="key('powertrans',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:transformerName(concat('XF-',key('powertrans',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.description))"/>
					</xsl:if>
					<xsl:if test="key('acsection',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:transformerName(concat('PL-',key('acsection',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					</xsl:if>
					<xsl:if test="key('conformload',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:transformerName(concat('CL-',key('conformload',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					</xsl:if>
					<xsl:if test="key('syncmachine',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:transformerName(concat('SM',key('syncmachine',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					</xsl:if>
					<xsl:if test="key('nonconformload',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:transformerName(concat('NL-',key('nonconformload',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					</xsl:if>
					<xsl:if test="key('shunt',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))">
						<xsl:value-of select="gkh:transformerName(concat('SH-',key('shunt',cim:Terminal.ConductingEquipment/substring(@rdf:resource,2))/cim:IdentifiedObject.name))"/>
					</xsl:if>
					<xsl:choose>
						<xsl:when test="cim:IdentifiedObject.name='T1'">
							<xsl:text>.n);</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:text>.p);</xsl:text>
						</xsl:otherwise>
					</xsl:choose>
					<xsl:text>
			</xsl:text>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:for-each>
		<xsl:text>
end </xsl:text>
<xsl:value-of select="gkh:substring-after-last-match(md:FullModel/md:Model.modelingAuthoritySet,'/')"/><xsl:text>;</xsl:text>
	</xsl:template>
	<xsl:template match="cim:PowerTransformerEnd/cim:PowerTransformerEnd.PowerTransformer">
		<xsl:choose>
			<xsl:when test="../cim:TransformerEnd.endNumber='1'">
				<xsl:text>,R = </xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.r"/>
				<xsl:text>, X = </xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.x"/>
				<xsl:text>, G = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.g,'0.0#')"/>
				<xsl:text>, B = </xsl:text>
				<xsl:value-of select="format-number(../cim:PowerTransformerEnd.b,'0.0#')"/>
				<xsl:text>, ANG1 = </xsl:text>
				<xsl:value-of select="gkh:defaultNumbers(../cim:PowerTransformerEnd.phaseAngleClock,0.0)"/>
				<xsl:text>, S_n = </xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.ratedS"/>
				<xsl:text>*1e6</xsl:text>
				<xsl:text>, VB1=</xsl:text>
				<xsl:value-of select="key('basevoltage',../cim:TransformerEnd.BaseVoltage/substring(@rdf:resource,2))/cim:BaseVoltage.nominalVoltage"/>
				<xsl:text>, VNOM1=</xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.ratedU"/>
				<!--<xsl:value-of select="key('tapchanger',../@rdf:ID)/cim:TapChanger.lowStep" />-->
				<xsl:if test="key('tapchanger',../@rdf:ID)">
					<xsl:text>, t1=</xsl:text>
					<xsl:apply-templates select="key('tapchanger',../@rdf:ID)"/>
				</xsl:if>
				<xsl:if test="not(key('tapchanger',../@rdf:ID))">
					<xsl:text>, t1=1.0</xsl:text>
				</xsl:if>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>, VB2=</xsl:text>
				<xsl:value-of select="key('basevoltage',../cim:TransformerEnd.BaseVoltage/substring(@rdf:resource,2))/cim:BaseVoltage.nominalVoltage"/>
				<xsl:text>, VNOM2=</xsl:text>
				<xsl:value-of select="../cim:PowerTransformerEnd.ratedU"/>
				<xsl:if test="key('tapchanger',../@rdf:ID)">
					<xsl:text>, t2=</xsl:text>
					<xsl:apply-templates select="key('tapchanger',../@rdf:ID)"/>
				</xsl:if>
				<xsl:if test="not(key('tapchanger',../@rdf:ID))">
					<xsl:text>, t2=1.0</xsl:text>
				</xsl:if>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	<xsl:template match="cim:RatioTapChanger/cim:RatioTapChanger.TransformerEnd">
		<xsl:value-of select="../cim:RatioTapChanger.stepVoltageIncrement"/>
	</xsl:template>
</xsl:stylesheet>
