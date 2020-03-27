within ;
partial model BaseExciter
  Modelica.Blocks.Interfaces.RealInput VUEL annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-130,-200}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-130,-200})));
  Modelica.Blocks.Interfaces.RealInput VOEL annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-70,-200}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-70,-200})));
  Modelica.Blocks.Interfaces.RealOutput EFD "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{200,-10},{220,10}})));
  Modelica.Blocks.Interfaces.RealInput EFD0 annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-200,-130}), iconTransformation(extent={{-10,-10},{10,10}},
          origin={-200,-130})));
  Modelica.Blocks.Interfaces.RealInput VOTHSG annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-200,90}), iconTransformation(extent={{-10,-10},{10,10}},
          origin={-200,90})));
  Modelica.Blocks.Interfaces.RealInput ECOMP annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-200,0}), iconTransformation(extent={{-10,-10},{10,10}}, origin=
           {-200,0})));
  Modelica.Blocks.Sources.Constant VoltageReference(k=V_REF)
    annotation (Placement(transformation(extent={{-170,40},{-150,60}})));
  Modelica.Blocks.Math.Add DiffV(k2=-1)
    annotation (Placement(transformation(extent={{-120,-10},{-100,10}})));
  Modelica.Blocks.Sources.Step Vref_step(height=V_REF*dV, startTime=t)
    annotation (Placement(transformation(extent={{-140,60},{-120,80}})));
  Modelica.Blocks.Math.Add add7
    annotation (Placement(transformation(extent={{-100,40},{-80,60}})));
  //Parameters of the voltage reference step
  parameter Modelica.SIunits.PerUnit dV=0 "Voltage reference step";
  parameter Modelica.SIunits.Time t=0
    "Application time of the voltage reference step";
protected
  parameter Real Efd0(fixed=false);
  parameter Real V_REF(fixed=false);
  parameter Real ECOMP0(fixed=false);
public
  Modelica.Blocks.Interfaces.RealInput XADIFD annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={80,-200}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={90,-196})));
initial equation
  Efd0 = EFD0;
  ECOMP0 = ECOMP;
equation
  connect(Vref_step.y, add7.u1) annotation (Line(points={{-119,70},{-110,70},{-110,
          56},{-102,56}}, color={0,0,127}));
  connect(VoltageReference.y, add7.u2) annotation (Line(points={{-149,50},{-126,50},
          {-126,44},{-102,44}}, color={0,0,127}));
  connect(add7.y, DiffV.u1) annotation (Line(points={{-79,50},{-70,50},{-70,24},{
          -130,24},{-130,6},{-122,6}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(extent={{-200,-200},{200,160}}, initialScale=0.1),
        graphics={Rectangle(
          extent={{-200,160},{200,-200}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),Text(
          extent={{-154,-170},{-102,-190}},
          lineColor={28,108,200},
          textString="VUEL"),Text(
          extent={{-92,-170},{-40,-190}},
          lineColor={28,108,200},
          textString="VOEL"),Text(
          extent={{-184,8},{-114,-12}},
          lineColor={28,108,200},
          textString="ECOMP"),Text(
          extent={{-188,100},{-106,80}},
          lineColor={28,108,200},
          textString="VOTHSG"),Text(
          extent={{-182,-122},{-130,-142}},
          lineColor={28,108,200},
          textString="EFD0"),Text(
          extent={{152,12},{194,-8}},
          lineColor={28,108,200},
          textString="EFD")}),
    Diagram(coordinateSystem(extent={{-200,-200},{200,160}}, initialScale=0.1)),
    Documentation,
    uses(Modelica(version="3.2.3")));
end BaseExciter;
