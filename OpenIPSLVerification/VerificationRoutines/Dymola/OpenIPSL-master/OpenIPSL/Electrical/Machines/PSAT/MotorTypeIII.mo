within OpenIPSL.Electrical.Machines.PSAT;
model MotorTypeIII "Induction Machine - Order III"
  extends OpenIPSL.Electrical.Essentials.pfComponent(
    final enabledisplayPF=false,
    final enablefn=false,
    final enableV_b=false,
    final enableangle_0=true,
    final enablev_0=true,
    final enableQ_0=true,
    final enableP_0=true,
    final enableS_b=true);
  parameter Integer Sup=1 "Start up control" annotation (Dialog(group=
          "Machine parameters"), choices(choice=0, choice=1));
  parameter SI.PerUnit Rs=0.01 "Stator resistance (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit Xs=0.15 "Stator reactance (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit Rr1=0.05 "1st cage rotor resistance (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit Xr1=0.15 "1st cage rotor reactance (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit Xm=5 "Magnetizing reactance (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.Time Hm=3 "Inertia constant"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit a=0.25 "1st coefficient of tau_m(w) (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit b=0.00 "2nd coefficient of tau_m(w) (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.PerUnit c=0.00 "3rd coefficient of tau_m(w) (pu)"
    annotation (Dialog(group="Machine parameters"));
  parameter SI.Time tup=0 "Start up time"
    annotation (Dialog(group="Machine parameters"));
  SI.PerUnit v(start=v_0) "Bus voltage magnitude";
  SI.PerUnit anglev(start=angle_0) "Bus voltage angle";
  SI.PerUnit s(start=S0);
  SI.PerUnit Tm;
  SI.PerUnit Te;
  SI.PerUnit P(start=P_0/S_b);
  SI.PerUnit Q(start=Q_0/S_b);
  SI.PerUnit Vr;
  SI.PerUnit Vm;
  SI.PerUnit Ir;
  SI.PerUnit Im;
  SI.PerUnit epr(start=epr0);
  SI.PerUnit epm(start=epm0);
  SI.PerUnit I;
  SI.Angle anglei;
  OpenIPSL.Interfaces.PwPin p(
    vr(start=vr0),
    vi(start=vi0),
    ir(start=ir0),
    ii(start=ii0))
    annotation (Placement(transformation(extent={{90,-10},{110,10}})));

  import Modelica.Constants.pi;
protected
  parameter SI.AngularVelocity Omegab=2*pi*fn "Base freq";
  parameter SI.PerUnit vr0=v_0*cos(angle_0rad);
  parameter SI.PerUnit vi0=v_0*sin(angle_0rad);
  parameter SI.PerUnit ir0=(P_0/S_b*vr0 + Q_0/S_b*vi0)/(vr0^2 + vi0^2);
  parameter SI.PerUnit ii0=(P_0/S_b*vi0 - Q_0/S_b*vr0)/(vr0^2 + vi0^2);
  parameter SI.PerUnit i2=ir0*ir0 + ii0*ii0;
  parameter SI.PerUnit A=a + b + c;
  parameter SI.PerUnit B=(-b) - 2*c;
  parameter SI.PerUnit C=c;
  parameter SI.PerUnit X0=Xs + Xm;
  parameter SI.PerUnit Xp=Xs + Xr1*Xm/(Xr1 + Xm);
  parameter SI.Time Tp0=(Xr1 + Xm)/(Omegab*Rr1);
  parameter Real RZs2=1/(Rs*Rs + Xp*Xp);
  parameter Real K=Rr1/((Xr1 + Xm)*A);
  parameter Real K2=1 + Tp0*Tp0*Omegab*Omegab*S0*S0;
  parameter Real K1=Tp0*Omegab*S0;
  parameter Real a03=Rs*Rs + Xp*Xp;
  //r1^2+(xS +xR1xm/(xR1 + xm))^2
  parameter Real a13=Rs/a03;
  parameter Real a23=Xp/a03;
  parameter Real S0=K*((-Q_0/S_b) + X0*i2);
  parameter Real epm0=(K1*(X0 - Xp)*ir0 + (X0 - Xp)*(-1)*ii0)/K2;
  parameter Real epr0=(K1*(X0 - Xp)*(-1)*ii0 - (X0 - Xp)*ir0)/K2;
initial equation
  der(s) = 0;
  der(epr) = 0;
  der(epm) = 0;
equation
  anglev = atan2(p.vi, p.vr);
  anglei = atan2(p.ii, p.ir);
  v = sqrt(p.vr^2 + p.vi^2);
  I = sqrt(p.ii^2 + p.ir^2);
  Vr = p.vi;
  Vm = p.vr;
  Im = p.ir;
  Ir = -p.ii;
  P = p.vr*p.ir + p.vi*p.ii;
  Q = (-p.vr*p.ii) + p.vi*p.ir;
  der(s) = (Tm - Te)/(2*Hm);
  Tm = A + B*s + C*s*s;
  Te = epr*Ir + epm*Im;
  der(epr) = Omegab*s*epm - (epr + (X0 - Xp)*Im)/Tp0;
  der(epm) = (-Omegab*s*epr) - (epm - (X0 - Xp)*Ir)/Tp0;
  Im = (-a23*((-Vr) - epr)) + a13*(Vm - epm);
  Ir = a13*((-Vr) - epr) + a23*(Vm - epm);
  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,-100},
            {100,100}}), graphics={Rectangle(
          fillColor={255,255,255},
          extent={{-100,-100},{100,100}}),Ellipse(
          fillColor={255,255,255},
          extent={{-56,-58},{55.9318,54}}),Text(
          extent={{-50,48},{50,-52}},
          lineColor={0,0,0},
          textString="M"),Text(
          origin={0,-76.0978},
          fillPattern=FillPattern.Solid,
          extent={{-57.2101,-15.0},{57.2101,15.0}},
          fontName="Arial",
          textString="%name",
          lineColor={0,0,0})}), Documentation(info="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\">
<tr>
<td><p>Reference</p></td>
<td><p>Induction Machine, PSAT Manual 2.1.8</p></td>
</tr>
<tr>
<td><p>Last update</p></td>
<td>September 2015</td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>Joan Russinol, SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:luigiv@kth.se\">luigiv@kth.se</a></p></td>
</tr>
</table>
</html>"));
end MotorTypeIII;
