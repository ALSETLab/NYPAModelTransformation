within OpenIPSL.Electrical.Banks.Simulink;
model Shunt "Shunt Inductor or Capacitor"
  OpenIPSL.Interfaces.PwPin p
    annotation (Placement(transformation(extent={{-10,90},{10,110}})));
  parameter SI.ReactivePower Qnom(displayUnit="Mvar")
    "Reactive power produced by the shunt at 1 pu voltage, (negative for inductive charge, positive for capacitive charge)";
  parameter SI.ApparentPower Sbase(displayUnit="MVA") "Base power of the system";
  parameter SI.PerUnit X=Sbase/(-Qnom) "Reactance (pu)";
  SI.PerUnit Q "Consumed power";
  SI.PerUnit v;
equation
  v = sqrt(p.vr*p.vr + p.vi*p.vi);
  0 = p.vr*p.ir + p.vi*p.ii;
  Q = p.vi*p.ir - p.vr*p.ii;
  Q = 1/X*v*v;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},
            {100,100}}), graphics={Rectangle(extent={{-100,100},{100,-100}},
          lineColor={0,0,255}),Text(
          extent={{-40,40},{40,-40}},
          lineColor={0,0,255},
          textString="Y"),Line(
          points={{-1,14},{-1,-6}},
          color={0,0,255},
          origin={-4,-73},
          rotation=-90),Line(
          points={{-1,-6},{-1,-2}},
          color={0,0,255},
          origin={-4,-79},
          rotation=90),Line(
          points={{-1,12},{-1,-0.000000000000000183697}},
          color={0,0,255},
          origin={-6,-77},
          rotation=-90),Line(points={{0,100},{0,20}}, color={0,0,255}),Line(
          points={{0,-40},{0,-72}}, color={0,0,255})}), Documentation(info="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\">
<tr>
<td><p>Reference</p></td>
<td>Shunt Inductor or Capacitor</td>
</tr>
<tr>
<td><p>Last update</p></td>
<td>2015-10-02</td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>Le Qi, SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:luigiv@kth.se\">luigiv@kth.se</a></p></td>
</tr>
</table>
</html>"));
end Shunt;
