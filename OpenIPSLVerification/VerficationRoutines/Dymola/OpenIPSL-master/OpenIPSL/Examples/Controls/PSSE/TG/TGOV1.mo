within OpenIPSL.Examples.Controls.PSSE.TG;
model TGOV1 "SMIB system with one load and GENROE model"
  extends OpenIPSL.Examples.SMIBpartial;
  OpenIPSL.Electrical.Machines.PSSE.GENROE gENROE(
    Tpd0=5,
    Tppd0=0.07,
    Tpq0=0.9,
    Tppq0=0.09,
    H=4.28,
    D=0,
    Xd=1.84,
    Xq=1.75,
    Xpd=0.41,
    Xpq=0.6,
    Xppd=0.2,
    Xl=0.12,
    S10=0.11,
    S12=0.39,
    angle_0=4.046276,
    Xppq=0.2,
    M_b=100000000,
    P_0=40000000,
    Q_0=5416582,
    v_0=1) annotation (Placement(transformation(extent={{-100,-20},{-60,20}})));
  OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 tGOV1(
    R=0.04,
    D_t=0,
    T_1=0.4,
    T_2=2,
    T_3=6,
    V_MAX=0.86,
    V_MIN=0.3)
    annotation (Placement(transformation(extent={{-72,32},{-88,44}})));
equation
  connect(gENROE.EFD, gENROE.EFD0) annotation (Line(points={{-104,-10},{-110,-10},
          {-110,-30},{-48,-30},{-48,-10},{-58,-10}}, color={0,0,127}));
  connect(tGOV1.SPEED, gENROE.SPEED) annotation (Line(points={{-72.6667,41.4737},
          {-52,41.4737},{-52,14},{-58,14}}, color={0,0,127}));
  connect(tGOV1.PMECH0, gENROE.PMECH0) annotation (Line(points={{-72.6667,
          34.5263},{-48,34.5263},{-48,10},{-58,10}}, color={0,0,127}));
  connect(tGOV1.PMECH, gENROE.PMECH) annotation (Line(points={{-88.3333,38.3158},
          {-110,38.3158},{-110,10},{-104,10}}, color={0,0,127}));
  connect(gENROE.p, GEN1.p)
    annotation (Line(points={{-60,0},{-60,0},{-40,0}}, color={0,0,255}));
  annotation (
experiment(StopTime=10));
end TGOV1;
