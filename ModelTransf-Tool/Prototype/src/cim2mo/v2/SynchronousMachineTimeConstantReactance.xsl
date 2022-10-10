<?xml version="1.0" encoding="UTF-8" ?>

<!-- New XSLT document created with EditiX XML Editor (http://www.editix.com) at Sun Mar 27 10:45:04 CDT 2022 -->

<xsl:stylesheet version="3.0" 
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
	
	<xsl:include href="GovSteam0.xsl"/>
	<xsl:include href="GovGAST.xsl"/>
	<xsl:include href="GovHydro1.xsl"/>
	<xsl:include href="GovSteamSGO.xsl"/>
	
	<xsl:include href="ExcSEXS.xsl"/>
	<xsl:include href="ExcSCRX.xsl"/>
	<xsl:include href="ExcAC1A.xsl"/>
	<xsl:include href="ExcAC2A.xsl"/>
	<xsl:include href="ExcIEEEAC1A.xsl"/>
	<xsl:include href="ExcIEEEAC2A.xsl"/>
	<xsl:include href="ExcIEEEDC1A.xsl"/>
	<xsl:include href="ExcIEEEST1A.xsl"/>
	<xsl:include href="PssIEEE2B.xsl"/>
	<xsl:include href="PowerSystemStabilizerUserDefined.xsl"/>
	<xsl:include href="ProprietaryParameterDynamics.xsl"/>
	
	
	<xsl:template match="cim:SynchronousMachineTimeConstantReactance">
		<xsl:param name="MainName"/>
		<!-- Governors -->
		<xsl:variable name="governorGAST" select="key('governorGAST',@rdf:ID)"/>
		<xsl:variable name="governorSG" select="key('governorSG',@rdf:ID)"/>
		<xsl:variable name="governor" select="key('governor',@rdf:ID)"/>
		<xsl:variable name="gHydro1" select="key('governorHydro1',@rdf:ID)"/>
		<!-- Exciters -->
		<xsl:variable name="excsexs" select="key('excsexs',@rdf:ID)"/>
		<xsl:variable name="excieeeac1a" select="key('excieeeac1a',@rdf:ID)"/>
		<xsl:variable name="excac1a" select="key('excac1a',@rdf:ID)"/>
		<xsl:variable name="excieeeac2a" select="key('excieeeac2a',@rdf:ID)"/>
		<xsl:variable name="excac2a" select="key('excac2a',@rdf:ID)"/>
		<xsl:variable name="excieeest1a" select="key('excieeest1a',@rdf:ID)"/>
		<xsl:variable name="excieeedc1a" select="key('excieeedc1a',@rdf:ID)"/>
		<xsl:variable name="excsexs" select="key('excsexs',@rdf:ID)"/>
		<xsl:variable name="execsysuser" select="key('execsysuser',@rdf:ID)"/>
		<xsl:variable name="GenType">
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.roundRotor'">
				<xsl:choose>
					<xsl:when test="$governorSG or $governor">
						<xsl:text>GENROU</xsl:text>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>GENROE</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:if>
			<xsl:if test="cim:SynchronousMachineTimeConstantReactance.rotorType/@rdf:resource='http://iec.ch/TC57/2013/CIM-schema-cim16#RotorKind.salientPole'">
				<xsl:text>GENSAL</xsl:text>
			</xsl:if>
		</xsl:variable>
		<xsl:text>
	OpenIPSL.Electrical.Machines.PSSE.</xsl:text>
		<xsl:copy-of select="$GenType"/>
		<xsl:text> machine(Tpd0 = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tpdo,'0.0000000#')"/>
		<xsl:text>, Tppd0 = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tppdo,'0.0000000#')"/>
		<xsl:if test="$GenType='GENROU' or $GenType='GENROE'">
			<xsl:text>, Tpq0 = </xsl:text>
			<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tpqo,'0.0000000#')"/>
		</xsl:if>
		<xsl:text>, Tppq0 = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.tppqo,'0.0000000#')"/>
		<xsl:text>, H = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.inertia,'0.0000000#')"/>
		<xsl:text>, D = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.damping,'0.0000000#')"/>
		<xsl:text>, Xd = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectSync,'0.0000000#')"/>
		<xsl:text>, Xq = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xQuadSync,'0.0000000#')"/>
		<xsl:text>, Xpd = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectTrans,'0.000000#')"/>
		<xsl:if test="$GenType='GENROU' or $GenType='GENROE'">
			<xsl:text>, Xpq = </xsl:text>
			<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xQuadTrans,'0.000000#')"/>
		</xsl:if>
		<xsl:text>, Xppd = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans,'0.0000000#')"/>
		<xsl:text>, Xl = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.statorLeakageReactance,'0.0000000#')"/>
		<xsl:text>, S10 = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.saturationFactor,'0.0000000#')"/>
		<xsl:text>, S12 = </xsl:text>
		<xsl:value-of select="format-number(cim:RotatingMachineDynamics.saturationFactor120,'0.0000000#')"/>
		<xsl:text>, Xppq = </xsl:text>
		<xsl:value-of select="format-number(cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans,'0.0000000#')"/>
		<xsl:text>, R_a = </xsl:text>
		<xsl:value-of select="gkh:defaultNumbers(cim:SynchronousMachineTimeConstantReactance.statorResistance,0.0000)"/>
		<xsl:text>, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	</xsl:text>
		<xsl:choose>
			<xsl:when test="$governor">
				<xsl:apply-templates select="$governor"/>
			</xsl:when>
			<xsl:when test="$governorSG">
				<xsl:apply-templates select="$governorSG"/>
			</xsl:when>
			<xsl:when test="$gHydro1">
				<xsl:apply-templates select="$gHydro1"/>
			</xsl:when>
			<xsl:when test="$governorGAST">
				<xsl:apply-templates select="$governorGAST"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
	OpenIPSL.Electrical.Controls.PSSE.ES.</xsl:text>
		<xsl:choose>
			<xsl:when test="$excsexs">
				<xsl:apply-templates select="$excsexs"/>
			</xsl:when>
			<xsl:when test="$excieeeac1a">
				<xsl:apply-templates select="$excieeeac1a"/>
			</xsl:when>
			<xsl:when test="$excac1a">
				<xsl:apply-templates select="$excac1a"/>
			</xsl:when>
			<xsl:when test="$excieeeac2a">
				<xsl:apply-templates select="$excieeeac2a"/>
			</xsl:when>
			<xsl:when test="$excac2a">
				<xsl:apply-templates select="$excac2a"/>
			</xsl:when>
			<xsl:when test="$excieeest1a">
				<xsl:apply-templates select="$excieeest1a"/>
			</xsl:when>
			<xsl:when test="$excieeedc1a">
				<xsl:apply-templates select="$excieeedc1a"/>
			</xsl:when>
			<xsl:when test="$execsysuser">
				<xsl:value-of select="$execsysuser/../cim:IdentifiedObject.name"/>
				<xsl:text> exciter(</xsl:text>
				<xsl:variable name="exciterCode" select="$execsysuser/../@rdf:ID"/><!--Individual Parameters for ExcitationSystemUserDefined -->
				<xsl:apply-templates select="key('ppdynamics',$exciterCode)">
					<xsl:sort data-type="number" order="ascending" select="../cim:ProprietaryParameterDynamics.parameterNumber"/>
				</xsl:apply-templates>
				<xsl:choose>
					<xsl:when test="key('pssieee2b',$exciterCode)">
						<xsl:apply-templates select="key('pssieee2b',$exciterCode)"/>
					</xsl:when>
					<xsl:when test="key('PSSUser',$exciterCode)">
						<xsl:apply-templates select="key('PSSUser',$exciterCode)"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	</xsl:text>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>
  ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
  // No stabilizer, so disabled will be used
  OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
		<xsl:text>
equation
      connect(machine.p, p) annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));
      connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0, 0, 127}));
      connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0, 0, 127}));
      connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0, 0, 127}));
      connect(machine.ETERM, exciter.ECOMP) annotation(Line(points = {{41, -3}, {50, -3}, {50, -30}, {-22, -30}, {-22, -10}, {-17, -10}}, color = {0, 0, 127}));
      connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0, 0, 127}));
      connect(uel.y, exciter.VUEL) annotation(Line(points = {{-19, -52}, {-10, -52}, {-10, -21}}, color = {0, 0, 127}));
      connect(oel.y, exciter.VOEL) annotation(Line(points = {{-19, -84}, {-6, -84}, {-6, -21}}, color = {0, 0, 127}));
      connect(machine.SPEED, pss.V_S1) annotation(Line(points = {{41, 7}, {46, 7}, {46, 50}, {-76, 50}, {-76, 4}, {-71, 4}}, color = {0, 0, 127}));
      connect(machine.PELEC, pss.V_S2) annotation(Line(points = {{41, 3}, {54, 3}, {54, 70}, {-84, 70}, {-84, -4}, {-71, -4}}, color = {0, 0, 127}));
      connect(governor.PMECH, machine.PMECH) annotation(Line(visible = true, points = {{-9, 30}, {10, 30}, {10, 5}, {18, 5}}, color = {0, 0, 127}));
      connect(machine.SPEED, governor.SPEED) annotation(Line(visible = true, points = {{41, 7}, {46, 7}, {46, 50}, {-34.805, 50}, {-34.805, 35.396}, {-28, 35.396}, {-28, 36}}, color = {0, 0, 127}));
      connect(machine.PMECH0, governor.PMECH0) annotation(Line(visible = true, points = {{41, 5}, {50, 5}, {50, 60}, {-40, 60}, {-40, 24}, {-28, 24}}, color = {0, 0, 127}));
      annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));</xsl:text>
	</xsl:template>

</xsl:stylesheet>
