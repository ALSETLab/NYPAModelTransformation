package CimSystem "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
	model smib_genroe
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =100000000, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner CimSystem.PF_Data.Power_Flow pf(redeclare record PowerFlow = CimSystem.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
OpenIPSL.Electrical.Buses.Bus GEN01_25a6(V_b = 100000, v_0 = pf.powerflow.bus.VGEN01_25a6, angle_0 = pf.powerflow.bus.AGEN01_25a6);
OpenIPSL.Electrical.Buses.Bus LOAD_25c3(V_b = 100000, v_0 = pf.powerflow.bus.VLOAD_25c3, angle_0 = pf.powerflow.bus.ALOAD_25c3);
OpenIPSL.Electrical.Buses.Bus GEN02_25d2(V_b = 100000, v_0 = pf.powerflow.bus.VGEN02_25d2, angle_0 = pf.powerflow.bus.AGEN02_25d2);
OpenIPSL.Electrical.Buses.Bus FAULT_25e0(V_b = 100000, v_0 = pf.powerflow.bus.VFAULT_25e0, angle_0 = pf.powerflow.bus.AFAULT_25e0);
// -- Lines:
OpenIPSL.Electrical.Branches.PwLine line1_2_12603(R =0.001000000, X =0.2000000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line2_3_12607(R =0.001000000, X =0.2000000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line2_22_1260b(R =0.000500000, X =0.1000000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3_22_1260f(R =0.000500000, X =0.1000000000,G = 0, B =0.0000000000);
// -- Transformers:
// -- Linear Shunt Compensators:
// -- Conform Loads:
OpenIPSL.Electrical.Loads.PSSE.Load CL2_1_25ed(V_b = LOAD_25c3.V_b, v_0 = pf.powerflow.bus.VLOAD_25c3,angle_0 = pf.powerflow.bus.ALOAD_25c3,P_0 = pf.powerflow.loads.PCL2_1_25ed,Q_0 = pf.powerflow.loads.QCL2_1_25ed, PQBRAK = 0.7, characteristic = 2);
// -- Non Conform Loads:
// -- Generator Units:
CimSystem.Generators.GEN1_1_25f7 gen1_1_25f7(V_b = GEN01_25a6.V_b, v_0 = pf.powerflow.bus.VGEN01_25a6, angle_0 = pf.powerflow.bus.AGEN01_25a6, P_0 = pf.powerflow.loads.PGEN1_1_25f7, Q_0 = pf.powerflow.loads.QGEN1_1_25f7);
CimSystem.Generators.GEN3_1_25ff gen3_1_25ff(V_b = GEN02_25d2.V_b, v_0 = pf.powerflow.bus.VGEN02_25d2, angle_0 = pf.powerflow.bus.AGEN02_25d2, P_0 = pf.powerflow.loads.PGEN3_1_25ff, Q_0 = pf.powerflow.loads.QGEN3_1_25ff);
equation
connect(LOAD_25c3.p, CL2_1_25ed.p);
connect(GEN01_25a6.p, gen1_1_25f7.p);
connect(GEN02_25d2.p, gen3_1_25ff.p);
connect(GEN01_25a6.p, line1_2_12603.p);
connect(LOAD_25c3.p, line1_2_12603.n);
connect(LOAD_25c3.p, line2_3_12607.p);
connect(GEN02_25d2.p, line2_3_12607.n);
connect(LOAD_25c3.p, line2_22_1260b.p);
connect(FAULT_25e0.p, line2_22_1260b.n);
connect(GEN02_25d2.p, line3_22_1260f.p);
connect(FAULT_25e0.p, line3_22_1260f.n);

end smib_genroe;
package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."
model GEN1_1_25f7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	OpenIPSL.Electrical.Machines.PSSE.GENROE machine(Tpd0 = 5.0000000, Tppd0 = 0.0700000, Tpq0 = 0.9000000, Tppq0 = 0.0900000, H = 4.2800000, D = 0.0000000, Xd = 1.8400000, Xq = 1.7500000, Xpd = 0.410000, Xpq = 0.600000, Xppd = 0.2000000, Xl = 0.1200000, S10 = 0.1100000, S12 = 0.3900000, Xppq = 0.2000000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
	// No exciter, so constant excitation will be used
	OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
equation
      connect(machine.p, p) annotation(Line(origin = {75, 0}, points = {{40, 0}, {110, 0}}, color = {0, 0, 255}));
      connect(pss.VOTHSG, exciter.VOTHSG) annotation(Line(points = {{-49, 0}, {-40, 0}, {-40, -5.663}, {-17, -5.663}, {-17, -6}}, color = {0, 0, 127}));
      connect(machine.XADIFD, exciter.XADIFD) annotation(Line(points = {{41, -9}, {43.537, -9}, {43.537, -24.895}, {2, -24.895}, {2, -21}}, color = {0, 0, 127}));
      connect(machine.EFD0, exciter.EFD0) annotation(Line(points = {{41, -5}, {46.015, -5}, {46.015, -27.845}, {-20, -27.845}, {-20, -14}, {-17, -14}}, color = {0, 0, 127}));
      connect(machine.ETERM, exciter.ECOMP) annotation(Line(points = {{41, -3}, {50, -3}, {50, -30}, {-22, -30}, {-22, -10}, {-17, -10}}, color = {0, 0, 127}));
      connect(machine.EFD, exciter.EFD) annotation(Line(points = {{18, -5}, {10, -5}, {10, -10}, {5, -10}}, color = {0, 0, 127}));
      connect(uel.y, exciter.VUEL) annotation(Line(points = {{-19, -52}, {-10, -52}, {-10, -21}}, color = {0, 0, 127}));
      connect(oel.y, exciter.VOEL) annotation(Line(points = {{-19, -84}, {-6, -84}, {-6, -21}}, color = {0, 0, 127}));
      connect(machine.SPEED, pss.V_S1) annotation(Line(points = {{41, 7}, {46, 7}, {46, 50}, {-76, 50}, {-76, 4}, {-71, 4}}, color = {0, 0, 127}));
      connect(machine.PELEC, pss.V_S2) annotation(Line(points = {{41, 3}, {54, 3}, {54, 70}, {-84, 70}, {-84, -4}, {-71, -4}}, color = {0, 0, 127}));
      connect(governor.PMECH, machine.PMECH) annotation(Line(visible = true, points = {{-9, 30}, {10, 30}, {10, 5}, {18, 5}}, color = {0, 0, 127}));
      connect(machine.SPEED, governor.SPEED) annotation(Line(visible = true, points = {{41, 7}, {46, 7}, {46, 50}, {-34.805, 50}, {-34.805, 35.396}, {-28, 35.396}, {-28, 36}}, color = {0, 0, 127}));
      connect(machine.PMECH0, governor.PMECH0) annotation(Line(visible = true, points = {{41, 5}, {50, 5}, {50, 60}, {-40, 60}, {-40, 24}, {-28, 24}}, color = {0, 0, 127}));
      annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));
end GEN1_1_25f7;
model GEN3_1_25ff
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
		OpenIPSL.Electrical.Machines.PSSE.GENCLS machine(H = 0.000, D = 0.000, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0, omega(fixed = true))  annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
		equation
			connect(machine.p, p);
  annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = false, grid = {1, 1}), graphics = {Line(points = {{-76, -26}, {-28, 52}, {27, -52}, {74, 23}}, color = {0, 0, 255}, smooth = Smooth.Bezier), Ellipse(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 255})}));
