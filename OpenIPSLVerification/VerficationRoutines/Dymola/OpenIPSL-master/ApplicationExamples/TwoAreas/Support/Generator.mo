within TwoAreas.Support;
partial model Generator
  extends OpenIPSL.Electrical.Essentials.pfComponent;
  OpenIPSL.Interfaces.PwPin pwPin annotation (Placement(transformation(extent={
            {60,-10},{80,10}}), iconTransformation(extent={{100,-10},{120,10}})));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}), graphics={Ellipse(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),Line(
          points={{20,-20},{50,-40},{80,0}},
          color={0,0,0},
          thickness=0.5),Text(
          extent={{-40,20},{40,-20}},
          lineColor={0,0,0},
          textString="%name"),Line(
          points={{-20,20},{-50,40},{-80,0}},
          color={0,0,0},
          thickness=0.5)}), Documentation);
end Generator;
