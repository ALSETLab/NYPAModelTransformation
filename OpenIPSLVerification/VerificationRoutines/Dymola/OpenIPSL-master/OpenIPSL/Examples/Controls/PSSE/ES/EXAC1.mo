within OpenIPSL.Examples.Controls.PSSE.ES;
model EXAC1 "SMIB system with one load and GENROE model"
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
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-20,-56},{-40,-36}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.EXAC1 eXAC1(
    K_A=400,
    T_A=0.02,
    V_RMAX=9,
    V_RMIN=-5.43,
    T_E=0.8,
    K_F=0.03,
    T_F=1,
    K_C=0.2,
    K_D=0.48,
    K_E=1,
    E_1=5.25,
    E_2=7,
    S_EE_1=0.03,
    S_EE_2=0.1,
    T_R=0.004,
    T_B=0.004,
    T_C=0.004)
    annotation (Placement(transformation(extent={{-60,-50},{-98,-24}})));
equation
  connect(gENROE.PMECH, gENROE.PMECH0) annotation (Line(points={{-104,10},{-110,
          10},{-110,26},{-48,26},{-48,10},{-58,10}}, color={0,0,127}));
  connect(eXAC1.EFD, gENROE.EFD) annotation (Line(points={{-98.95,-35.5556},{
          -110,-35.5556},{-110,-10},{-104,-10}}, color={0,0,127}));
  connect(eXAC1.XADIFD, gENROE.XADIFD) annotation (Line(points={{-60,-40.6111},
          {-56,-40.6111},{-56,-18},{-58.4,-18}}, color={0,0,127}));
  connect(eXAC1.VOTHSG, const.y) annotation (Line(points={{-60,-29.0556},{-48,
          -29.0556},{-48,-46},{-41,-46}}, color={0,0,127}));
  connect(eXAC1.VUEL, const.y) annotation (Line(points={{-66.65,-50},{-48,-50},
          {-48,-46},{-41,-46}}, color={0,0,127}));
  connect(eXAC1.VOEL, const.y) annotation (Line(points={{-72.35,-50},{-48,-50},
          {-48,-46},{-41,-46}}, color={0,0,127}));
  connect(eXAC1.ECOMP, gENROE.ETERM) annotation (Line(points={{-60,-35.5556},{
          -52,-35.5556},{-52,-6},{-58,-6}}, color={0,0,127}));
  connect(eXAC1.EFD0, gENROE.EFD0) annotation (Line(points={{-60,-44.9444},{-54,
          -44.9444},{-54,-10},{-58,-10}}, color={0,0,127}));
  connect(gENROE.p, GEN1.p)
    annotation (Line(points={{-60,0},{-60,0},{-40,0}}, color={0,0,255}));
  annotation (
experiment(StopTime=10));
end EXAC1;