end GEN3_1_25ff;
end Generators;

package PF_Data "Modelica records for power flow data."
record Power_Flow " Translated and calculated power flow data."
  	extends Modelica.Icons.Record;
  	replaceable record PowerFlow = CimSystem.PF_Data.Power_Flow_Template constrainedby CimSystem.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
  	PowerFlow powerflow;
end Power_Flow;
record Power_Flow_Template "Template for power flow"
	 extends Modelica.Icons.Record;
end Power_Flow_Template;  

record Bus_Data

partial record Bus_Template
// GEN01_25a6
parameter OpenIPSL.Types.PerUnit VGEN01_25a6;
parameter OpenIPSL.Types.Angle AGEN01_25a6;
// LOAD_25c3
parameter OpenIPSL.Types.PerUnit VLOAD_25c3;
parameter OpenIPSL.Types.Angle ALOAD_25c3;
// GEN02_25d2
parameter OpenIPSL.Types.PerUnit VGEN02_25d2;
parameter OpenIPSL.Types.Angle AGEN02_25d2;
// FAULT_25e0
parameter OpenIPSL.Types.PerUnit VFAULT_25e0;
parameter OpenIPSL.Types.Angle AFAULT_25e0;
end Bus_Template;
record PF_Bus_00000
	extends CimSystem.PF_Data.Bus_Data.Bus_Template(VGEN01_25a6=1.00000,AGEN01_25a6=0.070621,VLOAD_25c3=0.99199,ALOAD_25c3=-0.010058,VGEN02_25d2=1.00000,AGEN02_25d2=0.00000,VFAULT_25e0=1.00000,AFAULT_25e0=0.00000);
end PF_Bus_00000;
end Bus_Data;

record Loads_Data

partial record Loads_Template
parameter OpenIPSL.Types.ActivePower PCL2_1_25ed;
parameter OpenIPSL.Types.ReactivePower QCL2_1_25ed;
parameter OpenIPSL.Types.ActivePower PGEN1_1_25f7;
parameter OpenIPSL.Types.ReactivePower QGEN1_1_25f7;
parameter OpenIPSL.Types.ActivePower PGEN3_1_25ff;
parameter OpenIPSL.Types.ReactivePower QGEN3_1_25ff;
end Loads_Template;

record PF_Loads_00000
	extends CimSystem.PF_Data.Loads_Data.Loads_Template(PCL2_1_25ed = 5.0E7,QCL2_1_25ed = 1.0E7,PGEN1_1_25f7 = 4.0E7,QGEN1_1_25f7 = 5.4166E6,PGEN3_1_25ff = 1.0017E7,QGEN3_1_25ff = 8.007E6);
end PF_Loads_00000;

end Loads_Data;

record Trafos_Data

partial record Trafos_Template
end Trafos_Template;

record PF_Trafos_00000
  extends CimSystem.PF_Data.Trafos_Data.Trafos_Template();
end PF_Trafos_00000;

end Trafos_Data;


record PF_00000
  extends CimSystem.PF_Data.Power_Flow_Template;
  replaceable record Bus = CimSystem.PF_Data.Bus_Data.PF_Bus_00000 constrainedby CimSystem.PF_Data.Bus_Data.Bus_Template "Bus power flow result";
  Bus bus;
  replaceable record Loads = CimSystem.PF_Data.Loads_Data.PF_Loads_00000 constrainedby CimSystem.PF_Data.Loads_Data.Loads_Template "Loads power flow result";
  Loads loads;
replaceable record Trafos = CimSystem.PF_Data.Trafos_Data.PF_Trafos_00000 constrainedby CimSystem.PF_Data.Trafos_Data.Trafos_Template "Trafos power flow result";
  Trafos trafos;
end PF_00000;
end PF_Data;

  annotation(uses(Modelica(version = "3.2.3"), Complex, OpenIPSL(version = "2.0.0-beta.1")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end CimSystem;