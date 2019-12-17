within OpenIPSL.Examples.Machines.PSSE;
model GEN "SMIB system with one load and flexible GEN model (needs replaceable support)"
  extends OpenIPSL.Examples.SMIBpartial;
  Electrical.Machines.PSSE.Plant G1(
    redeclare Electrical.Machines.PSSE.GENROE machine(
      Tpd0=5,
      Tppd0=0.07,
      Tppq0=0.09,
      H=4.28,
      D=0,
      Xd=1.84,
      Xq=1.75,
      Xpd=0.41,
      Xppd=0.2,
      Xl=0.12,
      S10=0.11,
      S12=0.39,
      angle_0=4.046276,
      Xppq=0.2,
      R_a=0,
      Xpq=2,
      Tpq0=2,
      M_b=100000000,
      P_0=40000000,
      Q_0=5416582,
      v_0=1),
    redeclare OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor,
    redeclare OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter,
    redeclare OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss) annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
equation
  connect(G1.pwPin, GEN1.p)
    annotation (Line(points={{-59,0},{-49.5,0},{-40,0}}, color={0,0,255}));

end GEN;
