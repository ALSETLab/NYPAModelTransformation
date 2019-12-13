within OpenIPSL.Examples.Controls.PSSE.ES;
model EXST1 "SMIB system with one load and GENROE model"
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
  OpenIPSL.Electrical.Controls.PSSE.ES.EXST1 eXST1(
    V_IMAX=10,
    V_IMIN=-10,
    T_R=0.02,
    T_B=1,
    K_A=80,
    T_A=0.05,
    V_RMAX=8,
    V_RMIN=-3,
    K_C=0.2,
    K_F=0.1,
    T_F=1,
    T_C=0.1)
    annotation (Placement(transformation(extent={{-58,-58},{-100,-28}})));
equation
  connect(gENROE.PMECH, gENROE.PMECH0) annotation (Line(points={{-104,10},{-110,
          10},{-110,26},{-48,26},{-48,10},{-58,10}}, color={0,0,127}));
  connect(eXST1.EFD, gENROE.EFD) annotation (Line(points={{-101.05,-41.3333},{
          -110,-41.3333},{-110,-10},{-104,-10}}, color={0,0,127}));
  connect(eXST1.ECOMP, gENROE.ETERM) annotation (Line(points={{-58,-41.3333},{
          -50,-41.3333},{-50,-6},{-58,-6}}, color={0,0,127}));
  connect(const.y, eXST1.VOEL) annotation (Line(points={{-41,-46},{-71.65,-46},
          {-71.65,-58}}, color={0,0,127}));
  connect(eXST1.VOTHSG, eXST1.VOEL) annotation (Line(points={{-58,-33.8333},{
          -50,-33.8333},{-50,-46},{-71.65,-46},{-71.65,-58}}, color={0,0,127}));
  connect(eXST1.VUEL, eXST1.VOEL) annotation (Line(points={{-65.35,-58},{-50,-58},
          {-50,-46},{-71.65,-46},{-71.65,-58}}, color={0,0,127}));
  connect(eXST1.XADIFD, gENROE.XADIFD) annotation (Line(points={{-88.45,
          -57.6667},{-54,-57.6667},{-54,-18},{-58.4,-18}}, color={0,0,127}));
  connect(eXST1.EFD0, gENROE.EFD0) annotation (Line(points={{-58,-52.1667},{-58,
          -60},{-48,-60},{-48,-10},{-58,-10}}, color={0,0,127}));
  connect(gENROE.p, GEN1.p)
    annotation (Line(points={{-60,0},{-60,0},{-40,0}}, color={0,0,255}));
  annotation (
experiment(StopTime=10));
end EXST1;
