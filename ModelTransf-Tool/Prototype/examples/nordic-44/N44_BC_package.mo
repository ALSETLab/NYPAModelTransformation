package N44_BC_package "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
  model N44_BC
    inner OpenIPSL.Electrical.SystemBase SysData(S_b = 1.0E8, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
    inner N44_BC_package.PF_Data.Power_Flow pf(redeclare record PowerFlow = N44_BC_package.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
    // -- Buses:
    OpenIPSL.Electrical.Buses.Bus FORSMARK_d1c9(V_b = 420000, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9);
    OpenIPSL.Electrical.Buses.Bus DANNEBO_HVDC_d1e6(V_b = 420000, v_0 = pf.powerflow.bus.VDANNEBO_HVDC_d1e6, angle_0 = pf.powerflow.bus.ADANNEBO_HVDC_d1e6);
    OpenIPSL.Electrical.Buses.Bus HJALTA_d1f5(V_b = 420000, v_0 = pf.powerflow.bus.VHJALTA_d1f5, angle_0 = pf.powerflow.bus.AHJALTA_d1f5);
    OpenIPSL.Electrical.Buses.Bus PORJUS_d204(V_b = 420000, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204);
    OpenIPSL.Electrical.Buses.Bus TENHULT_d213(V_b = 420000, v_0 = pf.powerflow.bus.VTENHULT_d213, angle_0 = pf.powerflow.bus.ATENHULT_d213);
    OpenIPSL.Electrical.Buses.Bus HOGASEN_d222(V_b = 300000, v_0 = pf.powerflow.bus.VHOGASEN_d222, angle_0 = pf.powerflow.bus.AHOGASEN_d222);
    OpenIPSL.Electrical.Buses.Bus JARPSTROMMEN_d232(V_b = 420000, v_0 = pf.powerflow.bus.VJARPSTROMMEN_d232, angle_0 = pf.powerflow.bus.AJARPSTROMMEN_d232);
    OpenIPSL.Electrical.Buses.Bus GRUNDFORS_d241(V_b = 420000, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241);
    OpenIPSL.Electrical.Buses.Bus OSKARSHAMN_d250(V_b = 420000, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250);
    OpenIPSL.Electrical.Buses.Bus RINGHALS_d25f(V_b = 420000, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f);
    OpenIPSL.Electrical.Buses.Bus STENKU_HVDC_d26e(V_b = 135000, v_0 = pf.powerflow.bus.VSTENKU_HVDC_d26e, angle_0 = pf.powerflow.bus.ASTENKU_HVDC_d26e);
    OpenIPSL.Electrical.Buses.Bus AJAURE_d27e(V_b = 300000, v_0 = pf.powerflow.bus.VAJAURE_d27e, angle_0 = pf.powerflow.bus.AAJAURE_d27e);
    OpenIPSL.Electrical.Buses.Bus TRETTEN_d28d(V_b = 300000, v_0 = pf.powerflow.bus.VTRETTEN_d28d, angle_0 = pf.powerflow.bus.ATRETTEN_d28d);
    OpenIPSL.Electrical.Buses.Bus HASLE_d29c(V_b = 420000, v_0 = pf.powerflow.bus.VHASLE_d29c, angle_0 = pf.powerflow.bus.AHASLE_d29c);
    OpenIPSL.Electrical.Buses.Bus DAGALI_d2ab(V_b = 420000, v_0 = pf.powerflow.bus.VDAGALI_d2ab, angle_0 = pf.powerflow.bus.ADAGALI_d2ab);
    OpenIPSL.Electrical.Buses.Bus KONGSBERG_d2ba(V_b = 420000, v_0 = pf.powerflow.bus.VKONGSBERG_d2ba, angle_0 = pf.powerflow.bus.AKONGSBERG_d2ba);
    OpenIPSL.Electrical.Buses.Bus SIMA_d2c9(V_b = 300000, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9);
    OpenIPSL.Electrical.Buses.Bus AURLAND_d2d8(V_b = 420000, v_0 = pf.powerflow.bus.VAURLAND_d2d8, angle_0 = pf.powerflow.bus.AAURLAND_d2d8);
    OpenIPSL.Electrical.Buses.Bus GEILO_d2e7(V_b = 420000, v_0 = pf.powerflow.bus.VGEILO_d2e7, angle_0 = pf.powerflow.bus.AGEILO_d2e7);
    OpenIPSL.Electrical.Buses.Bus EIDFJORD_d2f6(V_b = 420000, v_0 = pf.powerflow.bus.VEIDFJORD_d2f6, angle_0 = pf.powerflow.bus.AEIDFJORD_d2f6);
    OpenIPSL.Electrical.Buses.Bus OSLO1_d305(V_b = 300000, v_0 = pf.powerflow.bus.VOSLO1_d305, angle_0 = pf.powerflow.bus.AOSLO1_d305);
    OpenIPSL.Electrical.Buses.Bus SYLLING_d314(V_b = 420000, v_0 = pf.powerflow.bus.VSYLLING_d314, angle_0 = pf.powerflow.bus.ASYLLING_d314);
    OpenIPSL.Electrical.Buses.Bus KAGGEFOSS_d323(V_b = 420000, v_0 = pf.powerflow.bus.VKAGGEFOSS_d323, angle_0 = pf.powerflow.bus.AKAGGEFOSS_d323);
    OpenIPSL.Electrical.Buses.Bus OSLO2_d332(V_b = 300000, v_0 = pf.powerflow.bus.VOSLO2_d332, angle_0 = pf.powerflow.bus.AOSLO2_d332);
    OpenIPSL.Electrical.Buses.Bus SKIEN_d340(V_b = 420000, v_0 = pf.powerflow.bus.VSKIEN_d340, angle_0 = pf.powerflow.bus.ASKIEN_d340);
    OpenIPSL.Electrical.Buses.Bus KRISTIANSAND_d34f(V_b = 300000, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f);
    OpenIPSL.Electrical.Buses.Bus STAVANGER_d35e(V_b = 300000, v_0 = pf.powerflow.bus.VSTAVANGER_d35e, angle_0 = pf.powerflow.bus.ASTAVANGER_d35e);
    OpenIPSL.Electrical.Buses.Bus SANDEFJORD_d36d(V_b = 420000, v_0 = pf.powerflow.bus.VSANDEFJORD_d36d, angle_0 = pf.powerflow.bus.ASANDEFJORD_d36d);
    OpenIPSL.Electrical.Buses.Bus ARENDAL_d37c(V_b = 300000, v_0 = pf.powerflow.bus.VARENDAL_d37c, angle_0 = pf.powerflow.bus.AARENDAL_d37c);
    OpenIPSL.Electrical.Buses.Bus KRISTIA_HVDC_d38b(V_b = 300000, v_0 = pf.powerflow.bus.VKRISTIA_HVDC_d38b, angle_0 = pf.powerflow.bus.AKRISTIA_HVDC_d38b);
    OpenIPSL.Electrical.Buses.Bus FEDA_HVDC_d399(V_b = 300000, v_0 = pf.powerflow.bus.VFEDA_HVDC_d399, angle_0 = pf.powerflow.bus.AFEDA_HVDC_d399);
    OpenIPSL.Electrical.Buses.Bus KVILLDAL_d3a8(V_b = 300000, v_0 = pf.powerflow.bus.VKVILLDAL_d3a8, angle_0 = pf.powerflow.bus.AKVILLDAL_d3a8);
    OpenIPSL.Electrical.Buses.Bus HAGAFOSS_d3b7(V_b = 420000, v_0 = pf.powerflow.bus.VHAGAFOSS_d3b7, angle_0 = pf.powerflow.bus.AHAGAFOSS_d3b7);
    OpenIPSL.Electrical.Buses.Bus BLAFALLI_d3c6(V_b = 300000, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6);
    OpenIPSL.Electrical.Buses.Bus TRONDHEIM_d3d5(V_b = 300000, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5);
    OpenIPSL.Electrical.Buses.Bus ROSSAGA_d3e4(V_b = 300000, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4);
    OpenIPSL.Electrical.Buses.Bus OFOTEN_d3f3(V_b = 420000, v_0 = pf.powerflow.bus.VOFOTEN_d3f3, angle_0 = pf.powerflow.bus.AOFOTEN_d3f3);
    OpenIPSL.Electrical.Buses.Bus HELSINKI_d402(V_b = 420000, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402);
    OpenIPSL.Electrical.Buses.Bus VYBORG_HVDC_d411(V_b = 420000, v_0 = pf.powerflow.bus.VVYBORG_HVDC_d411, angle_0 = pf.powerflow.bus.AVYBORG_HVDC_d411);
    OpenIPSL.Electrical.Buses.Bus ESTLINK_HVDC_d420(V_b = 420000, v_0 = pf.powerflow.bus.VESTLINK_HVDC_d420, angle_0 = pf.powerflow.bus.AESTLINK_HVDC_d420);
    OpenIPSL.Electrical.Buses.Bus OULU_d42f(V_b = 420000, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f);
    OpenIPSL.Electrical.Buses.Bus MALMO_d43e(V_b = 420000, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e);
    OpenIPSL.Electrical.Buses.Bus ARRIE_HVDC_d44d(V_b = 420000, v_0 = pf.powerflow.bus.VARRIE_HVDC_d44d, angle_0 = pf.powerflow.bus.AARRIE_HVDC_d44d);
    OpenIPSL.Electrical.Buses.Bus KARLSH_HVDC_d45c(V_b = 420000, v_0 = pf.powerflow.bus.VKARLSH_HVDC_d45c, angle_0 = pf.powerflow.bus.AKARLSH_HVDC_d45c);
    // -- Lines:
    OpenIPSL.Electrical.Branches.PwLine line3000_3020_1d816(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line3000_3115_1d822(R = 0.007500000, X = 0.0900000000, G = 0, B = 2.4999999822);
    OpenIPSL.Electrical.Branches.PwLine line3000_3245_1d82e(R = 0.000800000, X = 0.0120000000, G = 0, B = 0.2499999894);
    OpenIPSL.Electrical.Branches.PwLine line3000_3245_2d83a(R = 0.001800000, X = 0.0200000000, G = 0, B = 0.2499999894);
    OpenIPSL.Electrical.Branches.PwLine line3000_3300_1d846(R = 0.000600000, X = 0.0080000000, G = 0, B = 0.1499999760);
    OpenIPSL.Electrical.Branches.PwLine line3000_3300_2d852(R = 0.000900000, X = 0.0100000000, G = 0, B = 0.1250000388);
    OpenIPSL.Electrical.Branches.PwLine line3100_3115_1d85e(R = 0.001500000, X = 0.0200000000, G = 0, B = 0.9999999576);
    OpenIPSL.Electrical.Branches.PwLine line3100_3200_1d86a(R = 0.004000000, X = 0.0240000000, G = 0, B = 0.9999999576);
    OpenIPSL.Electrical.Branches.PwLine line3100_3200_2d876(R = 0.004000000, X = 0.0240000000, G = 0, B = 0.9999999576);
    OpenIPSL.Electrical.Branches.PwLine line3100_3200_3d882(R = 0.004000000, X = 0.0240000000, G = 0, B = 0.9999999576);
    OpenIPSL.Electrical.Branches.PwLine line3100_3249_1d88e(R = 0.001500000, X = 0.0215000000, G = 0, B = 0.9999999576);
    OpenIPSL.Electrical.Branches.PwLine line3100_3359_1d89a(R = 0.008000000, X = 0.0500000000, G = 0, B = 1.2500000352);
    OpenIPSL.Electrical.Branches.PwLine line3100_3359_2d8a6(R = 0.004000000, X = 0.0230000000, G = 0, B = 1.1999999844);
    OpenIPSL.Electrical.Branches.PwLine line3115_3245_1d8b2(R = 0.004500000, X = 0.0500000000, G = 0, B = 0.7000000056);
    OpenIPSL.Electrical.Branches.PwLine line3115_3249_1d8be(R = 0.001500000, X = 0.0200000000, G = 0, B = 0.3999999654);
    OpenIPSL.Electrical.Branches.PwLine line3115_6701_1d8ca(R = 0.004000000, X = 0.0400000000, G = 0, B = 0.4999999788);
    OpenIPSL.Electrical.Branches.PwLine line3115_7100_1d8d6(R = 0.004000000, X = 0.0130000000, G = 0, B = 0.6500000430);
    OpenIPSL.Electrical.Branches.PwLine line3200_3300_1d8e2(R = 0.002000000, X = 0.0200000000, G = 0, B = 0.3000000402);
    OpenIPSL.Electrical.Branches.PwLine line3200_3359_1d8ee(R = 0.001000000, X = 0.0200000000, G = 0, B = 0.3500000028);
    OpenIPSL.Electrical.Branches.PwLine line3200_8500_1d8fa(R = 0.001000000, X = 0.0170000000, G = 0, B = 0.3000000402);
    OpenIPSL.Electrical.Branches.PwLine line3244_6500_1d906(R = 0.001000000, X = 0.0200000000, G = 0, B = 0.3000000150);
    OpenIPSL.Electrical.Branches.PwLine line3249_7100_1d912(R = 0.002000000, X = 0.0075000000, G = 0, B = 0.3900000258);
    OpenIPSL.Electrical.Branches.PwLine line3300_8500_1d91e(R = 0.002000000, X = 0.0230000000, G = 0, B = 0.3000000402);
    OpenIPSL.Electrical.Branches.PwLine line3300_8500_2d92a(R = 0.001200000, X = 0.0270000000, G = 0, B = 0.4999999788);
    OpenIPSL.Electrical.Branches.PwLine line3359_5101_1d936(R = 0.001600000, X = 0.0260000000, G = 0, B = 0.4500000162);
    OpenIPSL.Electrical.Branches.PwLine line3359_5101_2d942(R = 0.002000000, X = 0.0220000000, G = 0, B = 0.3000000402);
    OpenIPSL.Electrical.Branches.PwLine line3359_8500_1d94e(R = 0.001200000, X = 0.0270000000, G = 0, B = 0.4999999788);
    OpenIPSL.Electrical.Branches.PwLine line3359_8500_2d95a(R = 0.002500000, X = 0.0320000000, G = 0, B = 0.4500000162);
    OpenIPSL.Electrical.Branches.PwLine line3701_6700_1d966(R = 0.025000000, X = 0.2000000000, G = 0, B = 0.1499999850);
    OpenIPSL.Electrical.Branches.PwLine line5100_5500_1d972(R = 0.002700000, X = 0.0260000000, G = 0, B = 0.2200000050);
    OpenIPSL.Electrical.Branches.PwLine line5100_6500_1d97e(R = 0.008000000, X = 0.0900000000, G = 0, B = 0.3000000150);
    OpenIPSL.Electrical.Branches.PwLine line5101_5102_1d98a(R = 0.000800000, X = 0.0100000000, G = 0, B = 0.4500000162);
    OpenIPSL.Electrical.Branches.PwLine line5101_5103_1d996(R = 0.001000000, X = 0.0140000000, G = 0, B = 0.2000000268);
    OpenIPSL.Electrical.Branches.PwLine line5101_5501_1d9a2(R = 0.001000000, X = 0.0150000000, G = 0, B = 2.7499999716);
    OpenIPSL.Electrical.Branches.PwLine line5102_5103_1d9b6(R = 0.000400000, X = 0.0070000000, G = 0, B = 0.1499999760);
    OpenIPSL.Electrical.Branches.PwLine line5102_5304_1d9c2(R = 0.001700000, X = 0.0240000000, G = 0, B = 0.3500000028);
    OpenIPSL.Electrical.Branches.PwLine line5102_6001_1d9ce(R = 0.003000000, X = 0.0460000000, G = 0, B = 0.6500000430);
    OpenIPSL.Electrical.Branches.PwLine line5103_5304_1d9e2(R = 0.002000000, X = 0.0250000000, G = 0, B = 0.3500000028);
    OpenIPSL.Electrical.Branches.PwLine line5103_5304_2d9ee(R = 0.001300000, X = 0.0200000000, G = 0, B = 0.3000000402);
    OpenIPSL.Electrical.Branches.PwLine line5300_6100_1d9fa(R = 0.002100000, X = 0.0220000000, G = 0, B = 0.0499999950);
    OpenIPSL.Electrical.Branches.PwLine line5301_5304_1da06(R = 0.001000000, X = 0.0200000000, G = 0, B = 0.3000000402);
    OpenIPSL.Electrical.Branches.PwLine line5301_5305_1da12(R = 0.000700000, X = 0.0120000000, G = 0, B = 0.1550000340);
    OpenIPSL.Electrical.Branches.PwLine line5301_6001_1da1e(R = 0.001300000, X = 0.0200000000, G = 0, B = 0.2499999894);
    OpenIPSL.Electrical.Branches.PwLine line5304_5305_1da2a(R = 0.001000000, X = 0.0150000000, G = 0, B = 0.2499999894);
    OpenIPSL.Electrical.Branches.PwLine line5304_5305_2da36(R = 0.001300000, X = 0.0017000000, G = 0, B = 0.2000000268);
    OpenIPSL.Electrical.Branches.PwLine line5400_5500_1da42(R = 0.000900000, X = 0.0094000000, G = 0, B = 0.2500000200);
    OpenIPSL.Electrical.Branches.PwLine line5400_6000_1da4e(R = 0.003300000, X = 0.0360000000, G = 0, B = 0.1250000100);
    OpenIPSL.Electrical.Branches.PwLine line5401_5501_1da5a(R = 0.001750000, X = 0.0270000000, G = 0, B = 0.3999999654);
    OpenIPSL.Electrical.Branches.PwLine line5401_5602_1da66(R = 0.001600000, X = 0.0255000000, G = 0, B = 0.4500000162);
    OpenIPSL.Electrical.Branches.PwLine line5401_6001_1da72(R = 0.000640000, X = 0.0100000000, G = 0, B = 0.1400000364);
    OpenIPSL.Electrical.Branches.PwLine line5402_6001_1da86(R = 0.000070000, X = 0.0010000000, G = 0, B = 0.0149999976);
    OpenIPSL.Electrical.Branches.PwLine line5500_5603_1da92(R = 0.005000000, X = 0.0600000000, G = 0, B = 0.2500000200);
    OpenIPSL.Electrical.Branches.PwLine line5600_5603_1dab2(R = 0.002000000, X = 0.0220000000, G = 0, B = 0.0999999900);
    OpenIPSL.Electrical.Branches.PwLine line5600_5620_1dabe(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line5600_6000_1daca(R = 0.002000000, X = 0.0200000000, G = 0, B = 0.3500000100);
    OpenIPSL.Electrical.Branches.PwLine line5603_5610_1dad6(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line6000_6100_1dae2(R = 0.003400000, X = 0.0420000000, G = 0, B = 0.1499999850);
    OpenIPSL.Electrical.Branches.PwLine line6500_6700_1daee(R = 0.017000000, X = 0.1800000000, G = 0, B = 0.4999999950);
    OpenIPSL.Electrical.Branches.PwLine line6500_6700_2dafa(R = 0.010000000, X = 0.1300000000, G = 0, B = 0.5999999850);
    OpenIPSL.Electrical.Branches.PwLine line7000_7010_1db06(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line7000_7020_1db12(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line7000_7100_1db1e(R = 0.004000000, X = 0.0120000000, G = 0, B = 0.6500000430);
    OpenIPSL.Electrical.Branches.PwLine line7000_7100_2db2a(R = 0.004000000, X = 0.0120000000, G = 0, B = 0.6500000430);
    OpenIPSL.Electrical.Branches.PwLine line7000_7100_3db36(R = 0.004000000, X = 0.0140000000, G = 0, B = 0.6500000430);
    OpenIPSL.Electrical.Branches.PwLine line8500_8600_1db42(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line8500_8700_1db4e(R = 0.000000000, X = 0.0010000000, G = 0, B = 0.0000000000);
    OpenIPSL.Electrical.Branches.PwLine line5600_5601_1daa6(R = 0.003000000, X = 0.0340000000, G = 0, B = 0.0999999900);
    // -- Transformers:
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T324432450_1_db5a(R = 0.00500000, X = 0.02000000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T324432450_1_T2, t1 = pf.powerflow.trafos.T324432450_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T370132490_1_db6c(R = 0.02000000, X = 0.50000000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T370132490_1_T2, t1 = pf.powerflow.trafos.T370132490_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T335933600_1_db7e(R = 0.00500000, X = 0.02000000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T335933600_1_T1, t1 = pf.powerflow.trafos.T335933600_1_T2);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T510151000_1_db90(R = 0.00080000, X = 0.03050000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T510151000_1_T1, t1 = pf.powerflow.trafos.T510151000_1_T2);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T530053010_1_dba2(R = 0.00160000, X = 0.060997732, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T530053010_1_T2, t1 = pf.powerflow.trafos.T530053010_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T540054010_1_dbb4(R = 0.00320000, X = 0.12000000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T540054010_1_T2, t1 = pf.powerflow.trafos.T540054010_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T540054020_1_dbc6(R = 0.00040000, X = 0.01500000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T540054020_1_T2, t1 = pf.powerflow.trafos.T540054020_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T550055010_1_dbd8(R = 0.00040000, X = 0.01500000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T550055010_1_T2, t1 = pf.powerflow.trafos.T550055010_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T560160010_1_dbea(R = 0.00020000, X = 0.007599773, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T560160010_1_T2, t1 = pf.powerflow.trafos.T560160010_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T560356020_1_dbfc(R = 0.00080000, X = 0.03050000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T560356020_1_T2, t1 = pf.powerflow.trafos.T560356020_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T600060010_1_dc0e(R = 0.00040000, X = 0.01500000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T600060010_1_T2, t1 = pf.powerflow.trafos.T600060010_1_T1);
    OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T670067010_1_dc20(R = 0.00500000, X = 0.02000000, G = 0.00000000, B = 0.00000000, t2 = pf.powerflow.trafos.T670067010_1_T2, t1 = pf.powerflow.trafos.T670067010_1_T1);
    // -- Linear Shunt Compensators:
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5101_5501_1d9ae(G = 0.2229999408, B = -9.7439999580);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5101_5501_1d9b2(G = -0.2160000360, B = 9.7439999580);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5102_6001_1d9da(G = 0.0020000232, B = 0.0010000116);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5102_6001_1d9de(G = 0.0020000232, B = -0.0010000116);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5401_6001_1da7e(G = -0.0020000232, B = -0.0050000580);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5401_6001_1da82(G = 0.0020000232, B = 0.0050000580);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5500_5603_1da9e(G = 0.0029999700, B = 0.0129999600);
    OpenIPSL.Electrical.Banks.PSSE.Shunt SH5500_5603_1daa2(G = -0.0029999700, B = -0.0129999600);
    // -- Conform Loads:
    OpenIPSL.Electrical.Loads.PSSE.Load CL3000_1_d46a(V_b = FORSMARK_d1c9.V_b, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9, P_0 = pf.powerflow.loads.PCL3000_1_d46a, Q_0 = pf.powerflow.loads.QCL3000_1_d46a, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3000_2_d471(V_b = FORSMARK_d1c9.V_b, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9, P_0 = pf.powerflow.loads.PCL3000_2_d471, Q_0 = pf.powerflow.loads.QCL3000_2_d471, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3000_3_d478(V_b = FORSMARK_d1c9.V_b, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9, P_0 = pf.powerflow.loads.PCL3000_3_d478, Q_0 = pf.powerflow.loads.QCL3000_3_d478, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3100_1_d486(V_b = HJALTA_d1f5.V_b, v_0 = pf.powerflow.bus.VHJALTA_d1f5, angle_0 = pf.powerflow.bus.AHJALTA_d1f5, P_0 = pf.powerflow.loads.PCL3100_1_d486, Q_0 = pf.powerflow.loads.QCL3100_1_d486, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3115_1_d48d(V_b = PORJUS_d204.V_b, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204, P_0 = pf.powerflow.loads.PCL3115_1_d48d, Q_0 = pf.powerflow.loads.QCL3115_1_d48d, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3249_1_d494(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PCL3249_1_d494, Q_0 = pf.powerflow.loads.QCL3249_1_d494, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3300_1_d49b(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PCL3300_1_d49b, Q_0 = pf.powerflow.loads.QCL3300_1_d49b, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3300_2_d4a2(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PCL3300_2_d4a2, Q_0 = pf.powerflow.loads.QCL3300_2_d4a2, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3359_1_d4a9(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PCL3359_1_d4a9, Q_0 = pf.powerflow.loads.QCL3359_1_d4a9, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3359_2_d4b0(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PCL3359_2_d4b0, Q_0 = pf.powerflow.loads.QCL3359_2_d4b0, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3359_3_d4b7(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PCL3359_3_d4b7, Q_0 = pf.powerflow.loads.QCL3359_3_d4b7, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL3359_4_d4be(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PCL3359_4_d4be, Q_0 = pf.powerflow.loads.QCL3359_4_d4be, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5100_1_d4cc(V_b = TRETTEN_d28d.V_b, v_0 = pf.powerflow.bus.VTRETTEN_d28d, angle_0 = pf.powerflow.bus.ATRETTEN_d28d, P_0 = pf.powerflow.loads.PCL5100_1_d4cc, Q_0 = pf.powerflow.loads.QCL5100_1_d4cc, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5300_2_d4d3(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PCL5300_2_d4d3, Q_0 = pf.powerflow.loads.QCL5300_2_d4d3, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5400_1_d4da(V_b = OSLO1_d305.V_b, v_0 = pf.powerflow.bus.VOSLO1_d305, angle_0 = pf.powerflow.bus.AOSLO1_d305, P_0 = pf.powerflow.loads.PCL5400_1_d4da, Q_0 = pf.powerflow.loads.QCL5400_1_d4da, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5500_1_d4e1(V_b = OSLO2_d332.V_b, v_0 = pf.powerflow.bus.VOSLO2_d332, angle_0 = pf.powerflow.bus.AOSLO2_d332, P_0 = pf.powerflow.loads.PCL5500_1_d4e1, Q_0 = pf.powerflow.loads.QCL5500_1_d4e1, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5500_2_d4e8(V_b = OSLO2_d332.V_b, v_0 = pf.powerflow.bus.VOSLO2_d332, angle_0 = pf.powerflow.bus.AOSLO2_d332, P_0 = pf.powerflow.loads.PCL5500_2_d4e8, Q_0 = pf.powerflow.loads.QCL5500_2_d4e8, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5600_1_d4ef(V_b = KRISTIANSAND_d34f.V_b, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f, P_0 = pf.powerflow.loads.PCL5600_1_d4ef, Q_0 = pf.powerflow.loads.QCL5600_1_d4ef, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL5600_2_d4f6(V_b = KRISTIANSAND_d34f.V_b, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f, P_0 = pf.powerflow.loads.PCL5600_2_d4f6, Q_0 = pf.powerflow.loads.QCL5600_2_d4f6, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL6100_1_d50b(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PCL6100_1_d50b, Q_0 = pf.powerflow.loads.QCL6100_1_d50b, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL6100_2_d512(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PCL6100_2_d512, Q_0 = pf.powerflow.loads.QCL6100_2_d512, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL6500_1_d519(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PCL6500_1_d519, Q_0 = pf.powerflow.loads.QCL6500_1_d519, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL6500_2_d520(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PCL6500_2_d520, Q_0 = pf.powerflow.loads.QCL6500_2_d520, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL6500_3_d527(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PCL6500_3_d527, Q_0 = pf.powerflow.loads.QCL6500_3_d527, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL6700_1_d52e(V_b = ROSSAGA_d3e4.V_b, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4, P_0 = pf.powerflow.loads.PCL6700_1_d52e, Q_0 = pf.powerflow.loads.QCL6700_1_d52e, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7000_1_d543(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PCL7000_1_d543, Q_0 = pf.powerflow.loads.QCL7000_1_d543, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7000_2_d54a(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PCL7000_2_d54a, Q_0 = pf.powerflow.loads.QCL7000_2_d54a, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7000_3_d551(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PCL7000_3_d551, Q_0 = pf.powerflow.loads.QCL7000_3_d551, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7000_4_d558(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PCL7000_4_d558, Q_0 = pf.powerflow.loads.QCL7000_4_d558, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7000_5_d55f(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PCL7000_5_d55f, Q_0 = pf.powerflow.loads.QCL7000_5_d55f, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7100_1_d57b(V_b = OULU_d42f.V_b, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f, P_0 = pf.powerflow.loads.PCL7100_1_d57b, Q_0 = pf.powerflow.loads.QCL7100_1_d57b, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL7100_2_d582(V_b = OULU_d42f.V_b, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f, P_0 = pf.powerflow.loads.PCL7100_2_d582, Q_0 = pf.powerflow.loads.QCL7100_2_d582, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL8500_1_d590(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PCL8500_1_d590, Q_0 = pf.powerflow.loads.QCL8500_1_d590, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL8500_2_d597(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PCL8500_2_d597, Q_0 = pf.powerflow.loads.QCL8500_2_d597, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load CL8500_3_d59e(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PCL8500_3_d59e, Q_0 = pf.powerflow.loads.QCL8500_3_d59e, PQBRAK = 0.7, characteristic = 2);
    // -- Non Conform Loads:
    OpenIPSL.Electrical.Loads.PSSE.Load NCL3020_1_d47f(V_b = DANNEBO_HVDC_d1e6.V_b, v_0 = pf.powerflow.bus.VDANNEBO_HVDC_d1e6, angle_0 = pf.powerflow.bus.ADANNEBO_HVDC_d1e6, P_0 = pf.powerflow.loads.PNCL3020_1_d47f, Q_0 = pf.powerflow.loads.QNCL3020_1_d47f, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL3360_1_d4c5(V_b = STENKU_HVDC_d26e.V_b, v_0 = pf.powerflow.bus.VSTENKU_HVDC_d26e, angle_0 = pf.powerflow.bus.ASTENKU_HVDC_d26e, P_0 = pf.powerflow.loads.PNCL3360_1_d4c5, Q_0 = pf.powerflow.loads.QNCL3360_1_d4c5, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL5610_1_d4fd(V_b = KRISTIA_HVDC_d38b.V_b, v_0 = pf.powerflow.bus.VKRISTIA_HVDC_d38b, angle_0 = pf.powerflow.bus.AKRISTIA_HVDC_d38b, P_0 = pf.powerflow.loads.PNCL5610_1_d4fd, Q_0 = pf.powerflow.loads.QNCL5610_1_d4fd, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL5620_1_d504(V_b = FEDA_HVDC_d399.V_b, v_0 = pf.powerflow.bus.VFEDA_HVDC_d399, angle_0 = pf.powerflow.bus.AFEDA_HVDC_d399, P_0 = pf.powerflow.loads.PNCL5620_1_d504, Q_0 = pf.powerflow.loads.QNCL5620_1_d504, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL6701_1_d535(V_b = OFOTEN_d3f3.V_b, v_0 = pf.powerflow.bus.VOFOTEN_d3f3, angle_0 = pf.powerflow.bus.AOFOTEN_d3f3, P_0 = pf.powerflow.loads.PNCL6701_1_d535, Q_0 = pf.powerflow.loads.QNCL6701_1_d535, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL6701_3_d53c(V_b = OFOTEN_d3f3.V_b, v_0 = pf.powerflow.bus.VOFOTEN_d3f3, angle_0 = pf.powerflow.bus.AOFOTEN_d3f3, P_0 = pf.powerflow.loads.PNCL6701_3_d53c, Q_0 = pf.powerflow.loads.QNCL6701_3_d53c, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL7000_6_d566(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PNCL7000_6_d566, Q_0 = pf.powerflow.loads.QNCL7000_6_d566, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL7010_1_d56d(V_b = VYBORG_HVDC_d411.V_b, v_0 = pf.powerflow.bus.VVYBORG_HVDC_d411, angle_0 = pf.powerflow.bus.AVYBORG_HVDC_d411, P_0 = pf.powerflow.loads.PNCL7010_1_d56d, Q_0 = pf.powerflow.loads.QNCL7010_1_d56d, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL7020_1_d574(V_b = ESTLINK_HVDC_d420.V_b, v_0 = pf.powerflow.bus.VESTLINK_HVDC_d420, angle_0 = pf.powerflow.bus.AESTLINK_HVDC_d420, P_0 = pf.powerflow.loads.PNCL7020_1_d574, Q_0 = pf.powerflow.loads.QNCL7020_1_d574, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL7100_3_d589(V_b = OULU_d42f.V_b, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f, P_0 = pf.powerflow.loads.PNCL7100_3_d589, Q_0 = pf.powerflow.loads.QNCL7100_3_d589, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL8500_4_d5a5(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PNCL8500_4_d5a5, Q_0 = pf.powerflow.loads.QNCL8500_4_d5a5, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL8600_1_d5ac(V_b = ARRIE_HVDC_d44d.V_b, v_0 = pf.powerflow.bus.VARRIE_HVDC_d44d, angle_0 = pf.powerflow.bus.AARRIE_HVDC_d44d, P_0 = pf.powerflow.loads.PNCL8600_1_d5ac, Q_0 = pf.powerflow.loads.QNCL8600_1_d5ac, PQBRAK = 0.7, characteristic = 2);
    OpenIPSL.Electrical.Loads.PSSE.Load NCL8700_1_d5b3(V_b = KARLSH_HVDC_d45c.V_b, v_0 = pf.powerflow.bus.VKARLSH_HVDC_d45c, angle_0 = pf.powerflow.bus.AKARLSH_HVDC_d45c, P_0 = pf.powerflow.loads.PNCL8700_1_d5b3, Q_0 = pf.powerflow.loads.QNCL8700_1_d5b3, PQBRAK = 0.7, characteristic = 2);
    // -- Generator Units:
    N44_BC_package.Generators.GEN3000_1_d5bd gen3000_1_d5bd(V_b = FORSMARK_d1c9.V_b, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9, P_0 = pf.powerflow.loads.PGEN3000_1_d5bd, Q_0 = pf.powerflow.loads.QGEN3000_1_d5bd);
    N44_BC_package.Generators.GEN3000_2_d5c3 gen3000_2_d5c3(V_b = FORSMARK_d1c9.V_b, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9, P_0 = pf.powerflow.loads.PGEN3000_2_d5c3, Q_0 = pf.powerflow.loads.QGEN3000_2_d5c3);
    N44_BC_package.Generators.GEN3000_3_d5c9 gen3000_3_d5c9(V_b = FORSMARK_d1c9.V_b, v_0 = pf.powerflow.bus.VFORSMARK_d1c9, angle_0 = pf.powerflow.bus.AFORSMARK_d1c9, P_0 = pf.powerflow.loads.PGEN3000_3_d5c9, Q_0 = pf.powerflow.loads.QGEN3000_3_d5c9);
    N44_BC_package.Generators.GEN3115_1_d5d5 gen3115_1_d5d5(V_b = PORJUS_d204.V_b, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204, P_0 = pf.powerflow.loads.PGEN3115_1_d5d5, Q_0 = pf.powerflow.loads.QGEN3115_1_d5d5);
    N44_BC_package.Generators.GEN3115_2_d5dc gen3115_2_d5dc(V_b = PORJUS_d204.V_b, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204, P_0 = pf.powerflow.loads.PGEN3115_2_d5dc, Q_0 = pf.powerflow.loads.QGEN3115_2_d5dc);
    N44_BC_package.Generators.GEN3115_3_d5e3 gen3115_3_d5e3(V_b = PORJUS_d204.V_b, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204, P_0 = pf.powerflow.loads.PGEN3115_3_d5e3, Q_0 = pf.powerflow.loads.QGEN3115_3_d5e3);
    N44_BC_package.Generators.GEN3115_4_d5ea gen3115_4_d5ea(V_b = PORJUS_d204.V_b, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204, P_0 = pf.powerflow.loads.PGEN3115_4_d5ea, Q_0 = pf.powerflow.loads.QGEN3115_4_d5ea);
    N44_BC_package.Generators.GEN3115_5_d5f1 gen3115_5_d5f1(V_b = PORJUS_d204.V_b, v_0 = pf.powerflow.bus.VPORJUS_d204, angle_0 = pf.powerflow.bus.APORJUS_d204, P_0 = pf.powerflow.loads.PGEN3115_5_d5f1, Q_0 = pf.powerflow.loads.QGEN3115_5_d5f1);
    N44_BC_package.Generators.GEN3245_1_d5fa gen3245_1_d5fa(V_b = JARPSTROMMEN_d232.V_b, v_0 = pf.powerflow.bus.VJARPSTROMMEN_d232, angle_0 = pf.powerflow.bus.AJARPSTROMMEN_d232, P_0 = pf.powerflow.loads.PGEN3245_1_d5fa, Q_0 = pf.powerflow.loads.QGEN3245_1_d5fa);
    N44_BC_package.Generators.GEN3249_1_d606 gen3249_1_d606(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_1_d606, Q_0 = pf.powerflow.loads.QGEN3249_1_d606);
    N44_BC_package.Generators.GEN3249_2_d60d gen3249_2_d60d(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_2_d60d, Q_0 = pf.powerflow.loads.QGEN3249_2_d60d);
    N44_BC_package.Generators.GEN3249_3_d614 gen3249_3_d614(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_3_d614, Q_0 = pf.powerflow.loads.QGEN3249_3_d614);
    N44_BC_package.Generators.GEN3249_4_d61b gen3249_4_d61b(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_4_d61b, Q_0 = pf.powerflow.loads.QGEN3249_4_d61b);
    N44_BC_package.Generators.GEN3249_5_d622 gen3249_5_d622(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_5_d622, Q_0 = pf.powerflow.loads.QGEN3249_5_d622);
    N44_BC_package.Generators.GEN3249_6_d629 gen3249_6_d629(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_6_d629, Q_0 = pf.powerflow.loads.QGEN3249_6_d629);
    N44_BC_package.Generators.GEN3249_7_d630 gen3249_7_d630(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_7_d630, Q_0 = pf.powerflow.loads.QGEN3249_7_d630);
    N44_BC_package.Generators.GEN3249_8_d637 gen3249_8_d637(V_b = GRUNDFORS_d241.V_b, v_0 = pf.powerflow.bus.VGRUNDFORS_d241, angle_0 = pf.powerflow.bus.AGRUNDFORS_d241, P_0 = pf.powerflow.loads.PGEN3249_8_d637, Q_0 = pf.powerflow.loads.QGEN3249_8_d637);
    N44_BC_package.Generators.GEN3300_1_d640 gen3300_1_d640(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PGEN3300_1_d640, Q_0 = pf.powerflow.loads.QGEN3300_1_d640);
    N44_BC_package.Generators.GEN3300_2_d647 gen3300_2_d647(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PGEN3300_2_d647, Q_0 = pf.powerflow.loads.QGEN3300_2_d647);
    N44_BC_package.Generators.GEN3300_3_d64e gen3300_3_d64e(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PGEN3300_3_d64e, Q_0 = pf.powerflow.loads.QGEN3300_3_d64e);
    N44_BC_package.Generators.GEN3300_4_d655 gen3300_4_d655(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PGEN3300_4_d655, Q_0 = pf.powerflow.loads.QGEN3300_4_d655);
    N44_BC_package.Generators.GEN3300_5_d65c gen3300_5_d65c(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PGEN3300_5_d65c, Q_0 = pf.powerflow.loads.QGEN3300_5_d65c);
    N44_BC_package.Generators.GEN3300_6_d663 gen3300_6_d663(V_b = OSKARSHAMN_d250.V_b, v_0 = pf.powerflow.bus.VOSKARSHAMN_d250, angle_0 = pf.powerflow.bus.AOSKARSHAMN_d250, P_0 = pf.powerflow.loads.PGEN3300_6_d663, Q_0 = pf.powerflow.loads.QGEN3300_6_d663);
    N44_BC_package.Generators.GEN3359_1_d66c gen3359_1_d66c(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PGEN3359_1_d66c, Q_0 = pf.powerflow.loads.QGEN3359_1_d66c);
    N44_BC_package.Generators.GEN3359_2_d672 gen3359_2_d672(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PGEN3359_2_d672, Q_0 = pf.powerflow.loads.QGEN3359_2_d672);
    N44_BC_package.Generators.GEN3359_3_d678 gen3359_3_d678(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PGEN3359_3_d678, Q_0 = pf.powerflow.loads.QGEN3359_3_d678);
    N44_BC_package.Generators.GEN3359_4_d67e gen3359_4_d67e(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PGEN3359_4_d67e, Q_0 = pf.powerflow.loads.QGEN3359_4_d67e);
    N44_BC_package.Generators.GEN3359_5_d684 gen3359_5_d684(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PGEN3359_5_d684, Q_0 = pf.powerflow.loads.QGEN3359_5_d684);
    N44_BC_package.Generators.GEN3359_6_d68a gen3359_6_d68a(V_b = RINGHALS_d25f.V_b, v_0 = pf.powerflow.bus.VRINGHALS_d25f, angle_0 = pf.powerflow.bus.ARINGHALS_d25f, P_0 = pf.powerflow.loads.PGEN3359_6_d68a, Q_0 = pf.powerflow.loads.QGEN3359_6_d68a);
    N44_BC_package.Generators.GEN5100_1_d692 gen5100_1_d692(V_b = TRETTEN_d28d.V_b, v_0 = pf.powerflow.bus.VTRETTEN_d28d, angle_0 = pf.powerflow.bus.ATRETTEN_d28d, P_0 = pf.powerflow.loads.PGEN5100_1_d692, Q_0 = pf.powerflow.loads.QGEN5100_1_d692);
    N44_BC_package.Generators.GEN5100_2_d698 gen5100_2_d698(V_b = TRETTEN_d28d.V_b, v_0 = pf.powerflow.bus.VTRETTEN_d28d, angle_0 = pf.powerflow.bus.ATRETTEN_d28d, P_0 = pf.powerflow.loads.PGEN5100_2_d698, Q_0 = pf.powerflow.loads.QGEN5100_2_d698);
    N44_BC_package.Generators.GEN5300_1_d6a4 gen5300_1_d6a4(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PGEN5300_1_d6a4, Q_0 = pf.powerflow.loads.QGEN5300_1_d6a4);
    N44_BC_package.Generators.GEN5300_2_d6ab gen5300_2_d6ab(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PGEN5300_2_d6ab, Q_0 = pf.powerflow.loads.QGEN5300_2_d6ab);
    N44_BC_package.Generators.GEN5300_3_d6b2 gen5300_3_d6b2(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PGEN5300_3_d6b2, Q_0 = pf.powerflow.loads.QGEN5300_3_d6b2);
    N44_BC_package.Generators.GEN5300_4_d6b9 gen5300_4_d6b9(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PGEN5300_4_d6b9, Q_0 = pf.powerflow.loads.QGEN5300_4_d6b9);
    N44_BC_package.Generators.GEN5300_5_d6c0 gen5300_5_d6c0(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PGEN5300_5_d6c0, Q_0 = pf.powerflow.loads.QGEN5300_5_d6c0);
    N44_BC_package.Generators.GEN5300_6_d6c7 gen5300_6_d6c7(V_b = SIMA_d2c9.V_b, v_0 = pf.powerflow.bus.VSIMA_d2c9, angle_0 = pf.powerflow.bus.ASIMA_d2c9, P_0 = pf.powerflow.loads.PGEN5300_6_d6c7, Q_0 = pf.powerflow.loads.QGEN5300_6_d6c7);
    N44_BC_package.Generators.GEN5400_1_d6d0 gen5400_1_d6d0(V_b = OSLO1_d305.V_b, v_0 = pf.powerflow.bus.VOSLO1_d305, angle_0 = pf.powerflow.bus.AOSLO1_d305, P_0 = pf.powerflow.loads.PGEN5400_1_d6d0, Q_0 = pf.powerflow.loads.QGEN5400_1_d6d0);
    N44_BC_package.Generators.GEN5400_2_d6d6 gen5400_2_d6d6(V_b = OSLO1_d305.V_b, v_0 = pf.powerflow.bus.VOSLO1_d305, angle_0 = pf.powerflow.bus.AOSLO1_d305, P_0 = pf.powerflow.loads.PGEN5400_2_d6d6, Q_0 = pf.powerflow.loads.QGEN5400_2_d6d6);
    N44_BC_package.Generators.GEN5500_1_d6e2 gen5500_1_d6e2(V_b = OSLO2_d332.V_b, v_0 = pf.powerflow.bus.VOSLO2_d332, angle_0 = pf.powerflow.bus.AOSLO2_d332, P_0 = pf.powerflow.loads.PGEN5500_1_d6e2, Q_0 = pf.powerflow.loads.QGEN5500_1_d6e2);
    N44_BC_package.Generators.GEN5500_2_d6e9 gen5500_2_d6e9(V_b = OSLO2_d332.V_b, v_0 = pf.powerflow.bus.VOSLO2_d332, angle_0 = pf.powerflow.bus.AOSLO2_d332, P_0 = pf.powerflow.loads.PGEN5500_2_d6e9, Q_0 = pf.powerflow.loads.QGEN5500_2_d6e9);
    N44_BC_package.Generators.GEN5600_1_d6f6 gen5600_1_d6f6(V_b = KRISTIANSAND_d34f.V_b, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f, P_0 = pf.powerflow.loads.PGEN5600_1_d6f6, Q_0 = pf.powerflow.loads.QGEN5600_1_d6f6);
    N44_BC_package.Generators.GEN5600_2_d6fd gen5600_2_d6fd(V_b = KRISTIANSAND_d34f.V_b, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f, P_0 = pf.powerflow.loads.PGEN5600_2_d6fd, Q_0 = pf.powerflow.loads.QGEN5600_2_d6fd);
    N44_BC_package.Generators.GEN5600_3_d704 gen5600_3_d704(V_b = KRISTIANSAND_d34f.V_b, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f, P_0 = pf.powerflow.loads.PGEN5600_3_d704, Q_0 = pf.powerflow.loads.QGEN5600_3_d704);
    N44_BC_package.Generators.GEN5600_4_d70b gen5600_4_d70b(V_b = KRISTIANSAND_d34f.V_b, v_0 = pf.powerflow.bus.VKRISTIANSAND_d34f, angle_0 = pf.powerflow.bus.AKRISTIANSAND_d34f, P_0 = pf.powerflow.loads.PGEN5600_4_d70b, Q_0 = pf.powerflow.loads.QGEN5600_4_d70b);
    N44_BC_package.Generators.GEN6000_1_d714 gen6000_1_d714(V_b = KVILLDAL_d3a8.V_b, v_0 = pf.powerflow.bus.VKVILLDAL_d3a8, angle_0 = pf.powerflow.bus.AKVILLDAL_d3a8, P_0 = pf.powerflow.loads.PGEN6000_1_d714, Q_0 = pf.powerflow.loads.QGEN6000_1_d714);
    N44_BC_package.Generators.GEN6000_2_d71a gen6000_2_d71a(V_b = KVILLDAL_d3a8.V_b, v_0 = pf.powerflow.bus.VKVILLDAL_d3a8, angle_0 = pf.powerflow.bus.AKVILLDAL_d3a8, P_0 = pf.powerflow.loads.PGEN6000_2_d71a, Q_0 = pf.powerflow.loads.QGEN6000_2_d71a);
    N44_BC_package.Generators.GEN6000_3_d720 gen6000_3_d720(V_b = KVILLDAL_d3a8.V_b, v_0 = pf.powerflow.bus.VKVILLDAL_d3a8, angle_0 = pf.powerflow.bus.AKVILLDAL_d3a8, P_0 = pf.powerflow.loads.PGEN6000_3_d720, Q_0 = pf.powerflow.loads.QGEN6000_3_d720);
    N44_BC_package.Generators.GEN6000_4_d726 gen6000_4_d726(V_b = KVILLDAL_d3a8.V_b, v_0 = pf.powerflow.bus.VKVILLDAL_d3a8, angle_0 = pf.powerflow.bus.AKVILLDAL_d3a8, P_0 = pf.powerflow.loads.PGEN6000_4_d726, Q_0 = pf.powerflow.loads.QGEN6000_4_d726);
    N44_BC_package.Generators.GEN6100_1_d72e gen6100_1_d72e(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PGEN6100_1_d72e, Q_0 = pf.powerflow.loads.QGEN6100_1_d72e);
    N44_BC_package.Generators.GEN6100_2_d734 gen6100_2_d734(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PGEN6100_2_d734, Q_0 = pf.powerflow.loads.QGEN6100_2_d734);
    N44_BC_package.Generators.GEN6100_3_d73a gen6100_3_d73a(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PGEN6100_3_d73a, Q_0 = pf.powerflow.loads.QGEN6100_3_d73a);
    N44_BC_package.Generators.GEN6100_4_d740 gen6100_4_d740(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PGEN6100_4_d740, Q_0 = pf.powerflow.loads.QGEN6100_4_d740);
    N44_BC_package.Generators.GEN6100_5_d746 gen6100_5_d746(V_b = BLAFALLI_d3c6.V_b, v_0 = pf.powerflow.bus.VBLAFALLI_d3c6, angle_0 = pf.powerflow.bus.ABLAFALLI_d3c6, P_0 = pf.powerflow.loads.PGEN6100_5_d746, Q_0 = pf.powerflow.loads.QGEN6100_5_d746);
    N44_BC_package.Generators.GEN6500_1_d752 gen6500_1_d752(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PGEN6500_1_d752, Q_0 = pf.powerflow.loads.QGEN6500_1_d752);
    N44_BC_package.Generators.GEN6500_2_d759 gen6500_2_d759(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PGEN6500_2_d759, Q_0 = pf.powerflow.loads.QGEN6500_2_d759);
    N44_BC_package.Generators.GEN6500_3_d760 gen6500_3_d760(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PGEN6500_3_d760, Q_0 = pf.powerflow.loads.QGEN6500_3_d760);
    N44_BC_package.Generators.GEN6500_4_d767 gen6500_4_d767(V_b = TRONDHEIM_d3d5.V_b, v_0 = pf.powerflow.bus.VTRONDHEIM_d3d5, angle_0 = pf.powerflow.bus.ATRONDHEIM_d3d5, P_0 = pf.powerflow.loads.PGEN6500_4_d767, Q_0 = pf.powerflow.loads.QGEN6500_4_d767);
    N44_BC_package.Generators.GEN6700_1_d774 gen6700_1_d774(V_b = ROSSAGA_d3e4.V_b, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4, P_0 = pf.powerflow.loads.PGEN6700_1_d774, Q_0 = pf.powerflow.loads.QGEN6700_1_d774);
    N44_BC_package.Generators.GEN6700_2_d77b gen6700_2_d77b(V_b = ROSSAGA_d3e4.V_b, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4, P_0 = pf.powerflow.loads.PGEN6700_2_d77b, Q_0 = pf.powerflow.loads.QGEN6700_2_d77b);
    N44_BC_package.Generators.GEN6700_3_d782 gen6700_3_d782(V_b = ROSSAGA_d3e4.V_b, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4, P_0 = pf.powerflow.loads.PGEN6700_3_d782, Q_0 = pf.powerflow.loads.QGEN6700_3_d782);
    N44_BC_package.Generators.GEN6700_4_d789 gen6700_4_d789(V_b = ROSSAGA_d3e4.V_b, v_0 = pf.powerflow.bus.VROSSAGA_d3e4, angle_0 = pf.powerflow.bus.AROSSAGA_d3e4, P_0 = pf.powerflow.loads.PGEN6700_4_d789, Q_0 = pf.powerflow.loads.QGEN6700_4_d789);
    N44_BC_package.Generators.GEN7000_1_d796 gen7000_1_d796(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_1_d796, Q_0 = pf.powerflow.loads.QGEN7000_1_d796);
    N44_BC_package.Generators.GEN7000_2_d79d gen7000_2_d79d(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_2_d79d, Q_0 = pf.powerflow.loads.QGEN7000_2_d79d);
    N44_BC_package.Generators.GEN7000_3_d7a4 gen7000_3_d7a4(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_3_d7a4, Q_0 = pf.powerflow.loads.QGEN7000_3_d7a4);
    N44_BC_package.Generators.GEN7000_4_d7ab gen7000_4_d7ab(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_4_d7ab, Q_0 = pf.powerflow.loads.QGEN7000_4_d7ab);
    N44_BC_package.Generators.GEN7000_5_d7b2 gen7000_5_d7b2(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_5_d7b2, Q_0 = pf.powerflow.loads.QGEN7000_5_d7b2);
    N44_BC_package.Generators.GEN7000_6_d7b9 gen7000_6_d7b9(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_6_d7b9, Q_0 = pf.powerflow.loads.QGEN7000_6_d7b9);
    N44_BC_package.Generators.GEN7000_7_d7c0 gen7000_7_d7c0(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_7_d7c0, Q_0 = pf.powerflow.loads.QGEN7000_7_d7c0);
    N44_BC_package.Generators.GEN7000_8_d7c7 gen7000_8_d7c7(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_8_d7c7, Q_0 = pf.powerflow.loads.QGEN7000_8_d7c7);
    N44_BC_package.Generators.GEN7000_9_d7ce gen7000_9_d7ce(V_b = HELSINKI_d402.V_b, v_0 = pf.powerflow.bus.VHELSINKI_d402, angle_0 = pf.powerflow.bus.AHELSINKI_d402, P_0 = pf.powerflow.loads.PGEN7000_9_d7ce, Q_0 = pf.powerflow.loads.QGEN7000_9_d7ce);
    N44_BC_package.Generators.GEN7100_1_d7d7 gen7100_1_d7d7(V_b = OULU_d42f.V_b, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f, P_0 = pf.powerflow.loads.PGEN7100_1_d7d7, Q_0 = pf.powerflow.loads.QGEN7100_1_d7d7);
    N44_BC_package.Generators.GEN7100_2_d7dd gen7100_2_d7dd(V_b = OULU_d42f.V_b, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f, P_0 = pf.powerflow.loads.PGEN7100_2_d7dd, Q_0 = pf.powerflow.loads.QGEN7100_2_d7dd);
    N44_BC_package.Generators.GEN7100_3_d7e3 gen7100_3_d7e3(V_b = OULU_d42f.V_b, v_0 = pf.powerflow.bus.VOULU_d42f, angle_0 = pf.powerflow.bus.AOULU_d42f, P_0 = pf.powerflow.loads.PGEN7100_3_d7e3, Q_0 = pf.powerflow.loads.QGEN7100_3_d7e3);
    N44_BC_package.Generators.GEN8500_1_d7ef gen8500_1_d7ef(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PGEN8500_1_d7ef, Q_0 = pf.powerflow.loads.QGEN8500_1_d7ef);
    N44_BC_package.Generators.GEN8500_2_d7f6 gen8500_2_d7f6(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PGEN8500_2_d7f6, Q_0 = pf.powerflow.loads.QGEN8500_2_d7f6);
    N44_BC_package.Generators.GEN8500_3_d7fd gen8500_3_d7fd(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PGEN8500_3_d7fd, Q_0 = pf.powerflow.loads.QGEN8500_3_d7fd);
    N44_BC_package.Generators.GEN8500_4_d804 gen8500_4_d804(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PGEN8500_4_d804, Q_0 = pf.powerflow.loads.QGEN8500_4_d804);
    N44_BC_package.Generators.GEN8500_5_d80b gen8500_5_d80b(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PGEN8500_5_d80b, Q_0 = pf.powerflow.loads.QGEN8500_5_d80b);
    N44_BC_package.Generators.GEN8500_6_d812 gen8500_6_d812(V_b = MALMO_d43e.V_b, v_0 = pf.powerflow.bus.VMALMO_d43e, angle_0 = pf.powerflow.bus.AMALMO_d43e, P_0 = pf.powerflow.loads.PGEN8500_6_d812, Q_0 = pf.powerflow.loads.QGEN8500_6_d812);
    // -- Fault Event
    OpenIPSL.Electrical.Events.PwFault Fault(R = 0.1, X = 0.1, t1 = 0.3, t2 = 0.31);
  equation
    connect(FORSMARK_d1c9.p, CL3000_1_d46a.p);
    connect(FORSMARK_d1c9.p, CL3000_2_d471.p);
    connect(FORSMARK_d1c9.p, CL3000_3_d478.p);
    connect(DANNEBO_HVDC_d1e6.p, NCL3020_1_d47f.p);
    connect(HJALTA_d1f5.p, CL3100_1_d486.p);
    connect(PORJUS_d204.p, CL3115_1_d48d.p);
    connect(GRUNDFORS_d241.p, CL3249_1_d494.p);
    connect(OSKARSHAMN_d250.p, CL3300_1_d49b.p);
    connect(OSKARSHAMN_d250.p, CL3300_2_d4a2.p);
    connect(RINGHALS_d25f.p, CL3359_1_d4a9.p);
    connect(RINGHALS_d25f.p, CL3359_2_d4b0.p);
    connect(RINGHALS_d25f.p, CL3359_3_d4b7.p);
    connect(RINGHALS_d25f.p, CL3359_4_d4be.p);
    connect(STENKU_HVDC_d26e.p, NCL3360_1_d4c5.p);
    connect(TRETTEN_d28d.p, CL5100_1_d4cc.p);
    connect(SIMA_d2c9.p, CL5300_2_d4d3.p);
    connect(OSLO1_d305.p, CL5400_1_d4da.p);
    connect(OSLO2_d332.p, CL5500_1_d4e1.p);
    connect(OSLO2_d332.p, CL5500_2_d4e8.p);
    connect(KRISTIANSAND_d34f.p, CL5600_1_d4ef.p);
    connect(KRISTIANSAND_d34f.p, CL5600_2_d4f6.p);
    connect(KRISTIA_HVDC_d38b.p, NCL5610_1_d4fd.p);
    connect(FEDA_HVDC_d399.p, NCL5620_1_d504.p);
    connect(BLAFALLI_d3c6.p, CL6100_1_d50b.p);
    connect(BLAFALLI_d3c6.p, CL6100_2_d512.p);
    connect(TRONDHEIM_d3d5.p, CL6500_1_d519.p);
    connect(TRONDHEIM_d3d5.p, CL6500_2_d520.p);
    connect(TRONDHEIM_d3d5.p, CL6500_3_d527.p);
    connect(ROSSAGA_d3e4.p, CL6700_1_d52e.p);
    connect(OFOTEN_d3f3.p, NCL6701_1_d535.p);
    connect(OFOTEN_d3f3.p, NCL6701_3_d53c.p);
    connect(HELSINKI_d402.p, CL7000_1_d543.p);
    connect(HELSINKI_d402.p, CL7000_2_d54a.p);
    connect(HELSINKI_d402.p, CL7000_3_d551.p);
    connect(HELSINKI_d402.p, CL7000_4_d558.p);
    connect(HELSINKI_d402.p, CL7000_5_d55f.p);
    connect(HELSINKI_d402.p, NCL7000_6_d566.p);
    connect(VYBORG_HVDC_d411.p, NCL7010_1_d56d.p);
    connect(ESTLINK_HVDC_d420.p, NCL7020_1_d574.p);
    connect(OULU_d42f.p, CL7100_1_d57b.p);
    connect(OULU_d42f.p, CL7100_2_d582.p);
    connect(OULU_d42f.p, NCL7100_3_d589.p);
    connect(MALMO_d43e.p, CL8500_1_d590.p);
    connect(MALMO_d43e.p, CL8500_2_d597.p);
    connect(MALMO_d43e.p, CL8500_3_d59e.p);
    connect(MALMO_d43e.p, NCL8500_4_d5a5.p);
    connect(ARRIE_HVDC_d44d.p, NCL8600_1_d5ac.p);
    connect(KARLSH_HVDC_d45c.p, NCL8700_1_d5b3.p);
    connect(FORSMARK_d1c9.p, gen3000_1_d5bd.p);
    connect(FORSMARK_d1c9.p, gen3000_2_d5c3.p);
    connect(FORSMARK_d1c9.p, gen3000_3_d5c9.p);
    connect(PORJUS_d204.p, gen3115_1_d5d5.p);
    connect(PORJUS_d204.p, gen3115_2_d5dc.p);
    connect(PORJUS_d204.p, gen3115_3_d5e3.p);
    connect(PORJUS_d204.p, gen3115_4_d5ea.p);
    connect(PORJUS_d204.p, gen3115_5_d5f1.p);
    connect(JARPSTROMMEN_d232.p, gen3245_1_d5fa.p);
    connect(GRUNDFORS_d241.p, gen3249_1_d606.p);
    connect(GRUNDFORS_d241.p, gen3249_2_d60d.p);
    connect(GRUNDFORS_d241.p, gen3249_3_d614.p);
    connect(GRUNDFORS_d241.p, gen3249_4_d61b.p);
    connect(GRUNDFORS_d241.p, gen3249_5_d622.p);
    connect(GRUNDFORS_d241.p, gen3249_6_d629.p);
    connect(GRUNDFORS_d241.p, gen3249_7_d630.p);
    connect(GRUNDFORS_d241.p, gen3249_8_d637.p);
    connect(OSKARSHAMN_d250.p, gen3300_1_d640.p);
    connect(OSKARSHAMN_d250.p, gen3300_2_d647.p);
    connect(OSKARSHAMN_d250.p, gen3300_3_d64e.p);
    connect(OSKARSHAMN_d250.p, gen3300_4_d655.p);
    connect(OSKARSHAMN_d250.p, gen3300_5_d65c.p);
    connect(OSKARSHAMN_d250.p, gen3300_6_d663.p);
    connect(RINGHALS_d25f.p, gen3359_1_d66c.p);
    connect(RINGHALS_d25f.p, gen3359_2_d672.p);
    connect(RINGHALS_d25f.p, gen3359_3_d678.p);
    connect(RINGHALS_d25f.p, gen3359_4_d67e.p);
    connect(RINGHALS_d25f.p, gen3359_5_d684.p);
    connect(RINGHALS_d25f.p, gen3359_6_d68a.p);
    connect(TRETTEN_d28d.p, gen5100_1_d692.p);
    connect(TRETTEN_d28d.p, gen5100_2_d698.p);
    connect(SIMA_d2c9.p, gen5300_1_d6a4.p);
    connect(SIMA_d2c9.p, gen5300_2_d6ab.p);
    connect(SIMA_d2c9.p, gen5300_3_d6b2.p);
    connect(SIMA_d2c9.p, gen5300_4_d6b9.p);
    connect(SIMA_d2c9.p, gen5300_5_d6c0.p);
    connect(SIMA_d2c9.p, gen5300_6_d6c7.p);
    connect(OSLO1_d305.p, gen5400_1_d6d0.p);
    connect(OSLO1_d305.p, gen5400_2_d6d6.p);
    connect(OSLO2_d332.p, gen5500_1_d6e2.p);
    connect(OSLO2_d332.p, gen5500_2_d6e9.p);
    connect(KRISTIANSAND_d34f.p, gen5600_1_d6f6.p);
    connect(KRISTIANSAND_d34f.p, gen5600_2_d6fd.p);
    connect(KRISTIANSAND_d34f.p, gen5600_3_d704.p);
    connect(KRISTIANSAND_d34f.p, gen5600_4_d70b.p);
    connect(KVILLDAL_d3a8.p, gen6000_1_d714.p);
    connect(KVILLDAL_d3a8.p, gen6000_2_d71a.p);
    connect(KVILLDAL_d3a8.p, gen6000_3_d720.p);
    connect(KVILLDAL_d3a8.p, gen6000_4_d726.p);
    connect(BLAFALLI_d3c6.p, gen6100_1_d72e.p);
    connect(BLAFALLI_d3c6.p, gen6100_2_d734.p);
    connect(BLAFALLI_d3c6.p, gen6100_3_d73a.p);
    connect(BLAFALLI_d3c6.p, gen6100_4_d740.p);
    connect(BLAFALLI_d3c6.p, gen6100_5_d746.p);
    connect(TRONDHEIM_d3d5.p, gen6500_1_d752.p);
    connect(TRONDHEIM_d3d5.p, gen6500_2_d759.p);
    connect(TRONDHEIM_d3d5.p, gen6500_3_d760.p);
    connect(TRONDHEIM_d3d5.p, gen6500_4_d767.p);
    connect(ROSSAGA_d3e4.p, gen6700_1_d774.p);
    connect(ROSSAGA_d3e4.p, gen6700_2_d77b.p);
    connect(ROSSAGA_d3e4.p, gen6700_3_d782.p);
    connect(ROSSAGA_d3e4.p, gen6700_4_d789.p);
    connect(HELSINKI_d402.p, gen7000_1_d796.p);
    connect(HELSINKI_d402.p, gen7000_2_d79d.p);
    connect(HELSINKI_d402.p, gen7000_3_d7a4.p);
    connect(HELSINKI_d402.p, gen7000_4_d7ab.p);
    connect(HELSINKI_d402.p, gen7000_5_d7b2.p);
    connect(HELSINKI_d402.p, gen7000_6_d7b9.p);
    connect(HELSINKI_d402.p, gen7000_7_d7c0.p);
    connect(HELSINKI_d402.p, gen7000_8_d7c7.p);
    connect(HELSINKI_d402.p, gen7000_9_d7ce.p);
    connect(OULU_d42f.p, gen7100_1_d7d7.p);
    connect(OULU_d42f.p, gen7100_2_d7dd.p);
    connect(OULU_d42f.p, gen7100_3_d7e3.p);
    connect(MALMO_d43e.p, gen8500_1_d7ef.p);
    connect(MALMO_d43e.p, gen8500_2_d7f6.p);
    connect(MALMO_d43e.p, gen8500_3_d7fd.p);
    connect(MALMO_d43e.p, gen8500_4_d804.p);
    connect(MALMO_d43e.p, gen8500_5_d80b.p);
    connect(MALMO_d43e.p, gen8500_6_d812.p);
    connect(FORSMARK_d1c9.p, line3000_3020_1d816.p);
    connect(DANNEBO_HVDC_d1e6.p, line3000_3020_1d816.n);
    connect(FORSMARK_d1c9.p, line3000_3115_1d822.p);
    connect(PORJUS_d204.p, line3000_3115_1d822.n);
    connect(FORSMARK_d1c9.p, line3000_3245_1d82e.p);
    connect(JARPSTROMMEN_d232.p, line3000_3245_1d82e.n);
    connect(FORSMARK_d1c9.p, line3000_3245_2d83a.p);
    connect(JARPSTROMMEN_d232.p, line3000_3245_2d83a.n);
    connect(FORSMARK_d1c9.p, line3000_3300_1d846.p);
    connect(OSKARSHAMN_d250.p, line3000_3300_1d846.n);
    connect(FORSMARK_d1c9.p, line3000_3300_2d852.p);
    connect(OSKARSHAMN_d250.p, line3000_3300_2d852.n);
    connect(HJALTA_d1f5.p, line3100_3115_1d85e.p);
    connect(PORJUS_d204.p, line3100_3115_1d85e.n);
    connect(HJALTA_d1f5.p, line3100_3200_1d86a.p);
    connect(TENHULT_d213.p, line3100_3200_1d86a.n);
    connect(HJALTA_d1f5.p, line3100_3200_2d876.p);
    connect(TENHULT_d213.p, line3100_3200_2d876.n);
    connect(HJALTA_d1f5.p, line3100_3200_3d882.p);
    connect(TENHULT_d213.p, line3100_3200_3d882.n);
    connect(HJALTA_d1f5.p, line3100_3249_1d88e.p);
    connect(GRUNDFORS_d241.p, line3100_3249_1d88e.n);
    connect(HJALTA_d1f5.p, line3100_3359_1d89a.p);
    connect(RINGHALS_d25f.p, line3100_3359_1d89a.n);
    connect(HJALTA_d1f5.p, line3100_3359_2d8a6.p);
    connect(RINGHALS_d25f.p, line3100_3359_2d8a6.n);
    connect(PORJUS_d204.p, line3115_3245_1d8b2.p);
    connect(JARPSTROMMEN_d232.p, line3115_3245_1d8b2.n);
    connect(PORJUS_d204.p, line3115_3249_1d8be.p);
    connect(GRUNDFORS_d241.p, line3115_3249_1d8be.n);
    connect(PORJUS_d204.p, line3115_6701_1d8ca.p);
    connect(OFOTEN_d3f3.p, line3115_6701_1d8ca.n);
    connect(PORJUS_d204.p, line3115_7100_1d8d6.p);
    connect(OULU_d42f.p, line3115_7100_1d8d6.n);
    connect(TENHULT_d213.p, line3200_3300_1d8e2.p);
    connect(OSKARSHAMN_d250.p, line3200_3300_1d8e2.n);
    connect(TENHULT_d213.p, line3200_3359_1d8ee.p);
    connect(RINGHALS_d25f.p, line3200_3359_1d8ee.n);
    connect(TENHULT_d213.p, line3200_8500_1d8fa.p);
    connect(MALMO_d43e.p, line3200_8500_1d8fa.n);
    connect(HOGASEN_d222.p, line3244_6500_1d906.p);
    connect(TRONDHEIM_d3d5.p, line3244_6500_1d906.n);
    connect(GRUNDFORS_d241.p, line3249_7100_1d912.p);
    connect(OULU_d42f.p, line3249_7100_1d912.n);
    connect(OSKARSHAMN_d250.p, line3300_8500_1d91e.p);
    connect(MALMO_d43e.p, line3300_8500_1d91e.n);
    connect(OSKARSHAMN_d250.p, line3300_8500_2d92a.p);
    connect(MALMO_d43e.p, line3300_8500_2d92a.n);
    connect(RINGHALS_d25f.p, line3359_5101_1d936.p);
    connect(HASLE_d29c.p, line3359_5101_1d936.n);
    connect(RINGHALS_d25f.p, line3359_5101_2d942.p);
    connect(HASLE_d29c.p, line3359_5101_2d942.n);
    connect(RINGHALS_d25f.p, line3359_8500_1d94e.p);
    connect(MALMO_d43e.p, line3359_8500_1d94e.n);
    connect(RINGHALS_d25f.p, line3359_8500_2d95a.p);
    connect(MALMO_d43e.p, line3359_8500_2d95a.n);
    connect(AJAURE_d27e.p, line3701_6700_1d966.p);
    connect(ROSSAGA_d3e4.p, line3701_6700_1d966.n);
    connect(TRETTEN_d28d.p, line5100_5500_1d972.p);
    connect(OSLO2_d332.p, line5100_5500_1d972.n);
    connect(TRETTEN_d28d.p, line5100_6500_1d97e.p);
    connect(TRONDHEIM_d3d5.p, line5100_6500_1d97e.n);
    connect(HASLE_d29c.p, line5101_5102_1d98a.p);
    connect(DAGALI_d2ab.p, line5101_5102_1d98a.n);
    connect(HASLE_d29c.p, line5101_5103_1d996.p);
    connect(KONGSBERG_d2ba.p, line5101_5103_1d996.n);
    connect(HASLE_d29c.p, line5101_5501_1d9a2.p);
    connect(SKIEN_d340.p, line5101_5501_1d9a2.n);
    connect(HASLE_d29c.p, SH5101_5501_1d9ae.p);
    connect(SKIEN_d340.p, SH5101_5501_1d9b2.p);
    connect(DAGALI_d2ab.p, line5102_5103_1d9b6.p);
    connect(KONGSBERG_d2ba.p, line5102_5103_1d9b6.n);
    connect(DAGALI_d2ab.p, line5102_5304_1d9c2.p);
    connect(GEILO_d2e7.p, line5102_5304_1d9c2.n);
    connect(DAGALI_d2ab.p, line5102_6001_1d9ce.p);
    connect(HAGAFOSS_d3b7.p, line5102_6001_1d9ce.n);
    connect(DAGALI_d2ab.p, SH5102_6001_1d9da.p);
    connect(HAGAFOSS_d3b7.p, SH5102_6001_1d9de.p);
    connect(KONGSBERG_d2ba.p, line5103_5304_1d9e2.p);
    connect(GEILO_d2e7.p, line5103_5304_1d9e2.n);
    connect(KONGSBERG_d2ba.p, line5103_5304_2d9ee.p);
    connect(GEILO_d2e7.p, line5103_5304_2d9ee.n);
    connect(SIMA_d2c9.p, line5300_6100_1d9fa.p);
    connect(BLAFALLI_d3c6.p, line5300_6100_1d9fa.n);
    connect(AURLAND_d2d8.p, line5301_5304_1da06.p);
    connect(GEILO_d2e7.p, line5301_5304_1da06.n);
    connect(AURLAND_d2d8.p, line5301_5305_1da12.p);
    connect(EIDFJORD_d2f6.p, line5301_5305_1da12.n);
    connect(AURLAND_d2d8.p, line5301_6001_1da1e.p);
    connect(HAGAFOSS_d3b7.p, line5301_6001_1da1e.n);
    connect(GEILO_d2e7.p, line5304_5305_1da2a.p);
    connect(EIDFJORD_d2f6.p, line5304_5305_1da2a.n);
    connect(GEILO_d2e7.p, line5304_5305_2da36.p);
    connect(EIDFJORD_d2f6.p, line5304_5305_2da36.n);
    connect(OSLO1_d305.p, line5400_5500_1da42.p);
    connect(OSLO2_d332.p, line5400_5500_1da42.n);
    connect(OSLO1_d305.p, line5400_6000_1da4e.p);
    connect(KVILLDAL_d3a8.p, line5400_6000_1da4e.n);
    connect(SYLLING_d314.p, line5401_5501_1da5a.p);
    connect(SKIEN_d340.p, line5401_5501_1da5a.n);
    connect(SYLLING_d314.p, line5401_5602_1da66.p);
    connect(SANDEFJORD_d36d.p, line5401_5602_1da66.n);
    connect(SYLLING_d314.p, line5401_6001_1da72.p);
    connect(HAGAFOSS_d3b7.p, line5401_6001_1da72.n);
    connect(SYLLING_d314.p, SH5401_6001_1da7e.p);
    connect(HAGAFOSS_d3b7.p, SH5401_6001_1da82.p);
    connect(KAGGEFOSS_d323.p, line5402_6001_1da86.p);
    connect(HAGAFOSS_d3b7.p, line5402_6001_1da86.n);
    connect(OSLO2_d332.p, line5500_5603_1da92.p);
    connect(ARENDAL_d37c.p, line5500_5603_1da92.n);
    connect(OSLO2_d332.p, SH5500_5603_1da9e.p);
    connect(KRISTIANSAND_d34f.p, line5600_5603_1dab2.p);
    connect(ARENDAL_d37c.p, line5600_5603_1dab2.n);
    connect(KRISTIANSAND_d34f.p, line5600_5620_1dabe.p);
    connect(FEDA_HVDC_d399.p, line5600_5620_1dabe.n);
    connect(KRISTIANSAND_d34f.p, line5600_6000_1daca.p);
    connect(KVILLDAL_d3a8.p, line5600_6000_1daca.n);
    connect(ARENDAL_d37c.p, line5603_5610_1dad6.p);
    connect(KRISTIA_HVDC_d38b.p, line5603_5610_1dad6.n);
    connect(KVILLDAL_d3a8.p, line6000_6100_1dae2.p);
    connect(BLAFALLI_d3c6.p, line6000_6100_1dae2.n);
    connect(TRONDHEIM_d3d5.p, line6500_6700_1daee.p);
    connect(ROSSAGA_d3e4.p, line6500_6700_1daee.n);
    connect(TRONDHEIM_d3d5.p, line6500_6700_2dafa.p);
    connect(ROSSAGA_d3e4.p, line6500_6700_2dafa.n);
    connect(HELSINKI_d402.p, line7000_7010_1db06.p);
    connect(VYBORG_HVDC_d411.p, line7000_7010_1db06.n);
    connect(HELSINKI_d402.p, line7000_7020_1db12.p);
    connect(ESTLINK_HVDC_d420.p, line7000_7020_1db12.n);
    connect(HELSINKI_d402.p, line7000_7100_1db1e.p);
    connect(OULU_d42f.p, line7000_7100_1db1e.n);
    connect(HELSINKI_d402.p, line7000_7100_2db2a.p);
    connect(OULU_d42f.p, line7000_7100_2db2a.n);
    connect(HELSINKI_d402.p, line7000_7100_3db36.p);
    connect(OULU_d42f.p, line7000_7100_3db36.n);
    connect(MALMO_d43e.p, line8500_8600_1db42.p);
    connect(ARRIE_HVDC_d44d.p, line8500_8600_1db42.n);
    connect(MALMO_d43e.p, line8500_8700_1db4e.p);
    connect(KARLSH_HVDC_d45c.p, line8500_8700_1db4e.n);
    connect(HOGASEN_d222.p, T324432450_1_db5a.p);
    connect(JARPSTROMMEN_d232.p, T324432450_1_db5a.n);
    connect(AJAURE_d27e.p, T370132490_1_db6c.p);
    connect(GRUNDFORS_d241.p, T370132490_1_db6c.n);
    connect(RINGHALS_d25f.p, T335933600_1_db7e.p);
    connect(STENKU_HVDC_d26e.p, T335933600_1_db7e.n);
    connect(HASLE_d29c.p, T510151000_1_db90.p);
    connect(TRETTEN_d28d.p, T510151000_1_db90.n);
    connect(SIMA_d2c9.p, T530053010_1_dba2.p);
    connect(AURLAND_d2d8.p, T530053010_1_dba2.n);
    connect(OSLO1_d305.p, T540054010_1_dbb4.p);
    connect(SYLLING_d314.p, T540054010_1_dbb4.n);
    connect(OSLO1_d305.p, T540054020_1_dbc6.p);
    connect(KAGGEFOSS_d323.p, T540054020_1_dbc6.n);
    connect(OSLO2_d332.p, T550055010_1_dbd8.p);
    connect(SKIEN_d340.p, T550055010_1_dbd8.n);
    connect(STAVANGER_d35e.p, T560160010_1_dbea.p);
    connect(HAGAFOSS_d3b7.p, T560160010_1_dbea.n);
    connect(ARENDAL_d37c.p, T560356020_1_dbfc.p);
    connect(SANDEFJORD_d36d.p, T560356020_1_dbfc.n);
    connect(KVILLDAL_d3a8.p, T600060010_1_dc0e.p);
    connect(HAGAFOSS_d3b7.p, T600060010_1_dc0e.n);
    connect(ROSSAGA_d3e4.p, T670067010_1_dc20.p);
    connect(OFOTEN_d3f3.p, T670067010_1_dc20.n);
    connect(ARENDAL_d37c.p, SH5500_5603_1daa2.p);
    connect(KRISTIANSAND_d34f.p, line5600_5601_1daa6.p);
    connect(STAVANGER_d35e.p, line5600_5601_1daa6.n);
    // -- Connect fault event:
    connect(Fault.p, FORSMARK_d1c9.p);
  end N44_BC;

  package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."
    model GEN3000_1_d5bd
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 5.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.9700000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3000_1_d5bd;

    model GEN3000_2_d5c3
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 5.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.9700000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3000_2_d5c3;

    model GEN3000_3_d5c9
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 5.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.9700000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3000_3_d5c9;

    model GEN3115_1_d5d5
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.5700000, Tppd0 = 0.0450000, Tppq0 = 0.1000000, H = 4.7410000, D = 0.0000000, Xd = 0.9460000, Xq = 0.5650000, Xpd = 0.290000, Xppd = 0.2300000, Xl = 0.1107700, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.05770, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3115_1_d5d5;

    model GEN3115_2_d5dc
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.5700000, Tppd0 = 0.0450000, Tppq0 = 0.1000000, H = 4.7410000, D = 0.0000000, Xd = 0.9460000, Xq = 0.5650000, Xpd = 0.290000, Xppd = 0.2300000, Xl = 0.1107700, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.05770, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3115_2_d5dc;

    model GEN3115_3_d5e3
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.5700000, Tppd0 = 0.0450000, Tppq0 = 0.1000000, H = 4.7410000, D = 0.0000000, Xd = 0.9460000, Xq = 0.5650000, Xpd = 0.290000, Xppd = 0.2300000, Xl = 0.1107700, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.05770, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3115_3_d5e3;

    model GEN3115_4_d5ea
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.5700000, Tppd0 = 0.0450000, Tppq0 = 0.1000000, H = 4.7410000, D = 0.0000000, Xd = 0.9460000, Xq = 0.5650000, Xpd = 0.290000, Xppd = 0.2300000, Xl = 0.1107700, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.05770, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3115_4_d5ea;

    model GEN3115_5_d5f1
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.5700000, Tppd0 = 0.0450000, Tppq0 = 0.1000000, H = 4.7410000, D = 0.0000000, Xd = 0.9460000, Xq = 0.5650000, Xpd = 0.290000, Xppd = 0.2300000, Xl = 0.1108000, S10 = 0.1024000, S12 = 0.2742000, Xppq = 0.2300000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.05770, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3115_5_d5f1;

    model GEN3245_1_d5fa
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.0000000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 3.3000000, D = 0.0000000, Xd = 0.7500000, Xq = 0.5000000, Xpd = 0.250000, Xppd = 0.1538500, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.1538500, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.01000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3245_1_d5fa;

    model GEN3249_1_d606
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_1_d606;

    model GEN3249_2_d60d
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_2_d60d;

    model GEN3249_3_d614
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_3_d614;

    model GEN3249_4_d61b
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_4_d61b;

    model GEN3249_5_d622
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_5_d622;

    model GEN3249_6_d629
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_6_d629;

    model GEN3249_7_d630
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_7_d630;

    model GEN3249_8_d637
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 10.1300000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 4.5430000, D = 0.0000000, Xd = 1.0360000, Xq = 0.6300000, Xpd = 0.280000, Xppd = 0.2100000, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.2100000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3249_8_d637;

    model GEN3300_1_d640
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.8000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 6.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1600000, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3300_1_d640;

    model GEN3300_2_d647
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.8000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 6.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1600000, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3300_2_d647;

    model GEN3300_3_d64e
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.8000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 6.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1600000, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3300_3_d64e;

    model GEN3300_4_d655
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.8000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 6.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1600000, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3300_4_d655;

    model GEN3300_5_d65c
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.8000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 6.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1600000, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3300_5_d65c;

    model GEN3300_6_d663
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.8000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 6.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1600000, Xl = 0.1481000, S10 = 0.1089000, S12 = 0.3780000, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3300_6_d663;

    model GEN3359_1_d66c
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.7500000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 4.8200000, D = 0.0000000, Xd = 2.1300000, Xq = 2.0300000, Xpd = 0.310000, Xpq = 0.403000, Xppd = 0.1937000, Xl = 0.1453100, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1937000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3359_1_d66c;

    model GEN3359_2_d672
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.7500000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 4.8200000, D = 0.0000000, Xd = 2.1300000, Xq = 2.0300000, Xpd = 0.310000, Xpq = 0.403000, Xppd = 0.1937000, Xl = 0.1453100, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1937000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3359_2_d672;

    model GEN3359_3_d678
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.7500000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 4.8200000, D = 0.0000000, Xd = 2.1300000, Xq = 2.0300000, Xpd = 0.310000, Xpq = 0.403000, Xppd = 0.1937000, Xl = 0.1453100, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1937000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3359_3_d678;

    model GEN3359_4_d67e
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.7500000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 4.8200000, D = 0.0000000, Xd = 2.1300000, Xq = 2.0300000, Xpd = 0.310000, Xpq = 0.403000, Xppd = 0.1937000, Xl = 0.1453100, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1937000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3359_4_d67e;

    model GEN3359_5_d684
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.7500000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 4.8200000, D = 0.0000000, Xd = 2.1300000, Xq = 2.0300000, Xpd = 0.310000, Xpq = 0.403000, Xppd = 0.1937000, Xl = 0.1453100, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1937000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3359_5_d684;

    model GEN3359_6_d68a
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 4.7500000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 4.8200000, D = 0.0000000, Xd = 2.1300000, Xq = 2.0300000, Xpd = 0.310000, Xpq = 0.403000, Xppd = 0.1937000, Xl = 0.1453100, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1937000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN3359_6_d68a;

    model GEN5100_1_d692
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 4.9629000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.9871000, D = 0.0000000, Xd = 1.1332000, Xq = 0.6831500, Xpd = 0.243020, Xppd = 0.1513500, Xl = 0.1340500, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1513500, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5100_1_d692;

    model GEN5100_2_d698
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 4.9629000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.9871000, D = 0.0000000, Xd = 1.1332000, Xq = 0.6832000, Xpd = 0.243000, Xppd = 0.1514000, Xl = 0.1341000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1514000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5100_2_d698;

    model GEN5300_1_d6a4
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.4000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.1400000, Xq = 0.8400000, Xpd = 0.340000, Xppd = 0.2600000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5300_1_d6a4;

    model GEN5300_2_d6ab
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.4000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.1400000, Xq = 0.8400000, Xpd = 0.340000, Xppd = 0.2600000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5300_2_d6ab;

    model GEN5300_3_d6b2
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.4000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.1400000, Xq = 0.8400000, Xpd = 0.340000, Xppd = 0.2600000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5300_3_d6b2;

    model GEN5300_4_d6b9
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.4000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.1400000, Xq = 0.8400000, Xpd = 0.340000, Xppd = 0.2600000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5300_4_d6b9;

    model GEN5300_5_d6c0
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.4000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.1400000, Xq = 0.8400000, Xpd = 0.340000, Xppd = 0.2600000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5300_5_d6c0;

    model GEN5300_6_d6c7
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.4000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.1400000, Xq = 0.8400000, Xpd = 0.340000, Xppd = 0.2600000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5300_6_d6c7;

    model GEN5400_1_d6d0
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.5000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 4.1000000, D = 0.0000000, Xd = 1.0200000, Xq = 0.6300000, Xpd = 0.250000, Xppd = 0.1600000, Xl = 0.1300000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5400_1_d6d0;

    model GEN5400_2_d6d6
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 6.5000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 4.1000000, D = 0.0000000, Xd = 1.0200000, Xq = 0.6300000, Xpd = 0.250000, Xppd = 0.1600000, Xl = 0.1300000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1600000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5400_2_d6d6;

    model GEN5500_1_d6e2
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.1980000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2364000, Xq = 0.6556700, Xpd = 0.374150, Xppd = 0.2282500, Xl = 0.1619400, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2282500, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5500_1_d6e2;

    model GEN5500_2_d6e9
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.1980000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2364000, Xq = 0.6557000, Xpd = 0.374100, Xppd = 0.2283000, Xl = 0.1619000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2283000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5500_2_d6e9;

    model GEN5600_1_d6f6
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.8500000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.0000000, Xq = 0.5132500, Xpd = 0.380000, Xppd = 0.2800000, Xl = 0.2100000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5600_1_d6f6;

    model GEN5600_2_d6fd
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.8500000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.0000000, Xq = 0.5132500, Xpd = 0.380000, Xppd = 0.2800000, Xl = 0.2100000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5600_2_d6fd;

    model GEN5600_3_d704
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.8500000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.0000000, Xq = 0.5132500, Xpd = 0.380000, Xppd = 0.2800000, Xl = 0.2100000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5600_3_d704;

    model GEN5600_4_d70b
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 7.8500000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.0000000, Xq = 0.5132500, Xpd = 0.380000, Xppd = 0.2800000, Xl = 0.2100000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN5600_4_d70b;

    model GEN6000_1_d714
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.7000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.2800000, Xq = 0.9400000, Xpd = 0.370000, Xppd = 0.2800000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6000_1_d714;

    model GEN6000_2_d71a
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.7000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.2800000, Xq = 0.9400000, Xpd = 0.370000, Xppd = 0.2800000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6000_2_d71a;

    model GEN6000_3_d720
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.7000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.2800000, Xq = 0.9400000, Xpd = 0.370000, Xppd = 0.2800000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6000_3_d720;

    model GEN6000_4_d726
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.7000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5000000, D = 0.0000000, Xd = 1.2800000, Xq = 0.9400000, Xpd = 0.370000, Xppd = 0.2800000, Xl = 0.2000000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.2800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.30000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6000_4_d726;

    model GEN6100_1_d72e
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.9000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2000000, Xq = 0.7300000, Xpd = 0.370000, Xppd = 0.1800000, Xl = 0.1500000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6100_1_d72e;

    model GEN6100_2_d734
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.9000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2000000, Xq = 0.7300000, Xpd = 0.370000, Xppd = 0.1800000, Xl = 0.1500000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6100_2_d734;

    model GEN6100_3_d73a
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.9000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2000000, Xq = 0.7300000, Xpd = 0.370000, Xppd = 0.1800000, Xl = 0.1500000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6100_3_d73a;

    model GEN6100_4_d740
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.9000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2000000, Xq = 0.7300000, Xpd = 0.370000, Xppd = 0.1800000, Xl = 0.1500000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6100_4_d740;

    model GEN6100_5_d746
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 9.9000000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.0000000, D = 0.0000000, Xd = 1.2000000, Xq = 0.7300000, Xpd = 0.370000, Xppd = 0.1800000, Xl = 0.1500000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1800000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6100_5_d746;

    model GEN6500_1_d752
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.4855000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5580000, D = 0.0000000, Xd = 1.0679000, Xq = 0.6420000, Xpd = 0.238650, Xppd = 0.1580200, Xl = 0.1351400, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1580200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6500_1_d752;

    model GEN6500_2_d759
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.4855000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5580000, D = 0.0000000, Xd = 1.0679000, Xq = 0.6420000, Xpd = 0.238650, Xppd = 0.1580200, Xl = 0.1351400, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1580200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6500_2_d759;

    model GEN6500_3_d760
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.4855000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5580000, D = 0.0000000, Xd = 1.0679000, Xq = 0.6420000, Xpd = 0.238650, Xppd = 0.1580200, Xl = 0.1351400, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1580200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6500_3_d760;

    model GEN6500_4_d767
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.4855000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5580000, D = 0.0000000, Xd = 1.0679000, Xq = 0.6420000, Xpd = 0.238650, Xppd = 0.1580200, Xl = 0.1351400, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1580200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6500_4_d767;

    model GEN6700_1_d774
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.2400000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5920000, D = 0.0000000, Xd = 1.1044000, Xq = 0.6618600, Xpd = 0.254840, Xppd = 0.1706200, Xl = 0.1473700, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6700_1_d774;

    model GEN6700_2_d77b
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.2400000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5920000, D = 0.0000000, Xd = 1.1044000, Xq = 0.6618600, Xpd = 0.254840, Xppd = 0.1706200, Xl = 0.1473700, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6700_2_d77b;

    model GEN6700_3_d782
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.2400000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5920000, D = 0.0000000, Xd = 1.1044000, Xq = 0.6619000, Xpd = 0.254800, Xppd = 0.1706000, Xl = 0.1474000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1706000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6700_3_d782;

    model GEN6700_4_d789
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.2400000, Tppd0 = 0.0500000, Tppq0 = 0.1500000, H = 3.5920000, D = 0.0000000, Xd = 1.1044000, Xq = 0.6619000, Xpd = 0.254800, Xppd = 0.1706000, Xl = 0.1474000, S10 = 0.1000000, S12 = 0.3000000, Xppq = 0.1706000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.20000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.10000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN6700_4_d789;

    model GEN7000_1_d796
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_1_d796;

    model GEN7000_2_d79d
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_2_d79d;

    model GEN7000_3_d7a4
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_3_d7a4;

    model GEN7000_4_d7ab
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_4_d7ab;

    model GEN7000_5_d7b2
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_5_d7b2;

    model GEN7000_6_d7b9
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_6_d7b9;

    model GEN7000_7_d7c0
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_7_d7c0;

    model GEN7000_8_d7c7
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_8_d7c7;

    model GEN7000_9_d7ce
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 5.5000000, D = 0.0000000, Xd = 2.2200000, Xq = 2.1300000, Xpd = 0.360000, Xpq = 0.468000, Xppd = 0.2250000, Xl = 0.1687500, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.2250000, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7000_9_d7ce;

    model GEN7100_1_d7d7
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.0000000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 3.2000000, D = 0.0000000, Xd = 0.7500000, Xq = 0.5000000, Xpd = 0.250000, Xppd = 0.1538500, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.1538500, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.01000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7100_1_d7d7;

    model GEN7100_2_d7dd
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.0000000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 3.2000000, D = 0.0000000, Xd = 0.7500000, Xq = 0.5000000, Xpd = 0.250000, Xppd = 0.1538500, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.1538500, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.01000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7100_2_d7dd;

    model GEN7100_3_d7e3
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENSAL machine(Tpd0 = 5.0000000, Tppd0 = 0.0600000, Tppq0 = 0.1000000, H = 3.2000000, D = 0.0000000, Xd = 0.7500000, Xq = 0.5000000, Xpd = 0.250000, Xppd = 0.1538500, Xl = 0.1153800, S10 = 0.1023900, S12 = 0.2742000, Xppq = 0.1538500, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.HYGOV governor(R = 0.06000, r = 0.40000, T_r = 5.00000, T_f = 0.05000, T_g = 0.20000, VELM = 0.10000, G_MAX = 1.00000, G_MIN = 0.00000, T_w = 1.00000, A_t = 1.01000, D_turb = 0.50000, q_NL = 0.10000, h0 = 1.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN7100_3_d7e3;

    model GEN8500_1_d7ef
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 7.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1706200, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN8500_1_d7ef;

    model GEN8500_2_d7f6
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 7.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1706200, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN8500_2_d7f6;

    model GEN8500_3_d7fd
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 7.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1706200, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN8500_3_d7fd;

    model GEN8500_4_d804
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 7.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1706200, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN8500_4_d804;

    model GEN8500_5_d80b
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 7.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1706200, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN8500_5_d80b;

    model GEN8500_6_d812
      extends OpenIPSL.Electrical.Essentials.pfComponent;
      OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
      // Writing machine;
      OpenIPSL.Electrical.Machines.PSSE.GENROU machine(Tpd0 = 10.0000000, Tppd0 = 0.0500000, Tpq0 = 1.0000000, Tppq0 = 0.0500000, H = 7.0000000, D = 0.0000000, Xd = 2.4200000, Xq = 2.0000000, Xpd = 0.230000, Xpq = 0.410800, Xppd = 0.1706200, Xl = 0.1481200, S10 = 0.1089000, S12 = 0.3779500, Xppq = 0.1706200, R_a = 0, M_b = 100000000.00, V_b = V_b, P_0 = P_0, Q_0 = Q_0, v_0 = v_0, angle_0 = angle_0) annotation(Placement(transformation(extent = {{20, -10}, {40, 10}})));
      Modelica.Blocks.Sources.Constant uel(k = 0) annotation(Placement(transformation(extent = {{-40, -62}, {-20, -42}})));
      Modelica.Blocks.Sources.Constant oel(k = 0) annotation(Placement(transformation(extent = {{-40, -94}, {-20, -74}})));
      OpenIPSL.Electrical.Controls.PSSE.TG.IEESGO governor(T_1 = 0.01000, T_2 = 0.00000, T_3 = 0.15000, T_4 = 0.30000, T_5 = 8.00000, T_6 = 0.40000, K_1 = 0.00000, K_2 = 0.70000, K_3 = 0.43000, P_MAX = 1.00000, P_MIN = 0.00000) annotation(Placement(transformation(extent = {{-30, 20}, {-10, 40}})));
      OpenIPSL.Electrical.Controls.PSSE.ES.ConstantExcitation exciter annotation(Placement(transformation(extent = {{-16, -20}, {4, 0}})));
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
    end GEN8500_6_d812;
  end Generators;

  package PF_Data "Modelica records for power flow data."
    record Power_Flow " Translated and calculated power flow data."
      extends Modelica.Icons.Record;
      replaceable record PowerFlow = N44_BC_package.PF_Data.Power_Flow_Template constrainedby N44_BC_package.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
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
        parameter OpenIPSL.Types.Angle AKARLSH_HVDC_d45c;
      end Bus_Template;

      record PF_Bus_00000
        extends N44_BC_package.PF_Data.Bus_Data.Bus_Template(VFORSMARK_d1c9 = 1.00000, AFORSMARK_d1c9 = -0.050267, VDANNEBO_HVDC_d1e6 = 0.99590, ADANNEBO_HVDC_d1e6 = -0.062518, VHJALTA_d1f5 = 1.03796, AHJALTA_d1f5 = 0.043724, VPORJUS_d204 = 1.00000, APORJUS_d204 = 0.114685, VTENHULT_d213 = 1.03223, ATENHULT_d213 = 0.001815, VHOGASEN_d222 = 0.99574, AHOGASEN_d222 = -0.091801, VJARPSTROMMEN_d232 = 1.00000, AJARPSTROMMEN_d232 = -0.073993, VGRUNDFORS_d241 = 1.00000, AGRUNDFORS_d241 = 0.19437, VOSKARSHAMN_d250 = 1.00000, AOSKARSHAMN_d250 = 0.00000, VRINGHALS_d25f = 1.00000, ARINGHALS_d25f = -0.012781, VSTENKU_HVDC_d26e = 1.00112, ASTENKU_HVDC_d26e = -0.011315, VAJAURE_d27e = 1.00884, AAJAURE_d27e = 0.147459, VTRETTEN_d28d = 1.00000, ATRETTEN_d28d = 0.200933, VHASLE_d29c = 0.99189, AHASLE_d29c = 0.208497, VDAGALI_d2ab = 0.99477, ADAGALI_d2ab = 0.31164, VKONGSBERG_d2ba = 0.99207, AKONGSBERG_d2ba = 0.329698, VSIMA_d2c9 = 1.00000, ASIMA_d2c9 = 0.764576, VAURLAND_d2d8 = 0.99371, AAURLAND_d2d8 = 0.59770, VGEILO_d2e7 = 0.99120, AGEILO_d2e7 = 0.455702, VEIDFJORD_d2f6 = 0.99991, AEIDFJORD_d2f6 = 0.473275, VOSLO1_d305 = 1.00700, AOSLO1_d305 = 0.35671, VSYLLING_d314 = 1.00942, ASYLLING_d314 = 0.36484, VKAGGEFOSS_d323 = 1.00318, AKAGGEFOSS_d323 = 0.380064, VOSLO2_d332 = 1.00400, AOSLO2_d332 = 0.237721, VSKIEN_d340 = 1.00876, ASKIEN_d340 = 0.241145, VKRISTIANSAND_d34f = 1.01000, AKRISTIANSAND_d34f = 0.211356, VSTAVANGER_d35e = 1.00703, ASTAVANGER_d35e = 0.391774, VSANDEFJORD_d36d = 1.03398, ASANDEFJORD_d36d = 0.419586, VARENDAL_d37c = 1.03546, AARENDAL_d37c = 0.426097, VKRISTIA_HVDC_d38b = 1.03752, AKRISTIA_HVDC_d38b = 0.440842, VFEDA_HVDC_d399 = 1.00760, AFEDA_HVDC_d399 = 0.204212, VKVILLDAL_d3a8 = 1.00500, AKVILLDAL_d3a8 = 0.420076, VHAGAFOSS_d3b7 = 1.00160, AHAGAFOSS_d3b7 = 0.395839, VBLAFALLI_d3c6 = 1.00000, ABLAFALLI_d3c6 = 0.906043, VTRONDHEIM_d3d5 = 1.00000, ATRONDHEIM_d3d5 = -0.269847, VROSSAGA_d3e4 = 1.02000, AROSSAGA_d3e4 = -0.037718, VOFOTEN_d3f3 = 1.00908, AOFOTEN_d3f3 = -0.029608, VHELSINKI_d402 = 1.00000, AHELSINKI_d402 = 0.202362, VVYBORG_HVDC_d411 = 1.00324, AVYBORG_HVDC_d411 = 0.21238, VESTLINK_HVDC_d420 = 0.99761, AESTLINK_HVDC_d420 = 0.195154, VOULU_d42f = 1.00000, AOULU_d42f = 0.156542, VMALMO_d43e = 1.02000, AMALMO_d43e = -0.069783, VARRIE_HVDC_d44d = 1.02024, AARRIE_HVDC_d44d = -0.069054, VKARLSH_HVDC_d45c = 1.02000, AKARLSH_HVDC_d45c = -0.069783);
      end PF_Bus_00000;
    end Bus_Data;

    record Loads_Data
      partial record Loads_Template
        parameter OpenIPSL.Types.ActivePower PCL3000_1_d46a;
        parameter OpenIPSL.Types.ReactivePower QCL3000_1_d46a;
        parameter OpenIPSL.Types.ActivePower PCL3000_2_d471;
        parameter OpenIPSL.Types.ReactivePower QCL3000_2_d471;
        parameter OpenIPSL.Types.ActivePower PCL3000_3_d478;
        parameter OpenIPSL.Types.ReactivePower QCL3000_3_d478;
        parameter OpenIPSL.Types.ActivePower PNCL3020_1_d47f;
        parameter OpenIPSL.Types.ReactivePower QNCL3020_1_d47f;
        parameter OpenIPSL.Types.ActivePower PCL3100_1_d486;
        parameter OpenIPSL.Types.ReactivePower QCL3100_1_d486;
        parameter OpenIPSL.Types.ActivePower PCL3115_1_d48d;
        parameter OpenIPSL.Types.ReactivePower QCL3115_1_d48d;
        parameter OpenIPSL.Types.ActivePower PCL3249_1_d494;
        parameter OpenIPSL.Types.ReactivePower QCL3249_1_d494;
        parameter OpenIPSL.Types.ActivePower PCL3300_1_d49b;
        parameter OpenIPSL.Types.ReactivePower QCL3300_1_d49b;
        parameter OpenIPSL.Types.ActivePower PCL3300_2_d4a2;
        parameter OpenIPSL.Types.ReactivePower QCL3300_2_d4a2;
        parameter OpenIPSL.Types.ActivePower PCL3359_1_d4a9;
        parameter OpenIPSL.Types.ReactivePower QCL3359_1_d4a9;
        parameter OpenIPSL.Types.ActivePower PCL3359_2_d4b0;
        parameter OpenIPSL.Types.ReactivePower QCL3359_2_d4b0;
        parameter OpenIPSL.Types.ActivePower PCL3359_3_d4b7;
        parameter OpenIPSL.Types.ReactivePower QCL3359_3_d4b7;
        parameter OpenIPSL.Types.ActivePower PCL3359_4_d4be;
        parameter OpenIPSL.Types.ReactivePower QCL3359_4_d4be;
        parameter OpenIPSL.Types.ActivePower PNCL3360_1_d4c5;
        parameter OpenIPSL.Types.ReactivePower QNCL3360_1_d4c5;
        parameter OpenIPSL.Types.ActivePower PCL5100_1_d4cc;
        parameter OpenIPSL.Types.ReactivePower QCL5100_1_d4cc;
        parameter OpenIPSL.Types.ActivePower PCL5300_2_d4d3;
        parameter OpenIPSL.Types.ReactivePower QCL5300_2_d4d3;
        parameter OpenIPSL.Types.ActivePower PCL5400_1_d4da;
        parameter OpenIPSL.Types.ReactivePower QCL5400_1_d4da;
        parameter OpenIPSL.Types.ActivePower PCL5500_1_d4e1;
        parameter OpenIPSL.Types.ReactivePower QCL5500_1_d4e1;
        parameter OpenIPSL.Types.ActivePower PCL5500_2_d4e8;
        parameter OpenIPSL.Types.ReactivePower QCL5500_2_d4e8;
        parameter OpenIPSL.Types.ActivePower PCL5600_1_d4ef;
        parameter OpenIPSL.Types.ReactivePower QCL5600_1_d4ef;
        parameter OpenIPSL.Types.ActivePower PCL5600_2_d4f6;
        parameter OpenIPSL.Types.ReactivePower QCL5600_2_d4f6;
        parameter OpenIPSL.Types.ActivePower PNCL5610_1_d4fd;
        parameter OpenIPSL.Types.ReactivePower QNCL5610_1_d4fd;
        parameter OpenIPSL.Types.ActivePower PNCL5620_1_d504;
        parameter OpenIPSL.Types.ReactivePower QNCL5620_1_d504;
        parameter OpenIPSL.Types.ActivePower PCL6100_1_d50b;
        parameter OpenIPSL.Types.ReactivePower QCL6100_1_d50b;
        parameter OpenIPSL.Types.ActivePower PCL6100_2_d512;
        parameter OpenIPSL.Types.ReactivePower QCL6100_2_d512;
        parameter OpenIPSL.Types.ActivePower PCL6500_1_d519;
        parameter OpenIPSL.Types.ReactivePower QCL6500_1_d519;
        parameter OpenIPSL.Types.ActivePower PCL6500_2_d520;
        parameter OpenIPSL.Types.ReactivePower QCL6500_2_d520;
        parameter OpenIPSL.Types.ActivePower PCL6500_3_d527;
        parameter OpenIPSL.Types.ReactivePower QCL6500_3_d527;
        parameter OpenIPSL.Types.ActivePower PCL6700_1_d52e;
        parameter OpenIPSL.Types.ReactivePower QCL6700_1_d52e;
        parameter OpenIPSL.Types.ActivePower PNCL6701_1_d535;
        parameter OpenIPSL.Types.ReactivePower QNCL6701_1_d535;
        parameter OpenIPSL.Types.ActivePower PNCL6701_3_d53c;
        parameter OpenIPSL.Types.ReactivePower QNCL6701_3_d53c;
        parameter OpenIPSL.Types.ActivePower PCL7000_1_d543;
        parameter OpenIPSL.Types.ReactivePower QCL7000_1_d543;
        parameter OpenIPSL.Types.ActivePower PCL7000_2_d54a;
        parameter OpenIPSL.Types.ReactivePower QCL7000_2_d54a;
        parameter OpenIPSL.Types.ActivePower PCL7000_3_d551;
        parameter OpenIPSL.Types.ReactivePower QCL7000_3_d551;
        parameter OpenIPSL.Types.ActivePower PCL7000_4_d558;
        parameter OpenIPSL.Types.ReactivePower QCL7000_4_d558;
        parameter OpenIPSL.Types.ActivePower PCL7000_5_d55f;
        parameter OpenIPSL.Types.ReactivePower QCL7000_5_d55f;
        parameter OpenIPSL.Types.ActivePower PNCL7000_6_d566;
        parameter OpenIPSL.Types.ReactivePower QNCL7000_6_d566;
        parameter OpenIPSL.Types.ActivePower PNCL7010_1_d56d;
        parameter OpenIPSL.Types.ReactivePower QNCL7010_1_d56d;
        parameter OpenIPSL.Types.ActivePower PNCL7020_1_d574;
        parameter OpenIPSL.Types.ReactivePower QNCL7020_1_d574;
        parameter OpenIPSL.Types.ActivePower PCL7100_1_d57b;
        parameter OpenIPSL.Types.ReactivePower QCL7100_1_d57b;
        parameter OpenIPSL.Types.ActivePower PCL7100_2_d582;
        parameter OpenIPSL.Types.ReactivePower QCL7100_2_d582;
        parameter OpenIPSL.Types.ActivePower PNCL7100_3_d589;
        parameter OpenIPSL.Types.ReactivePower QNCL7100_3_d589;
        parameter OpenIPSL.Types.ActivePower PCL8500_1_d590;
        parameter OpenIPSL.Types.ReactivePower QCL8500_1_d590;
        parameter OpenIPSL.Types.ActivePower PCL8500_2_d597;
        parameter OpenIPSL.Types.ReactivePower QCL8500_2_d597;
        parameter OpenIPSL.Types.ActivePower PCL8500_3_d59e;
        parameter OpenIPSL.Types.ReactivePower QCL8500_3_d59e;
        parameter OpenIPSL.Types.ActivePower PNCL8500_4_d5a5;
        parameter OpenIPSL.Types.ReactivePower QNCL8500_4_d5a5;
        parameter OpenIPSL.Types.ActivePower PNCL8600_1_d5ac;
        parameter OpenIPSL.Types.ReactivePower QNCL8600_1_d5ac;
        parameter OpenIPSL.Types.ActivePower PNCL8700_1_d5b3;
        parameter OpenIPSL.Types.ReactivePower QNCL8700_1_d5b3;
        parameter OpenIPSL.Types.ActivePower PGEN3000_1_d5bd;
        parameter OpenIPSL.Types.ReactivePower QGEN3000_1_d5bd;
        parameter OpenIPSL.Types.ActivePower PGEN3000_2_d5c3;
        parameter OpenIPSL.Types.ReactivePower QGEN3000_2_d5c3;
        parameter OpenIPSL.Types.ActivePower PGEN3000_3_d5c9;
        parameter OpenIPSL.Types.ReactivePower QGEN3000_3_d5c9;
        parameter OpenIPSL.Types.ActivePower PGEN3115_1_d5d5;
        parameter OpenIPSL.Types.ReactivePower QGEN3115_1_d5d5;
        parameter OpenIPSL.Types.ActivePower PGEN3115_2_d5dc;
        parameter OpenIPSL.Types.ReactivePower QGEN3115_2_d5dc;
        parameter OpenIPSL.Types.ActivePower PGEN3115_3_d5e3;
        parameter OpenIPSL.Types.ReactivePower QGEN3115_3_d5e3;
        parameter OpenIPSL.Types.ActivePower PGEN3115_4_d5ea;
        parameter OpenIPSL.Types.ReactivePower QGEN3115_4_d5ea;
        parameter OpenIPSL.Types.ActivePower PGEN3115_5_d5f1;
        parameter OpenIPSL.Types.ReactivePower QGEN3115_5_d5f1;
        parameter OpenIPSL.Types.ActivePower PGEN3245_1_d5fa;
        parameter OpenIPSL.Types.ReactivePower QGEN3245_1_d5fa;
        parameter OpenIPSL.Types.ActivePower PGEN3249_1_d606;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_1_d606;
        parameter OpenIPSL.Types.ActivePower PGEN3249_2_d60d;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_2_d60d;
        parameter OpenIPSL.Types.ActivePower PGEN3249_3_d614;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_3_d614;
        parameter OpenIPSL.Types.ActivePower PGEN3249_4_d61b;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_4_d61b;
        parameter OpenIPSL.Types.ActivePower PGEN3249_5_d622;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_5_d622;
        parameter OpenIPSL.Types.ActivePower PGEN3249_6_d629;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_6_d629;
        parameter OpenIPSL.Types.ActivePower PGEN3249_7_d630;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_7_d630;
        parameter OpenIPSL.Types.ActivePower PGEN3249_8_d637;
        parameter OpenIPSL.Types.ReactivePower QGEN3249_8_d637;
        parameter OpenIPSL.Types.ActivePower PGEN3300_1_d640;
        parameter OpenIPSL.Types.ReactivePower QGEN3300_1_d640;
        parameter OpenIPSL.Types.ActivePower PGEN3300_2_d647;
        parameter OpenIPSL.Types.ReactivePower QGEN3300_2_d647;
        parameter OpenIPSL.Types.ActivePower PGEN3300_3_d64e;
        parameter OpenIPSL.Types.ReactivePower QGEN3300_3_d64e;
        parameter OpenIPSL.Types.ActivePower PGEN3300_4_d655;
        parameter OpenIPSL.Types.ReactivePower QGEN3300_4_d655;
        parameter OpenIPSL.Types.ActivePower PGEN3300_5_d65c;
        parameter OpenIPSL.Types.ReactivePower QGEN3300_5_d65c;
        parameter OpenIPSL.Types.ActivePower PGEN3300_6_d663;
        parameter OpenIPSL.Types.ReactivePower QGEN3300_6_d663;
        parameter OpenIPSL.Types.ActivePower PGEN3359_1_d66c;
        parameter OpenIPSL.Types.ReactivePower QGEN3359_1_d66c;
        parameter OpenIPSL.Types.ActivePower PGEN3359_2_d672;
        parameter OpenIPSL.Types.ReactivePower QGEN3359_2_d672;
        parameter OpenIPSL.Types.ActivePower PGEN3359_3_d678;
        parameter OpenIPSL.Types.ReactivePower QGEN3359_3_d678;
        parameter OpenIPSL.Types.ActivePower PGEN3359_4_d67e;
        parameter OpenIPSL.Types.ReactivePower QGEN3359_4_d67e;
        parameter OpenIPSL.Types.ActivePower PGEN3359_5_d684;
        parameter OpenIPSL.Types.ReactivePower QGEN3359_5_d684;
        parameter OpenIPSL.Types.ActivePower PGEN3359_6_d68a;
        parameter OpenIPSL.Types.ReactivePower QGEN3359_6_d68a;
        parameter OpenIPSL.Types.ActivePower PGEN5100_1_d692;
        parameter OpenIPSL.Types.ReactivePower QGEN5100_1_d692;
        parameter OpenIPSL.Types.ActivePower PGEN5100_2_d698;
        parameter OpenIPSL.Types.ReactivePower QGEN5100_2_d698;
        parameter OpenIPSL.Types.ActivePower PGEN5300_1_d6a4;
        parameter OpenIPSL.Types.ReactivePower QGEN5300_1_d6a4;
        parameter OpenIPSL.Types.ActivePower PGEN5300_2_d6ab;
        parameter OpenIPSL.Types.ReactivePower QGEN5300_2_d6ab;
        parameter OpenIPSL.Types.ActivePower PGEN5300_3_d6b2;
        parameter OpenIPSL.Types.ReactivePower QGEN5300_3_d6b2;
        parameter OpenIPSL.Types.ActivePower PGEN5300_4_d6b9;
        parameter OpenIPSL.Types.ReactivePower QGEN5300_4_d6b9;
        parameter OpenIPSL.Types.ActivePower PGEN5300_5_d6c0;
        parameter OpenIPSL.Types.ReactivePower QGEN5300_5_d6c0;
        parameter OpenIPSL.Types.ActivePower PGEN5300_6_d6c7;
        parameter OpenIPSL.Types.ReactivePower QGEN5300_6_d6c7;
        parameter OpenIPSL.Types.ActivePower PGEN5400_1_d6d0;
        parameter OpenIPSL.Types.ReactivePower QGEN5400_1_d6d0;
        parameter OpenIPSL.Types.ActivePower PGEN5400_2_d6d6;
        parameter OpenIPSL.Types.ReactivePower QGEN5400_2_d6d6;
        parameter OpenIPSL.Types.ActivePower PGEN5500_1_d6e2;
        parameter OpenIPSL.Types.ReactivePower QGEN5500_1_d6e2;
        parameter OpenIPSL.Types.ActivePower PGEN5500_2_d6e9;
        parameter OpenIPSL.Types.ReactivePower QGEN5500_2_d6e9;
        parameter OpenIPSL.Types.ActivePower PGEN5600_1_d6f6;
        parameter OpenIPSL.Types.ReactivePower QGEN5600_1_d6f6;
        parameter OpenIPSL.Types.ActivePower PGEN5600_2_d6fd;
        parameter OpenIPSL.Types.ReactivePower QGEN5600_2_d6fd;
        parameter OpenIPSL.Types.ActivePower PGEN5600_3_d704;
        parameter OpenIPSL.Types.ReactivePower QGEN5600_3_d704;
        parameter OpenIPSL.Types.ActivePower PGEN5600_4_d70b;
        parameter OpenIPSL.Types.ReactivePower QGEN5600_4_d70b;
        parameter OpenIPSL.Types.ActivePower PGEN6000_1_d714;
        parameter OpenIPSL.Types.ReactivePower QGEN6000_1_d714;
        parameter OpenIPSL.Types.ActivePower PGEN6000_2_d71a;
        parameter OpenIPSL.Types.ReactivePower QGEN6000_2_d71a;
        parameter OpenIPSL.Types.ActivePower PGEN6000_3_d720;
        parameter OpenIPSL.Types.ReactivePower QGEN6000_3_d720;
        parameter OpenIPSL.Types.ActivePower PGEN6000_4_d726;
        parameter OpenIPSL.Types.ReactivePower QGEN6000_4_d726;
        parameter OpenIPSL.Types.ActivePower PGEN6100_1_d72e;
        parameter OpenIPSL.Types.ReactivePower QGEN6100_1_d72e;
        parameter OpenIPSL.Types.ActivePower PGEN6100_2_d734;
        parameter OpenIPSL.Types.ReactivePower QGEN6100_2_d734;
        parameter OpenIPSL.Types.ActivePower PGEN6100_3_d73a;
        parameter OpenIPSL.Types.ReactivePower QGEN6100_3_d73a;
        parameter OpenIPSL.Types.ActivePower PGEN6100_4_d740;
        parameter OpenIPSL.Types.ReactivePower QGEN6100_4_d740;
        parameter OpenIPSL.Types.ActivePower PGEN6100_5_d746;
        parameter OpenIPSL.Types.ReactivePower QGEN6100_5_d746;
        parameter OpenIPSL.Types.ActivePower PGEN6500_1_d752;
        parameter OpenIPSL.Types.ReactivePower QGEN6500_1_d752;
        parameter OpenIPSL.Types.ActivePower PGEN6500_2_d759;
        parameter OpenIPSL.Types.ReactivePower QGEN6500_2_d759;
        parameter OpenIPSL.Types.ActivePower PGEN6500_3_d760;
        parameter OpenIPSL.Types.ReactivePower QGEN6500_3_d760;
        parameter OpenIPSL.Types.ActivePower PGEN6500_4_d767;
        parameter OpenIPSL.Types.ReactivePower QGEN6500_4_d767;
        parameter OpenIPSL.Types.ActivePower PGEN6700_1_d774;
        parameter OpenIPSL.Types.ReactivePower QGEN6700_1_d774;
        parameter OpenIPSL.Types.ActivePower PGEN6700_2_d77b;
        parameter OpenIPSL.Types.ReactivePower QGEN6700_2_d77b;
        parameter OpenIPSL.Types.ActivePower PGEN6700_3_d782;
        parameter OpenIPSL.Types.ReactivePower QGEN6700_3_d782;
        parameter OpenIPSL.Types.ActivePower PGEN6700_4_d789;
        parameter OpenIPSL.Types.ReactivePower QGEN6700_4_d789;
        parameter OpenIPSL.Types.ActivePower PGEN7000_1_d796;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_1_d796;
        parameter OpenIPSL.Types.ActivePower PGEN7000_2_d79d;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_2_d79d;
        parameter OpenIPSL.Types.ActivePower PGEN7000_3_d7a4;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_3_d7a4;
        parameter OpenIPSL.Types.ActivePower PGEN7000_4_d7ab;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_4_d7ab;
        parameter OpenIPSL.Types.ActivePower PGEN7000_5_d7b2;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_5_d7b2;
        parameter OpenIPSL.Types.ActivePower PGEN7000_6_d7b9;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_6_d7b9;
        parameter OpenIPSL.Types.ActivePower PGEN7000_7_d7c0;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_7_d7c0;
        parameter OpenIPSL.Types.ActivePower PGEN7000_8_d7c7;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_8_d7c7;
        parameter OpenIPSL.Types.ActivePower PGEN7000_9_d7ce;
        parameter OpenIPSL.Types.ReactivePower QGEN7000_9_d7ce;
        parameter OpenIPSL.Types.ActivePower PGEN7100_1_d7d7;
        parameter OpenIPSL.Types.ReactivePower QGEN7100_1_d7d7;
        parameter OpenIPSL.Types.ActivePower PGEN7100_2_d7dd;
        parameter OpenIPSL.Types.ReactivePower QGEN7100_2_d7dd;
        parameter OpenIPSL.Types.ActivePower PGEN7100_3_d7e3;
        parameter OpenIPSL.Types.ReactivePower QGEN7100_3_d7e3;
        parameter OpenIPSL.Types.ActivePower PGEN8500_1_d7ef;
        parameter OpenIPSL.Types.ReactivePower QGEN8500_1_d7ef;
        parameter OpenIPSL.Types.ActivePower PGEN8500_2_d7f6;
        parameter OpenIPSL.Types.ReactivePower QGEN8500_2_d7f6;
        parameter OpenIPSL.Types.ActivePower PGEN8500_3_d7fd;
        parameter OpenIPSL.Types.ReactivePower QGEN8500_3_d7fd;
        parameter OpenIPSL.Types.ActivePower PGEN8500_4_d804;
        parameter OpenIPSL.Types.ReactivePower QGEN8500_4_d804;
        parameter OpenIPSL.Types.ActivePower PGEN8500_5_d80b;
        parameter OpenIPSL.Types.ReactivePower QGEN8500_5_d80b;
        parameter OpenIPSL.Types.ActivePower PGEN8500_6_d812;
        parameter OpenIPSL.Types.ReactivePower QGEN8500_6_d812;
        parameter OpenIPSL.Types.ActivePower PSH5101_5501_1d9ae;
        parameter OpenIPSL.Types.ReactivePower QSH5101_5501_1d9ae;
        parameter OpenIPSL.Types.ActivePower PSH5101_5501_1d9b2;
        parameter OpenIPSL.Types.ReactivePower QSH5101_5501_1d9b2;
        parameter OpenIPSL.Types.ActivePower PSH5102_6001_1d9da;
        parameter OpenIPSL.Types.ReactivePower QSH5102_6001_1d9da;
        parameter OpenIPSL.Types.ActivePower PSH5102_6001_1d9de;
        parameter OpenIPSL.Types.ReactivePower QSH5102_6001_1d9de;
        parameter OpenIPSL.Types.ActivePower PSH5401_6001_1da7e;
        parameter OpenIPSL.Types.ReactivePower QSH5401_6001_1da7e;
        parameter OpenIPSL.Types.ActivePower PSH5401_6001_1da82;
        parameter OpenIPSL.Types.ReactivePower QSH5401_6001_1da82;
        parameter OpenIPSL.Types.ActivePower PSH5500_5603_1da9e;
        parameter OpenIPSL.Types.ReactivePower QSH5500_5603_1da9e;
        parameter OpenIPSL.Types.ActivePower PSH5500_5603_1daa2;
        parameter OpenIPSL.Types.ReactivePower QSH5500_5603_1daa2;
      end Loads_Template;

      record PF_Loads_00000
        extends N44_BC_package.PF_Data.Loads_Data.Loads_Template(PCL3000_1_d46a = 2.93761E8, QCL3000_1_d46a = 9.9393E7, PCL3000_2_d471 = 2.93761E8, QCL3000_2_d471 = 9.9393E7, PCL3000_3_d478 = 2.93761E8, QCL3000_3_d478 = 9.9393E7, PNCL3020_1_d47f = 1.22E9, QNCL3020_1_d47f = 4.00995E8, PCL3100_1_d486 = 9.0183E7, QCL3100_1_d486 = 9.4384E7, PCL3115_1_d48d = 1.029E9, QCL3115_1_d48d = 3.38216E8, PCL3249_1_d494 = 1.893817E9, QCL3249_1_d494 = 5.57725E8, PCL3300_1_d49b = 1.2854E9, QCL3300_1_d49b = 3.58053E8, PCL3300_2_d4a2 = 1.2854E9, QCL3300_2_d4a2 = 3.58053E8, PCL3359_1_d4a9 = 1.542479E9, QCL3359_1_d4a9 = 5.37078E8, PCL3359_2_d4b0 = 1.542479E9, QCL3359_2_d4b0 = 5.37078E8, PCL3359_3_d4b7 = 1.542479E9, QCL3359_3_d4b7 = 5.37078E8, PCL3359_4_d4be = 1.542479E9, QCL3359_4_d4be = 5.37078E8, PNCL3360_1_d4c5 = 8.0E7, QNCL3360_1_d4c5 = 2.6295E7, PCL5100_1_d4cc = 5.86618E8, QCL5100_1_d4cc = 1.63598E8, PCL5300_2_d4d3 = 2.303E9, QCL5300_2_d4d3 = 7.56959E8, PCL5400_1_d4da = 1.226567E9, QCL5400_1_d4da = 2.3371E8, PCL5500_1_d4e1 = 1.119908E9, QCL5500_1_d4e1 = 4.67424E8, PCL5500_2_d4e8 = 1.119908E9, QCL5500_2_d4e8 = 4.67424E8, PCL5600_1_d4ef = 1.397946E9, QCL5600_1_d4ef = 2.84835E8, PCL5600_2_d4f6 = 1.397946E9, QCL5600_2_d4f6 = 2.84835E8, PNCL5610_1_d4fd = 1.584E9, QNCL5610_1_d4fd = 2.25708E8, PNCL5620_1_d504 = 7.27E8, QNCL5620_1_d504 = 2.38953E8, PCL6100_1_d50b = 7.14054E8, QCL6100_1_d50b = 2.61882E8, PCL6100_2_d512 = 7.14054E8, QCL6100_2_d512 = 2.61882E8, PCL6500_1_d519 = 8.32667E8, QCL6500_1_d519 = 2.73684E8, PCL6500_2_d520 = 8.32667E8, QCL6500_2_d520 = 2.73684E8, PCL6500_3_d527 = 8.32667E8, QCL6500_3_d527 = 2.73684E8, PCL6700_1_d52e = 2.256E9, QCL6700_1_d52e = 7.41511E8, PNCL6701_1_d535 = 3.6E7, QNCL6701_1_d535 = 1.1833E7, PNCL6701_3_d53c = 1.8E7, QNCL6701_3_d53c = 5.916E6, PCL7000_1_d543 = 1.372248E9, QCL7000_1_d543 = 2.86124E8, PCL7000_2_d54a = 1.372248E9, QCL7000_2_d54a = 2.86124E8, PCL7000_3_d551 = 1.372248E9, QCL7000_3_d551 = 2.86124E8, PCL7000_4_d558 = 1.372248E9, QCL7000_4_d558 = 2.86124E8, PCL7000_5_d55f = 1.372248E9, QCL7000_5_d55f = 2.86124E8, PNCL7000_6_d566 = 1.22E9, QNCL7000_6_d566 = 4.00995E8, PNCL7010_1_d56d = 1.005E9, QNCL7010_1_d56d = 3.30328E8, PNCL7020_1_d574 = 7.19E8, QNCL7020_1_d574 = 2.36324E8, PCL7100_1_d57b = 1.232879E9, QCL7100_1_d57b = 8.17509E8, PCL7100_2_d582 = 1.232879E9, QCL7100_2_d582 = 8.17509E8, PNCL7100_3_d589 = 3.6E7, QNCL7100_3_d589 = 1.1833E7, PCL8500_1_d590 = 9.63667E8, QCL8500_1_d590 = 3.16742E8, PCL8500_2_d597 = 9.63667E8, QCL8500_2_d597 = 3.16742E8, PCL8500_3_d59e = 9.63667E8, QCL8500_3_d59e = 3.16742E8, PNCL8500_4_d5a5 = 4.0E8, QNCL8500_4_d5a5 = 1.3147399999999999E8, PNCL8600_1_d5ac = 7.6E7, QNCL8600_1_d5ac = 2.498E7, PNCL8700_1_d5b3 = 0, QNCL8700_1_d5b3 = 0, PGEN3000_1_d5bd = 3.71233E8, QGEN3000_1_d5bd = 1.72777E8, PGEN3000_2_d5c3 = 3.71233E8, QGEN3000_2_d5c3 = 1.72777E8, PGEN3000_3_d5c9 = 3.71233E8, QGEN3000_3_d5c9 = 1.72777E8, PGEN3115_1_d5d5 = 3.164E8, QGEN3115_1_d5d5 = 6.5747E7, PGEN3115_2_d5dc = 3.164E8, QGEN3115_2_d5dc = 6.5747E7, PGEN3115_3_d5e3 = 3.164E8, QGEN3115_3_d5e3 = 6.5747E7, PGEN3115_4_d5ea = 3.164E8, QGEN3115_4_d5ea = 6.5747E7, PGEN3115_5_d5f1 = 3.164E8, QGEN3115_5_d5f1 = 6.5747E7, PGEN3245_1_d5fa = 2.0027E8, QGEN3245_1_d5fa = 2.4521E7, PGEN3249_1_d606 = 4.39841E8, QGEN3249_1_d606 = 7.17E6, PGEN3249_2_d60d = 4.39841E8, QGEN3249_2_d60d = 7.17E6, PGEN3249_3_d614 = 4.39841E8, QGEN3249_3_d614 = 7.17E6, PGEN3249_4_d61b = 4.39841E8, QGEN3249_4_d61b = 7.17E6, PGEN3249_5_d622 = 4.39841E8, QGEN3249_5_d622 = 7.17E6, PGEN3249_6_d629 = 4.39841E8, QGEN3249_6_d629 = 7.17E6, PGEN3249_7_d630 = 4.39841E8, QGEN3249_7_d630 = 7.17E6, PGEN3249_8_d637 = 4.39841E8, QGEN3249_8_d637 = 7.17E6, PGEN3300_1_d640 = 7.04102E8, QGEN3300_1_d640 = 2.9633E7, PGEN3300_2_d647 = 7.04102E8, QGEN3300_2_d647 = 2.9633E7, PGEN3300_3_d64e = 7.04102E8, QGEN3300_3_d64e = 2.9633E7, PGEN3300_4_d655 = 7.04102E8, QGEN3300_4_d655 = 2.9633E7, PGEN3300_5_d65c = 7.04102E8, QGEN3300_5_d65c = 2.9633E7, PGEN3300_6_d663 = 7.04102E8, QGEN3300_6_d663 = 2.9633E7, PGEN3359_1_d66c = 6.98949E8, QGEN3359_1_d66c = 2.69075E8, PGEN3359_2_d672 = 6.98949E8, QGEN3359_2_d672 = 2.69075E8, PGEN3359_3_d678 = 6.98949E8, QGEN3359_3_d678 = 2.69075E8, PGEN3359_4_d67e = 6.98949E8, QGEN3359_4_d67e = 2.69075E8, PGEN3359_5_d684 = 6.98949E8, QGEN3359_5_d684 = 2.69075E8, PGEN3359_6_d68a = 6.98949E8, QGEN3359_6_d68a = 2.69075E8, PGEN5100_1_d692 = 3.51755E8, QGEN5100_1_d692 = 4.35537E8, PGEN5100_2_d698 = 3.51755E8, QGEN5100_2_d698 = 4.35537E8, PGEN5300_1_d6a4 = 7.23333E8, QGEN5300_1_d6a4 = 2.03805E8, PGEN5300_2_d6ab = 7.23333E8, QGEN5300_2_d6ab = 2.03805E8, PGEN5300_3_d6b2 = 7.23333E8, QGEN5300_3_d6b2 = 2.03805E8, PGEN5300_4_d6b9 = 7.23333E8, QGEN5300_4_d6b9 = 2.03805E8, PGEN5300_5_d6c0 = 7.23333E8, QGEN5300_5_d6c0 = 2.03805E8, PGEN5300_6_d6c7 = 7.23333E8, QGEN5300_6_d6c7 = 2.03805E8, PGEN5400_1_d6d0 = 3.33242E8, QGEN5400_1_d6d0 = 2.27241E8, PGEN5400_2_d6d6 = 3.33242E8, QGEN5400_2_d6d6 = 2.27241E8, PGEN5500_1_d6e2 = 2.59503E8, QGEN5500_1_d6e2 = 4.9584E7, PGEN5500_2_d6e9 = 2.59503E8, QGEN5500_2_d6e9 = 4.9584E7, PGEN5600_1_d6f6 = 2.3638E8, QGEN5600_1_d6f6 = 2.96033E8, PGEN5600_2_d6fd = 2.3638E8, QGEN5600_2_d6fd = 2.96033E8, PGEN5600_3_d704 = 2.3638E8, QGEN5600_3_d704 = 2.96033E8, PGEN5600_4_d70b = 2.3638E8, QGEN5600_4_d70b = 2.96033E8, PGEN6000_1_d714 = 4.29844E8, QGEN6000_1_d714 = 1.5552E7, PGEN6000_2_d71a = 4.29844E8, QGEN6000_2_d71a = 1.5552E7, PGEN6000_3_d720 = 4.29844E8, QGEN6000_3_d720 = 1.5552E7, PGEN6000_4_d726 = 4.29844E8, QGEN6000_4_d726 = 1.5552E7, PGEN6100_1_d72e = 6.28821E8, QGEN6100_1_d72e = 1.32332E8, PGEN6100_2_d734 = 6.28821E8, QGEN6100_2_d734 = 1.32332E8, PGEN6100_3_d73a = 6.28821E8, QGEN6100_3_d73a = 1.32332E8, PGEN6100_4_d740 = 6.28821E8, QGEN6100_4_d740 = 1.32332E8, PGEN6100_5_d746 = 6.28821E8, QGEN6100_5_d746 = 1.32332E8, PGEN6500_1_d752 = 2.0125E8, QGEN6500_1_d752 = 2.48711E8, PGEN6500_2_d759 = 2.0125E8, QGEN6500_2_d759 = 2.48711E8, PGEN6500_3_d760 = 2.0125E8, QGEN6500_3_d760 = 2.48711E8, PGEN6500_4_d767 = 2.0125E8, QGEN6500_4_d767 = 2.48711E8, PGEN6700_1_d774 = 5.2025E8, QGEN6700_1_d774 = 1.73342E8, PGEN6700_2_d77b = 5.2025E8, QGEN6700_2_d77b = 1.73342E8, PGEN6700_3_d782 = 5.2025E8, QGEN6700_3_d782 = 1.73342E8, PGEN6700_4_d789 = 5.2025E8, QGEN6700_4_d789 = 1.73342E8, PGEN7000_1_d796 = 7.07429E8, QGEN7000_1_d796 = 5.1637E7, PGEN7000_2_d79d = 7.07429E8, QGEN7000_2_d79d = 5.1637E7, PGEN7000_3_d7a4 = 7.07429E8, QGEN7000_3_d7a4 = 5.1637E7, PGEN7000_4_d7ab = 7.07429E8, QGEN7000_4_d7ab = 5.1637E7, PGEN7000_5_d7b2 = 7.07429E8, QGEN7000_5_d7b2 = 5.1637E7, PGEN7000_6_d7b9 = 7.07429E8, QGEN7000_6_d7b9 = 5.1637E7, PGEN7000_7_d7c0 = 7.07429E8, QGEN7000_7_d7c0 = 5.1637E7, PGEN7000_8_d7c7 = 7.07429E8, QGEN7000_8_d7c7 = 5.1637E7, PGEN7000_9_d7ce = 7.07429E8, QGEN7000_9_d7ce = 5.1637E7, PGEN7100_1_d7d7 = 4.50047E8, QGEN7100_1_d7d7 = 5.78697E8, PGEN7100_2_d7dd = 4.50047E8, QGEN7100_2_d7dd = 5.78697E8, PGEN7100_3_d7e3 = 4.50047E8, QGEN7100_3_d7e3 = 5.78697E8, PGEN8500_1_d7ef = 1.69333E8, QGEN8500_1_d7ef = 1.57431E8, PGEN8500_2_d7f6 = 1.69333E8, QGEN8500_2_d7f6 = 1.57431E8, PGEN8500_3_d7fd = 1.69333E8, QGEN8500_3_d7fd = 1.57431E8, PGEN8500_4_d804 = 1.69333E8, QGEN8500_4_d804 = 1.57431E8, PGEN8500_5_d80b = 1.69333E8, QGEN8500_5_d80b = 1.57431E8, PGEN8500_6_d812 = 1.69333E8, QGEN8500_6_d812 = 1.57431E8, PSH5101_5501_1d9ae = 2.19397563934E7, QSH5101_5501_1d9ae = 9.586594238281E8, PSH5101_5501_1d9b2 = 2.1980093002299998E7, QSH5101_5501_1d9b2 = 9.915462646484E8, PSH5102_6001_1d9da = 197915.7627, QSH5102_6001_1d9da = 98957.8813, PSH5102_6001_1d9de = 200642.82419999997, QSH5102_6001_1d9de = 100321.41209999999, PSH5401_6001_1da7e = 203788.0868, QSH5401_6001_1da7e = 509470.2244, PSH5401_6001_1da82 = 200642.82419999997, QSH5401_6001_1da82 = 501607.0604, PSH5500_5603_1da9e = 302401.78109999996, QSH5500_5603_1da9e = 1.3104168177E6, PSH5500_5603_1daa2 = 321649.99840000004, QSH5500_5603_1daa2 = 1.3938263655E6);
      end PF_Loads_00000;
    end Loads_Data;

    record Trafos_Data
      partial record Trafos_Template
        parameter Real T324432450_1_T1;
        parameter Real T324432450_1_T2;
        parameter Real T370132490_1_T1;
        parameter Real T370132490_1_T2;
        parameter Real T335933600_1_T1;
        parameter Real T335933600_1_T2;
        parameter Real T510151000_1_T1;
        parameter Real T510151000_1_T2;
        parameter Real T530053010_1_T1;
        parameter Real T530053010_1_T2;
        parameter Real T540054010_1_T1;
        parameter Real T540054010_1_T2;
        parameter Real T540054020_1_T1;
        parameter Real T540054020_1_T2;
        parameter Real T550055010_1_T1;
        parameter Real T550055010_1_T2;
        parameter Real T560160010_1_T1;
        parameter Real T560160010_1_T2;
        parameter Real T560356020_1_T1;
        parameter Real T560356020_1_T2;
        parameter Real T600060010_1_T1;
        parameter Real T600060010_1_T2;
        parameter Real T670067010_1_T1;
        parameter Real T670067010_1_T2;
      end Trafos_Template;

      record PF_Trafos_00000
        extends N44_BC_package.PF_Data.Trafos_Data.Trafos_Template(T324432450_1_T1 = 1, T324432450_1_T2 = 1, T370132490_1_T1 = 1, T370132490_1_T2 = 1, T335933600_1_T1 = 1, T335933600_1_T2 = 1, T510151000_1_T1 = 1, T510151000_1_T2 = 1, T530053010_1_T1 = 1, T530053010_1_T2 = 1, T540054010_1_T1 = 1, T540054010_1_T2 = 1, T540054020_1_T1 = 1, T540054020_1_T2 = 1, T550055010_1_T1 = 1, T550055010_1_T2 = 1, T560160010_1_T1 = 1, T560160010_1_T2 = 1, T560356020_1_T1 = 1, T560356020_1_T2 = 1, T600060010_1_T1 = 1, T600060010_1_T2 = 1, T670067010_1_T1 = 1, T670067010_1_T2 = 1);
      end PF_Trafos_00000;
    end Trafos_Data;

    record PF_00000
      extends N44_BC_package.PF_Data.Power_Flow_Template;
      replaceable record Bus = N44_BC_package.PF_Data.Bus_Data.PF_Bus_00000 constrainedby N44_BC_package.PF_Data.Bus_Data.Bus_Template "Bus power flow result";
      Bus bus;
      replaceable record Loads = N44_BC_package.PF_Data.Loads_Data.PF_Loads_00000 constrainedby N44_BC_package.PF_Data.Loads_Data.Loads_Template "Loads power flow result";
      Loads loads;
      replaceable record Trafos = N44_BC_package.PF_Data.Trafos_Data.PF_Trafos_00000 constrainedby N44_BC_package.PF_Data.Trafos_Data.Trafos_Template "Trafos power flow result";
      Trafos trafos;
    end PF_00000;
  end PF_Data;
  annotation(uses(Modelica(version = "4.0.0"), Complex, OpenIPSL(version = "3.1.0-dev")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end N44_BC_package;
