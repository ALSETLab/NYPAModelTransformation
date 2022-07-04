package ieee14_package "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
	model ieee14
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =1.0E8, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner ieee14_package.PF_Data.Power_Flow pf(redeclare record PowerFlow = ieee14_package.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
OpenIPSL.Electrical.Buses.Bus BUS2_24c6(V_b = 69000, v_0 = pf.powerflow.bus.VBUS2_24c6, angle_0 = pf.powerflow.bus.ABUS2_24c6);
			OpenIPSL.Electrical.Buses.Bus BUS3_24d4(V_b = 69000, v_0 = pf.powerflow.bus.VBUS3_24d4, angle_0 = pf.powerflow.bus.ABUS3_24d4);
			OpenIPSL.Electrical.Buses.Bus BUS4_24e2(V_b = 69000, v_0 = pf.powerflow.bus.VBUS4_24e2, angle_0 = pf.powerflow.bus.ABUS4_24e2);
			OpenIPSL.Electrical.Buses.Bus BUS5_24f0(V_b = 69000, v_0 = pf.powerflow.bus.VBUS5_24f0, angle_0 = pf.powerflow.bus.ABUS5_24f0);
			OpenIPSL.Electrical.Buses.Bus BUS6_24fe(V_b = 138000, v_0 = pf.powerflow.bus.VBUS6_24fe, angle_0 = pf.powerflow.bus.ABUS6_24fe);
			OpenIPSL.Electrical.Buses.Bus BUS1_24aa(V_b = 69000, v_0 = pf.powerflow.bus.VBUS1_24aa, angle_0 = pf.powerflow.bus.ABUS1_24aa);
			OpenIPSL.Electrical.Buses.Bus BUS7_2512(V_b = 138000, v_0 = pf.powerflow.bus.VBUS7_2512, angle_0 = pf.powerflow.bus.ABUS7_2512);
			OpenIPSL.Electrical.Buses.Bus BUS8_2520(V_b = 69000, v_0 = pf.powerflow.bus.VBUS8_2520, angle_0 = pf.powerflow.bus.ABUS8_2520);
			OpenIPSL.Electrical.Buses.Bus BUS9_252e(V_b = 138000, v_0 = pf.powerflow.bus.VBUS9_252e, angle_0 = pf.powerflow.bus.ABUS9_252e);
			OpenIPSL.Electrical.Buses.Bus BUS10_253c(V_b = 138000, v_0 = pf.powerflow.bus.VBUS10_253c, angle_0 = pf.powerflow.bus.ABUS10_253c);
			OpenIPSL.Electrical.Buses.Bus BUS11_254a(V_b = 138000, v_0 = pf.powerflow.bus.VBUS11_254a, angle_0 = pf.powerflow.bus.ABUS11_254a);
			OpenIPSL.Electrical.Buses.Bus BUS12_2557(V_b = 138000, v_0 = pf.powerflow.bus.VBUS12_2557, angle_0 = pf.powerflow.bus.ABUS12_2557);
			OpenIPSL.Electrical.Buses.Bus BUS13_2564(V_b = 138000, v_0 = pf.powerflow.bus.VBUS13_2564, angle_0 = pf.powerflow.bus.ABUS13_2564);
			OpenIPSL.Electrical.Buses.Bus BUS14_2571(V_b = 138000, v_0 = pf.powerflow.bus.VBUS14_2571, angle_0 = pf.powerflow.bus.ABUS14_2571);
			// -- Lines:
OpenIPSL.Electrical.Branches.PwLine line1_2_125f8(R =0.019380000, X =0.0591700000,G = 0, B =0.02639999971);
			OpenIPSL.Electrical.Branches.PwLine line1_5_12602(R =0.054030000, X =0.2230400000,G = 0, B =0.02459999892);
			OpenIPSL.Electrical.Branches.PwLine line2_3_1260c(R =0.046990000, X =0.1979700000,G = 0, B =0.02190000011);
			OpenIPSL.Electrical.Branches.PwLine line2_4_12616(R =0.058110000, X =0.1763200000,G = 0, B =0.01700000034);
			OpenIPSL.Electrical.Branches.PwLine line2_5_12620(R =0.056950000, X =0.1738800000,G = 0, B =0.01730000047);
			OpenIPSL.Electrical.Branches.PwLine line3_4_1262a(R =0.067010000, X =0.1710300000,G = 0, B =0.00640000044);
			OpenIPSL.Electrical.Branches.PwLine line4_5_12634(R =0.013350000, X =0.0421100000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line6_11_1263e(R =0.094980000, X =0.1989000000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line6_12_12648(R =0.122910000, X =0.2558100000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line6_13_12652(R =0.066150000, X =0.1302700000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line7_9_1265c(R =0.000000000, X =0.1100100000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line9_10_12666(R =0.031810000, X =0.0845000000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line9_14_12670(R =0.127110000, X =0.2703800000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line10_11_1267a(R =0.082050000, X =0.1920700000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line12_13_12684(R =0.220920000, X =0.1998800000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line13_14_1268e(R =0.170930000, X =0.3480200000,G = 0, B =0.0000000000);
			// -- Transformers:
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T470_1_2698(R = 0.00000000, X = 0.209120983, G = 0.00000000, B = 0.00000000,t2 = pf.powerflow.trafos.T470_1_T2,t1 = pf.powerflow.trafos.T470_1_T1);
					OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T490_1_26a8(R = 0.00000000, X = 0.556185675, G = 0.00000000, B = 0.00000000,t2 = pf.powerflow.trafos.T490_1_T2,t1 = pf.powerflow.trafos.T490_1_T1);
					OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T650_1_26b7(R = 0.00000000, X = 0.252021634, G = 0.00000000, B = 0.00000000,t2 = pf.powerflow.trafos.T650_1_T1,t1 = pf.powerflow.trafos.T650_1_T2);
					OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T870_1_26c7(R = 0.00000000, X = 0.176149968, G = 0.00000000, B = 0.00000000,t2 = pf.powerflow.trafos.T870_1_T2,t1 = pf.powerflow.trafos.T870_1_T1);
					// -- Linear Shunt Compensators:
OpenIPSL.Electrical.Banks.PSSE.Shunt SHBUS925c7(G = 0.0000000000,B = 0.19000000742);
			OpenIPSL.Electrical.Banks.PSSE.Shunt SHBUS1425cb(G = 0.0000000000,B = 0.15005999747);
			// -- Conform Loads:
OpenIPSL.Electrical.Loads.PSSE.Load CL2_1_257c(V_b = BUS2_24c6.V_b, v_0 = pf.powerflow.bus.VBUS2_24c6,angle_0 = pf.powerflow.bus.ABUS2_24c6,P_0 = pf.powerflow.loads.PCL2_1_257c,Q_0 = pf.powerflow.loads.QCL2_1_257c, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL3_1_2583(V_b = BUS3_24d4.V_b, v_0 = pf.powerflow.bus.VBUS3_24d4,angle_0 = pf.powerflow.bus.ABUS3_24d4,P_0 = pf.powerflow.loads.PCL3_1_2583,Q_0 = pf.powerflow.loads.QCL3_1_2583, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL4_1_258a(V_b = BUS4_24e2.V_b, v_0 = pf.powerflow.bus.VBUS4_24e2,angle_0 = pf.powerflow.bus.ABUS4_24e2,P_0 = pf.powerflow.loads.PCL4_1_258a,Q_0 = pf.powerflow.loads.QCL4_1_258a, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL5_1_2591(V_b = BUS5_24f0.V_b, v_0 = pf.powerflow.bus.VBUS5_24f0,angle_0 = pf.powerflow.bus.ABUS5_24f0,P_0 = pf.powerflow.loads.PCL5_1_2591,Q_0 = pf.powerflow.loads.QCL5_1_2591, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL6_1_2598(V_b = BUS6_24fe.V_b, v_0 = pf.powerflow.bus.VBUS6_24fe,angle_0 = pf.powerflow.bus.ABUS6_24fe,P_0 = pf.powerflow.loads.PCL6_1_2598,Q_0 = pf.powerflow.loads.QCL6_1_2598, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL9_1_259f(V_b = BUS9_252e.V_b, v_0 = pf.powerflow.bus.VBUS9_252e,angle_0 = pf.powerflow.bus.ABUS9_252e,P_0 = pf.powerflow.loads.PCL9_1_259f,Q_0 = pf.powerflow.loads.QCL9_1_259f, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL10_1_25a6(V_b = BUS10_253c.V_b, v_0 = pf.powerflow.bus.VBUS10_253c,angle_0 = pf.powerflow.bus.ABUS10_253c,P_0 = pf.powerflow.loads.PCL10_1_25a6,Q_0 = pf.powerflow.loads.QCL10_1_25a6, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL11_1_25ad(V_b = BUS11_254a.V_b, v_0 = pf.powerflow.bus.VBUS11_254a,angle_0 = pf.powerflow.bus.ABUS11_254a,P_0 = pf.powerflow.loads.PCL11_1_25ad,Q_0 = pf.powerflow.loads.QCL11_1_25ad, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL12_1_25b4(V_b = BUS12_2557.V_b, v_0 = pf.powerflow.bus.VBUS12_2557,angle_0 = pf.powerflow.bus.ABUS12_2557,P_0 = pf.powerflow.loads.PCL12_1_25b4,Q_0 = pf.powerflow.loads.QCL12_1_25b4, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL13_1_25bb(V_b = BUS13_2564.V_b, v_0 = pf.powerflow.bus.VBUS13_2564,angle_0 = pf.powerflow.bus.ABUS13_2564,P_0 = pf.powerflow.loads.PCL13_1_25bb,Q_0 = pf.powerflow.loads.QCL13_1_25bb, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load CL14_1_25c2(V_b = BUS14_2571.V_b, v_0 = pf.powerflow.bus.VBUS14_2571,angle_0 = pf.powerflow.bus.ABUS14_2571,P_0 = pf.powerflow.loads.PCL14_1_25c2,Q_0 = pf.powerflow.loads.QCL14_1_25c2, PQBRAK = 0.7, characteristic = 2);
			// -- Non Conform Loads:
// -- Generator Units:

ieee14_package.Generators.GEN1_1_25d4 gen1_1_25d4(V_b = BUS1_24aa.V_b, v_0 = pf.powerflow.bus.VBUS1_24aa, angle_0 = pf.powerflow.bus.ABUS1_24aa, P_0 = pf.powerflow.loads.PGEN1_1_25d4, Q_0 = pf.powerflow.loads.QGEN1_1_25d4);
			
ieee14_package.Generators.GEN2_1_25dc gen2_1_25dc(V_b = BUS2_24c6.V_b, v_0 = pf.powerflow.bus.VBUS2_24c6, angle_0 = pf.powerflow.bus.ABUS2_24c6, P_0 = pf.powerflow.loads.PGEN2_1_25dc, Q_0 = pf.powerflow.loads.QGEN2_1_25dc);
			
ieee14_package.Generators.GEN3_1_25e5 gen3_1_25e5(V_b = BUS3_24d4.V_b, v_0 = pf.powerflow.bus.VBUS3_24d4, angle_0 = pf.powerflow.bus.ABUS3_24d4, P_0 = pf.powerflow.loads.PGEN3_1_25e5, Q_0 = pf.powerflow.loads.QGEN3_1_25e5);
			
ieee14_package.Generators.GEN6_1_25ed gen6_1_25ed(V_b = BUS6_24fe.V_b, v_0 = pf.powerflow.bus.VBUS6_24fe, angle_0 = pf.powerflow.bus.ABUS6_24fe, P_0 = pf.powerflow.loads.PGEN6_1_25ed, Q_0 = pf.powerflow.loads.QGEN6_1_25ed);
			
ieee14_package.Generators.GEN8_1_25f5 gen8_1_25f5(V_b = BUS8_2520.V_b, v_0 = pf.powerflow.bus.VBUS8_2520, angle_0 = pf.powerflow.bus.ABUS8_2520, P_0 = pf.powerflow.loads.PGEN8_1_25f5, Q_0 = pf.powerflow.loads.QGEN8_1_25f5);
			
// -- Fault Event
OpenIPSL.Electrical.Events.PwFault Fault(R = 0, X = 0, t1 = 0.5, t2 = 0.505);

equation
connect(BUS2_24c6.p, CL2_1_257c.p);
connect(BUS3_24d4.p, CL3_1_2583.p);
connect(BUS4_24e2.p, CL4_1_258a.p);
connect(BUS5_24f0.p, CL5_1_2591.p);
connect(BUS6_24fe.p, CL6_1_2598.p);
connect(BUS9_252e.p, CL9_1_259f.p);
connect(BUS10_253c.p, CL10_1_25a6.p);
connect(BUS11_254a.p, CL11_1_25ad.p);
connect(BUS12_2557.p, CL12_1_25b4.p);
connect(BUS13_2564.p, CL13_1_25bb.p);
connect(BUS14_2571.p, CL14_1_25c2.p);
connect(BUS9_252e.p, SHBUS925c7.p);
connect(BUS14_2571.p, SHBUS1425cb.p);
connect(BUS1_24aa.p, gen1_1_25d4.p);
connect(BUS2_24c6.p, gen2_1_25dc.p);
connect(BUS3_24d4.p, gen3_1_25e5.p);
connect(BUS6_24fe.p, gen6_1_25ed.p);
connect(BUS8_2520.p, gen8_1_25f5.p);
connect(BUS1_24aa.p, line1_2_125f8.p);
connect(BUS2_24c6.p, line1_2_125f8.n);
connect(BUS1_24aa.p, line1_5_12602.p);
connect(BUS5_24f0.p, line1_5_12602.n);
connect(BUS2_24c6.p, line2_3_1260c.p);
connect(BUS3_24d4.p, line2_3_1260c.n);
connect(BUS2_24c6.p, line2_4_12616.p);
connect(BUS4_24e2.p, line2_4_12616.n);
connect(BUS2_24c6.p, line2_5_12620.p);
connect(BUS5_24f0.p, line2_5_12620.n);
connect(BUS3_24d4.p, line3_4_1262a.p);
connect(BUS4_24e2.p, line3_4_1262a.n);
connect(BUS4_24e2.p, line4_5_12634.p);
connect(BUS5_24f0.p, line4_5_12634.n);
connect(BUS6_24fe.p, line6_11_1263e.p);
connect(BUS11_254a.p, line6_11_1263e.n);
connect(BUS6_24fe.p, line6_12_12648.p);
connect(BUS12_2557.p, line6_12_12648.n);
connect(BUS6_24fe.p, line6_13_12652.p);
connect(BUS13_2564.p, line6_13_12652.n);
connect(BUS7_2512.p, line7_9_1265c.p);
connect(BUS9_252e.p, line7_9_1265c.n);
connect(BUS9_252e.p, line9_10_12666.p);
connect(BUS10_253c.p, line9_10_12666.n);
connect(BUS9_252e.p, line9_14_12670.p);
connect(BUS14_2571.p, line9_14_12670.n);
connect(BUS10_253c.p, line10_11_1267a.p);
connect(BUS11_254a.p, line10_11_1267a.n);
connect(BUS12_2557.p, line12_13_12684.p);
connect(BUS13_2564.p, line12_13_12684.n);
connect(BUS13_2564.p, line13_14_1268e.p);
connect(BUS14_2571.p, line13_14_1268e.n);
connect(BUS4_24e2.p, T470_1_2698.p);
connect(BUS7_2512.p, T470_1_2698.n);
connect(BUS9_252e.p, T490_1_26a8.n);
connect(BUS6_24fe.p, T650_1_26b7.p);
connect(BUS5_24f0.p, T650_1_26b7.n);
connect(BUS8_2520.p, T870_1_26c7.p);
connect(BUS7_2512.p, T870_1_26c7.n);
connect(BUS4_24e2.p, T490_1_26a8.p);

// -- Connect fault event:
connect(Fault.p, BUS14_2571.p);

end ieee14;package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."
model GEN1_1_25d4
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
	OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.0000000, Tppd0 = 0.0320000, Tpq0 = 0.5500000, Tppq0 = 0.0600000, H = 2.0500000, D = 0.0000000, Xd = 2.1100000, Xq = 2.0200000, Xpd = 0.295000, Xpq = 0.505000, Xppd = 0.2300000, Xl = 0.1600000, S10 = 0.0830000, S12 = 0.4190000, Xppq = 0.2300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 governor(R = 0.10000,T_1 = 0.49000,V_MAX = 1.00000,V_MIN = 0.22700,T_2 = 2.57000,T_3 = 9.00000,D_t = 0.02000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
	OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(T_R = 0.00000,K_A = 50.00000,T_A = 0.02000,V_RMAX = 1.00000,V_RMIN = -1.00000,K_E = -0.05700,T_E = 0.54100,K_F = 0.08600,T_F = 1.02000,E_1 = 3.08200,S_EE_1 = 0.03800,E_2 = 4.10900,S_EE_2 = 0.30000) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			
	OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pss(T_w1=2.00000,T_w2 = 2.00000,T_6= 0.00000,T_w3 = 2.00000,T_w4 = 0.00000,T_7 = 2.00000,K_S2 = 0.20000,K_S3 = 1.00000,T_8 = 0.50000,T_9 = 0.10000,K_S1 = 10.00000,T_1 = 0.15000,T_2 = 0.03000,T_3 = 0.15000,T_4 = 0.03000,T_10 = 0.00000,T_11 = 0.00000,V_S1MAX = 99.00000,V_S1MIN = -99.00000,V_S2MAX = 99.00000,V_S2MIN = -99.00000,V_STMAX = 0.10000,V_STMIN = -0.10000,
M = 5,N = 1) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
		
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
end GEN1_1_25d4;
model GEN2_1_25dc
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
	OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 6.5000000, Tppd0 = 0.0600000, Tpq0 = 0.2000000, Tppq0 = 0.0500000, H = 6.5000000, D = 0.0000000, Xd = 1.8000000, Xq = 1.7500000, Xpd = 0.600000, Xpq = 0.800000, Xppd = 0.1300000, Xl = 0.1500000, S10 = 0.0900000, S12 = 0.3800000, Xppq = 0.1300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 governor(R = 0.05000,T_1 = 0.05000,V_MAX = 1.05000,V_MIN = 0.30000,T_2 = 1.00000,T_3 = 2.10000,D_t = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
	OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(T_R = 0.06000,K_A = 20.00000,T_A = 0.01000,V_RMAX = 5.00000,V_RMIN = -6.00000,K_E = 1.00000,T_E = 0.67000,K_F = 0.10000,T_F = 1.00000,E_1 = 3.00000,S_EE_1 = 0.09000,E_2 = 4.00000,S_EE_2 = 0.36800) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			
	OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pss(T_w1=2.00000,T_w2 = 2.00000,T_6= 0.10000,T_w3 = 2.00000,T_w4 = 4.00000,T_7 = 2.00000,K_S2 = 0.33300,K_S3 = 1.00000,T_8 = 0.50000,T_9 = 0.10000,K_S1 = 20.00000,T_1 = 0.05200,T_2 = 0.03000,T_3 = 0.28100,T_4 = 0.03000,T_10 = 0.00000,T_11 = 0.00000,V_S1MAX = 99.00000,V_S1MIN = -99.00000,V_S2MAX = 99.00000,V_S2MIN = -99.00000,V_STMAX = 0.10000,V_STMIN = -0.10000,
M = 5,N = 1) annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
		
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
end GEN2_1_25dc;
model GEN3_1_25e5
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
	OpenIPSL.Electrical.Machines.PSSE.GENROE machine(Tpd0 = 6.5000000, Tppd0 = 0.0600000, Tpq0 = 0.2000000, Tppq0 = 0.0500000, H = 5.0000000, D = 0.0000000, Xd = 1.8000000, Xq = 1.7500000, Xpd = 0.600000, Xpq = 0.800000, Xppd = 0.1300000, Xl = 0.1500000, S10 = 0.0900000, S12 = 0.3800000, Xppq = 0.1300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
	OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(T_R = 0.06000,K_A = 20.00000,T_A = 0.01000,V_RMAX = 5.00000,V_RMIN = -6.00000,K_E = 1.00000,T_E = 0.67000,K_F = 0.10000,T_F = 1.00000,E_1 = 3.00000,S_EE_1 = 0.09000,E_2 = 4.00000,S_EE_2 = 0.36800) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	
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
end GEN3_1_25e5;
model GEN6_1_25ed
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
	OpenIPSL.Electrical.Machines.PSSE.GENROE machine(Tpd0 = 6.5000000, Tppd0 = 0.0600000, Tpq0 = 0.2000000, Tppq0 = 0.0500000, H = 5.0000000, D = 0.0000000, Xd = 1.8000000, Xq = 1.7500000, Xpd = 0.600000, Xpq = 0.800000, Xppd = 0.1200000, Xl = 0.1500000, S10 = 0.0900000, S12 = 0.3800000, Xppq = 0.1200000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
	OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(T_R = 0.06000,K_A = 20.00000,T_A = 0.01000,V_RMAX = 5.00000,V_RMIN = -6.00000,K_E = 1.00000,T_E = 0.67000,K_F = 0.10000,T_F = 1.00000,E_1 = 3.00000,S_EE_1 = 0.09000,E_2 = 4.00000,S_EE_2 = 0.36800) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	
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
end GEN6_1_25ed;
model GEN8_1_25f5
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
	OpenIPSL.Electrical.Machines.PSSE.GENROE machine(Tpd0 = 6.5000000, Tppd0 = 0.0600000, Tpq0 = 0.2000000, Tppq0 = 0.0500000, H = 5.0000000, D = 0.0000000, Xd = 1.8000000, Xq = 1.7500000, Xpd = 0.600000, Xpq = 0.800000, Xppd = 0.1200000, Xl = 0.1500000, S10 = 0.0900000, S12 = 0.3800000, Xppq = 0.1200000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
	Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
	Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
	// No turbine-governor, so disabled will be used:
	OpenIPSL.Electrical.Controls.PSSE.TG.ConstantPower governor annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
	OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 exciter(T_R = 0.06000,K_A = 20.00000,T_A = 0.01000,V_RMAX = 5.00000,V_RMIN = -6.00000,K_E = 1.00000,T_E = 0.67000,K_F = 0.10000,T_F = 1.00000,E_1 = 3.00000,S_EE_1 = 0.09000,E_2 = 4.00000,S_EE_2 = 0.36800) annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
			// No stabilizer, so disabled will be used
	OpenIPSL.Electrical.Controls.PSSE.PSS.DisabledPSS pss annotation(Placement(transformation(extent = {{-70, -10}, {-50, 10}})));
	
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
end GEN8_1_25f5;
end Generators;

package PF_Data "Modelica records for power flow data."
record Power_Flow " Translated and calculated power flow data."
  	extends Modelica.Icons.Record;
  	replaceable record PowerFlow = ieee14_package.PF_Data.Power_Flow_Template constrainedby ieee14_package.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
  	PowerFlow powerflow;
end Power_Flow;
record Power_Flow_Template "Template for power flow"
	 extends Modelica.Icons.Record;
end Power_Flow_Template;  

record Bus_Data

partial record Bus_Template// BUS2_24c6
parameter OpenIPSL.Types.PerUnit VBUS2_24c6;
parameter OpenIPSL.Types.Angle ABUS2_24c6;// BUS3_24d4
parameter OpenIPSL.Types.PerUnit VBUS3_24d4;
parameter OpenIPSL.Types.Angle ABUS3_24d4;// BUS4_24e2
parameter OpenIPSL.Types.PerUnit VBUS4_24e2;
parameter OpenIPSL.Types.Angle ABUS4_24e2;// BUS5_24f0
parameter OpenIPSL.Types.PerUnit VBUS5_24f0;
parameter OpenIPSL.Types.Angle ABUS5_24f0;// BUS6_24fe
parameter OpenIPSL.Types.PerUnit VBUS6_24fe;
parameter OpenIPSL.Types.Angle ABUS6_24fe;// BUS1_24aa
parameter OpenIPSL.Types.PerUnit VBUS1_24aa;
parameter OpenIPSL.Types.Angle ABUS1_24aa;// BUS7_2512
parameter OpenIPSL.Types.PerUnit VBUS7_2512;
parameter OpenIPSL.Types.Angle ABUS7_2512;// BUS8_2520
parameter OpenIPSL.Types.PerUnit VBUS8_2520;
parameter OpenIPSL.Types.Angle ABUS8_2520;// BUS9_252e
parameter OpenIPSL.Types.PerUnit VBUS9_252e;
parameter OpenIPSL.Types.Angle ABUS9_252e;// BUS10_253c
parameter OpenIPSL.Types.PerUnit VBUS10_253c;
parameter OpenIPSL.Types.Angle ABUS10_253c;// BUS11_254a
parameter OpenIPSL.Types.PerUnit VBUS11_254a;
parameter OpenIPSL.Types.Angle ABUS11_254a;// BUS12_2557
parameter OpenIPSL.Types.PerUnit VBUS12_2557;
parameter OpenIPSL.Types.Angle ABUS12_2557;// BUS13_2564
parameter OpenIPSL.Types.PerUnit VBUS13_2564;
parameter OpenIPSL.Types.Angle ABUS13_2564;// BUS14_2571
parameter OpenIPSL.Types.PerUnit VBUS14_2571;
parameter OpenIPSL.Types.Angle ABUS14_2571;end Bus_Template;
record PF_Bus_00000
	extends ieee14_package.PF_Data.Bus_Data.Bus_Template(VBUS2_24c6=1.01973,ABUS2_24c6=-0.027988,VBUS3_24d4=1.00057,ABUS3_24d4=-0.06012,VBUS4_24e2=0.99875,ABUS4_24e2=-0.074735,VBUS5_24f0=1.00429,ABUS5_24f0=-0.064305,VBUS6_24fe=0.99974,ABUS6_24fe=-0.110491,VBUS1_24aa=1.03000,ABUS1_24aa=0.00000,VBUS7_2512=1.00479,ABUS7_2512=-0.084137,VBUS8_2520=1.02025,ABUS8_2520=-0.023974,VBUS9_252e=1.00042,ABUS9_252e=-0.127386,VBUS10_253c=0.99243,ABUS10_253c=-0.130175,VBUS11_254a=0.99240,ABUS11_254a=-0.123143,VBUS12_2557=0.98725,ABUS12_2557=-0.129374,VBUS13_2564=0.98470,ABUS13_2564=-0.134144,VBUS14_2571=0.99004,ABUS14_2571=-0.167021);
end PF_Bus_00000;
end Bus_Data;

record Loads_Data

partial record Loads_Template
parameter OpenIPSL.Types.ActivePower PCL2_1_257c;
parameter OpenIPSL.Types.ReactivePower QCL2_1_257c;
parameter OpenIPSL.Types.ActivePower PCL3_1_2583;
parameter OpenIPSL.Types.ReactivePower QCL3_1_2583;
parameter OpenIPSL.Types.ActivePower PCL4_1_258a;
parameter OpenIPSL.Types.ReactivePower QCL4_1_258a;
parameter OpenIPSL.Types.ActivePower PCL5_1_2591;
parameter OpenIPSL.Types.ReactivePower QCL5_1_2591;
parameter OpenIPSL.Types.ActivePower PCL6_1_2598;
parameter OpenIPSL.Types.ReactivePower QCL6_1_2598;
parameter OpenIPSL.Types.ActivePower PCL9_1_259f;
parameter OpenIPSL.Types.ReactivePower QCL9_1_259f;
parameter OpenIPSL.Types.ActivePower PCL11_1_25ad;
parameter OpenIPSL.Types.ReactivePower QCL11_1_25ad;
parameter OpenIPSL.Types.ActivePower PCL12_1_25b4;
parameter OpenIPSL.Types.ReactivePower QCL12_1_25b4;
parameter OpenIPSL.Types.ActivePower PCL13_1_25bb;
parameter OpenIPSL.Types.ReactivePower QCL13_1_25bb;
parameter OpenIPSL.Types.ActivePower PCL14_1_25c2;
parameter OpenIPSL.Types.ReactivePower QCL14_1_25c2;
parameter OpenIPSL.Types.ActivePower PSHBUS925c7;
parameter OpenIPSL.Types.ReactivePower QSHBUS925c7;
parameter OpenIPSL.Types.ActivePower PSHBUS1425cb;
parameter OpenIPSL.Types.ReactivePower QSHBUS1425cb;
parameter OpenIPSL.Types.ActivePower PGEN1_1_25d4;
parameter OpenIPSL.Types.ReactivePower QGEN1_1_25d4;
parameter OpenIPSL.Types.ActivePower PGEN2_1_25dc;
parameter OpenIPSL.Types.ReactivePower QGEN2_1_25dc;
parameter OpenIPSL.Types.ActivePower PGEN3_1_25e5;
parameter OpenIPSL.Types.ReactivePower QGEN3_1_25e5;
parameter OpenIPSL.Types.ActivePower PGEN6_1_25ed;
parameter OpenIPSL.Types.ReactivePower QGEN6_1_25ed;
parameter OpenIPSL.Types.ActivePower PGEN8_1_25f5;
parameter OpenIPSL.Types.ReactivePower QGEN8_1_25f5;
parameter OpenIPSL.Types.ActivePower PCL10_1_25a6;
parameter OpenIPSL.Types.ReactivePower QCL10_1_25a6;
end Loads_Template;

record PF_Loads_00000
	extends ieee14_package.PF_Data.Loads_Data.Loads_Template(PCL2_1_257c = 2.17E7,QCL2_1_257c = 1.27E7,PCL3_1_2583 = 5.0E7,QCL3_1_2583 = 2.5E7,PCL4_1_258a = 4.78E7,QCL4_1_258a = 1.0E7,PCL5_1_2591 = 7.6E6,QCL5_1_2591 = 1.6E6,PCL6_1_2598 = 1.5E7,QCL6_1_2598 = 7.5E6,PCL9_1_259f = 2.95E7,QCL9_1_259f = 1.6600000000000002E7,PCL11_1_25ad = 3.5E6,QCL11_1_25ad = 1.8E6,PCL12_1_25b4 = 6.1E6,QCL12_1_25b4 = 1.6E6,PCL13_1_25bb = 1.35E7,QCL13_1_25bb = 5.8E6,PCL14_1_25c2 = 2.0E7,QCL14_1_25c2 = 7.0E6,PSHBUS925c7 = 0,QSHBUS925c7 = 1.90159606934E7,PSHBUS1425cb = 0,QSHBUS1425cb = 1.4708568573E7,PGEN1_1_25d4 = 8.1442E7,QGEN1_1_25d4 = 1.973E6,PGEN2_1_25dc = 4.0E7,QGEN2_1_25dc = 1.5E7,PGEN3_1_25e5 = 4.0E7,QGEN3_1_25e5 = 1.5E7,PGEN6_1_25ed = 3.0E7,QGEN6_1_25ed = 1.0E7,PGEN8_1_25f5 = 3.5E7,QGEN8_1_25f5 = 1.0E7,PCL10_1_25a6 = 9.0E6,QCL10_1_25a6 = 5.8E6);
		end PF_Loads_00000;
	end Loads_Data;

	record Trafos_Data
		partial record Trafos_Template
parameter Real T470_1_T1;
parameter Real T470_1_T2;
parameter Real T490_1_T1;
parameter Real T490_1_T2;
parameter Real T650_1_T1;
parameter Real T650_1_T2;
parameter Real T870_1_T1;
parameter Real T870_1_T2;
		end Trafos_Template;

	record PF_Trafos_00000
		extends ieee14_package.PF_Data.Trafos_Data.Trafos_Template(T470_1_T1=1,T470_1_T2=1,T490_1_T1=1,T490_1_T2=1,T650_1_T1=1,T650_1_T2=1,T870_1_T1=1,T870_1_T2=1);
	end PF_Trafos_00000;
end Trafos_Data;

	record PF_00000
  		extends ieee14_package.PF_Data.Power_Flow_Template;
  		replaceable record Bus = ieee14_package.PF_Data.Bus_Data.PF_Bus_00000 constrainedby ieee14_package.PF_Data.Bus_Data.Bus_Template "Bus power flow result";
  		Bus bus;
  		replaceable record Loads = ieee14_package.PF_Data.Loads_Data.PF_Loads_00000 constrainedby ieee14_package.PF_Data.Loads_Data.Loads_Template "Loads power flow result";
  		Loads loads;
		replaceable record Trafos = ieee14_package.PF_Data.Trafos_Data.PF_Trafos_00000 constrainedby ieee14_package.PF_Data.Trafos_Data.Trafos_Template "Trafos power flow result";
  		Trafos trafos;
	end PF_00000;
end PF_Data;

  annotation(uses(Modelica(version = "3.2.3"), Complex, OpenIPSL(version = "2.0.0-beta.1")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end ieee14_package;
