within OpenIPSL.Examples.Controls.PSSE.ES;
model URST5T "SMIB model example of GENROU with Excitation System URST5T"
  extends OpenIPSL.Examples.SMIBpartial;
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    Xppd=0.2,
    Xppq=0.2,
    Xpp=0.2,
    Xl=0.12,
    angle_0=4.04626655578613,
    Tpd0=5,
    Tppd0=0.50000E-01,
    Tppq0=0.1,
    H=4.0000,
    D=0,
    Xd=1.41,
    Xq=1.3500,
    Xpd=0.3,
    S10=0.1,
    S12=0.5,
    Xpq=0.6,
    Tpq0=0.7,
    M_b=100000000,
    P_0=39999952.912331,
    Q_0=5416571.3489056,
    v_0=1) annotation (Placement(transformation(extent={{-104,-16},{-76,18}})));
  Modelica.Blocks.Sources.Constant const2(k=0)
    annotation (Placement(transformation(extent={{-110,166},{-94,182}})));
  Modelica.Blocks.Sources.Constant VOEL(k=1000) annotation (Placement(
        transformation(
        extent={{-5,-5},{5,5}},
        origin={-87,-67})));
  OpenIPSL.Electrical.Controls.PSSE.ES.URST5T uRST5T
    annotation (Placement(transformation(extent={{-56,-40},{-34,-20}})));
  Modelica.Blocks.Sources.Constant VUEL(k=-1000) annotation (Placement(
        transformation(
        extent={{-5,-5},{5,5}},
        origin={-73,-81})));
  Modelica.Blocks.Sources.Constant VOTHSG(k=0) annotation (Placement(
        transformation(
        extent={{-5,-5},{5,5}},
        origin={-73,-55})));
  inner Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-100,80},{-40,100}})));
equation
  connect(VUEL.y, uRST5T.VUEL) annotation (Line(
      points={{-67.5,-81},{-58.25,-81},{-58.25,-40},{-52.15,-40}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(VOEL.y, uRST5T.VOEL) annotation (Line(
      points={{-81.5,-67},{-60,-67},{-60,-40},{-48.85,-40}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(VOTHSG.y, uRST5T.VOTHSG) annotation (Line(
      points={{-67.5,-55},{-62,-55},{-62,-23.8889},{-56,-23.8889}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(gENROU.XADIFD, uRST5T.XADIFD) annotation (Line(
      points={{-74.88,-14.3},{-74.88,-39.7778},{-40.05,-39.7778}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(gENROU.EFD0, uRST5T.EFD0) annotation (Line(
      points={{-74.6,-7.5},{-64,-7.5},{-64,-36.1111},{-56,-36.1111}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(
      points={{-74.6,9.5},{-70,9.5},{-70,22},{-104,22},{-104,9.5},{-106.8,9.5}},
      color={0,0,127},
      smooth=Smooth.None));

  connect(gENROU.PELEC, uRST5T.ECOMP) annotation (Line(
      points={{-74.6,6.1},{-66,6.1},{-66,-28.8889},{-56,-28.8889}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(uRST5T.EFD, gENROU.EFD) annotation (Line(
      points={{-33.45,-28.8889},{-14,-28.8889},{-14,-44},{-104,-44},{-104,-7.5},
          {-106.8,-7.5}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(gENROU.p, GEN1.p) annotation (Line(points={{-76,1},{-57.3,1},{-57.3,0},
          {-40,0}}, color={0,0,255}));
  connect(uRST5T.VT, uRST5T.ECOMP) annotation (Line(points={{-56,-26.1111},{-58,
          -26.1111},{-58,-26},{-60,-26},{-60,-28.8889},{-56,-28.8889}}, color={
          0,0,127}));
  annotation (
experiment(StopTime=10));
end URST5T;
