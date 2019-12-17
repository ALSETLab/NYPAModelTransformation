within OpenIPSL.Electrical.Controls.PSSE.TG.GGOV1;
block Dm_select
  "Output the minimum and the maximum element of the input vector"
  parameter Real Dm;
  Modelica.Blocks.Interfaces.RealOutput y annotation (Placement(transformation(
          extent={{100,-12},{120,8}})));
  Modelica.Blocks.Interfaces.RealInput speed annotation (Placement(
        transformation(extent={{6,-136},{46,-96}}), iconTransformation(
        extent={{-20,-20},{20,20}},
        origin={-120,-2})));
equation
  y = if Dm >= 0 then speed + 1 else (speed + 1)^Dm;
  annotation (
    Icon(coordinateSystem(
        preserveAspectRatio=true,
        extent={{-100,-100},{100,100}}), graphics={Text(
          extent={{-51,31},{51,-31}},
          lineColor={0,0,255},
          horizontalAlignment=TextAlignment.Left,
          origin={1,5},
          rotation=360,
          textString="Dm_select"),Rectangle(extent={{-98,90},{96,-92}},
          lineColor={0,0,255})}),
    Documentation(info="<html>
<p>
Determines the minimum and maximum element of the input vector and
provide both values as output.
</p>
</html>"));
end Dm_select;
