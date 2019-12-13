within OpenIPSL.Examples.Machines.PSAT;
model InductiveMotorV_SIMBOpenline_Test
  extends Modelica.Icons.Example;
  OpenIPSL.Electrical.Machines.PSAT.MotorTypeV motorTypeI(
    Sup=0,
    angle_0=-0.02173,
    P_0=251061.717038311,
    Q_0=226568.616630697,
    v_0=1.0336) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={70,0})));
  OpenIPSL.Electrical.Branches.PwLine pwLine1(
    G=0,
    B=0,
    R=0.01,
    X=0.1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={0,-20})));
  OpenIPSL.Electrical.Branches.PwLine pwLine2(
    G=0,
    B=0,
    R=0.01,
    X=0.1,
    t1=2,
    t2=3,
    opening=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={0,20})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus(angle_0=0, v_0=1.05) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={-70,0})));
  inner OpenIPSL.Electrical.SystemBase SysData(fn=60)
    annotation (Placement(transformation(extent={{-100,80},{-40,100}})));
equation
  connect(pwLine1.n, infiniteBus.p) annotation (Line(
      points={{-9,-20},{-40,-20},{-40,0},{-60,0}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine2.n, infiniteBus.p) annotation (Line(points={{-9,20},{-40,20},{
          -40,0},{-60,0},{-60,0}}, color={0,0,255}));
  connect(pwLine2.p, motorTypeI.p) annotation (Line(points={{9,20},{40,20},{40,
          0},{60,0},{60,1.33227e-15}}, color={0,0,255}));
  connect(pwLine1.p, motorTypeI.p) annotation (Line(points={{9,-20},{40,-20},{
          40,0},{60,0},{60,1.22125e-15}}, color={0,0,255}));
  annotation (experiment(StopTime=20));
end InductiveMotorV_SIMBOpenline_Test;
