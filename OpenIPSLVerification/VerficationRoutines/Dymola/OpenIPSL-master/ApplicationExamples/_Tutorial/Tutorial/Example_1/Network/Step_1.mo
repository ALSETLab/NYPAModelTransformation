within Tutorial.Example_1.Network;
partial model Step_1
  OpenIPSL.Electrical.Buses.Bus B1(displayPF=false)
    annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
  OpenIPSL.Electrical.Buses.Bus B2(displayPF=false)
    annotation (Placement(transformation(extent={{-20,-10},{0,10}})));
  OpenIPSL.Electrical.Buses.Bus B3(displayPF=false)
    annotation (Placement(transformation(extent={{60,-10},{80,10}})));
  Generator.Generator G1
    annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=100, fn=60) annotation (
      Placement(visible=true, transformation(
        origin={85.0002,-80},
        extent={{-25.0002,-20},{34.9998,20}},
        rotation=0)));
  annotation (
    Diagram(coordinateSystem(extent={{-120,-100},{120,100}},
          preserveAspectRatio=false), graphics={Text(
          extent={{-100,100},{100,80}},
          lineColor={0,0,0},
          lineThickness=1,
          fillPattern=FillPattern.Solid,
          fontSize=15,
          textStyle={TextStyle.Bold},
          textString="Step 1: Adding generator and bus models"),Rectangle(
          extent={{-116,14},{-84,-14}},
          lineColor={255,0,0},
          lineThickness=1),Rectangle(
          extent={{-76,20},{76,-22}},
          lineColor={255,0,0},
          lineThickness=1),Text(
          extent={{-94,36},{96,18}},
          lineColor={0,0,0},
          lineThickness=1,
          fillPattern=FillPattern.Solid,
          fontSize=12,
          textString="Electrical.Buses.Bus")}),
    Icon(coordinateSystem(extent={{-120,-100},{120,100}})),
    Documentation);
end Step_1;
