within OpenIPSL.Examples.Machines.PSAT;
model Order6test2
  extends OpenIPSL.Examples.BaseTest;
  extends Modelica.Icons.Example;
  OpenIPSL.Electrical.Machines.PSAT.Order6 order6Type2_1(
    angle_0=0,
    ra=0.001,
    x1d=0.302,
    M=10,
    D=0,
    xd=1.9,
    xq=1.7,
    x1q=0.5,
    x2d=0.204,
    x2q=0.3,
    T1d0=8,
    T1q0=0.8,
    T2d0=0.04,
    T2q0=0.02,
    Taa=2e-3,
    P_0=16035269.8692006,
    Q_0=11859436.505981,
    Sn=100000000,
    v_0=1,
    V_b=400000,
    Vn=20000) annotation (Placement(transformation(extent={{-61,-20},{-21,20}})));
equation
  connect(order6Type2_1.vf0, order6Type2_1.vf) annotation (Line(points={{-57,22},
          {-57,25},{-71,25},{-71,10},{-65,10}}, color={0,0,127}));
  connect(order6Type2_1.pm, order6Type2_1.pm0) annotation (Line(points={{-65,-10},
          {-71,-10},{-71,-25},{-57,-25},{-57,-22}}, color={0,0,127}));
  connect(order6Type2_1.p, bus1.p) annotation (Line(points={{-21,0},{-10,0},{-10,0},{0,0}}, color={0,0,255}));
  annotation (
    experiment(StopTime=20));
end Order6test2;
