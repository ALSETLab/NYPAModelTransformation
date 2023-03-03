package smib_ac7b_package "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
	model smib_ac7b
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =1.0E8, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner smib_ac7b_package.PF_Data.Power_Flow pf(redeclare record PowerFlow = smib_ac7b_package.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
OpenIPSL.Electrical.Buses.Bus FORSMARK_d1c9(V_b = 0, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9);
			OpenIPSL.Electrical.Buses.Bus DANNEBO_HVDC_d1e6(V_b = 0, v_0 = pf.powerflow.bus.VDANNEBO_HVDC_d1e6, angle_0 = pf.powerflow.bus.ADANNEBO_HVDC_d1e6);
			OpenIPSL.Electrical.Buses.Bus HJALTA_d1f5(V_b = 0, v_0 = pf.powerflow.bus.VHJALTA_d1f5, angle_0 = pf.powerflow.bus.AHJALTA_d1f5);
			OpenIPSL.Electrical.Buses.Bus PORJUS_d204(V_b = 0, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204);
			OpenIPSL.Electrical.Buses.Bus TENHULT_d213(V_b = 0, v_0 = pf.powerflow.bus.VTENHULT_d213, angle_0 = pf.powerflow.bus.ATENHULT_d213);
			OpenIPSL.Electrical.Buses.Bus HOGASEN_d222(V_b = 0, v_0 = pf.powerflow.bus.VHOGASEN_d222, angle_0 = pf.powerflow.bus.AHOGASEN_d222);
			OpenIPSL.Electrical.Buses.Bus JARPSTROMMEN_d232(V_b = 0, v_0 = pf.powerflow.bus.VJARPSTROMMEN_d232, angle_0 = pf.powerflow.bus.AJARPSTROMMEN_d232);
			OpenIPSL.Electrical.Buses.Bus GRUNDFORS_d241(V_b = 0, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241);
			OpenIPSL.Electrical.Buses.Bus OSKARSHAMN_d250(V_b = 0, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250);
			OpenIPSL.Electrical.Buses.Bus RINGHALS_d25f(V_b = 0, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f);
			OpenIPSL.Electrical.Buses.Bus STENKU_HVDC_d26e(V_b = 0, v_0 = pf.powerflow.bus.VSTENKU_HVDC_d26e, angle_0 = pf.powerflow.bus.ASTENKU_HVDC_d26e);
			OpenIPSL.Electrical.Buses.Bus AJAURE_d27e(V_b = 0, v_0 = pf.powerflow.bus.VAJAURE_d27e, angle_0 = pf.powerflow.bus.AAJAURE_d27e);
			OpenIPSL.Electrical.Buses.Bus TRETTEN_d28d(V_b = 0, v_0 = pf.powerflow.bus.VTRETTEN_d28d, angle_0 = pf.powerflow.bus.ATRETTEN_d28d);
			OpenIPSL.Electrical.Buses.Bus HASLE_d29c(V_b = 0, v_0 = pf.powerflow.bus.VHASLE_d29c, angle_0 = pf.powerflow.bus.AHASLE_d29c);
			OpenIPSL.Electrical.Buses.Bus DAGALI_d2ab(V_b = 0, v_0 = pf.powerflow.bus.VDAGALI_d2ab, angle_0 = pf.powerflow.bus.ADAGALI_d2ab);
			OpenIPSL.Electrical.Buses.Bus KONGSBERG_d2ba(V_b = 0, v_0 = pf.powerflow.bus.VKONGSBERG_d2ba, angle_0 = pf.powerflow.bus.AKONGSBERG_d2ba);
			OpenIPSL.Electrical.Buses.Bus SIMA_d2c9(V_b = 0, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9);
			OpenIPSL.Electrical.Buses.Bus AURLAND_d2d8(V_b = 0, v_0 = pf.powerflow.bus.VAURLAND_d2d8, angle_0 = pf.powerflow.bus.AAURLAND_d2d8);
			OpenIPSL.Electrical.Buses.Bus GEILO_d2e7(V_b = 0, v_0 = pf.powerflow.bus.VGEILO_d2e7, angle_0 = pf.powerflow.bus.AGEILO_d2e7);
			OpenIPSL.Electrical.Buses.Bus EIDFJORD_d2f6(V_b = 0, v_0 = pf.powerflow.bus.VEIDFJORD_d2f6, angle_0 = pf.powerflow.bus.AEIDFJORD_d2f6);
			OpenIPSL.Electrical.Buses.Bus OSLO1_d305(V_b = 0, v_0 = pf.powerflow.bus.VOSLO1_d305, angle_0 = pf.powerflow.bus.AOSLO1_d305);
			OpenIPSL.Electrical.Buses.Bus SYLLING_d314(V_b = 0, v_0 = pf.powerflow.bus.VSYLLING_d314, angle_0 = pf.powerflow.bus.ASYLLING_d314);
			OpenIPSL.Electrical.Buses.Bus KAGGEFOSS_d323(V_b = 0, v_0 = pf.powerflow.bus.VKAGGEFOSS_d323, angle_0 = pf.powerflow.bus.AKAGGEFOSS_d323);
			OpenIPSL.Electrical.Buses.Bus OSLO2_d332(V_b = 0, v_0 = pf.powerflow.bus.VOSLO2_d332, angle_0 = pf.powerflow.bus.AOSLO2_d332);
			OpenIPSL.Electrical.Buses.Bus SKIEN_d340(V_b = 0, v_0 = pf.powerflow.bus.VSKIEN_d340, angle_0 = pf.powerflow.bus.ASKIEN_d340);
			OpenIPSL.Electrical.Buses.Bus KRISTIANSAND_d34f(V_b = 0, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f);
			OpenIPSL.Electrical.Buses.Bus STAVANGER_d35e(V_b = 0, v_0 = pf.powerflow.bus.VSTAVANGER_d35e, angle_0 = pf.powerflow.bus.ASTAVANGER_d35e);
			OpenIPSL.Electrical.Buses.Bus SANDEFJORD_d36d(V_b = 0, v_0 = pf.powerflow.bus.VSANDEFJORD_d36d, angle_0 = pf.powerflow.bus.ASANDEFJORD_d36d);
			OpenIPSL.Electrical.Buses.Bus ARENDAL_d37c(V_b = 0, v_0 = pf.powerflow.bus.VARENDAL_d37c, angle_0 = pf.powerflow.bus.AARENDAL_d37c);
			OpenIPSL.Electrical.Buses.Bus KRISTIA_HVDC_d38b(V_b = 0, v_0 = pf.powerflow.bus.VKRISTIA_HVDC_d38b, angle_0 = pf.powerflow.bus.AKRISTIA_HVDC_d38b);
			OpenIPSL.Electrical.Buses.Bus FEDA_HVDC_d399(V_b = 0, v_0 = pf.powerflow.bus.VFEDA_HVDC_d399, angle_0 = pf.powerflow.bus.AFEDA_HVDC_d399);
			OpenIPSL.Electrical.Buses.Bus KVILLDAL_d3a8(V_b = 0, v_0 = pf.powerflow.bus.VKVILLDAL_d3a8, angle_0 = pf.powerflow.bus.AKVILLDAL_d3a8);
			OpenIPSL.Electrical.Buses.Bus HAGAFOSS_d3b7(V_b = 0, v_0 = pf.powerflow.bus.VHAGAFOSS_d3b7, angle_0 = pf.powerflow.bus.AHAGAFOSS_d3b7);
			OpenIPSL.Electrical.Buses.Bus BLAFALLI_d3c6(V_b = 0, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6);
			OpenIPSL.Electrical.Buses.Bus TRONDHEIM_d3d5(V_b = 0, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5);
			OpenIPSL.Electrical.Buses.Bus ROSSAGA_d3e4(V_b = 0, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4);
			OpenIPSL.Electrical.Buses.Bus OFOTEN_d3f3(V_b = 0, v_0 = pf.powerflow.bus.VOFOTEN_d3f3, angle_0 = pf.powerflow.bus.AOFOTEN_d3f3);
			OpenIPSL.Electrical.Buses.Bus HELSINKI_d402(V_b = 0, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402);
			OpenIPSL.Electrical.Buses.Bus VYBORG_HVDC_d411(V_b = 0, v_0 = pf.powerflow.bus.VVYBORG_HVDC_d411, angle_0 = pf.powerflow.bus.AVYBORG_HVDC_d411);
			OpenIPSL.Electrical.Buses.Bus ESTLINK_HVDC_d420(V_b = 0, v_0 = pf.powerflow.bus.VESTLINK_HVDC_d420, angle_0 = pf.powerflow.bus.AESTLINK_HVDC_d420);
			OpenIPSL.Electrical.Buses.Bus OULU_d42f(V_b = 0, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f);
			OpenIPSL.Electrical.Buses.Bus MALMO_d43e(V_b = 0, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e);
			OpenIPSL.Electrical.Buses.Bus ARRIE_HVDC_d44d(V_b = 0, v_0 = pf.powerflow.bus.VARRIE_HVDC_d44d, angle_0 = pf.powerflow.bus.AARRIE_HVDC_d44d);
			OpenIPSL.Electrical.Buses.Bus KARLSH_HVDC_d45c(V_b = 0, v_0 = pf.powerflow.bus.VKARLSH_HVDC_d45c, angle_0 = pf.powerflow.bus.AKARLSH_HVDC_d45c);
			// -- Lines:
OpenIPSL.Electrical.Branches.PwLine line1_2_17055(R =0.001000000, X =0.2000000000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line2_3_17059(R =0.001000000, X =0.2000000000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line2_22_1705d(R =0.000500000, X =0.1000000000,G = 0, B =0.0000000000);
			OpenIPSL.Electrical.Branches.PwLine line3_22_17061(R =0.000500000, X =0.1000000000,G = 0, B =0.0000000000);
			// -- Transformers:
// -- Linear Shunt Compensators:
// -- Conform Loads:
OpenIPSL.Electrical.Loads.PSSE.Load CL2_1_703f(V_b = _.V_b, v_0 = pf.powerflow.bus.V_,angle_0 = pf.powerflow.bus.A_,P_0 = pf.powerflow.loads.PCL2_1_703f,Q_0 = pf.powerflow.loads.QCL2_1_703f, PQBRAK = 0.7, characteristic = 2);
			// -- Non Conform Loads:
// -- Generator Units:

smib_ac7b_package.Generators.GEN1_1_7049 gen1_1_7049(V_b = _.V_b, v_0 = pf.powerflow.bus.V_, angle_0 = pf.powerflow.bus.A_, P_0 = pf.powerflow.loads.PGEN1_1_7049, Q_0 = pf.powerflow.loads.QGEN1_1_7049);
			
smib_ac7b_package.Generators.GEN3_1_7051 gen3_1_7051(V_b = _.V_b, v_0 = pf.powerflow.bus.V_, angle_0 = pf.powerflow.bus.A_, P_0 = pf.powerflow.loads.PGEN3_1_7051, Q_0 = pf.powerflow.loads.QGEN3_1_7051);
			
// -- Fault Event
OpenIPSL.Electrical.Events.PwFault Fault(R = 0.1, X = 0.1, t1 = 0.3, t2 = 0.31);

equation
connect(_.p, CL2_1_703f.p);
connect(_.p, gen1_1_7049.p);
connect(_.p, gen3_1_7051.p);
connect(_.p, line1_2_17055.p);
connect(_.p, line1_2_17055.n);
connect(_.p, line2_3_17059.p);
connect(_.p, line2_3_17059.n);
connect(_.p, line2_22_1705d.p);
connect(_.p, line2_22_1705d.n);
connect(_.p, line3_22_17061.p);
connect(_.p, line3_22_17061.n);

// -- Connect fault event:
connect(Fault.p, bus_5.p);

end smib_ac7b;package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."
model GEN1_1_7049
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1_1_7049;
model GEN3_1_7051
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN3_1_7051;
end Generators;

package PF_Data "Modelica records for power flow data."
record Power_Flow " Translated and calculated power flow data."
  	extends Modelica.Icons.Record;
  	replaceable record PowerFlow = smib_ac7b_package.PF_Data.Power_Flow_Template constrainedby smib_ac7b_package.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
  	PowerFlow powerflow;
end Power_Flow;
record Power_Flow_Template "Template for power flow"
	 extends Modelica.Icons.Record;
end Power_Flow_Template;  

record Bus_Data

partial record Bus_Template
// FORSMARK_d1c9
parameter OpenIPSL.Types.PerUnit VFORSMARK_d1c9;
parameter OpenIPSL.Types.Angle AFORSMARK_d1c9;
// DANNEBO_HVDC_d1e6
parameter OpenIPSL.Types.PerUnit VDANNEBO_HVDC_d1e6;
parameter OpenIPSL.Types.Angle ADANNEBO_HVDC_d1e6;
// HJALTA_d1f5
parameter OpenIPSL.Types.PerUnit VHJALTA_d1f5;
parameter OpenIPSL.Types.Angle AHJALTA_d1f5;
// PORJUS_d204
parameter OpenIPSL.Types.PerUnit VPORJUS_d204;
parameter OpenIPSL.Types.Angle APORJUS_d204;
// TENHULT_d213
parameter OpenIPSL.Types.PerUnit VTENHULT_d213;
parameter OpenIPSL.Types.Angle ATENHULT_d213;
// HOGASEN_d222
parameter OpenIPSL.Types.PerUnit VHOGASEN_d222;
parameter OpenIPSL.Types.Angle AHOGASEN_d222;
// JARPSTROMMEN_d232
parameter OpenIPSL.Types.PerUnit VJARPSTROMMEN_d232;
parameter OpenIPSL.Types.Angle AJARPSTROMMEN_d232;
// GRUNDFORS_d241
parameter OpenIPSL.Types.PerUnit VGRUNDFORS_d241;
parameter OpenIPSL.Types.Angle AGRUNDFORS_d241;
// OSKARSHAMN_d250
parameter OpenIPSL.Types.PerUnit VOSKARSHAMN_d250;
parameter OpenIPSL.Types.Angle AOSKARSHAMN_d250;
// RINGHALS_d25f
parameter OpenIPSL.Types.PerUnit VRINGHALS_d25f;
parameter OpenIPSL.Types.Angle ARINGHALS_d25f;
// STENKU_HVDC_d26e
parameter OpenIPSL.Types.PerUnit VSTENKU_HVDC_d26e;
parameter OpenIPSL.Types.Angle ASTENKU_HVDC_d26e;
// AJAURE_d27e
parameter OpenIPSL.Types.PerUnit VAJAURE_d27e;
parameter OpenIPSL.Types.Angle AAJAURE_d27e;
// TRETTEN_d28d
parameter OpenIPSL.Types.PerUnit VTRETTEN_d28d;
parameter OpenIPSL.Types.Angle ATRETTEN_d28d;
// HASLE_d29c
parameter OpenIPSL.Types.PerUnit VHASLE_d29c;
parameter OpenIPSL.Types.Angle AHASLE_d29c;
// DAGALI_d2ab
parameter OpenIPSL.Types.PerUnit VDAGALI_d2ab;
parameter OpenIPSL.Types.Angle ADAGALI_d2ab;
// KONGSBERG_d2ba
parameter OpenIPSL.Types.PerUnit VKONGSBERG_d2ba;
parameter OpenIPSL.Types.Angle AKONGSBERG_d2ba;
// SIMA_d2c9
parameter OpenIPSL.Types.PerUnit VSIMA_d2c9;
parameter OpenIPSL.Types.Angle ASIMA_d2c9;
// AURLAND_d2d8
parameter OpenIPSL.Types.PerUnit VAURLAND_d2d8;
parameter OpenIPSL.Types.Angle AAURLAND_d2d8;
// GEILO_d2e7
parameter OpenIPSL.Types.PerUnit VGEILO_d2e7;
parameter OpenIPSL.Types.Angle AGEILO_d2e7;
// EIDFJORD_d2f6
parameter OpenIPSL.Types.PerUnit VEIDFJORD_d2f6;
parameter OpenIPSL.Types.Angle AEIDFJORD_d2f6;
// OSLO1_d305
parameter OpenIPSL.Types.PerUnit VOSLO1_d305;
parameter OpenIPSL.Types.Angle AOSLO1_d305;
// SYLLING_d314
parameter OpenIPSL.Types.PerUnit VSYLLING_d314;
parameter OpenIPSL.Types.Angle ASYLLING_d314;
// KAGGEFOSS_d323
parameter OpenIPSL.Types.PerUnit VKAGGEFOSS_d323;
parameter OpenIPSL.Types.Angle AKAGGEFOSS_d323;
// OSLO2_d332
parameter OpenIPSL.Types.PerUnit VOSLO2_d332;
parameter OpenIPSL.Types.Angle AOSLO2_d332;
// SKIEN_d340
parameter OpenIPSL.Types.PerUnit VSKIEN_d340;
parameter OpenIPSL.Types.Angle ASKIEN_d340;
// KRISTIANSAND_d34f
parameter OpenIPSL.Types.PerUnit VKRISTIANSAND_d34f;
parameter OpenIPSL.Types.Angle AKRISTIANSAND_d34f;
// STAVANGER_d35e
parameter OpenIPSL.Types.PerUnit VSTAVANGER_d35e;
parameter OpenIPSL.Types.Angle ASTAVANGER_d35e;
// SANDEFJORD_d36d
parameter OpenIPSL.Types.PerUnit VSANDEFJORD_d36d;
parameter OpenIPSL.Types.Angle ASANDEFJORD_d36d;
// ARENDAL_d37c
parameter OpenIPSL.Types.PerUnit VARENDAL_d37c;
parameter OpenIPSL.Types.Angle AARENDAL_d37c;
// KRISTIA_HVDC_d38b
parameter OpenIPSL.Types.PerUnit VKRISTIA_HVDC_d38b;
parameter OpenIPSL.Types.Angle AKRISTIA_HVDC_d38b;
// FEDA_HVDC_d399
parameter OpenIPSL.Types.PerUnit VFEDA_HVDC_d399;
parameter OpenIPSL.Types.Angle AFEDA_HVDC_d399;
// KVILLDAL_d3a8
parameter OpenIPSL.Types.PerUnit VKVILLDAL_d3a8;
parameter OpenIPSL.Types.Angle AKVILLDAL_d3a8;
// HAGAFOSS_d3b7
parameter OpenIPSL.Types.PerUnit VHAGAFOSS_d3b7;
parameter OpenIPSL.Types.Angle AHAGAFOSS_d3b7;
// BLAFALLI_d3c6
parameter OpenIPSL.Types.PerUnit VBLAFALLI_d3c6;
parameter OpenIPSL.Types.Angle ABLAFALLI_d3c6;
// TRONDHEIM_d3d5
parameter OpenIPSL.Types.PerUnit VTRONDHEIM_d3d5;
parameter OpenIPSL.Types.Angle ATRONDHEIM_d3d5;
// ROSSAGA_d3e4
parameter OpenIPSL.Types.PerUnit VROSSAGA_d3e4;
parameter OpenIPSL.Types.Angle AROSSAGA_d3e4;
// OFOTEN_d3f3
parameter OpenIPSL.Types.PerUnit VOFOTEN_d3f3;
parameter OpenIPSL.Types.Angle AOFOTEN_d3f3;
// HELSINKI_d402
parameter OpenIPSL.Types.PerUnit VHELSINKI_d402;
parameter OpenIPSL.Types.Angle AHELSINKI_d402;
// VYBORG_HVDC_d411
parameter OpenIPSL.Types.PerUnit VVYBORG_HVDC_d411;
parameter OpenIPSL.Types.Angle AVYBORG_HVDC_d411;
// ESTLINK_HVDC_d420
parameter OpenIPSL.Types.PerUnit VESTLINK_HVDC_d420;
parameter OpenIPSL.Types.Angle AESTLINK_HVDC_d420;
// OULU_d42f
parameter OpenIPSL.Types.PerUnit VOULU_d42f;
parameter OpenIPSL.Types.Angle AOULU_d42f;
// MALMO_d43e
parameter OpenIPSL.Types.PerUnit VMALMO_d43e;
parameter OpenIPSL.Types.Angle AMALMO_d43e;
// ARRIE_HVDC_d44d
parameter OpenIPSL.Types.PerUnit VARRIE_HVDC_d44d;
parameter OpenIPSL.Types.Angle AARRIE_HVDC_d44d;
// KARLSH_HVDC_d45c
parameter OpenIPSL.Types.PerUnit VKARLSH_HVDC_d45c;
parameter OpenIPSL.Types.Angle AKARLSH_HVDC_d45c;end Bus_Template;
record PF_Bus_00000
	extends smib_ac7b_package.PF_Data.Bus_Data.Bus_Template(VFORSMARK_d1c9=Infinity,AFORSMARK_d1c9=-0.050267,VDANNEBO_HVDC_d1e6=Infinity,ADANNEBO_HVDC_d1e6=-0.062518,VHJALTA_d1f5=Infinity,AHJALTA_d1f5=0.043724,VPORJUS_d204=Infinity,APORJUS_d204=0.114685,VTENHULT_d213=Infinity,ATENHULT_d213=0.001815,VHOGASEN_d222=Infinity,AHOGASEN_d222=-0.091801,VJARPSTROMMEN_d232=Infinity,AJARPSTROMMEN_d232=-0.073993,VGRUNDFORS_d241=Infinity,AGRUNDFORS_d241=0.19437,VOSKARSHAMN_d250=Infinity,AOSKARSHAMN_d250=0.00000,VRINGHALS_d25f=Infinity,ARINGHALS_d25f=-0.012781,VSTENKU_HVDC_d26e=Infinity,ASTENKU_HVDC_d26e=-0.011315,VAJAURE_d27e=Infinity,AAJAURE_d27e=0.147459,VTRETTEN_d28d=Infinity,ATRETTEN_d28d=0.200933,VHASLE_d29c=Infinity,AHASLE_d29c=0.208497,VDAGALI_d2ab=Infinity,ADAGALI_d2ab=0.31164,VKONGSBERG_d2ba=Infinity,AKONGSBERG_d2ba=0.329698,VSIMA_d2c9=Infinity,ASIMA_d2c9=0.764576,VAURLAND_d2d8=Infinity,AAURLAND_d2d8=0.59770,VGEILO_d2e7=Infinity,AGEILO_d2e7=0.455702,VEIDFJORD_d2f6=Infinity,AEIDFJORD_d2f6=0.473275,VOSLO1_d305=Infinity,AOSLO1_d305=0.35671,VSYLLING_d314=Infinity,ASYLLING_d314=0.36484,VKAGGEFOSS_d323=Infinity,AKAGGEFOSS_d323=0.380064,VOSLO2_d332=Infinity,AOSLO2_d332=0.237721,VSKIEN_d340=Infinity,ASKIEN_d340=0.241145,VKRISTIANSAND_d34f=Infinity,AKRISTIANSAND_d34f=0.211356,VSTAVANGER_d35e=Infinity,ASTAVANGER_d35e=0.391774,VSANDEFJORD_d36d=Infinity,ASANDEFJORD_d36d=0.419586,VARENDAL_d37c=Infinity,AARENDAL_d37c=0.426097,VKRISTIA_HVDC_d38b=Infinity,AKRISTIA_HVDC_d38b=0.440842,VFEDA_HVDC_d399=Infinity,AFEDA_HVDC_d399=0.204212,VKVILLDAL_d3a8=Infinity,AKVILLDAL_d3a8=0.420076,VHAGAFOSS_d3b7=Infinity,AHAGAFOSS_d3b7=0.395839,VBLAFALLI_d3c6=Infinity,ABLAFALLI_d3c6=0.906043,VTRONDHEIM_d3d5=Infinity,ATRONDHEIM_d3d5=-0.269847,VROSSAGA_d3e4=Infinity,AROSSAGA_d3e4=-0.037718,VOFOTEN_d3f3=Infinity,AOFOTEN_d3f3=-0.029608,VHELSINKI_d402=Infinity,AHELSINKI_d402=0.202362,VVYBORG_HVDC_d411=Infinity,AVYBORG_HVDC_d411=0.21238,VESTLINK_HVDC_d420=Infinity,AESTLINK_HVDC_d420=0.195154,VOULU_d42f=Infinity,AOULU_d42f=0.156542,VMALMO_d43e=Infinity,AMALMO_d43e=-0.069783,VARRIE_HVDC_d44d=Infinity,AARRIE_HVDC_d44d=-0.069054,VKARLSH_HVDC_d45c=Infinity,AKARLSH_HVDC_d45c=-0.069783);
end PF_Bus_00000;
end Bus_Data;

record Loads_Data

partial record Loads_Template
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
parameter OpenIPSL.Types.ActivePower PNOT_DEFINED;
parameter OpenIPSL.Types.ReactivePower QNOT_DEFINED;
end Loads_Template;

record PF_Loads_00000
	extends smib_ac7b_package.PF_Data.Loads_Data.Loads_Template(PNOT_DEFINED = 2.93761E8,QNOT_DEFINED = 9.9393E7,PNOT_DEFINED = 2.93761E8,QNOT_DEFINED = 9.9393E7,PNOT_DEFINED = 2.93761E8,QNOT_DEFINED = 9.9393E7,PNOT_DEFINED = 1.22E9,QNOT_DEFINED = 4.00995E8,PNOT_DEFINED = 9.0183E7,QNOT_DEFINED = 9.4384E7,PNOT_DEFINED = 1.029E9,QNOT_DEFINED = 3.38216E8,PNOT_DEFINED = 1.893817E9,QNOT_DEFINED = 5.57725E8,PNOT_DEFINED = 1.2854E9,QNOT_DEFINED = 3.58053E8,PNOT_DEFINED = 1.2854E9,QNOT_DEFINED = 3.58053E8,PNOT_DEFINED = 1.542479E9,QNOT_DEFINED = 5.37078E8,PNOT_DEFINED = 1.542479E9,QNOT_DEFINED = 5.37078E8,PNOT_DEFINED = 1.542479E9,QNOT_DEFINED = 5.37078E8,PNOT_DEFINED = 1.542479E9,QNOT_DEFINED = 5.37078E8,PNOT_DEFINED = 8.0E7,QNOT_DEFINED = 2.6295E7,PNOT_DEFINED = 5.86618E8,QNOT_DEFINED = 1.63598E8,PNOT_DEFINED = 2.303E9,QNOT_DEFINED = 7.56959E8,PNOT_DEFINED = 1.226567E9,QNOT_DEFINED = 2.3371E8,PNOT_DEFINED = 1.119908E9,QNOT_DEFINED = 4.67424E8,PNOT_DEFINED = 1.119908E9,QNOT_DEFINED = 4.67424E8,PNOT_DEFINED = 1.397946E9,QNOT_DEFINED = 2.84835E8,PNOT_DEFINED = 1.397946E9,QNOT_DEFINED = 2.84835E8,PNOT_DEFINED = 1.584E9,QNOT_DEFINED = 2.25708E8,PNOT_DEFINED = 7.27E8,QNOT_DEFINED = 2.38953E8,PNOT_DEFINED = 7.14054E8,QNOT_DEFINED = 2.61882E8,PNOT_DEFINED = 7.14054E8,QNOT_DEFINED = 2.61882E8,PNOT_DEFINED = 8.32667E8,QNOT_DEFINED = 2.73684E8,PNOT_DEFINED = 8.32667E8,QNOT_DEFINED = 2.73684E8,PNOT_DEFINED = 8.32667E8,QNOT_DEFINED = 2.73684E8,PNOT_DEFINED = 2.256E9,QNOT_DEFINED = 7.41511E8,PNOT_DEFINED = 3.6E7,QNOT_DEFINED = 1.1833E7,PNOT_DEFINED = 1.8E7,QNOT_DEFINED = 5.916E6,PNOT_DEFINED = 1.372248E9,QNOT_DEFINED = 2.86124E8,PNOT_DEFINED = 1.372248E9,QNOT_DEFINED = 2.86124E8,PNOT_DEFINED = 1.372248E9,QNOT_DEFINED = 2.86124E8,PNOT_DEFINED = 1.372248E9,QNOT_DEFINED = 2.86124E8,PNOT_DEFINED = 1.372248E9,QNOT_DEFINED = 2.86124E8,PNOT_DEFINED = 1.22E9,QNOT_DEFINED = 4.00995E8,PNOT_DEFINED = 1.005E9,QNOT_DEFINED = 3.30328E8,PNOT_DEFINED = 7.19E8,QNOT_DEFINED = 2.36324E8,PNOT_DEFINED = 1.232879E9,QNOT_DEFINED = 8.17509E8,PNOT_DEFINED = 1.232879E9,QNOT_DEFINED = 8.17509E8,PNOT_DEFINED = 3.6E7,QNOT_DEFINED = 1.1833E7,PNOT_DEFINED = 9.63667E8,QNOT_DEFINED = 3.16742E8,PNOT_DEFINED = 9.63667E8,QNOT_DEFINED = 3.16742E8,PNOT_DEFINED = 9.63667E8,QNOT_DEFINED = 3.16742E8,PNOT_DEFINED = 4.0E8,QNOT_DEFINED = 1.3147399999999999E8,PNOT_DEFINED = 7.6E7,QNOT_DEFINED = 2.498E7,PNOT_DEFINED = 0,QNOT_DEFINED = 0,PNOT_DEFINED = 3.71233E8,QNOT_DEFINED = 1.72777E8,PNOT_DEFINED = 3.71233E8,QNOT_DEFINED = 1.72777E8,PNOT_DEFINED = 3.71233E8,QNOT_DEFINED = 1.72777E8,PNOT_DEFINED = 3.164E8,QNOT_DEFINED = 6.5747E7,PNOT_DEFINED = 3.164E8,QNOT_DEFINED = 6.5747E7,PNOT_DEFINED = 3.164E8,QNOT_DEFINED = 6.5747E7,PNOT_DEFINED = 3.164E8,QNOT_DEFINED = 6.5747E7,PNOT_DEFINED = 3.164E8,QNOT_DEFINED = 6.5747E7,PNOT_DEFINED = 2.0027E8,QNOT_DEFINED = 2.4521E7,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 4.39841E8,QNOT_DEFINED = 7.17E6,PNOT_DEFINED = 7.04102E8,QNOT_DEFINED = 2.9633E7,PNOT_DEFINED = 7.04102E8,QNOT_DEFINED = 2.9633E7,PNOT_DEFINED = 7.04102E8,QNOT_DEFINED = 2.9633E7,PNOT_DEFINED = 7.04102E8,QNOT_DEFINED = 2.9633E7,PNOT_DEFINED = 7.04102E8,QNOT_DEFINED = 2.9633E7,PNOT_DEFINED = 7.04102E8,QNOT_DEFINED = 2.9633E7,PNOT_DEFINED = 6.98949E8,QNOT_DEFINED = 2.69075E8,PNOT_DEFINED = 6.98949E8,QNOT_DEFINED = 2.69075E8,PNOT_DEFINED = 6.98949E8,QNOT_DEFINED = 2.69075E8,PNOT_DEFINED = 6.98949E8,QNOT_DEFINED = 2.69075E8,PNOT_DEFINED = 6.98949E8,QNOT_DEFINED = 2.69075E8,PNOT_DEFINED = 6.98949E8,QNOT_DEFINED = 2.69075E8,PNOT_DEFINED = 3.51755E8,QNOT_DEFINED = 4.35537E8,PNOT_DEFINED = 3.51755E8,QNOT_DEFINED = 4.35537E8,PNOT_DEFINED = 7.23333E8,QNOT_DEFINED = 2.03805E8,PNOT_DEFINED = 7.23333E8,QNOT_DEFINED = 2.03805E8,PNOT_DEFINED = 7.23333E8,QNOT_DEFINED = 2.03805E8,PNOT_DEFINED = 7.23333E8,QNOT_DEFINED = 2.03805E8,PNOT_DEFINED = 7.23333E8,QNOT_DEFINED = 2.03805E8,PNOT_DEFINED = 7.23333E8,QNOT_DEFINED = 2.03805E8,PNOT_DEFINED = 3.33242E8,QNOT_DEFINED = 2.27241E8,PNOT_DEFINED = 3.33242E8,QNOT_DEFINED = 2.27241E8,PNOT_DEFINED = 2.59503E8,QNOT_DEFINED = 4.9584E7,PNOT_DEFINED = 2.59503E8,QNOT_DEFINED = 4.9584E7,PNOT_DEFINED = 2.3638E8,QNOT_DEFINED = 2.96033E8,PNOT_DEFINED = 2.3638E8,QNOT_DEFINED = 2.96033E8,PNOT_DEFINED = 2.3638E8,QNOT_DEFINED = 2.96033E8,PNOT_DEFINED = 2.3638E8,QNOT_DEFINED = 2.96033E8,PNOT_DEFINED = 4.29844E8,QNOT_DEFINED = 1.5552E7,PNOT_DEFINED = 4.29844E8,QNOT_DEFINED = 1.5552E7,PNOT_DEFINED = 4.29844E8,QNOT_DEFINED = 1.5552E7,PNOT_DEFINED = 4.29844E8,QNOT_DEFINED = 1.5552E7,PNOT_DEFINED = 6.28821E8,QNOT_DEFINED = 1.32332E8,PNOT_DEFINED = 6.28821E8,QNOT_DEFINED = 1.32332E8,PNOT_DEFINED = 6.28821E8,QNOT_DEFINED = 1.32332E8,PNOT_DEFINED = 6.28821E8,QNOT_DEFINED = 1.32332E8,PNOT_DEFINED = 6.28821E8,QNOT_DEFINED = 1.32332E8,PNOT_DEFINED = 2.0125E8,QNOT_DEFINED = 2.48711E8,PNOT_DEFINED = 2.0125E8,QNOT_DEFINED = 2.48711E8,PNOT_DEFINED = 2.0125E8,QNOT_DEFINED = 2.48711E8,PNOT_DEFINED = 2.0125E8,QNOT_DEFINED = 2.48711E8,PNOT_DEFINED = 5.2025E8,QNOT_DEFINED = 1.73342E8,PNOT_DEFINED = 5.2025E8,QNOT_DEFINED = 1.73342E8,PNOT_DEFINED = 5.2025E8,QNOT_DEFINED = 1.73342E8,PNOT_DEFINED = 5.2025E8,QNOT_DEFINED = 1.73342E8,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 7.07429E8,QNOT_DEFINED = 5.1637E7,PNOT_DEFINED = 4.50047E8,QNOT_DEFINED = 5.78697E8,PNOT_DEFINED = 4.50047E8,QNOT_DEFINED = 5.78697E8,PNOT_DEFINED = 4.50047E8,QNOT_DEFINED = 5.78697E8,PNOT_DEFINED = 1.69333E8,QNOT_DEFINED = 1.57431E8,PNOT_DEFINED = 1.69333E8,QNOT_DEFINED = 1.57431E8,PNOT_DEFINED = 1.69333E8,QNOT_DEFINED = 1.57431E8,PNOT_DEFINED = 1.69333E8,QNOT_DEFINED = 1.57431E8,PNOT_DEFINED = 1.69333E8,QNOT_DEFINED = 1.57431E8,PNOT_DEFINED = 1.69333E8,QNOT_DEFINED = 1.57431E8,PNOT_DEFINED = 2.19397563934E7,QNOT_DEFINED = 9.586594238281E8,PNOT_DEFINED = 2.1980093002299998E7,QNOT_DEFINED = 9.915462646484E8,PNOT_DEFINED = 197915.7627,QNOT_DEFINED = 98957.8813,PNOT_DEFINED = 200642.82419999997,QNOT_DEFINED = 100321.41209999999,PNOT_DEFINED = 203788.0868,QNOT_DEFINED = 509470.2244,PNOT_DEFINED = 200642.82419999997,QNOT_DEFINED = 501607.0604,PNOT_DEFINED = 302401.78109999996,QNOT_DEFINED = 1.3104168177E6,PNOT_DEFINED = 321649.99840000004,QNOT_DEFINED = 1.3938263655E6);
		end PF_Loads_00000;
	end Loads_Data;

	record Trafos_Data
		partial record Trafos_Template
		end Trafos_Template;

	record PF_Trafos_00000
		extends smib_ac7b_package.PF_Data.Trafos_Data.Trafos_Template();
	end PF_Trafos_00000;
end Trafos_Data;

	record PF_00000
  		extends smib_ac7b_package.PF_Data.Power_Flow_Template;
  		replaceable record Bus = smib_ac7b_package.PF_Data.Bus_Data.PF_Bus_00000 constrainedby smib_ac7b_package.PF_Data.Bus_Data.Bus_Template "Bus power flow result";
  		Bus bus;
  		replaceable record Loads = smib_ac7b_package.PF_Data.Loads_Data.PF_Loads_00000 constrainedby smib_ac7b_package.PF_Data.Loads_Data.Loads_Template "Loads power flow result";
  		Loads loads;
		replaceable record Trafos = smib_ac7b_package.PF_Data.Trafos_Data.PF_Trafos_00000 constrainedby smib_ac7b_package.PF_Data.Trafos_Data.Trafos_Template "Trafos power flow result";
  		Trafos trafos;
	end PF_00000;
end PF_Data;

  annotation(uses(Modelica(version = "4.0.0"), Complex, OpenIPSL(version = "3.1.0-dev")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end smib_ac7b_package;