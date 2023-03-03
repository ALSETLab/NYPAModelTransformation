<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 11:17:30 CDT 2022 -->

<xsl:stylesheet version="2.0" 
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform" 
	xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions"
	xmlns:xdt="http://www.w3.org/2005/xpath-datatypes"
	xmlns:err="http://www.w3.org/2005/xqt-errors"
	xmlns:cim="http://iec.ch/TC57/2013/CIM-schema-cim16#"
	exclude-result-prefixes="xs xdt err fn">

	<xsl:output method="text" indent="yes"/>
	
	<xsl:template match="cim:SynchronousMachineSimplified">
		<xsl:param name="MainName"/>
		<xsl:variable name="GenType"/>
		<xsl:text>
		OpenIPSL.Electrical.Machines.PSSE.GENCLS machine</xsl:text>
		<xsl:text>(H = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.inertia,'0.000#')"/>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.damping,'0.000#')"/>
		<xsl:text>, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0, omega(fixed = true))  annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
		equation
			connect(machine.p, p);
  annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));</xsl:text><!--
		<xsl:copy-of select="$MainName"/>
		<xsl:text>.p, p);</xsl:text>--><!-- GEN1.p);-->
	</xsl:template>

</xsl:stylesheet>
