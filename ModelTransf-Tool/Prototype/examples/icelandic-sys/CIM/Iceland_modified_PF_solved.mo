package Iceland_modified_PF_solved_package "System automatically translated from PSSE CIM using XSLT_OpenIPSL."
	model Iceland_modified_PF_solved
		inner OpenIPSL.Electrical.SystemBase SysData(S_b =1.0E8, fn = 50.00) annotation(Placement(transformation(extent = {{-94, 80}, {-60, 100}})));
		inner Iceland_modified_PF_solved_package.PF_Data.Power_Flow pf(redeclare record PowerFlow = Iceland_modified_PF_solved_package.PF_Data.PF_00000) annotation(Placement(transformation(extent = {{-88, 60}, {-68, 80}})));
// -- Buses:
OpenIPSL.Electrical.Buses.Bus ESK2_CABLE_3c07(V_b = 66000, v_0 = pf.powerflow.bus.VESK2_CABLE_3c07, angle_0 = pf.powerflow.bus.AESK2_CABLE_3c07);
OpenIPSL.Electrical.Buses.Bus BUR_CABLE_3c24(V_b = 66000, v_0 = pf.powerflow.bus.VBUR_CABLE_3c24, angle_0 = pf.powerflow.bus.ABUR_CABLE_3c24);
OpenIPSL.Electrical.Buses.Bus BURFELL_3c33(V_b = 220000, v_0 = pf.powerflow.bus.VBURFELL_3c33, angle_0 = pf.powerflow.bus.ABURFELL_3c33);
OpenIPSL.Electrical.Buses.Bus BURFE_12_3c43(V_b = 13800, v_0 = pf.powerflow.bus.VBURFE_12_3c43, angle_0 = pf.powerflow.bus.ABURFE_12_3c43);
OpenIPSL.Electrical.Buses.Bus BURFE_34_3c53(V_b = 13800, v_0 = pf.powerflow.bus.VBURFE_34_3c53, angle_0 = pf.powerflow.bus.ABURFE_34_3c53);
OpenIPSL.Electrical.Buses.Bus BURFE_56_3c61(V_b = 13800, v_0 = pf.powerflow.bus.VBURFE_56_3c61, angle_0 = pf.powerflow.bus.ABURFE_56_3c61);
OpenIPSL.Electrical.Buses.Bus BUR66SP5_3c6f(V_b = 66000, v_0 = pf.powerflow.bus.VBUR66SP5_3c6f, angle_0 = pf.powerflow.bus.ABUR66SP5_3c6f);
OpenIPSL.Electrical.Buses.Bus BUR11SP5_3c7d(V_b = 11000, v_0 = pf.powerflow.bus.VBUR11SP5_3c7d, angle_0 = pf.powerflow.bus.ABUR11SP5_3c7d);
OpenIPSL.Electrical.Buses.Bus BUR66SP4_3c8d(V_b = 66000, v_0 = pf.powerflow.bus.VBUR66SP4_3c8d, angle_0 = pf.powerflow.bus.ABUR66SP4_3c8d);
OpenIPSL.Electrical.Buses.Bus BUR11SP4_3c9b(V_b = 11000, v_0 = pf.powerflow.bus.VBUR11SP4_3c9b, angle_0 = pf.powerflow.bus.ABUR11SP4_3c9b);
OpenIPSL.Electrical.Buses.Bus SIGALDA_3ca9(V_b = 220000, v_0 = pf.powerflow.bus.VSIGALDA_3ca9, angle_0 = pf.powerflow.bus.ASIGALDA_3ca9);
OpenIPSL.Electrical.Buses.Bus SIGALD12_3cb8(V_b = 10500, v_0 = pf.powerflow.bus.VSIGALD12_3cb8, angle_0 = pf.powerflow.bus.ASIGALD12_3cb8);
OpenIPSL.Electrical.Buses.Bus SIGALD22_3cc8(V_b = 10500, v_0 = pf.powerflow.bus.VSIGALD22_3cc8, angle_0 = pf.powerflow.bus.ASIGALD22_3cc8);
OpenIPSL.Electrical.Buses.Bus SIGALD32_3cd6(V_b = 10500, v_0 = pf.powerflow.bus.VSIGALD32_3cd6, angle_0 = pf.powerflow.bus.ASIGALD32_3cd6);
OpenIPSL.Electrical.Buses.Bus SIGALDA6_3ce4(V_b = 132000, v_0 = pf.powerflow.bus.VSIGALDA6_3ce4, angle_0 = pf.powerflow.bus.ASIGALDA6_3ce4);
OpenIPSL.Electrical.Buses.Bus SIGHR11_3cf4(V_b = 11000, v_0 = pf.powerflow.bus.VSIGHR11_3cf4, angle_0 = pf.powerflow.bus.ASIGHR11_3cf4);
OpenIPSL.Electrical.Buses.Bus SIG_TEINASPL_3d03(V_b = 220000, v_0 = pf.powerflow.bus.VSIG_TEINASPL_3d03, angle_0 = pf.powerflow.bus.ASIG_TEINASPL_3d03);
OpenIPSL.Electrical.Buses.Bus HRAUNEY_3d11(V_b = 220000, v_0 = pf.powerflow.bus.VHRAUNEY_3d11, angle_0 = pf.powerflow.bus.AHRAUNEY_3d11);
OpenIPSL.Electrical.Buses.Bus HRAUNE12_3d20(V_b = 13800, v_0 = pf.powerflow.bus.VHRAUNE12_3d20, angle_0 = pf.powerflow.bus.AHRAUNE12_3d20);
OpenIPSL.Electrical.Buses.Bus HRAUNE22_3d2f(V_b = 13800, v_0 = pf.powerflow.bus.VHRAUNE22_3d2f, angle_0 = pf.powerflow.bus.AHRAUNE22_3d2f);
OpenIPSL.Electrical.Buses.Bus HRAUNE32_3d3d(V_b = 13800, v_0 = pf.powerflow.bus.VHRAUNE32_3d3d, angle_0 = pf.powerflow.bus.AHRAUNE32_3d3d);
OpenIPSL.Electrical.Buses.Bus VATNSFEL_3d4b(V_b = 220000, v_0 = pf.powerflow.bus.VVATNSFEL_3d4b, angle_0 = pf.powerflow.bus.AVATNSFEL_3d4b);
OpenIPSL.Electrical.Buses.Bus VATN_V1_3d5a(V_b = 11000, v_0 = pf.powerflow.bus.VVATN_V1_3d5a, angle_0 = pf.powerflow.bus.AVATN_V1_3d5a);
OpenIPSL.Electrical.Buses.Bus VATN_V2_3d69(V_b = 11000, v_0 = pf.powerflow.bus.VVATN_V2_3d69, angle_0 = pf.powerflow.bus.AVATN_V2_3d69);
OpenIPSL.Electrical.Buses.Bus SULTARTA_3d77(V_b = 220000, v_0 = pf.powerflow.bus.VSULTARTA_3d77, angle_0 = pf.powerflow.bus.ASULTARTA_3d77);
OpenIPSL.Electrical.Buses.Bus SULT_V1_3d86(V_b = 11000, v_0 = pf.powerflow.bus.VSULT_V1_3d86, angle_0 = pf.powerflow.bus.ASULT_V1_3d86);
OpenIPSL.Electrical.Buses.Bus SULT_V2_3d95(V_b = 11000, v_0 = pf.powerflow.bus.VSULT_V2_3d95, angle_0 = pf.powerflow.bus.ASULT_V2_3d95);
OpenIPSL.Electrical.Buses.Bus BUDARHALS_3da3(V_b = 220000, v_0 = pf.powerflow.bus.VBUDARHALS_3da3, angle_0 = pf.powerflow.bus.ABUDARHALS_3da3);
OpenIPSL.Electrical.Buses.Bus BUD_V1_3db2(V_b = 11000, v_0 = pf.powerflow.bus.VBUD_V1_3db2, angle_0 = pf.powerflow.bus.ABUD_V1_3db2);
OpenIPSL.Electrical.Buses.Bus BUD_V2_3dc1(V_b = 11000, v_0 = pf.powerflow.bus.VBUD_V2_3dc1, angle_0 = pf.powerflow.bus.ABUD_V2_3dc1);
OpenIPSL.Electrical.Buses.Bus LANGALDA_3dcf(V_b = 220000, v_0 = pf.powerflow.bus.VLANGALDA_3dcf, angle_0 = pf.powerflow.bus.ALANGALDA_3dcf);
OpenIPSL.Electrical.Buses.Bus FLU_33KV_3dde(V_b = 33000, v_0 = pf.powerflow.bus.VFLU_33KV_3dde, angle_0 = pf.powerflow.bus.AFLU_33KV_3dde);
OpenIPSL.Electrical.Buses.Bus HLA_CABLE_3dee(V_b = 66000, v_0 = pf.powerflow.bus.VHLA_CABLE_3dee, angle_0 = pf.powerflow.bus.AHLA_CABLE_3dee);
OpenIPSL.Electrical.Buses.Bus HVOLSVOLLUR_3dfd(V_b = 66000, v_0 = pf.powerflow.bus.VHVOLSVOLLUR_3dfd, angle_0 = pf.powerflow.bus.AHVOLSVOLLUR_3dfd);
OpenIPSL.Electrical.Buses.Bus FLUDIR_3e0c(V_b = 66000, v_0 = pf.powerflow.bus.VFLUDIR_3e0c, angle_0 = pf.powerflow.bus.AFLUDIR_3e0c);
OpenIPSL.Electrical.Buses.Bus HELLA_3e1b(V_b = 66000, v_0 = pf.powerflow.bus.VHELLA_3e1b, angle_0 = pf.powerflow.bus.AHELLA_3e1b);
OpenIPSL.Electrical.Buses.Bus FLU_CABLE_3e2a(V_b = 66000, v_0 = pf.powerflow.bus.VFLU_CABLE_3e2a, angle_0 = pf.powerflow.bus.AFLU_CABLE_3e2a);
OpenIPSL.Electrical.Buses.Bus FLU2_CABLE_3e38(V_b = 66000, v_0 = pf.powerflow.bus.VFLU2_CABLE_3e38, angle_0 = pf.powerflow.bus.AFLU2_CABLE_3e38);
OpenIPSL.Electrical.Buses.Bus FLU_11KV_3e46(V_b = 11000, v_0 = pf.powerflow.bus.VFLU_11KV_3e46, angle_0 = pf.powerflow.bus.AFLU_11KV_3e46);
OpenIPSL.Electrical.Buses.Bus HELLA_11KV_3e55(V_b = 11000, v_0 = pf.powerflow.bus.VHELLA_11KV_3e55, angle_0 = pf.powerflow.bus.AHELLA_11KV_3e55);
OpenIPSL.Electrical.Buses.Bus HVOLSV_11KV_3e64(V_b = 11000, v_0 = pf.powerflow.bus.VHVOLSV_11KV_3e64, angle_0 = pf.powerflow.bus.AHVOLSV_11KV_3e64);
OpenIPSL.Electrical.Buses.Bus HVOLSV_DUMMY_3e73(V_b = 19000, v_0 = pf.powerflow.bus.VHVOLSV_DUMMY_3e73, angle_0 = pf.powerflow.bus.AHVOLSV_DUMMY_3e73);
OpenIPSL.Electrical.Buses.Bus RIMCABLE_3e83(V_b = 66000, v_0 = pf.powerflow.bus.VRIMCABLE_3e83, angle_0 = pf.powerflow.bus.ARIMCABLE_3e83);
OpenIPSL.Electrical.Buses.Bus RIMAKOT_3e92(V_b = 66000, v_0 = pf.powerflow.bus.VRIMAKOT_3e92, angle_0 = pf.powerflow.bus.ARIMAKOT_3e92);
OpenIPSL.Electrical.Buses.Bus RIMAKOT_3ea0(V_b = 33000, v_0 = pf.powerflow.bus.VRIMAKOT_3ea0, angle_0 = pf.powerflow.bus.ARIMAKOT_3ea0);
OpenIPSL.Electrical.Buses.Bus VEM_FORGANGS_3eaf(V_b = 33000, v_0 = pf.powerflow.bus.VVEM_FORGANGS_3eaf, angle_0 = pf.powerflow.bus.AVEM_FORGANGS_3eaf);
OpenIPSL.Electrical.Buses.Bus VM3_JARDSTR1_3ebe(V_b = 33000, v_0 = pf.powerflow.bus.VVM3_JARDSTR1_3ebe, angle_0 = pf.powerflow.bus.AVM3_JARDSTR1_3ebe);
OpenIPSL.Electrical.Buses.Bus VM3_JARDSTR2_3ecd(V_b = 33000, v_0 = pf.powerflow.bus.VVM3_JARDSTR2_3ecd, angle_0 = pf.powerflow.bus.AVM3_JARDSTR2_3ecd);
OpenIPSL.Electrical.Buses.Bus VEM_BRAEDSLA_3edb(V_b = 33000, v_0 = pf.powerflow.bus.VVEM_BRAEDSLA_3edb, angle_0 = pf.powerflow.bus.AVEM_BRAEDSLA_3edb);
OpenIPSL.Electrical.Buses.Bus VM1_RIM_ENDI_3ee9(V_b = 33000, v_0 = pf.powerflow.bus.VVM1_RIM_ENDI_3ee9, angle_0 = pf.powerflow.bus.AVM1_RIM_ENDI_3ee9);
OpenIPSL.Electrical.Buses.Bus VM1_VEM_ENDI_3ef8(V_b = 33000, v_0 = pf.powerflow.bus.VVM1_VEM_ENDI_3ef8, angle_0 = pf.powerflow.bus.AVM1_VEM_ENDI_3ef8);
OpenIPSL.Electrical.Buses.Bus VEM_KETILL_3f06(V_b = 33000, v_0 = pf.powerflow.bus.VVEM_KETILL_3f06, angle_0 = pf.powerflow.bus.AVEM_KETILL_3f06);
OpenIPSL.Electrical.Buses.Bus IRAFOSS2_3f14(V_b = 220000, v_0 = pf.powerflow.bus.VIRAFOSS2_3f14, angle_0 = pf.powerflow.bus.AIRAFOSS2_3f14);
OpenIPSL.Electrical.Buses.Bus IRAFOSS_3f23(V_b = 132000, v_0 = pf.powerflow.bus.VIRAFOSS_3f23, angle_0 = pf.powerflow.bus.AIRAFOSS_3f23);
OpenIPSL.Electrical.Buses.Bus IRAFO_12_3f32(V_b = 10500, v_0 = pf.powerflow.bus.VIRAFO_12_3f32, angle_0 = pf.powerflow.bus.AIRAFO_12_3f32);
OpenIPSL.Electrical.Buses.Bus IRAFO_22_3f41(V_b = 10500, v_0 = pf.powerflow.bus.VIRAFO_22_3f41, angle_0 = pf.powerflow.bus.AIRAFO_22_3f41);
OpenIPSL.Electrical.Buses.Bus IRAFO_32_3f4f(V_b = 10500, v_0 = pf.powerflow.bus.VIRAFO_32_3f4f, angle_0 = pf.powerflow.bus.AIRAFO_32_3f4f);
OpenIPSL.Electrical.Buses.Bus IRAFOSS5_3f5d(V_b = 66000, v_0 = pf.powerflow.bus.VIRAFOSS5_3f5d, angle_0 = pf.powerflow.bus.AIRAFOSS5_3f5d);
OpenIPSL.Electrical.Buses.Bus SP5DELTA_3f6c(V_b = 11000, v_0 = pf.powerflow.bus.VSP5DELTA_3f6c, angle_0 = pf.powerflow.bus.ASP5DELTA_3f6c);
OpenIPSL.Electrical.Buses.Bus STEINKA_3f7b(V_b = 66000, v_0 = pf.powerflow.bus.VSTEINKA_3f7b, angle_0 = pf.powerflow.bus.ASTEINKA_3f7b);
OpenIPSL.Electrical.Buses.Bus STEING1_3f8a(V_b = 6600, v_0 = pf.powerflow.bus.VSTEING1_3f8a, angle_0 = pf.powerflow.bus.ASTEING1_3f8a);
OpenIPSL.Electrical.Buses.Bus STEING2_3f9a(V_b = 6600, v_0 = pf.powerflow.bus.VSTEING2_3f9a, angle_0 = pf.powerflow.bus.ASTEING2_3f9a);
OpenIPSL.Electrical.Buses.Bus ST_SPOLD_3fa8(V_b = 6600, v_0 = pf.powerflow.bus.VST_SPOLD_3fa8, angle_0 = pf.powerflow.bus.AST_SPOLD_3fa8);
OpenIPSL.Electrical.Buses.Bus LJOSIFOSS_3fb7(V_b = 66000, v_0 = pf.powerflow.bus.VLJOSIFOSS_3fb7, angle_0 = pf.powerflow.bus.ALJOSIFOSS_3fb7);
OpenIPSL.Electrical.Buses.Bus LJOS_VEL_3fc6(V_b = 6600, v_0 = pf.powerflow.bus.VLJOS_VEL_3fc6, angle_0 = pf.powerflow.bus.ALJOS_VEL_3fc6);
OpenIPSL.Electrical.Buses.Bus STN1_3fd5(V_b = 11000, v_0 = pf.powerflow.bus.VSTN1_3fd5, angle_0 = pf.powerflow.bus.ASTN1_3fd5);
OpenIPSL.Electrical.Buses.Bus HVERAGERDI_3fe4(V_b = 66000, v_0 = pf.powerflow.bus.VHVERAGERDI_3fe4, angle_0 = pf.powerflow.bus.AHVERAGERDI_3fe4);
OpenIPSL.Electrical.Buses.Bus HVERAG_11KV_3ff3(V_b = 11000, v_0 = pf.powerflow.bus.VHVERAG_11KV_3ff3, angle_0 = pf.powerflow.bus.AHVERAG_11KV_3ff3);
OpenIPSL.Electrical.Buses.Bus KOLVID_B_4002(V_b = 220000, v_0 = pf.powerflow.bus.VKOLVID_B_4002, angle_0 = pf.powerflow.bus.AKOLVID_B_4002);
OpenIPSL.Electrical.Buses.Bus KOLVID_A_4011(V_b = 220000, v_0 = pf.powerflow.bus.VKOLVID_A_4011, angle_0 = pf.powerflow.bus.AKOLVID_A_4011);
OpenIPSL.Electrical.Buses.Bus HELLIS_V1_401f(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V1_401f, angle_0 = pf.powerflow.bus.AHELLIS_V1_401f);
OpenIPSL.Electrical.Buses.Bus HELLIS_V2_4031(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V2_4031, angle_0 = pf.powerflow.bus.AHELLIS_V2_4031);
OpenIPSL.Electrical.Buses.Bus HELLIS_V11_403f(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V11_403f, angle_0 = pf.powerflow.bus.AHELLIS_V11_403f);
OpenIPSL.Electrical.Buses.Bus HELLIS_V3_404d(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V3_404d, angle_0 = pf.powerflow.bus.AHELLIS_V3_404d);
OpenIPSL.Electrical.Buses.Bus HELLIS_V4_405b(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V4_405b, angle_0 = pf.powerflow.bus.AHELLIS_V4_405b);
OpenIPSL.Electrical.Buses.Bus HELLIS_V5_4069(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V5_4069, angle_0 = pf.powerflow.bus.AHELLIS_V5_4069);
OpenIPSL.Electrical.Buses.Bus HELLIS_V6_4077(V_b = 11000, v_0 = pf.powerflow.bus.VHELLIS_V6_4077, angle_0 = pf.powerflow.bus.AHELLIS_V6_4077);
OpenIPSL.Electrical.Buses.Bus THORLAK_11KV_4085(V_b = 11000, v_0 = pf.powerflow.bus.VTHORLAK_11KV_4085, angle_0 = pf.powerflow.bus.ATHORLAK_11KV_4085);
OpenIPSL.Electrical.Buses.Bus THORLAKHOFN_4094(V_b = 66000, v_0 = pf.powerflow.bus.VTHORLAKHOFN_4094, angle_0 = pf.powerflow.bus.ATHORLAKHOFN_4094);
OpenIPSL.Electrical.Buses.Bus SEL_SKERDANL_40a3(V_b = 66000, v_0 = pf.powerflow.bus.VSEL_SKERDANL_40a3, angle_0 = pf.powerflow.bus.ASEL_SKERDANL_40a3);
OpenIPSL.Electrical.Buses.Bus SEL_FORGANGS_40b2(V_b = 33000, v_0 = pf.powerflow.bus.VSEL_FORGANGS_40b2, angle_0 = pf.powerflow.bus.ASEL_FORGANGS_40b2);
OpenIPSL.Electrical.Buses.Bus NESJAV_40c1(V_b = 132000, v_0 = pf.powerflow.bus.VNESJAV_40c1, angle_0 = pf.powerflow.bus.ANESJAV_40c1);
OpenIPSL.Electrical.Buses.Bus NESV_VEL_1_40d0(V_b = 11000, v_0 = pf.powerflow.bus.VNESV_VEL_1_40d0, angle_0 = pf.powerflow.bus.ANESV_VEL_1_40d0);
OpenIPSL.Electrical.Buses.Bus NESV_VEL_2_40df(V_b = 11000, v_0 = pf.powerflow.bus.VNESV_VEL_2_40df, angle_0 = pf.powerflow.bus.ANESV_VEL_2_40df);
OpenIPSL.Electrical.Buses.Bus NESV_VEL_3_40ed(V_b = 11000, v_0 = pf.powerflow.bus.VNESV_VEL_3_40ed, angle_0 = pf.powerflow.bus.ANESV_VEL_3_40ed);
OpenIPSL.Electrical.Buses.Bus NESV_VEL_4_40fb(V_b = 11000, v_0 = pf.powerflow.bus.VNESV_VEL_4_40fb, angle_0 = pf.powerflow.bus.ANESV_VEL_4_40fb);
OpenIPSL.Electrical.Buses.Bus GRAFNING_4109(V_b = 132000, v_0 = pf.powerflow.bus.VGRAFNING_4109, angle_0 = pf.powerflow.bus.AGRAFNING_4109);
OpenIPSL.Electrical.Buses.Bus BRINGUR_4118(V_b = 132000, v_0 = pf.powerflow.bus.VBRINGUR_4118, angle_0 = pf.powerflow.bus.ABRINGUR_4118);
OpenIPSL.Electrical.Buses.Bus GEITHALS_4127(V_b = 220000, v_0 = pf.powerflow.bus.VGEITHALS_4127, angle_0 = pf.powerflow.bus.AGEITHALS_4127);
OpenIPSL.Electrical.Buses.Bus GE_132_4136(V_b = 132000, v_0 = pf.powerflow.bus.VGE_132_4136, angle_0 = pf.powerflow.bus.AGE_132_4136);
OpenIPSL.Electrical.Buses.Bus GE_11SP1_4145(V_b = 11000, v_0 = pf.powerflow.bus.VGE_11SP1_4145, angle_0 = pf.powerflow.bus.AGE_11SP1_4145);
OpenIPSL.Electrical.Buses.Bus GE_11SP2_4154(V_b = 11000, v_0 = pf.powerflow.bus.VGE_11SP2_4154, angle_0 = pf.powerflow.bus.AGE_11SP2_4154);
OpenIPSL.Electrical.Buses.Bus RR_A5_4162(V_b = 132000, v_0 = pf.powerflow.bus.VRR_A5_4162, angle_0 = pf.powerflow.bus.ARR_A5_4162);
OpenIPSL.Electrical.Buses.Bus RR_A12_4171(V_b = 132000, v_0 = pf.powerflow.bus.VRR_A12_4171, angle_0 = pf.powerflow.bus.ARR_A12_4171);
OpenIPSL.Electrical.Buses.Bus IS1_417f(V_b = 220000, v_0 = pf.powerflow.bus.VIS1_417f, angle_0 = pf.powerflow.bus.AIS1_417f);
OpenIPSL.Electrical.Buses.Bus IS2_418e(V_b = 220000, v_0 = pf.powerflow.bus.VIS2_418e, angle_0 = pf.powerflow.bus.AIS2_418e);
OpenIPSL.Electrical.Buses.Bus KORPA_419d(V_b = 132000, v_0 = pf.powerflow.bus.VKORPA_419d, angle_0 = pf.powerflow.bus.AKORPA_419d);
OpenIPSL.Electrical.Buses.Bus HAMR_41ac(V_b = 220000, v_0 = pf.powerflow.bus.VHAMR_41ac, angle_0 = pf.powerflow.bus.AHAMR_41ac);
OpenIPSL.Electrical.Buses.Bus HAM_41bb(V_b = 132000, v_0 = pf.powerflow.bus.VHAM_41bb, angle_0 = pf.powerflow.bus.AHAM_41bb);
OpenIPSL.Electrical.Buses.Bus HAM_DSP1_41ca(V_b = 11000, v_0 = pf.powerflow.bus.VHAM_DSP1_41ca, angle_0 = pf.powerflow.bus.AHAM_DSP1_41ca);
OpenIPSL.Electrical.Buses.Bus HAM_DSP2_41d9(V_b = 11000, v_0 = pf.powerflow.bus.VHAM_DSP2_41d9, angle_0 = pf.powerflow.bus.AHAM_DSP2_41d9);
OpenIPSL.Electrical.Buses.Bus RH_41e7(V_b = 132000, v_0 = pf.powerflow.bus.VRH_41e7, angle_0 = pf.powerflow.bus.ARH_41e7);
OpenIPSL.Electrical.Buses.Bus RH_11_41f6(V_b = 11000, v_0 = pf.powerflow.bus.VRH_11_41f6, angle_0 = pf.powerflow.bus.ARH_11_41f6);
OpenIPSL.Electrical.Buses.Bus SANDSKEI_4205(V_b = 220000, v_0 = pf.powerflow.bus.VSANDSKEI_4205, angle_0 = pf.powerflow.bus.ASANDSKEI_4205);
OpenIPSL.Electrical.Buses.Bus BRENNIME_4214(V_b = 220000, v_0 = pf.powerflow.bus.VBRENNIME_4214, angle_0 = pf.powerflow.bus.ABRENNIME_4214);
OpenIPSL.Electrical.Buses.Bus BREN_132_4223(V_b = 132000, v_0 = pf.powerflow.bus.VBREN_132_4223, angle_0 = pf.powerflow.bus.ABREN_132_4223);
OpenIPSL.Electrical.Buses.Bus BRENN_11_4232(V_b = 11000, v_0 = pf.powerflow.bus.VBRENN_11_4232, angle_0 = pf.powerflow.bus.ABRENN_11_4232);
OpenIPSL.Electrical.Buses.Bus SP5_ROFAREIT_4241(V_b = 33000, v_0 = pf.powerflow.bus.VSP5_ROFAREIT_4241, angle_0 = pf.powerflow.bus.ASP5_ROFAREIT_4241);
OpenIPSL.Electrical.Buses.Bus BRE_6_3_4250(V_b = 6300, v_0 = pf.powerflow.bus.VBRE_6_3_4250, angle_0 = pf.powerflow.bus.ABRE_6_3_4250);
OpenIPSL.Electrical.Buses.Bus BRENN_66_4260(V_b = 66000, v_0 = pf.powerflow.bus.VBRENN_66_4260, angle_0 = pf.powerflow.bus.ABRENN_66_4260);
OpenIPSL.Electrical.Buses.Bus BRESP3DE_426f(V_b = 11000, v_0 = pf.powerflow.bus.VBRESP3DE_426f, angle_0 = pf.powerflow.bus.ABRESP3DE_426f);
OpenIPSL.Electrical.Buses.Bus BRE_33_427d(V_b = 33000, v_0 = pf.powerflow.bus.VBRE_33_427d, angle_0 = pf.powerflow.bus.ABRE_33_427d);
OpenIPSL.Electrical.Buses.Bus AKRANES_428c(V_b = 66000, v_0 = pf.powerflow.bus.VAKRANES_428c, angle_0 = pf.powerflow.bus.AAKRANES_428c);
OpenIPSL.Electrical.Buses.Bus A20_6_429b(V_b = 6300, v_0 = pf.powerflow.bus.VA20_6_429b, angle_0 = pf.powerflow.bus.AA20_6_429b);
OpenIPSL.Electrical.Buses.Bus KLAFASTA_IR_42aa(V_b = 220000, v_0 = pf.powerflow.bus.VKLAFASTA_IR_42aa, angle_0 = pf.powerflow.bus.AKLAFASTA_IR_42aa);
OpenIPSL.Electrical.Buses.Bus SVC_16KV_42b9(V_b = 16000, v_0 = pf.powerflow.bus.VSVC_16KV_42b9, angle_0 = pf.powerflow.bus.ASVC_16KV_42b9);
OpenIPSL.Electrical.Buses.Bus KLA_LOFTLINA_42c9(V_b = 220000, v_0 = pf.powerflow.bus.VKLA_LOFTLINA_42c9, angle_0 = pf.powerflow.bus.AKLA_LOFTLINA_42c9);
OpenIPSL.Electrical.Buses.Bus FESI_42d7(V_b = 220000, v_0 = pf.powerflow.bus.VFESI_42d7, angle_0 = pf.powerflow.bus.AFESI_42d7);
OpenIPSL.Electrical.Buses.Bus NA_A_42e6(V_b = 220000, v_0 = pf.powerflow.bus.VNA_A_42e6, angle_0 = pf.powerflow.bus.ANA_A_42e6);
OpenIPSL.Electrical.Buses.Bus NA_B_42f5(V_b = 220000, v_0 = pf.powerflow.bus.VNA_B_42f5, angle_0 = pf.powerflow.bus.ANA_B_42f5);
OpenIPSL.Electrical.Buses.Bus A1_4303(V_b = 132000, v_0 = pf.powerflow.bus.VA1_4303, angle_0 = pf.powerflow.bus.AA1_4303);
OpenIPSL.Electrical.Buses.Bus A1_11_4312(V_b = 11000, v_0 = pf.powerflow.bus.VA1_11_4312, angle_0 = pf.powerflow.bus.AA1_11_4312);
OpenIPSL.Electrical.Buses.Bus A2_4321(V_b = 132000, v_0 = pf.powerflow.bus.VA2_4321, angle_0 = pf.powerflow.bus.AA2_4321);
OpenIPSL.Electrical.Buses.Bus A3_4330(V_b = 132000, v_0 = pf.powerflow.bus.VA3_4330, angle_0 = pf.powerflow.bus.AA3_4330);
OpenIPSL.Electrical.Buses.Bus A4_11_433f(V_b = 11000, v_0 = pf.powerflow.bus.VA4_11_433f, angle_0 = pf.powerflow.bus.AA4_11_433f);
OpenIPSL.Electrical.Buses.Bus A5_434e(V_b = 132000, v_0 = pf.powerflow.bus.VA5_434e, angle_0 = pf.powerflow.bus.AA5_434e);
OpenIPSL.Electrical.Buses.Bus A5_11_435d(V_b = 11000, v_0 = pf.powerflow.bus.VA5_11_435d, angle_0 = pf.powerflow.bus.AA5_11_435d);
OpenIPSL.Electrical.Buses.Bus A6_11_436c(V_b = 11000, v_0 = pf.powerflow.bus.VA6_11_436c, angle_0 = pf.powerflow.bus.AA6_11_436c);
OpenIPSL.Electrical.Buses.Bus A7_437b(V_b = 132000, v_0 = pf.powerflow.bus.VA7_437b, angle_0 = pf.powerflow.bus.AA7_437b);
OpenIPSL.Electrical.Buses.Bus A7_11_438a(V_b = 11000, v_0 = pf.powerflow.bus.VA7_11_438a, angle_0 = pf.powerflow.bus.AA7_11_438a);
OpenIPSL.Electrical.Buses.Bus FITJAR_4399(V_b = 132000, v_0 = pf.powerflow.bus.VFITJAR_4399, angle_0 = pf.powerflow.bus.AFITJAR_4399);
OpenIPSL.Electrical.Buses.Bus SVARTSENGI_43a8(V_b = 132000, v_0 = pf.powerflow.bus.VSVARTSENGI_43a8, angle_0 = pf.powerflow.bus.ASVARTSENGI_43a8);
OpenIPSL.Electrical.Buses.Bus SVARTS_VEL3_43b7(V_b = 11000, v_0 = pf.powerflow.bus.VSVARTS_VEL3_43b7, angle_0 = pf.powerflow.bus.ASVARTS_VEL3_43b7);
OpenIPSL.Electrical.Buses.Bus FITJAR_33KV_43c6(V_b = 33000, v_0 = pf.powerflow.bus.VFITJAR_33KV_43c6, angle_0 = pf.powerflow.bus.AFITJAR_33KV_43c6);
OpenIPSL.Electrical.Buses.Bus STA_43d5(V_b = 132000, v_0 = pf.powerflow.bus.VSTA_43d5, angle_0 = pf.powerflow.bus.ASTA_43d5);
OpenIPSL.Electrical.Buses.Bus STA_33KV_43e4(V_b = 33000, v_0 = pf.powerflow.bus.VSTA_33KV_43e4, angle_0 = pf.powerflow.bus.ASTA_33KV_43e4);
OpenIPSL.Electrical.Buses.Bus RAUDIMELUR_43f3(V_b = 132000, v_0 = pf.powerflow.bus.VRAUDIMELUR_43f3, angle_0 = pf.powerflow.bus.ARAUDIMELUR_43f3);
OpenIPSL.Electrical.Buses.Bus REYKJANES_4402(V_b = 132000, v_0 = pf.powerflow.bus.VREYKJANES_4402, angle_0 = pf.powerflow.bus.AREYKJANES_4402);
OpenIPSL.Electrical.Buses.Bus REYKJAV1_4411(V_b = 11000, v_0 = pf.powerflow.bus.VREYKJAV1_4411, angle_0 = pf.powerflow.bus.AREYKJAV1_4411);
OpenIPSL.Electrical.Buses.Bus REYKJAV2_4420(V_b = 11000, v_0 = pf.powerflow.bus.VREYKJAV2_4420, angle_0 = pf.powerflow.bus.AREYKJAV2_4420);
OpenIPSL.Electrical.Buses.Bus SVARTVEL_442e(V_b = 11000, v_0 = pf.powerflow.bus.VSVARTVEL_442e, angle_0 = pf.powerflow.bus.ASVARTVEL_442e);
OpenIPSL.Electrical.Buses.Bus VALLARHEIDI_443c(V_b = 33000, v_0 = pf.powerflow.bus.VVALLARHEIDI_443c, angle_0 = pf.powerflow.bus.AVALLARHEIDI_443c);
OpenIPSL.Electrical.Buses.Bus VATNSHAM_444b(V_b = 132000, v_0 = pf.powerflow.bus.VVATNSHAM_444b, angle_0 = pf.powerflow.bus.AVATNSHAM_444b);
OpenIPSL.Electrical.Buses.Bus VATNS_66_445a(V_b = 66000, v_0 = pf.powerflow.bus.VVATNS_66_445a, angle_0 = pf.powerflow.bus.AVATNS_66_445a);
OpenIPSL.Electrical.Buses.Bus VATNSH19_4469(V_b = 11000, v_0 = pf.powerflow.bus.VVATNSH19_4469, angle_0 = pf.powerflow.bus.AVATNSH19_4469);
OpenIPSL.Electrical.Buses.Bus VATNSH_S_4477(V_b = 415, v_0 = pf.powerflow.bus.VVATNSH_S_4477, angle_0 = pf.powerflow.bus.AVATNSH_S_4477);
OpenIPSL.Electrical.Buses.Bus VAT_19KV_4487(V_b = 19000, v_0 = pf.powerflow.bus.VVAT_19KV_4487, angle_0 = pf.powerflow.bus.AVAT_19KV_4487);
OpenIPSL.Electrical.Buses.Bus VEGAMOT_4496(V_b = 66000, v_0 = pf.powerflow.bus.VVEGAMOT_4496, angle_0 = pf.powerflow.bus.AVEGAMOT_4496);
OpenIPSL.Electrical.Buses.Bus VEG_11KV_44a5(V_b = 19000, v_0 = pf.powerflow.bus.VVEG_11KV_44a5, angle_0 = pf.powerflow.bus.AVEG_11KV_44a5);
OpenIPSL.Electrical.Buses.Bus OLAFSVIK_44b4(V_b = 66000, v_0 = pf.powerflow.bus.VOLAFSVIK_44b4, angle_0 = pf.powerflow.bus.AOLAFSVIK_44b4);
OpenIPSL.Electrical.Buses.Bus OLA_19KV_44c3(V_b = 19000, v_0 = pf.powerflow.bus.VOLA_19KV_44c3, angle_0 = pf.powerflow.bus.AOLA_19KV_44c3);
OpenIPSL.Electrical.Buses.Bus VOGASKEI_44d2(V_b = 66000, v_0 = pf.powerflow.bus.VVOGASKEI_44d2, angle_0 = pf.powerflow.bus.AVOGASKEI_44d2);
OpenIPSL.Electrical.Buses.Bus VOG_11KV_44e1(V_b = 11000, v_0 = pf.powerflow.bus.VVOG_11KV_44e1, angle_0 = pf.powerflow.bus.AVOG_11KV_44e1);
OpenIPSL.Electrical.Buses.Bus GRUNDARF_44f0(V_b = 66000, v_0 = pf.powerflow.bus.VGRUNDARF_44f0, angle_0 = pf.powerflow.bus.AGRUNDARF_44f0);
OpenIPSL.Electrical.Buses.Bus GRU_19KV_44ff(V_b = 19000, v_0 = pf.powerflow.bus.VGRU_19KV_44ff, angle_0 = pf.powerflow.bus.AGRU_19KV_44ff);
OpenIPSL.Electrical.Buses.Bus ANDAKILL_450e(V_b = 66000, v_0 = pf.powerflow.bus.VANDAKILL_450e, angle_0 = pf.powerflow.bus.AANDAKILL_450e);
OpenIPSL.Electrical.Buses.Bus GLERASKO_451d(V_b = 132000, v_0 = pf.powerflow.bus.VGLERASKO_451d, angle_0 = pf.powerflow.bus.AGLERASKO_451d);
OpenIPSL.Electrical.Buses.Bus GLERA_19_452c(V_b = 19000, v_0 = pf.powerflow.bus.VGLERA_19_452c, angle_0 = pf.powerflow.bus.AGLERA_19_452c);
OpenIPSL.Electrical.Buses.Bus GLERA_D1_453b(V_b = 11000, v_0 = pf.powerflow.bus.VGLERA_D1_453b, angle_0 = pf.powerflow.bus.AGLERA_D1_453b);
OpenIPSL.Electrical.Buses.Bus GEIRADAL_454a(V_b = 132000, v_0 = pf.powerflow.bus.VGEIRADAL_454a, angle_0 = pf.powerflow.bus.AGEIRADAL_454a);
OpenIPSL.Electrical.Buses.Bus GEIRADA3_4559(V_b = 19000, v_0 = pf.powerflow.bus.VGEIRADA3_4559, angle_0 = pf.powerflow.bus.AGEIRADA3_4559);
OpenIPSL.Electrical.Buses.Bus GEIRADA4_456c(V_b = 33000, v_0 = pf.powerflow.bus.VGEIRADA4_456c, angle_0 = pf.powerflow.bus.AGEIRADA4_456c);
OpenIPSL.Electrical.Buses.Bus MJOLKA_457b(V_b = 132000, v_0 = pf.powerflow.bus.VMJOLKA_457b, angle_0 = pf.powerflow.bus.AMJOLKA_457b);
OpenIPSL.Electrical.Buses.Bus MJOLK_66_458a(V_b = 66000, v_0 = pf.powerflow.bus.VMJOLK_66_458a, angle_0 = pf.powerflow.bus.AMJOLK_66_458a);
OpenIPSL.Electrical.Buses.Bus MJOLKVEL_4599(V_b = 6300, v_0 = pf.powerflow.bus.VMJOLKVEL_4599, angle_0 = pf.powerflow.bus.AMJOLKVEL_4599);
OpenIPSL.Electrical.Buses.Bus MJO_V2_45a8(V_b = 6300, v_0 = pf.powerflow.bus.VMJO_V2_45a8, angle_0 = pf.powerflow.bus.AMJO_V2_45a8);
OpenIPSL.Electrical.Buses.Bus MJODUMMY_45b6(V_b = 33000, v_0 = pf.powerflow.bus.VMJODUMMY_45b6, angle_0 = pf.powerflow.bus.AMJODUMMY_45b6);
OpenIPSL.Electrical.Buses.Bus BREIDIDALUR_45c5(V_b = 66000, v_0 = pf.powerflow.bus.VBREIDIDALUR_45c5, angle_0 = pf.powerflow.bus.ABREIDIDALUR_45c5);
OpenIPSL.Electrical.Buses.Bus KELDEYRI33_45d3(V_b = 33000, v_0 = pf.powerflow.bus.VKELDEYRI33_45d3, angle_0 = pf.powerflow.bus.AKELDEYRI33_45d3);
OpenIPSL.Electrical.Buses.Bus PATREKSFJORD_45e2(V_b = 66000, v_0 = pf.powerflow.bus.VPATREKSFJORD_45e2, angle_0 = pf.powerflow.bus.APATREKSFJORD_45e2);
OpenIPSL.Electrical.Buses.Bus ISAFJORDUR_45f1(V_b = 66000, v_0 = pf.powerflow.bus.VISAFJORDUR_45f1, angle_0 = pf.powerflow.bus.AISAFJORDUR_45f1);
OpenIPSL.Electrical.Buses.Bus PATREKSF11_4600(V_b = 11000, v_0 = pf.powerflow.bus.VPATREKSF11_4600, angle_0 = pf.powerflow.bus.APATREKSF11_4600);
OpenIPSL.Electrical.Buses.Bus BOLUNGAVIK_460f(V_b = 66000, v_0 = pf.powerflow.bus.VBOLUNGAVIK_460f, angle_0 = pf.powerflow.bus.ABOLUNGAVIK_460f);
OpenIPSL.Electrical.Buses.Bus BOL_SKER_ANL_461e(V_b = 11000, v_0 = pf.powerflow.bus.VBOL_SKER_ANL_461e, angle_0 = pf.powerflow.bus.ABOL_SKER_ANL_461e);
OpenIPSL.Electrical.Buses.Bus KELDEYRI66_462d(V_b = 66000, v_0 = pf.powerflow.bus.VKELDEYRI66_462d, angle_0 = pf.powerflow.bus.AKELDEYRI66_462d);
OpenIPSL.Electrical.Buses.Bus HRAFSEYRI_463c(V_b = 33000, v_0 = pf.powerflow.bus.VHRAFSEYRI_463c, angle_0 = pf.powerflow.bus.AHRAFSEYRI_463c);
OpenIPSL.Electrical.Buses.Bus _INGEYRI_464b(V_b = 33000, v_0 = pf.powerflow.bus.V_INGEYRI_464b, angle_0 = pf.powerflow.bus.A_INGEYRI_464b);
OpenIPSL.Electrical.Buses.Bus THINGEYRI11_465a(V_b = 11000, v_0 = pf.powerflow.bus.VTHINGEYRI11_465a, angle_0 = pf.powerflow.bus.ATHINGEYRI11_465a);
OpenIPSL.Electrical.Buses.Bus BREIDAD33_4669(V_b = 33000, v_0 = pf.powerflow.bus.VBREIDAD33_4669, angle_0 = pf.powerflow.bus.ABREIDAD33_4669);
OpenIPSL.Electrical.Buses.Bus FLATEYRI_4677(V_b = 19000, v_0 = pf.powerflow.bus.VFLATEYRI_4677, angle_0 = pf.powerflow.bus.AFLATEYRI_4677);
OpenIPSL.Electrical.Buses.Bus BREIDAD11_4686(V_b = 11000, v_0 = pf.powerflow.bus.VBREIDAD11_4686, angle_0 = pf.powerflow.bus.ABREIDAD11_4686);
OpenIPSL.Electrical.Buses.Bus BREIDAD0_7_4694(V_b = 700, v_0 = pf.powerflow.bus.VBREIDAD0_7_4694, angle_0 = pf.powerflow.bus.ABREIDAD0_7_4694);
OpenIPSL.Electrical.Buses.Bus ISA_SKERDANL_46a4(V_b = 11000, v_0 = pf.powerflow.bus.VISA_SKERDANL_46a4, angle_0 = pf.powerflow.bus.AISA_SKERDANL_46a4);
OpenIPSL.Electrical.Buses.Bus ISA_FORGANGS_46b3(V_b = 11000, v_0 = pf.powerflow.bus.VISA_FORGANGS_46b3, angle_0 = pf.powerflow.bus.AISA_FORGANGS_46b3);
OpenIPSL.Electrical.Buses.Bus BILDUDALUR33_46c1(V_b = 33000, v_0 = pf.powerflow.bus.VBILDUDALUR33_46c1, angle_0 = pf.powerflow.bus.ABILDUDALUR33_46c1);
OpenIPSL.Electrical.Buses.Bus BOL_FORGANGS_46d0(V_b = 11000, v_0 = pf.powerflow.bus.VBOL_FORGANGS_46d0, angle_0 = pf.powerflow.bus.ABOL_FORGANGS_46d0);
OpenIPSL.Electrical.Buses.Bus HOLMAVIK_46de(V_b = 33000, v_0 = pf.powerflow.bus.VHOLMAVIK_46de, angle_0 = pf.powerflow.bus.AHOLMAVIK_46de);
OpenIPSL.Electrical.Buses.Bus HRUTATUN_46ed(V_b = 132000, v_0 = pf.powerflow.bus.VHRUTATUN_46ed, angle_0 = pf.powerflow.bus.AHRUTATUN_46ed);
OpenIPSL.Electrical.Buses.Bus HRUTA_19_46fc(V_b = 19000, v_0 = pf.powerflow.bus.VHRUTA_19_46fc, angle_0 = pf.powerflow.bus.AHRUTA_19_46fc);
OpenIPSL.Electrical.Buses.Bus HRUTA_D1_470b(V_b = 11000, v_0 = pf.powerflow.bus.VHRUTA_D1_470b, angle_0 = pf.powerflow.bus.AHRUTA_D1_470b);
OpenIPSL.Electrical.Buses.Bus LAXARVAT_471a(V_b = 132000, v_0 = pf.powerflow.bus.VLAXARVAT_471a, angle_0 = pf.powerflow.bus.ALAXARVAT_471a);
OpenIPSL.Electrical.Buses.Bus LAXAVA_2_4729(V_b = 11000, v_0 = pf.powerflow.bus.VLAXAVA_2_4729, angle_0 = pf.powerflow.bus.ALAXAVA_2_4729);
OpenIPSL.Electrical.Buses.Bus LAXAVA_4_4738(V_b = 33000, v_0 = pf.powerflow.bus.VLAXAVA_4_4738, angle_0 = pf.powerflow.bus.ALAXAVA_4_4738);
OpenIPSL.Electrical.Buses.Bus BLANDA_A_4747(V_b = 132000, v_0 = pf.powerflow.bus.VBLANDA_A_4747, angle_0 = pf.powerflow.bus.ABLANDA_A_4747);
OpenIPSL.Electrical.Buses.Bus BLANDAV1_4756(V_b = 11000, v_0 = pf.powerflow.bus.VBLANDAV1_4756, angle_0 = pf.powerflow.bus.ABLANDAV1_4756);
OpenIPSL.Electrical.Buses.Bus BLANDAV2_4765(V_b = 11000, v_0 = pf.powerflow.bus.VBLANDAV2_4765, angle_0 = pf.powerflow.bus.ABLANDAV2_4765);
OpenIPSL.Electrical.Buses.Bus BLANDAV3_4773(V_b = 11000, v_0 = pf.powerflow.bus.VBLANDAV3_4773, angle_0 = pf.powerflow.bus.ABLANDAV3_4773);
OpenIPSL.Electrical.Buses.Bus BLANDA_B_4781(V_b = 132000, v_0 = pf.powerflow.bus.VBLANDA_B_4781, angle_0 = pf.powerflow.bus.ABLANDA_B_4781);
OpenIPSL.Electrical.Buses.Bus VARMAHLI_478f(V_b = 132000, v_0 = pf.powerflow.bus.VVARMAHLI_478f, angle_0 = pf.powerflow.bus.AVARMAHLI_478f);
OpenIPSL.Electrical.Buses.Bus VARMAHL4_479e(V_b = 66000, v_0 = pf.powerflow.bus.VVARMAHL4_479e, angle_0 = pf.powerflow.bus.AVARMAHL4_479e);
OpenIPSL.Electrical.Buses.Bus VARMAHL2_47ad(V_b = 11000, v_0 = pf.powerflow.bus.VVARMAHL2_47ad, angle_0 = pf.powerflow.bus.AVARMAHL2_47ad);
OpenIPSL.Electrical.Buses.Bus SAUDARKR_47bc(V_b = 66000, v_0 = pf.powerflow.bus.VSAUDARKR_47bc, angle_0 = pf.powerflow.bus.ASAUDARKR_47bc);
OpenIPSL.Electrical.Buses.Bus RANG_47cb(V_b = 132000, v_0 = pf.powerflow.bus.VRANG_47cb, angle_0 = pf.powerflow.bus.ARANG_47cb);
OpenIPSL.Electrical.Buses.Bus RANGARV5_47da(V_b = 66000, v_0 = pf.powerflow.bus.VRANGARV5_47da, angle_0 = pf.powerflow.bus.ARANGARV5_47da);
OpenIPSL.Electrical.Buses.Bus RANGARV1_47e9(V_b = 6600, v_0 = pf.powerflow.bus.VRANGARV1_47e9, angle_0 = pf.powerflow.bus.ARANGARV1_47e9);
OpenIPSL.Electrical.Buses.Bus RANG_11_47fc(V_b = 11000, v_0 = pf.powerflow.bus.VRANG_11_47fc, angle_0 = pf.powerflow.bus.ARANG_11_47fc);
OpenIPSL.Electrical.Buses.Bus BECROMAL_480b(V_b = 11000, v_0 = pf.powerflow.bus.VBECROMAL_480b, angle_0 = pf.powerflow.bus.ABECROMAL_480b);
OpenIPSL.Electrical.Buses.Bus BECROMAL132_481a(V_b = 132000, v_0 = pf.powerflow.bus.VBECROMAL132_481a, angle_0 = pf.powerflow.bus.ABECROMAL132_481a);
OpenIPSL.Electrical.Buses.Bus DALVIK_4829(V_b = 66000, v_0 = pf.powerflow.bus.VDALVIK_4829, angle_0 = pf.powerflow.bus.ADALVIK_4829);
OpenIPSL.Electrical.Buses.Bus RANG_C_4838(V_b = 132000, v_0 = pf.powerflow.bus.VRANG_C_4838, angle_0 = pf.powerflow.bus.ARANG_C_4838);
OpenIPSL.Electrical.Buses.Bus KRAFLA_4846(V_b = 132000, v_0 = pf.powerflow.bus.VKRAFLA_4846, angle_0 = pf.powerflow.bus.AKRAFLA_4846);
OpenIPSL.Electrical.Buses.Bus KRAFLAV1_4855(V_b = 11000, v_0 = pf.powerflow.bus.VKRAFLAV1_4855, angle_0 = pf.powerflow.bus.AKRAFLAV1_4855);
OpenIPSL.Electrical.Buses.Bus KRAFLA11_4864(V_b = 11000, v_0 = pf.powerflow.bus.VKRAFLA11_4864, angle_0 = pf.powerflow.bus.AKRAFLA11_4864);
OpenIPSL.Electrical.Buses.Bus KRAFLA2_4872(V_b = 132000, v_0 = pf.powerflow.bus.VKRAFLA2_4872, angle_0 = pf.powerflow.bus.AKRAFLA2_4872);
OpenIPSL.Electrical.Buses.Bus LAXA_4880(V_b = 66000, v_0 = pf.powerflow.bus.VLAXA_4880, angle_0 = pf.powerflow.bus.ALAXA_4880);
OpenIPSL.Electrical.Buses.Bus LAXA_2_488f(V_b = 11000, v_0 = pf.powerflow.bus.VLAXA_2_488f, angle_0 = pf.powerflow.bus.ALAXA_2_488f);
OpenIPSL.Electrical.Buses.Bus LAXA33_489d(V_b = 33000, v_0 = pf.powerflow.bus.VLAXA33_489d, angle_0 = pf.powerflow.bus.ALAXA33_489d);
OpenIPSL.Electrical.Buses.Bus LAXA11_48ab(V_b = 11000, v_0 = pf.powerflow.bus.VLAXA11_48ab, angle_0 = pf.powerflow.bus.ALAXA11_48ab);
OpenIPSL.Electrical.Buses.Bus LAXA2_48b9(V_b = 6300, v_0 = pf.powerflow.bus.VLAXA2_48b9, angle_0 = pf.powerflow.bus.ALAXA2_48b9);
OpenIPSL.Electrical.Buses.Bus HUSAVIK_48c8(V_b = 33000, v_0 = pf.powerflow.bus.VHUSAVIK_48c8, angle_0 = pf.powerflow.bus.AHUSAVIK_48c8);
OpenIPSL.Electrical.Buses.Bus LINDAB_48d7(V_b = 66000, v_0 = pf.powerflow.bus.VLINDAB_48d7, angle_0 = pf.powerflow.bus.ALINDAB_48d7);
OpenIPSL.Electrical.Buses.Bus KOPASKER_48e6(V_b = 66000, v_0 = pf.powerflow.bus.VKOPASKER_48e6, angle_0 = pf.powerflow.bus.AKOPASKER_48e6);
OpenIPSL.Electrical.Buses.Bus THEISTAREYK_48f5(V_b = 66000, v_0 = pf.powerflow.bus.VTHEISTAREYK_48f5, angle_0 = pf.powerflow.bus.ATHEISTAREYK_48f5);
OpenIPSL.Electrical.Buses.Bus THEYSTAR_11_4904(V_b = 11000, v_0 = pf.powerflow.bus.VTHEYSTAR_11_4904, angle_0 = pf.powerflow.bus.ATHEYSTAR_11_4904);
OpenIPSL.Electrical.Buses.Bus GRIMSARVIRKJ_4913(V_b = 6300, v_0 = pf.powerflow.bus.VGRIMSARVIRKJ_4913, angle_0 = pf.powerflow.bus.AGRIMSARVIRKJ_4913);
OpenIPSL.Electrical.Buses.Bus HRYGG_4922(V_b = 132000, v_0 = pf.powerflow.bus.VHRYGG_4922, angle_0 = pf.powerflow.bus.AHRYGG_4922);
OpenIPSL.Electrical.Buses.Bus STUDLAR_132_4931(V_b = 132000, v_0 = pf.powerflow.bus.VSTUDLAR_132_4931, angle_0 = pf.powerflow.bus.ASTUDLAR_132_4931);
OpenIPSL.Electrical.Buses.Bus STUDLAR_11_4940(V_b = 11000, v_0 = pf.powerflow.bus.VSTUDLAR_11_4940, angle_0 = pf.powerflow.bus.ASTUDLAR_11_4940);
OpenIPSL.Electrical.Buses.Bus STUDLAR_66_494f(V_b = 66000, v_0 = pf.powerflow.bus.VSTUDLAR_66_494f, angle_0 = pf.powerflow.bus.ASTUDLAR_66_494f);
OpenIPSL.Electrical.Buses.Bus EGILSSTADIR_495e(V_b = 33000, v_0 = pf.powerflow.bus.VEGILSSTADIR_495e, angle_0 = pf.powerflow.bus.AEGILSSTADIR_495e);
OpenIPSL.Electrical.Buses.Bus EYVIND_496d(V_b = 132000, v_0 = pf.powerflow.bus.VEYVIND_496d, angle_0 = pf.powerflow.bus.AEYVIND_496d);
OpenIPSL.Electrical.Buses.Bus EYVIND66_497c(V_b = 66000, v_0 = pf.powerflow.bus.VEYVIND66_497c, angle_0 = pf.powerflow.bus.AEYVIND66_497c);
OpenIPSL.Electrical.Buses.Bus EYV_DELT_498b(V_b = 11000, v_0 = pf.powerflow.bus.VEYV_DELT_498b, angle_0 = pf.powerflow.bus.AEYV_DELT_498b);
OpenIPSL.Electrical.Buses.Bus LF1_KAPALL_499a(V_b = 66000, v_0 = pf.powerflow.bus.VLF1_KAPALL_499a, angle_0 = pf.powerflow.bus.ALF1_KAPALL_499a);
OpenIPSL.Electrical.Buses.Bus TEIG_49a9(V_b = 132000, v_0 = pf.powerflow.bus.VTEIG_49a9, angle_0 = pf.powerflow.bus.ATEIG_49a9);
OpenIPSL.Electrical.Buses.Bus TEIGHO_2_49b8(V_b = 11000, v_0 = pf.powerflow.bus.VTEIGHO_2_49b8, angle_0 = pf.powerflow.bus.ATEIGHO_2_49b8);
OpenIPSL.Electrical.Buses.Bus TEIG_33_49c7(V_b = 33000, v_0 = pf.powerflow.bus.VTEIG_33_49c7, angle_0 = pf.powerflow.bus.ATEIG_33_49c7);
OpenIPSL.Electrical.Buses.Bus DIESEL_11KV_49d6(V_b = 11000, v_0 = pf.powerflow.bus.VDIESEL_11KV_49d6, angle_0 = pf.powerflow.bus.ADIESEL_11KV_49d6);
OpenIPSL.Electrical.Buses.Bus FISKM_HOFN_49e5(V_b = 11000, v_0 = pf.powerflow.bus.VFISKM_HOFN_49e5, angle_0 = pf.powerflow.bus.AFISKM_HOFN_49e5);
OpenIPSL.Electrical.Buses.Bus STU_CABLE_49f4(V_b = 66000, v_0 = pf.powerflow.bus.VSTU_CABLE_49f4, angle_0 = pf.powerflow.bus.ASTU_CABLE_49f4);
OpenIPSL.Electrical.Buses.Bus HOF_SKERDANL_4a02(V_b = 132000, v_0 = pf.powerflow.bus.VHOF_SKERDANL_4a02, angle_0 = pf.powerflow.bus.AHOF_SKERDANL_4a02);
OpenIPSL.Electrical.Buses.Bus HOLAR_4a11(V_b = 132000, v_0 = pf.powerflow.bus.VHOLAR_4a11, angle_0 = pf.powerflow.bus.AHOLAR_4a11);
OpenIPSL.Electrical.Buses.Bus HOLAR_11_4a20(V_b = 11000, v_0 = pf.powerflow.bus.VHOLAR_11_4a20, angle_0 = pf.powerflow.bus.AHOLAR_11_4a20);
OpenIPSL.Electrical.Buses.Bus HOLAR_SC_4a2f(V_b = 132000, v_0 = pf.powerflow.bus.VHOLAR_SC_4a2f, angle_0 = pf.powerflow.bus.AHOLAR_SC_4a2f);
OpenIPSL.Electrical.Buses.Bus HOLAR_19_4a3d(V_b = 19000, v_0 = pf.powerflow.bus.VHOLAR_19_4a3d, angle_0 = pf.powerflow.bus.AHOLAR_19_4a3d);
OpenIPSL.Electrical.Buses.Bus SMYRLA_19_4a4c(V_b = 19000, v_0 = pf.powerflow.bus.VSMYRLA_19_4a4c, angle_0 = pf.powerflow.bus.ASMYRLA_19_4a4c);
OpenIPSL.Electrical.Buses.Bus SMYRLA_6_3_4a5b(V_b = 6300, v_0 = pf.powerflow.bus.VSMYRLA_6_3_4a5b, angle_0 = pf.powerflow.bus.ASMYRLA_6_3_4a5b);
OpenIPSL.Electrical.Buses.Bus AEGISSIDA_4a6a(V_b = 132000, v_0 = pf.powerflow.bus.VAEGISSIDA_4a6a, angle_0 = pf.powerflow.bus.AAEGISSIDA_4a6a);
OpenIPSL.Electrical.Buses.Bus HOF_FORGANGS_4a79(V_b = 132000, v_0 = pf.powerflow.bus.VHOF_FORGANGS_4a79, angle_0 = pf.powerflow.bus.AHOF_FORGANGS_4a79);
OpenIPSL.Electrical.Buses.Bus PRES_4a87(V_b = 132000, v_0 = pf.powerflow.bus.VPRES_4a87, angle_0 = pf.powerflow.bus.APRES_4a87);
OpenIPSL.Electrical.Buses.Bus PREST_19_4a96(V_b = 19000, v_0 = pf.powerflow.bus.VPREST_19_4a96, angle_0 = pf.powerflow.bus.APREST_19_4a96);
OpenIPSL.Electrical.Buses.Bus FLJ_KERFIVOR_4aa5(V_b = 132000, v_0 = pf.powerflow.bus.VFLJ_KERFIVOR_4aa5, angle_0 = pf.powerflow.bus.AFLJ_KERFIVOR_4aa5);
OpenIPSL.Electrical.Buses.Bus FLJOTSDA_4ab4(V_b = 132000, v_0 = pf.powerflow.bus.VFLJOTSDA_4ab4, angle_0 = pf.powerflow.bus.AFLJOTSDA_4ab4);
OpenIPSL.Electrical.Buses.Bus FLJ_11_4ac2(V_b = 11000, v_0 = pf.powerflow.bus.VFLJ_11_4ac2, angle_0 = pf.powerflow.bus.AFLJ_11_4ac2);
OpenIPSL.Electrical.Buses.Bus FLJ_V1_CABLE_4ad1(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_V1_CABLE_4ad1, angle_0 = pf.powerflow.bus.AFLJ_V1_CABLE_4ad1);
OpenIPSL.Electrical.Buses.Bus FLJ_V2_CABLE_4ae0(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_V2_CABLE_4ae0, angle_0 = pf.powerflow.bus.AFLJ_V2_CABLE_4ae0);
OpenIPSL.Electrical.Buses.Bus FLJ_V3_CABLE_4aee(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_V3_CABLE_4aee, angle_0 = pf.powerflow.bus.AFLJ_V3_CABLE_4aee);
OpenIPSL.Electrical.Buses.Bus FLJ_V4_CABLE_4afc(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_V4_CABLE_4afc, angle_0 = pf.powerflow.bus.AFLJ_V4_CABLE_4afc);
OpenIPSL.Electrical.Buses.Bus FLJ_V5_CABLE_4b0a(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_V5_CABLE_4b0a, angle_0 = pf.powerflow.bus.AFLJ_V5_CABLE_4b0a);
OpenIPSL.Electrical.Buses.Bus FLJ_V6_CABLE_4b18(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_V6_CABLE_4b18, angle_0 = pf.powerflow.bus.AFLJ_V6_CABLE_4b18);
OpenIPSL.Electrical.Buses.Bus FLJ_220_B_4b26(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_220_B_4b26, angle_0 = pf.powerflow.bus.AFLJ_220_B_4b26);
OpenIPSL.Electrical.Buses.Bus FLJ_220_A_4b34(V_b = 220000, v_0 = pf.powerflow.bus.VFLJ_220_A_4b34, angle_0 = pf.powerflow.bus.AFLJ_220_A_4b34);
OpenIPSL.Electrical.Buses.Bus KARA_V1_4b42(V_b = 11000, v_0 = pf.powerflow.bus.VKARA_V1_4b42, angle_0 = pf.powerflow.bus.AKARA_V1_4b42);
OpenIPSL.Electrical.Buses.Bus KARA_V2_4b51(V_b = 11000, v_0 = pf.powerflow.bus.VKARA_V2_4b51, angle_0 = pf.powerflow.bus.AKARA_V2_4b51);
OpenIPSL.Electrical.Buses.Bus KARA_V3_4b5f(V_b = 11000, v_0 = pf.powerflow.bus.VKARA_V3_4b5f, angle_0 = pf.powerflow.bus.AKARA_V3_4b5f);
OpenIPSL.Electrical.Buses.Bus KARA_V4_4b6d(V_b = 11000, v_0 = pf.powerflow.bus.VKARA_V4_4b6d, angle_0 = pf.powerflow.bus.AKARA_V4_4b6d);
OpenIPSL.Electrical.Buses.Bus KARA_V5_4b7b(V_b = 11000, v_0 = pf.powerflow.bus.VKARA_V5_4b7b, angle_0 = pf.powerflow.bus.AKARA_V5_4b7b);
OpenIPSL.Electrical.Buses.Bus KARA_V6_4b89(V_b = 11000, v_0 = pf.powerflow.bus.VKARA_V6_4b89, angle_0 = pf.powerflow.bus.AKARA_V6_4b89);
OpenIPSL.Electrical.Buses.Bus AUX_1_4b97(V_b = 11000, v_0 = pf.powerflow.bus.VAUX_1_4b97, angle_0 = pf.powerflow.bus.AAUX_1_4b97);
OpenIPSL.Electrical.Buses.Bus DIODE_1_4baa(V_b = 69000, v_0 = pf.powerflow.bus.VDIODE_1_4baa, angle_0 = pf.powerflow.bus.ADIODE_1_4baa);
OpenIPSL.Electrical.Buses.Bus DIODE_2_4bba(V_b = 69000, v_0 = pf.powerflow.bus.VDIODE_2_4bba, angle_0 = pf.powerflow.bus.ADIODE_2_4bba);
OpenIPSL.Electrical.Buses.Bus DIODE_3_4bc8(V_b = 69000, v_0 = pf.powerflow.bus.VDIODE_3_4bc8, angle_0 = pf.powerflow.bus.ADIODE_3_4bc8);
OpenIPSL.Electrical.Buses.Bus DIODE_4_4bd6(V_b = 69000, v_0 = pf.powerflow.bus.VDIODE_4_4bd6, angle_0 = pf.powerflow.bus.ADIODE_4_4bd6);
OpenIPSL.Electrical.Buses.Bus DIODE_5_4be4(V_b = 69000, v_0 = pf.powerflow.bus.VDIODE_5_4be4, angle_0 = pf.powerflow.bus.ADIODE_5_4be4);
OpenIPSL.Electrical.Buses.Bus AUX_2_4bf2(V_b = 11000, v_0 = pf.powerflow.bus.VAUX_2_4bf2, angle_0 = pf.powerflow.bus.AAUX_2_4bf2);
OpenIPSL.Electrical.Buses.Bus DIODE_6_4c00(V_b = 69000, v_0 = pf.powerflow.bus.VDIODE_6_4c00, angle_0 = pf.powerflow.bus.ADIODE_6_4c00);
OpenIPSL.Electrical.Buses.Bus ESK_CABLE_4c0e(V_b = 66000, v_0 = pf.powerflow.bus.VESK_CABLE_4c0e, angle_0 = pf.powerflow.bus.AESK_CABLE_4c0e);
OpenIPSL.Electrical.Buses.Bus ESK_SKERDANL_4c1c(V_b = 11000, v_0 = pf.powerflow.bus.VESK_SKERDANL_4c1c, angle_0 = pf.powerflow.bus.AESK_SKERDANL_4c1c);
OpenIPSL.Electrical.Buses.Bus ESK_FORGANGS_4c2b(V_b = 11000, v_0 = pf.powerflow.bus.VESK_FORGANGS_4c2b, angle_0 = pf.powerflow.bus.AESK_FORGANGS_4c2b);
OpenIPSL.Electrical.Buses.Bus ESK_CABLE_4c39(V_b = 66000, v_0 = pf.powerflow.bus.VESK_CABLE_4c39, angle_0 = pf.powerflow.bus.AESK_CABLE_4c39);
OpenIPSL.Electrical.Buses.Bus FASKRUDSFJ_4c47(V_b = 33000, v_0 = pf.powerflow.bus.VFASKRUDSFJ_4c47, angle_0 = pf.powerflow.bus.AFASKRUDSFJ_4c47);
OpenIPSL.Electrical.Buses.Bus FAS_FORGANGS_4c56(V_b = 11000, v_0 = pf.powerflow.bus.VFAS_FORGANGS_4c56, angle_0 = pf.powerflow.bus.AFAS_FORGANGS_4c56);
OpenIPSL.Electrical.Buses.Bus STO_VARFJORD_4c65(V_b = 33000, v_0 = pf.powerflow.bus.VSTO_VARFJORD_4c65, angle_0 = pf.powerflow.bus.ASTO_VARFJORD_4c65);
OpenIPSL.Electrical.Buses.Bus STO_VARFJ_4c74(V_b = 11000, v_0 = pf.powerflow.bus.VSTO_VARFJ_4c74, angle_0 = pf.powerflow.bus.ASTO_VARFJ_4c74);
OpenIPSL.Electrical.Buses.Bus ESKIFJOR_4c83(V_b = 66000, v_0 = pf.powerflow.bus.VESKIFJOR_4c83, angle_0 = pf.powerflow.bus.AESKIFJOR_4c83);
OpenIPSL.Electrical.Buses.Bus FASKRUDS_4c91(V_b = 66000, v_0 = pf.powerflow.bus.VFASKRUDS_4c91, angle_0 = pf.powerflow.bus.AFASKRUDS_4c91);
OpenIPSL.Electrical.Buses.Bus NESKAUPS_4ca0(V_b = 66000, v_0 = pf.powerflow.bus.VNESKAUPS_4ca0, angle_0 = pf.powerflow.bus.ANESKAUPS_4ca0);
OpenIPSL.Electrical.Buses.Bus NES_FORGANGS_4caf(V_b = 11000, v_0 = pf.powerflow.bus.VNES_FORGANGS_4caf, angle_0 = pf.powerflow.bus.ANES_FORGANGS_4caf);
OpenIPSL.Electrical.Buses.Bus FAS_SKERDANL_4cbd(V_b = 11000, v_0 = pf.powerflow.bus.VFAS_SKERDANL_4cbd, angle_0 = pf.powerflow.bus.AFAS_SKERDANL_4cbd);
OpenIPSL.Electrical.Buses.Bus BREIDDALSVIK_4ccb(V_b = 33000, v_0 = pf.powerflow.bus.VBREIDDALSVIK_4ccb, angle_0 = pf.powerflow.bus.ABREIDDALSVIK_4ccb);
OpenIPSL.Electrical.Buses.Bus BREIDDALSVIK_4cd9(V_b = 11000, v_0 = pf.powerflow.bus.VBREIDDALSVIK_4cd9, angle_0 = pf.powerflow.bus.ABREIDDALSVIK_4cd9);
OpenIPSL.Electrical.Buses.Bus NES_SKERDANL_4ce7(V_b = 11000, v_0 = pf.powerflow.bus.VNES_SKERDANL_4ce7, angle_0 = pf.powerflow.bus.ANES_SKERDANL_4ce7);
OpenIPSL.Electrical.Buses.Bus NES_CABLE_4cf5(V_b = 66000, v_0 = pf.powerflow.bus.VNES_CABLE_4cf5, angle_0 = pf.powerflow.bus.ANES_CABLE_4cf5);
OpenIPSL.Electrical.Buses.Bus FAS_CABLE_4d03(V_b = 66000, v_0 = pf.powerflow.bus.VFAS_CABLE_4d03, angle_0 = pf.powerflow.bus.AFAS_CABLE_4d03);
OpenIPSL.Electrical.Buses.Bus SEYDISFJORDU_4d11(V_b = 66000, v_0 = pf.powerflow.bus.VSEYDISFJORDU_4d11, angle_0 = pf.powerflow.bus.ASEYDISFJORDU_4d11);
OpenIPSL.Electrical.Buses.Bus SEY_FORGANGS_4d20(V_b = 11000, v_0 = pf.powerflow.bus.VSEY_FORGANGS_4d20, angle_0 = pf.powerflow.bus.ASEY_FORGANGS_4d20);
OpenIPSL.Electrical.Buses.Bus SR_MJOL_4d2f(V_b = 66000, v_0 = pf.powerflow.bus.VSR_MJOL_4d2f, angle_0 = pf.powerflow.bus.ASR_MJOL_4d2f);
OpenIPSL.Electrical.Buses.Bus BJOLFSVIRKJU_4d3e(V_b = 6300, v_0 = pf.powerflow.bus.VBJOLFSVIRKJU_4d3e, angle_0 = pf.powerflow.bus.ABJOLFSVIRKJU_4d3e);
OpenIPSL.Electrical.Buses.Bus GULSVIRKJUN_4d4d(V_b = 6300, v_0 = pf.powerflow.bus.VGULSVIRKJUN_4d4d, angle_0 = pf.powerflow.bus.AGULSVIRKJUN_4d4d);
OpenIPSL.Electrical.Buses.Bus SEY_KYNDISTO_4d5c(V_b = 11000, v_0 = pf.powerflow.bus.VSEY_KYNDISTO_4d5c, angle_0 = pf.powerflow.bus.ASEY_KYNDISTO_4d5c);
OpenIPSL.Electrical.Buses.Bus SEY_CABLE_4d6a(V_b = 66000, v_0 = pf.powerflow.bus.VSEY_CABLE_4d6a, angle_0 = pf.powerflow.bus.ASEY_CABLE_4d6a);
OpenIPSL.Electrical.Buses.Bus LAGARFOSS_4d78(V_b = 66000, v_0 = pf.powerflow.bus.VLAGARFOSS_4d78, angle_0 = pf.powerflow.bus.ALAGARFOSS_4d78);
OpenIPSL.Electrical.Buses.Bus LAGARFO1_4d87(V_b = 6600, v_0 = pf.powerflow.bus.VLAGARFO1_4d87, angle_0 = pf.powerflow.bus.ALAGARFO1_4d87);
OpenIPSL.Electrical.Buses.Bus LAGARFOSS_4d96(V_b = 11000, v_0 = pf.powerflow.bus.VLAGARFOSS_4d96, angle_0 = pf.powerflow.bus.ALAGARFOSS_4d96);
OpenIPSL.Electrical.Buses.Bus LAG_11KV_4da5(V_b = 11000, v_0 = pf.powerflow.bus.VLAG_11KV_4da5, angle_0 = pf.powerflow.bus.ALAG_11KV_4da5);
OpenIPSL.Electrical.Buses.Bus VOPNAFJO_4db3(V_b = 66000, v_0 = pf.powerflow.bus.VVOPNAFJO_4db3, angle_0 = pf.powerflow.bus.AVOPNAFJO_4db3);
OpenIPSL.Electrical.Buses.Bus VOP_FORGANGS_4dc2(V_b = 11000, v_0 = pf.powerflow.bus.VVOP_FORGANGS_4dc2, angle_0 = pf.powerflow.bus.AVOP_FORGANGS_4dc2);
OpenIPSL.Electrical.Buses.Bus VOP_SKERDANL_4dd1(V_b = 11000, v_0 = pf.powerflow.bus.VVOP_SKERDANL_4dd1, angle_0 = pf.powerflow.bus.AVOP_SKERDANL_4dd1);
OpenIPSL.Electrical.Buses.Bus ALCOA_1_4ddf(V_b = 220000, v_0 = pf.powerflow.bus.VALCOA_1_4ddf, angle_0 = pf.powerflow.bus.AALCOA_1_4ddf);
OpenIPSL.Electrical.Buses.Bus ALCOA_2_4dee(V_b = 220000, v_0 = pf.powerflow.bus.VALCOA_2_4dee, angle_0 = pf.powerflow.bus.AALCOA_2_4dee);
OpenIPSL.Electrical.Buses.Bus DUM_4dfc(V_b = 11000, v_0 = pf.powerflow.bus.VDUM_4dfc, angle_0 = pf.powerflow.bus.ADUM_4dfc);
// -- Lines:
OpenIPSL.Electrical.Branches.PwLine line801_5026_152da(R =0.064294400, X =0.1640830000,G = 0, B =0.0009850005);
OpenIPSL.Electrical.Branches.PwLine line801_5090_152e4(R =0.001155650, X =0.0063610800,G = 0, B =0.00191499997);
OpenIPSL.Electrical.Branches.PwLine line1009_1014_152ec(R =0.000668503, X =0.0022213300,G = 0, B =0.00111000028);
OpenIPSL.Electrical.Branches.PwLine line1009_1083_152f4(R =0.131220000, X =0.2340620000,G = 0, B =0.00181000076);
OpenIPSL.Electrical.Branches.PwLine line1010_1026_152fe(R =0.002507000, X =0.0310980000,G = 0, B =0.0235750108);
OpenIPSL.Electrical.Branches.PwLine line1010_1050_15308(R =0.000580000, X =0.0087600000,G = 0, B =0.0104849888);
OpenIPSL.Electrical.Branches.PwLine line1010_1100_15312(R =0.008553520, X =0.0548781000,G = 0, B =0.0390200074);
OpenIPSL.Electrical.Branches.PwLine line1010_1140_1531c(R =0.012970000, X =0.0775200000,G = 0, B =0.0553300088);
OpenIPSL.Electrical.Branches.PwLine line1010_2090_15326(R =0.004369660, X =0.0663700000,G = 0, B =0.0794400090);
OpenIPSL.Electrical.Branches.PwLine line1014_1017_15330(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line1017_1080_1533a(R =0.215785000, X =0.4159940000,G = 0, B =0.00274999943);
OpenIPSL.Electrical.Branches.PwLine line1020_1026_15342(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line1024_5040_15346(R =0.033410400, X =0.1786440000,G = 0, B =0.01966499647);
OpenIPSL.Electrical.Branches.PwLine line1026_1030_15350(R =0.000790000, X =0.0076600000,G = 0, B =0.0056449888);
OpenIPSL.Electrical.Branches.PwLine line1026_1040_1535a(R =0.001160000, X =0.0053874600,G = 0, B =0.0035950068);
OpenIPSL.Electrical.Branches.PwLine line1030_1065_15364(R =0.000900000, X =0.0086851500,G = 0, B =0.0064000046);
OpenIPSL.Electrical.Branches.PwLine line1050_1065_1536e(R =0.000900000, X =0.0086851500,G = 0, B =0.0064000046);
OpenIPSL.Electrical.Branches.PwLine line1050_2100_15376(R =0.011210000, X =0.1083190000,G = 0, B =0.0798100028);
OpenIPSL.Electrical.Branches.PwLine line1050_2100_25380(R =0.005740000, X =0.0819000000,G = 0, B =0.1010900066);
OpenIPSL.Electrical.Branches.PwLine line1060_1065_1538a(R =0.001500000, X =0.0142100000,G = 0, B =0.0104899982);
OpenIPSL.Electrical.Branches.PwLine line1079_1082_15392(R =0.001662900, X =0.0055255500,G = 0, B =0.00276499931);
OpenIPSL.Electrical.Branches.PwLine line1079_1084_1539a(R =0.164359000, X =0.2959730000,G = 0, B =0.00211499917);
OpenIPSL.Electrical.Branches.PwLine line1080_1082_153a2(R =0.023231000, X =0.0347090000,G = 0, B =0.01868999953);
OpenIPSL.Electrical.Branches.PwLine line1080_1089_153aa(R =0.049071000, X =0.2037120000,G = 0, B =0.00133999925);
OpenIPSL.Electrical.Branches.PwLine line1081_1083_153b4(R =0.000183838, X =0.0006108650,G = 0, B =0.00030500059);
OpenIPSL.Electrical.Branches.PwLine line1081_1084_153bc(R =0.000340220, X =0.0011305000,G = 0, B =0.00056499934);
OpenIPSL.Electrical.Branches.PwLine line1089_1090_153c4(R =0.000155188, X =0.0005156650,G = 0, B =0.00026000093);
OpenIPSL.Electrical.Branches.PwLine line1091_1093_253cc(R =0.003101000, X =0.0353000000,G = 0, B =0.00190999982);
OpenIPSL.Electrical.Branches.PwLine line1091_1096_153d6(R =0.082277300, X =0.0355413000,G = 0, B =0.00081499998);
OpenIPSL.Electrical.Branches.PwLine line1092_1094_253de(R =0.000886000, X =0.0100900000,G = 0, B =0.00054499985);
OpenIPSL.Electrical.Branches.PwLine line1092_1095_153e8(R =0.000507000, X =0.0043570000,G = 0, B =0.00010999989);
OpenIPSL.Electrical.Branches.PwLine line1092_1097_153f2(R =0.035316800, X =0.0084814300,G = 0, B =0.00014499981);
OpenIPSL.Electrical.Branches.PwLine line1092_1098_153fa(R =0.001901000, X =0.0163400000,G = 0, B =0.00040999979);
OpenIPSL.Electrical.Branches.PwLine line1093_1094_25404(R =0.019449100, X =0.1348260000,G = 0, B =0.0054949998);
OpenIPSL.Electrical.Branches.PwLine line1096_1097_1540c(R =0.436100000, X =0.1607000000,G = 0, B =0.00277999974);
OpenIPSL.Electrical.Branches.PwLine line1100_2010_15414(R =0.005080000, X =0.0326009000,G = 0, B =0.0231799942);
OpenIPSL.Electrical.Branches.PwLine line1110_2011_1541e(R =0.042410000, X =0.1099010000,G = 0, B =0.01007000042);
OpenIPSL.Electrical.Branches.PwLine line1114_1130_25428(R =0.001930000, X =0.0043289700,G = 0, B =0.00003500046);
OpenIPSL.Electrical.Branches.PwLine line1120_1130_15434(R =0.013679600, X =0.0356961000,G = 0, B =0.00185500042);
OpenIPSL.Electrical.Branches.PwLine line1130_1136_1543e(R =0.075471200, X =0.1471550000,G = 0, B =0.00095000004);
OpenIPSL.Electrical.Branches.PwLine line1130_1150_15446(R =0.086217400, X =0.1661740000,G = 0, B =0.00100999958);
OpenIPSL.Electrical.Branches.PwLine line1136_1149_1544e(R =0.093657400, X =0.1826150000,G = 0, B =0.00117999902);
OpenIPSL.Electrical.Branches.PwLine line1139_1140_15456(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line1139_2010_1545a(R =0.002630000, X =0.0157400000,G = 0, B =0.0112349952);
OpenIPSL.Electrical.Branches.PwLine line1200_1210_15464(R =0.000680000, X =0.0019100000,G = 0, B =0.01086499656);
OpenIPSL.Electrical.Branches.PwLine line1200_2011_1546e(R =0.006700000, X =0.0191500000,G = 0, B =0.09811499702);
OpenIPSL.Electrical.Branches.PwLine line1210_1220_15478(R =0.008300000, X =0.0377200000,G = 0, B =0.00378999878);
OpenIPSL.Electrical.Branches.PwLine line1220_2030_15482(R =0.003520000, X =0.0099600000,G = 0, B =0.05101999848);
OpenIPSL.Electrical.Branches.PwLine line2010_2050_1548c(R =0.002150000, X =0.0132849000,G = 0, B =0.0100649978);
OpenIPSL.Electrical.Branches.PwLine line2010_2050_25496(R =0.002150000, X =0.0132849000,G = 0, B =0.0100649978);
OpenIPSL.Electrical.Branches.PwLine line2010_2100_154a0(R =0.008800000, X =0.0533000000,G = 0, B =0.0377099888);
OpenIPSL.Electrical.Branches.PwLine line2011_2018_254aa(R =0.001900000, X =0.0042000000,G = 0, B =0.00547500413);
OpenIPSL.Electrical.Branches.PwLine line2011_2030_154b4(R =0.004600000, X =0.0170000000,G = 0, B =0.00165000053);
OpenIPSL.Electrical.Branches.PwLine line2017_2240_154be(R =0.000500000, X =0.0023000000,G = 0, B =0.01624999702);
OpenIPSL.Electrical.Branches.PwLine line2018_2240_254c8(R =0.001653000, X =0.0037420000,G = 0, B =0.02713999702);
OpenIPSL.Electrical.Branches.PwLine line2022_2050_154d2(R =0.000440000, X =0.0027100000,G = 0, B =0.0020549914);
OpenIPSL.Electrical.Branches.PwLine line2023_2050_154dc(R =0.000440000, X =0.0027100000,G = 0, B =0.0020549914);
OpenIPSL.Electrical.Branches.PwLine line2030_2220_154e6(R =0.004340000, X =0.0056200000,G = 0, B =0.05342499835);
OpenIPSL.Electrical.Branches.PwLine line2050_2090_154f0(R =0.002250000, X =0.0217400000,G = 0, B =0.0159199942);
OpenIPSL.Electrical.Branches.PwLine line2051_2061_154fa(R =0.001100000, X =0.0046000000,G = 0, B =0.0004999991);
OpenIPSL.Electrical.Branches.PwLine line2051_2260_15504(R =0.004650000, X =0.0177600000,G = 0, B =0.00273500172);
OpenIPSL.Electrical.Branches.PwLine line2051_2300_1550e(R =0.015600000, X =0.0740000000,G = 0, B =0.01094999954);
OpenIPSL.Electrical.Branches.PwLine line2100_2120_1551a(R =0.000563200, X =0.0033880000,G = 0, B =0.0023399948);
OpenIPSL.Electrical.Branches.PwLine line2100_2140_15524(R =0.000670000, X =0.0040000000,G = 0, B =0.0028100072);
OpenIPSL.Electrical.Branches.PwLine line2100_2161_2552e(R =0.000610000, X =0.0036700000,G = 0, B =0.0025349984);
OpenIPSL.Electrical.Branches.PwLine line2101_3120_15538(R =0.010230000, X =0.0466700000,G = 0, B =0.0049799970);
OpenIPSL.Electrical.Branches.PwLine line2105_2109_15542(R =0.050500000, X =0.0491860000,G = 0, B =0.00215999992);
OpenIPSL.Electrical.Branches.PwLine line2107_2110_1554a(R =0.073590000, X =0.0799300000,G = 0, B =0.0221650007);
OpenIPSL.Electrical.Branches.PwLine line2120_2122_15554(R =0.0000007101, X =0.00000424651,G = 0, B =0.0000050094);
OpenIPSL.Electrical.Branches.PwLine line2120_2160_15558(R =0.000076800, X =0.0004620000,G = 0, B =0.0003199966);
OpenIPSL.Electrical.Branches.PwLine line2160_2161_15562(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line2200_2210_15566(R =0.001270000, X =0.0121300000,G = 0, B =0.01225999685);
OpenIPSL.Electrical.Branches.PwLine line2200_2220_15570(R =0.000630000, X =0.0013300000,G = 0, B =0.00738999756);
OpenIPSL.Electrical.Branches.PwLine line2200_2240_1557a(R =0.002590000, X =0.0043300000,G = 0, B =0.02489000105);
OpenIPSL.Electrical.Branches.PwLine line2201_2231_15584(R =0.171803000, X =0.2268550000,G = 0, B =0.0002700000);
OpenIPSL.Electrical.Branches.PwLine line2210_2260_2558c(R =0.004220000, X =0.0052200000,G = 0, B =0.05418999907);
OpenIPSL.Electrical.Branches.PwLine line2231_2241_25596(R =0.087355000, X =0.1119030000,G = 0, B =0.00008500002);
OpenIPSL.Electrical.Branches.PwLine line2241_2251_1559e(R =0.165651000, X =0.1123900000,G = 0, B =0.00012999998);
OpenIPSL.Electrical.Branches.PwLine line2251_2261_355a6(R =0.229478000, X =0.3030110000,G = 0, B =0.00035999999);
OpenIPSL.Electrical.Branches.PwLine line2300_2304_155ae(R =0.000970500, X =0.0054030000,G = 0, B =0.0676200001);
OpenIPSL.Electrical.Branches.PwLine line2300_2320_155b6(R =0.002000000, X =0.0119000000,G = 0, B =0.00209000009);
OpenIPSL.Electrical.Branches.PwLine line2301_2320_155c2(R =0.003300000, X =0.0157000000,G = 0, B =0.00084000233);
OpenIPSL.Electrical.Branches.PwLine line2303_2350_155cc(R =0.027551000, X =0.0536480000,G = 0, B =0.00058499991);
OpenIPSL.Electrical.Branches.PwLine line2303_2350_255d4(R =0.027551000, X =0.0536480000,G = 0, B =0.00058499991);
OpenIPSL.Electrical.Branches.PwLine line2320_2330_155dc(R =0.005500000, X =0.0354000000,G = 0, B =0.00324000151);
OpenIPSL.Electrical.Branches.PwLine line3120_4010_155e8(R =0.037310000, X =0.1783200000,G = 0, B =0.01926500242);
OpenIPSL.Electrical.Branches.PwLine line3121_3130_155f2(R =0.300159000, X =0.5786540000,G = 0, B =0.00382499924);
OpenIPSL.Electrical.Branches.PwLine line3121_3170_155fc(R =0.009720020, X =0.0187385000,G = 0, B =0.00012499978);
OpenIPSL.Electrical.Branches.PwLine line3130_3140_15606(R =0.237329000, X =0.4575280000,G = 0, B =0.00301999955);
OpenIPSL.Electrical.Branches.PwLine line3130_3150_15610(R =0.242123000, X =0.2455570000,G = 0, B =0.00144500063);
OpenIPSL.Electrical.Branches.PwLine line3150_3160_1561a(R =0.207383000, X =0.3421790000,G = 0, B =0.00212500055);
OpenIPSL.Electrical.Branches.PwLine line3200_3210_15622(R =0.023850000, X =0.1088900000,G = 0, B =0.0116199959);
OpenIPSL.Electrical.Branches.PwLine line3200_4010_1562c(R =0.014720000, X =0.0772700000,G = 0, B =0.00838999577);
OpenIPSL.Electrical.Branches.PwLine line3210_3300_15636(R =0.040190000, X =0.1886100000,G = 0, B =0.02021000177);
OpenIPSL.Electrical.Branches.PwLine line3212_3390_15640(R =0.838600000, X =1.1169600000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3301_3310_1564a(R =0.128330000, X =0.2871900000,G = 0, B =0.00211000066);
OpenIPSL.Electrical.Branches.PwLine line3301_3340_15654(R =0.260124000, X =0.3886360000,G = 0, B =0.00211000066);
OpenIPSL.Electrical.Branches.PwLine line3303_3304_1565e(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3305_3341_15662(R =0.590310000, X =0.5837700000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3310_3320_1566c(R =0.113400000, X =0.2371000000,G = 0, B =0.00170000087);
OpenIPSL.Electrical.Branches.PwLine line3310_3330_15676(R =0.113400000, X =0.2371000000,G = 0, B =0.00170000087);
OpenIPSL.Electrical.Branches.PwLine line3311_3380_15680(R =0.640710000, X =0.6500200000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3313_3340_1568a(R =0.384360000, X =0.5079000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3320_3330_15694(R =0.067163000, X =0.0380799000,G = 0, B =0.01477999948);
OpenIPSL.Electrical.Branches.PwLine line3333_3381_1569c(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3341_3342_156a0(R =0.372660000, X =0.3862200000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3342_3361_156aa(R =0.660460000, X =0.7054000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line3370_3371_156b4(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line4010_4020_156b8(R =0.038220000, X =0.1694100000,G = 0, B =0.01812000168);
OpenIPSL.Electrical.Branches.PwLine line4020_4030_156c2(R =0.015720000, X =0.0742400000,G = 0, B =0.00819500378);
OpenIPSL.Electrical.Branches.PwLine line4030_4036_156cc(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line4036_4040_156d0(R =0.014580000, X =0.0751500000,G = 0, B =0.00800000309);
OpenIPSL.Electrical.Branches.PwLine line4040_4050_156da(R =0.085880000, X =0.2140500000,G = 0, B =0.02070500018);
OpenIPSL.Electrical.Branches.PwLine line4041_4045_156e4(R =0.169350000, X =0.1892600000,G = 0, B =0.00147500041);
OpenIPSL.Electrical.Branches.PwLine line4050_4056_156ec(R =0.000760000, X =0.0021600000,G = 0, B =0.01108000001);
OpenIPSL.Electrical.Branches.PwLine line4050_4059_156f6(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line4050_4065_156fa(R =0.043160000, X =0.1919100000,G = 0, B =0.02040000178);
OpenIPSL.Electrical.Branches.PwLine line4051_4058_15704(R =0.087565200, X =0.3680540000,G = 0, B =0.00241999976);
OpenIPSL.Electrical.Branches.PwLine line4051_4100_1570c(R =0.279632000, X =0.6139080000,G = 0, B =0.00320000036);
OpenIPSL.Electrical.Branches.PwLine line4060_4065_15714(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line4060_5051_15718(R =0.064850000, X =0.2929300000,G = 0, B =0.03006999943);
OpenIPSL.Electrical.Branches.PwLine line4100_4110_15722(R =0.109159000, X =0.3083080000,G = 0, B =0.00190000008);
OpenIPSL.Electrical.Branches.PwLine line4102_4108_1572c(R =0.806488000, X =0.9562120000,G = 0, B =0.00040500019);
OpenIPSL.Electrical.Branches.PwLine line4110_4120_15736(R =0.163739000, X =0.4624630000,G = 0, B =0.00285000012);
OpenIPSL.Electrical.Branches.PwLine line4110_4121_15740(R =0.062685000, X =0.0355410000,G = 0, B =0.01379499898);
OpenIPSL.Electrical.Branches.PwLine line5010_5011_15748(R =0.008630000, X =0.0129200000,G = 0, B =0.06131000304);
OpenIPSL.Electrical.Branches.PwLine line5010_5016_15752(R =0.026989000, X =0.0675510000,G = 0, B =0.00649999706);
OpenIPSL.Electrical.Branches.PwLine line5010_5020_1575c(R =0.025050000, X =0.1158300000,G = 0, B =0.01237500396);
OpenIPSL.Electrical.Branches.PwLine line5010_5051_15766(R =0.013220000, X =0.0496800000,G = 0, B =0.04257999583);
OpenIPSL.Electrical.Branches.PwLine line5014_5026_15770(R =0.000247639, X =0.0013630900,G = 0, B =0.00040999979);
OpenIPSL.Electrical.Branches.PwLine line5014_5099_15778(R =0.086503000, X =0.1547320000,G = 0, B =0.00100500107);
OpenIPSL.Electrical.Branches.PwLine line5017_5019_15782(R =0.014503000, X =0.0149100000,G = 0, B =0.00833999978);
OpenIPSL.Electrical.Branches.PwLine line5017_5083_1578c(R =0.091689200, X =0.2769870000,G = 0, B =0.00173499916);
OpenIPSL.Electrical.Branches.PwLine line5017_5102_15796(R =0.058832000, X =0.1501360000,G = 0, B =0.00090500038);
OpenIPSL.Electrical.Branches.PwLine line5019_5200_157a0(R =0.083543000, X =0.2132090000,G = 0, B =0.00129000109);
OpenIPSL.Electrical.Branches.PwLine line5020_5030_157aa(R =0.039270000, X =0.1759400000,G = 0, B =0.01871999712);
OpenIPSL.Electrical.Branches.PwLine line5022_5095_157b4(R =0.994490000, X =1.0183700000,G = 0, B =0.0020300000);
OpenIPSL.Electrical.Branches.PwLine line5024_5025_157bc(R =0.008645720, X =0.1142400000,G = 0, B =0.00004500002);
OpenIPSL.Electrical.Branches.PwLine line5024_5025_257c4(R =0.008645720, X =0.1142400000,G = 0, B =0.00004500002);
OpenIPSL.Electrical.Branches.PwLine line5027_5039_157cc(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5030_5034_157d0(R =0.000000000, X =-0.4017400000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5030_5038_157da(R =0.004878000, X =0.0124590000,G = 0, B =0.00081999958);
OpenIPSL.Electrical.Branches.PwLine line5034_5040_157e2(R =0.077710000, X =0.3939400000,G = 0, B =0.04299500066);
OpenIPSL.Electrical.Branches.PwLine line5035_5036_157ec(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5038_5039_157f0(R =0.000110875, X =0.0015415900,G = 0, B =0.0078000017);
OpenIPSL.Electrical.Branches.PwLine line5050_5051_157f8(R =0.000040000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5053_5060_157fc(R =0.000161988, X =0.0003046420,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5054_5060_15806(R =0.000164250, X =0.0003088970,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5055_5060_15810(R =0.000166512, X =0.0003131520,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5056_5059_1581a(R =0.000174054, X =0.0003273340,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5057_5060_15824(R =0.000176316, X =0.0003315890,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5058_5060_1582e(R =0.000178579, X =0.0003358440,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5059_5060_15838(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5059_50702_1583c(R =0.002300000, X =0.0361100000,G = 0, B =0.0453049894);
OpenIPSL.Electrical.Branches.PwLine line5060_50701_15848(R =0.002190000, X =0.0349900000,G = 0, B =0.0409000086);
OpenIPSL.Electrical.Branches.PwLine line5080_5090_15854(R =0.000247639, X =0.0013630900,G = 0, B =0.00040999979);
OpenIPSL.Electrical.Branches.PwLine line5080_5098_1585c(R =0.062185300, X =0.1763630000,G = 0, B =0.0010899997);
OpenIPSL.Electrical.Branches.PwLine line5081_5082_15866(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5083_5090_1586a(R =0.000247639, X =0.0013630900,G = 0, B =0.00040999979);
OpenIPSL.Electrical.Branches.PwLine line5087_5094_15872(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5088_5095_15876(R =0.352620000, X =0.2231400000,G = 0, B =0.00010000015);
OpenIPSL.Electrical.Branches.PwLine line5091_5099_1587e(R =0.000330185, X =0.0018174500,G = 0, B =0.00054500094);
OpenIPSL.Electrical.Branches.PwLine line5092_5098_15886(R =0.001073100, X =0.0059067100,G = 0, B =0.00178000099);
OpenIPSL.Electrical.Branches.PwLine line5093_5097_1588e(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5100_5108_15892(R =0.000412731, X =0.0022718100,G = 0, B =0.0006850006);
OpenIPSL.Electrical.Branches.PwLine line5101_5107_1589a(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line5102_5108_1589e(R =0.014708000, X =0.0375340000,G = 0, B =0.00022500047);
OpenIPSL.Electrical.Branches.PwLine line5200_5210_158a8(R =0.203502000, X =0.5328400000,G = 0, B =0.00367500038);
OpenIPSL.Electrical.Branches.PwLine line5211_5212_158b2(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
OpenIPSL.Electrical.Branches.PwLine line50701_50702_158b6(R =0.000000000, X =0.0001000000,G = 0, B =0.0000000000);
// -- Transformers:
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101010110_1_58be(R = 0.004807471, X = 0.147834711, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101010110_1_T1,t2 = pf.powerflow.trafos.T101010110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101010120_1_58cd(R = 0.004807471, X = 0.147834711, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101010120_1_T1,t2 = pf.powerflow.trafos.T101010120_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101010130_1_58dc(R = 0.002919254, X = 0.112997541, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101010130_1_T1,t2 = pf.powerflow.trafos.T101010130_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101410110_1_58e8(R = 0.01615978, X = 0.101000918, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101410110_1_T1,t2 = pf.powerflow.trafos.T101410110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101110150_1_58f1(R = 0.015520059, X = 0.13600084, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101110150_1_T1,t2 = pf.powerflow.trafos.T101110150_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101710120_1_58fa(R = 0.01615978, X = 0.101000918, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101710120_1_T1,t2 = pf.powerflow.trafos.T101710120_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101210180_1_5903(R = 0.015520059, X = 0.13600084, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101210180_1_T1,t2 = pf.powerflow.trafos.T101210180_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101510140_1_590c(R = 0.002855923, X = 0.044701331, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101510140_1_T2,t2 = pf.powerflow.trafos.T101510140_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T101810170_1_5915(R = 0.002855923, X = 0.044701331, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T101810170_1_T2,t2 = pf.powerflow.trafos.T101810170_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T102010220_1_591e(R = 0.003729626, X = 0.128999008, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T102010220_1_T1,t2 = pf.powerflow.trafos.T102010220_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T102010230_1_592d(R = 0.003729626, X = 0.128999008, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T102010230_1_T1,t2 = pf.powerflow.trafos.T102010230_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T102010240_1_593c(R = 0.002379959, X = 0.128528926, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T102010240_1_T1,t2 = pf.powerflow.trafos.T102010240_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T102510200_1_5945(R = 0.00202314, X = 0.04522314, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T102510200_1_T2,t2 = pf.powerflow.trafos.T102510200_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T102610210_1_594e(R = 0.003729626, X = 0.128999008, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T102610210_1_T1,t2 = pf.powerflow.trafos.T102610210_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T102410250_1_595d(R = 0.043719008, X = 1.311581726, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T102410250_1_T1,t2 = pf.powerflow.trafos.T102410250_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T103010310_1_5966(R = 0.004437529, X = 0.150000702, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T103010310_1_T1,t2 = pf.powerflow.trafos.T103010310_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T103010320_1_5975(R = 0.004437529, X = 0.150000702, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T103010320_1_T1,t2 = pf.powerflow.trafos.T103010320_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T103010330_1_5984(R = 0.004437529, X = 0.150000702, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T103010330_1_T1,t2 = pf.powerflow.trafos.T103010330_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T104010410_1_5993(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T104010410_1_T1,t2 = pf.powerflow.trafos.T104010410_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T104010420_1_59a2(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T104010420_1_T1,t2 = pf.powerflow.trafos.T104010420_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T105010510_1_59b1(R = 0.00722500, X = 0.14535000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T105010510_1_T1,t2 = pf.powerflow.trafos.T105010510_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T105010520_1_59c0(R = 0.003103384, X = 0.124199622, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T105010520_1_T1,t2 = pf.powerflow.trafos.T105010520_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T106010610_1_59cf(R = 0.00000000, X = 0.00005500, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T106010610_1_T1,t2 = pf.powerflow.trafos.T106010610_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T106010620_1_59de(R = 0.00000000, X = 0.00005500, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T106010620_1_T1,t2 = pf.powerflow.trafos.T106010620_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T108110780_1_59ed(R = 0.00450000, X = 0.098298898, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T108110780_1_T1,t2 = pf.powerflow.trafos.T108110780_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T108010870_1_59fa(R = 0.01375000, X = 0.062699725, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T108010870_1_T1,t2 = pf.powerflow.trafos.T108010870_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T108810800_1_5a03(R = 0.002666391, X = 0.058699725, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T108810800_1_T2,t2 = pf.powerflow.trafos.T108810800_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T108110850_1_5a0c(R = 0.004247934, X = 0.081300275, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T108110850_1_T1,t2 = pf.powerflow.trafos.T108110850_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T108210860_1_5a19(R = 0.003809649, X = 0.074999793, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T108210860_1_T1,t2 = pf.powerflow.trafos.T108210860_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T108710880_1_5a26(R = 0.003749917, X = 0.040000554, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T108710880_1_T2,t2 = pf.powerflow.trafos.T108710880_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T109010910_1_5a2f(R = 0.00480000, X = 0.114001377, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T109010910_1_T1,t2 = pf.powerflow.trafos.T109010910_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T110011100_1_5a3e(R = 0.00258300, X = 0.12600000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T110011100_1_T1,t2 = pf.powerflow.trafos.T110011100_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T111911000_1_5a47(R = 0.002699563, X = 0.04299750, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T111911000_1_T2,t2 = pf.powerflow.trafos.T111911000_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T111011110_1_5a50(R = 0.008227772, X = 0.109399105, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T111011110_1_T1,t2 = pf.powerflow.trafos.T111011110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T111011120_1_5a5f(R = 0.008095558, X = 0.109800448, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T111011120_1_T1,t2 = pf.powerflow.trafos.T111011120_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T111011130_1_5a6e(R = 0.005191185, X = 0.099000344, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T111011130_1_T1,t2 = pf.powerflow.trafos.T111011130_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T111011140_1_5a7d(R = 0.005835055, X = 0.116701102, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T111011140_1_T1,t2 = pf.powerflow.trafos.T111011140_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T111011190_1_5a86(R = 0.059977273, X = 1.40000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T111011190_1_T1,t2 = pf.powerflow.trafos.T111011190_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T112011210_1_5a8f(R = 0.00700000, X = 0.237998163, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T112011210_1_T1,t2 = pf.powerflow.trafos.T112011210_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T112211200_1_5a98(R = 0.004600092, X = 0.117998163, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T112211200_1_T2,t2 = pf.powerflow.trafos.T112211200_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T112011260_1_5aa1(R = 0.00300000, X = 0.714990817, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T112011260_1_T1,t2 = pf.powerflow.trafos.T112011260_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T112111220_1_5aad(R = 0.006600092, X = 0.267001837, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T112111220_1_T1,t2 = pf.powerflow.trafos.T112111220_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T113011310_1_5ab6(R = 0.004246006, X = 0.06489899, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T113011310_1_T1,t2 = pf.powerflow.trafos.T113011310_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T113011340_1_5ac5(R = 0.16000000, X = 1.60000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T113011340_1_T1,t2 = pf.powerflow.trafos.T113011340_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T113611370_1_5ace(R = 0.004499874, X = 0.072000504, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T113611370_1_T1,t2 = pf.powerflow.trafos.T113611370_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T113911410_1_5adb(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T113911410_1_T1,t2 = pf.powerflow.trafos.T113911410_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T113911420_1_5aea(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T113911420_1_T1,t2 = pf.powerflow.trafos.T113911420_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T113911430_1_5af9(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T113911430_1_T1,t2 = pf.powerflow.trafos.T113911430_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T114011440_1_5b08(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T114011440_1_T1,t2 = pf.powerflow.trafos.T114011440_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T114011450_1_5b17(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T114011450_1_T1,t2 = pf.powerflow.trafos.T114011450_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T114011460_1_5b26(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T114011460_1_T1,t2 = pf.powerflow.trafos.T114011460_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T114011470_1_5b35(R = 0.00640000, X = 0.128497164, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T114011470_1_T1,t2 = pf.powerflow.trafos.T114011470_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T114911480_1_5b44(R = 0.004011938, X = 0.073999082, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T114911480_1_T1,t2 = pf.powerflow.trafos.T114911480_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T115011510_1_5b51(R = 0.10000000, X = 1.00000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T115011510_1_T1,t2 = pf.powerflow.trafos.T115011510_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T120012010_1_5b5d(R = 0.005519972, X = 0.076618457, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T120012010_1_T1,t2 = pf.powerflow.trafos.T120012010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T120012020_1_5b69(R = 0.005519972, X = 0.076618457, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T120012020_1_T1,t2 = pf.powerflow.trafos.T120012020_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T120012030_1_5b75(R = 0.005519972, X = 0.076618457, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T120012030_1_T1,t2 = pf.powerflow.trafos.T120012030_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T120012040_1_5b81(R = 0.005519972, X = 0.076618457, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T120012040_1_T1,t2 = pf.powerflow.trafos.T120012040_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T201020110_1_5b8d(R = 0.00210000, X = 0.084490289, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T201020110_1_T1,t2 = pf.powerflow.trafos.T201020110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T201020110_2_5b96(R = 0.00210000, X = 0.084490289, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T201020110_2_T1,t2 = pf.powerflow.trafos.T201020110_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T201220100_1_5b9f(R = 0.004182025, X = 0.01620000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T201220100_1_T2,t2 = pf.powerflow.trafos.T201220100_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T201320100_1_5ba8(R = 0.004182025, X = 0.01620000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T201320100_1_T2,t2 = pf.powerflow.trafos.T201320100_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T201120120_1_5bb1(R = 0.292739325, X = 1.002594123, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T201120120_1_T1,t2 = pf.powerflow.trafos.T201120120_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T201120130_1_5bba(R = 0.292739325, X = 1.002594123, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T201120130_1_T1,t2 = pf.powerflow.trafos.T201120130_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T205020510_1_5bc3(R = 0.00220000, X = 0.12600000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T205020510_1_T1,t2 = pf.powerflow.trafos.T205020510_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T205020510_2_5bcc(R = 0.00210000, X = 0.105900826, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T205020510_2_T1,t2 = pf.powerflow.trafos.T205020510_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T205220500_1_5bd5(R = 0.004859917, X = 0.18300000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T205220500_1_T2,t2 = pf.powerflow.trafos.T205220500_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T205320500_1_5bde(R = 0.00334000, X = 0.060198347, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T205320500_1_T2,t2 = pf.powerflow.trafos.T205320500_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T205120520_1_5be7(R = 0.025300161, X = 0.714990817, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T205120520_1_T1,t2 = pf.powerflow.trafos.T205120520_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T205120530_1_5bf0(R = 0.020400023, X = 0.559997704, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T205120530_1_T1,t2 = pf.powerflow.trafos.T205120530_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T206120620_1_5bf9(R = 0.05000000, X = 0.50000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T206120620_1_T1,t2 = pf.powerflow.trafos.T206120620_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210021010_1_5c08(R = 0.00361800, X = 0.121739277, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210021010_1_T1,t2 = pf.powerflow.trafos.T210021010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210021010_2_5c11(R = 0.00361800, X = 0.121739277, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210021010_2_T1,t2 = pf.powerflow.trafos.T210021010_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210321000_1_5c1a(R = 0.002610971, X = 0.078000826, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210321000_1_T2,t2 = pf.powerflow.trafos.T210321000_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210321000_2_5c23(R = 0.002610971, X = 0.078000826, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210321000_2_T2,t2 = pf.powerflow.trafos.T210321000_2_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210121030_1_5c2c(R = 0.030240014, X = 1.131404959, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210121030_1_T1,t2 = pf.powerflow.trafos.T210121030_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210121030_2_5c35(R = 0.030240014, X = 1.131404959, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210121030_2_T1,t2 = pf.powerflow.trafos.T210121030_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210621010_1_5c3e(R = 0.00150000, X = 0.002399966, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210621010_1_T2,t2 = pf.powerflow.trafos.T210621010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210121070_1_5c47(R = 0.018899793, X = 0.403001607, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210121070_1_T1,t2 = pf.powerflow.trafos.T210121070_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210121090_1_5c56(R = 0.01000000, X = 0.01599977, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210121090_1_T1,t2 = pf.powerflow.trafos.T210121090_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210921060_1_5c5f(R = 0.01000000, X = 0.01600000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210921060_1_T1,t2 = pf.powerflow.trafos.T210921060_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T210721080_1_5c68(R = 0.049439853, X = 0.796992654, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T210721080_1_T1,t2 = pf.powerflow.trafos.T210721080_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T211021110_1_5c74(R = 0.003436795, X = 0.075299572, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T211021110_1_T1,t2 = pf.powerflow.trafos.T211021110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T211021110_2_5c83(R = 0.006978329, X = 0.073199265, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T211021110_2_T1,t2 = pf.powerflow.trafos.T211021110_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T212121220_1_5c92(R = 0.010248967, X = 0.154998967, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T212121220_1_T2,t2 = pf.powerflow.trafos.T212121220_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T220022010_1_5c9f(R = 0.013927916, X = 0.42790404, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T220022010_1_T1,t2 = pf.powerflow.trafos.T220022010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T224022410_3_5cae(R = 0.005578044, X = 0.209898543, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T224022410_3_T1,t2 = pf.powerflow.trafos.T224022410_3_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T226022610_2_5cbd(R = 0.007152204, X = 0.240082645, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T226022610_2_T1,t2 = pf.powerflow.trafos.T226022610_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T230023030_1_5ccc(R = 0.006089991, X = 0.121799816, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T230023030_1_T1,t2 = pf.powerflow.trafos.T230023030_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T230023030_2_5cdb(R = 0.006089991, X = 0.121799816, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T230023030_2_T1,t2 = pf.powerflow.trafos.T230023030_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T230123020_1_5cea(R = 0.006154356, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T230123020_1_T1,t2 = pf.powerflow.trafos.T230123020_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T230123360_1_5cf6(R = 0.011189738, X = 0.373427456, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T230123360_1_T1,t2 = pf.powerflow.trafos.T230123360_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T230423050_1_5d02(R = 0.007612489, X = 0.15224977, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T230423050_1_T1,t2 = pf.powerflow.trafos.T230423050_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T233023320_1_5d11(R = 0.002821496, X = 0.094138258, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T233023320_1_T1,t2 = pf.powerflow.trafos.T233023320_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T233023330_1_5d20(R = 0.002821496, X = 0.094138258, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T233023330_1_T1,t2 = pf.powerflow.trafos.T233023330_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312031210_1_5d2f(R = 0.004338843, X = 0.143747848, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312031210_1_T1,t2 = pf.powerflow.trafos.T312031210_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312031210_2_5d3e(R = 0.003693807, X = 0.08696941, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312031210_2_T1,t2 = pf.powerflow.trafos.T312031210_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312231200_1_5d47(R = 0.002295971, X = 0.045779614, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312231200_1_T2,t2 = pf.powerflow.trafos.T312231200_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312131220_1_5d50(R = 0.02371545, X = 0.400963499, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312131220_1_T1,t2 = pf.powerflow.trafos.T312131220_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312131240_1_5d59(R = 0.005946051, X = 0.083999082, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312131240_1_T1,t2 = pf.powerflow.trafos.T312131240_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312131240_2_5d66(R = 0.005946051, X = 0.083999082, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312131240_2_T1,t2 = pf.powerflow.trafos.T312131240_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T312231230_1_5d73(R = 4.50000000, X = 45.00000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T312231230_1_T1,t2 = pf.powerflow.trafos.T312231230_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T313031310_1_5d7f(R = 0.00450000, X = 0.057599862, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T313031310_1_T1,t2 = pf.powerflow.trafos.T313031310_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T314031410_1_5d8c(R = 0.005946051, X = 0.075500459, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T314031410_1_T1,t2 = pf.powerflow.trafos.T314031410_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T315031510_1_5d99(R = 0.00450000, X = 0.059099862, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T315031510_1_T1,t2 = pf.powerflow.trafos.T315031510_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T316031610_1_5da6(R = 0.004500103, X = 0.058999587, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T316031610_1_T1,t2 = pf.powerflow.trafos.T316031610_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T320032010_1_5db3(R = 0.050800046, X = 0.789600551, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T320032010_1_T1,t2 = pf.powerflow.trafos.T320032010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T320132030_1_5dc2(R = 0.11000000, X = 1.80000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T320132030_1_T1,t2 = pf.powerflow.trafos.T320132030_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T321132100_1_5dce(R = 0.006150138, X = 0.130003444, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T321132100_1_T2,t2 = pf.powerflow.trafos.T321132100_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T321032120_1_5dd7(R = 0.004769972, X = 0.091701102, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T321032120_1_T1,t2 = pf.powerflow.trafos.T321032120_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T321232110_1_5de0(R = 0.006566116, X = 0.056469238, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T321232110_1_T1,t2 = pf.powerflow.trafos.T321232110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T330033010_1_5de9(R = 0.008525999, X = 0.121799242, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T330033010_1_T1,t2 = pf.powerflow.trafos.T330033010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T330133040_1_5df2(R = 0.014500344, X = 0.318495179, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T330133040_1_T1,t2 = pf.powerflow.trafos.T330133040_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T330533030_1_5e01(R = 0.005417998, X = 0.077400367, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T330533030_1_T1,t2 = pf.powerflow.trafos.T330533030_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T331033610_1_5e12(R = 0.006957989, X = 0.099400826, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T331033610_1_T1,t2 = pf.powerflow.trafos.T331033610_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T336333100_1_5e1b(R = 0.005046832, X = 0.072098255, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T336333100_1_T2,t2 = pf.powerflow.trafos.T336333100_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T334033110_1_5e24(R = 0.005320248, X = 0.07600000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T334033110_1_T1,t2 = pf.powerflow.trafos.T334033110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T331333210_1_5e2d(R = 0.005699954, X = 0.068000459, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T331333210_1_T1,t2 = pf.powerflow.trafos.T331333210_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T332033710_1_5e3e(R = 0.005599518, X = 0.10000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T332033710_1_T1,t2 = pf.powerflow.trafos.T332033710_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T332033710_2_5e4f(R = 0.005600092, X = 0.08000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T332033710_2_T1,t2 = pf.powerflow.trafos.T332033710_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T333033810_1_5e58(R = 0.004384986, X = 0.087699725, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T333033810_1_T1,t2 = pf.powerflow.trafos.T333033810_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T334233510_1_5e61(R = 0.00413000, X = 0.058999587, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T334233510_1_T1,t2 = pf.powerflow.trafos.T334233510_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T336133620_1_5e6a(R = 0.00420000, X = 0.060000413, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T336133620_1_T1,t2 = pf.powerflow.trafos.T336133620_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T336133630_1_5e73(R = 0.003352984, X = 0.047900826, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T336133630_1_T1,t2 = pf.powerflow.trafos.T336133630_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T336633610_1_5e7c(R = 0.00350000, X = 0.05000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T336633610_1_T2,t2 = pf.powerflow.trafos.T336633610_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T336233660_1_5e85(R = 0.001400028, X = 0.020000277, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T336233660_1_T1,t2 = pf.powerflow.trafos.T336233660_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T401040110_1_5e8e(R = 0.044190197, X = 0.789600551, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T401040110_1_T1,t2 = pf.powerflow.trafos.T401040110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T401140130_1_5e9d(R = 0.11000000, X = 1.80000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T401140130_1_T1,t2 = pf.powerflow.trafos.T401140130_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T402140200_1_5ea7(R = 0.00000000, X = 0.117831726, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T402140200_1_T2,t2 = pf.powerflow.trafos.T402140200_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T402040220_1_5eb0(R = 0.005349977, X = 0.129137971, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T402040220_1_T1,t2 = pf.powerflow.trafos.T402040220_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T402240210_1_5eb9(R = 0.00301000, X = 0.047830762, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T402240210_1_T1,t2 = pf.powerflow.trafos.T402240210_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T403040310_1_5ec2(R = 0.004709998, X = 0.166827365, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T403040310_1_T1,t2 = pf.powerflow.trafos.T403040310_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T403240360_1_5ece(R = 0.002967299, X = 0.10510124, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T403240360_1_T2,t2 = pf.powerflow.trafos.T403240360_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T403640330_1_5eda(R = 0.002967299, X = 0.10510124, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T403640330_1_T1,t2 = pf.powerflow.trafos.T403640330_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T404040410_1_5ee6(R = 0.004980808, X = 0.107401286, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T404040410_1_T1,t2 = pf.powerflow.trafos.T404040410_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T404240400_1_5eef(R = 0.002855142, X = 0.059699265, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T404240400_1_T2,t2 = pf.powerflow.trafos.T404240400_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T404140420_1_5ef8(R = 0.007593664, X = 0.062399449, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T404140420_1_T1,t2 = pf.powerflow.trafos.T404140420_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405040510_1_5f01(R = 0.003857955, X = 0.117899449, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405040510_1_T1,t2 = pf.powerflow.trafos.T405040510_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405040510_2_5f0a(R = 0.003857955, X = 0.114989669, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405040510_2_T1,t2 = pf.powerflow.trafos.T405040510_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405240500_1_5f13(R = 0.002583721, X = 0.084603134, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405240500_1_T2,t2 = pf.powerflow.trafos.T405240500_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405240500_2_5f1c(R = 0.002583721, X = 0.083003329, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405240500_2_T2,t2 = pf.powerflow.trafos.T405240500_2_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405140520_1_5f25(R = 0.00547197, X = 0.069118457, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405140520_1_T1,t2 = pf.powerflow.trafos.T405140520_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405140520_2_5f2e(R = 0.00547197, X = 0.069600551, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405140520_2_T1,t2 = pf.powerflow.trafos.T405140520_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405140530_1_5f37(R = 0.055879247, X = 0.867011019, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405140530_1_T1,t2 = pf.powerflow.trafos.T405140530_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405640550_1_5f43(R = 0.02000000, X = 0.120001148, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405640550_1_T1,t2 = pf.powerflow.trafos.T405640550_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T405640550_2_5f50(R = 0.02000000, X = 0.120001148, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T405640550_2_T1,t2 = pf.powerflow.trafos.T405640550_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T406540610_1_5f5d(R = 0.003345732, X = 0.111654809, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T406540610_1_T1,t2 = pf.powerflow.trafos.T406540610_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T406540620_1_5f69(R = 0.003345732, X = 0.111975706, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T406540620_1_T1,t2 = pf.powerflow.trafos.T406540620_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T410041010_1_5f75(R = 0.016070018, X = 0.29607438, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T410041010_1_T1,t2 = pf.powerflow.trafos.T410041010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T410041020_1_5f86(R = 0.005547062, X = 0.084299816, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T410041020_1_T1,t2 = pf.powerflow.trafos.T410041020_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T410441000_1_5f8f(R = 0.005061767, X = 0.094998967, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T410441000_1_T2,t2 = pf.powerflow.trafos.T410441000_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T410041050_1_5f98(R = 0.04500000, X = 0.760009183, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T410041050_1_T1,t2 = pf.powerflow.trafos.T410041050_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T410241040_1_5fa4(R = 0.014751148, X = 0.201900826, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T410241040_1_T1,t2 = pf.powerflow.trafos.T410241040_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T412141220_1_5fad(R = 0.05000000, X = 0.119995409, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T412141220_1_T1,t2 = pf.powerflow.trafos.T412141220_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501550090_1_5fba(R = 0.114288889, X = 1.771444444, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501550090_1_T1,t2 = pf.powerflow.trafos.T501550090_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501150140_1_5fc7(R = 0.00513921, X = 0.121000918, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501150140_1_T1,t2 = pf.powerflow.trafos.T501150140_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501150140_2_5fd0(R = 0.00513921, X = 0.121000918, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501150140_2_T1,t2 = pf.powerflow.trafos.T501150140_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501350140_1_5fd9(R = 0.04500000, X = 0.75000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501350140_1_T2,t2 = pf.powerflow.trafos.T501350140_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501550180_1_5fe8(R = 0.04000000, X = 0.593002755, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501550180_1_T1,t2 = pf.powerflow.trafos.T501550180_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501650170_1_5ff9(R = 0.003491965, X = 0.103999082, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501650170_1_T1,t2 = pf.powerflow.trafos.T501650170_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T501750180_1_6008(R = 0.047089073, X = 0.82899449, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T501750180_1_T1,t2 = pf.powerflow.trafos.T501750180_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T502050220_1_6017(R = 0.03000000, X = 0.538997934, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T502050220_1_T1,t2 = pf.powerflow.trafos.T502050220_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T502250210_1_6026(R = 0.04000000, X = 0.593002755, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T502250210_1_T1,t2 = pf.powerflow.trafos.T502250210_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T503950240_1_6035(R = 0.05000000, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T503950240_1_T1,t2 = pf.powerflow.trafos.T503950240_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T503050310_1_6044(R = 0.022699725, X = 0.538498623, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T503050310_1_T1,t2 = pf.powerflow.trafos.T503050310_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T503150350_1_6053(R = 0.15000000, X = 2.38000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T503150350_1_T2,t2 = pf.powerflow.trafos.T503150350_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T503650370_1_605f(R = 0.37501385, X = 4.916620499, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T503650370_1_T1,t2 = pf.powerflow.trafos.T503650370_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T504050410_1_606e(R = 0.03500000, X = 0.740013774, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T504050410_1_T1,t2 = pf.powerflow.trafos.T504050410_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505050520_1_607d(R = 0.004174501, X = 0.218100034, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505050520_1_T1,t2 = pf.powerflow.trafos.T505050520_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505950500_1_6086(R = 0.002450207, X = 0.128000517, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505950500_1_T1,t2 = pf.powerflow.trafos.T505950500_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505950500_2_608f(R = 0.002450207, X = 0.128000517, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505950500_2_T1,t2 = pf.powerflow.trafos.T505950500_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T50505052110_1_6098(R = 0.004174501, X = 0.218100034, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T50505052110_1_T1,t2 = pf.powerflow.trafos.T50505052110_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505250590_1_60a1(R = 0.002340238, X = 0.122267562, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505250590_1_T2,t2 = pf.powerflow.trafos.T505250590_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505350620_1_60aa(R = 0.004752056, X = 0.110485227, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505350620_1_T1,t2 = pf.powerflow.trafos.T505350620_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505450630_1_60bb(R = 0.004752056, X = 0.110485227, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505450630_1_T1,t2 = pf.powerflow.trafos.T505450630_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505550660_1_60cc(R = 0.004752056, X = 0.110485227, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505550660_1_T1,t2 = pf.powerflow.trafos.T505550660_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505650640_1_60dd(R = 0.004752056, X = 0.110485227, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505650640_1_T1,t2 = pf.powerflow.trafos.T505650640_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505750650_1_60ee(R = 0.004752056, X = 0.110485227, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505750650_1_T1,t2 = pf.powerflow.trafos.T505750650_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T505850610_1_60ff(R = 0.004752056, X = 0.110485227, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T505850610_1_T1,t2 = pf.powerflow.trafos.T505850610_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T50521150590_1_6110(R = 0.002340238, X = 0.122267562, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T50521150590_1_T2,t2 = pf.powerflow.trafos.T50521150590_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5071507020_1_6119(R = 0.00500000, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5071507020_1_T2,t2 = pf.powerflow.trafos.T5071507020_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5072507010_1_612a(R = 0.005007934, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5072507010_1_T2,t2 = pf.powerflow.trafos.T5072507010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5073507010_1_613b(R = 0.005007934, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5073507010_1_T2,t2 = pf.powerflow.trafos.T5073507010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5074507010_1_614c(R = 0.005007934, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5074507010_1_T2,t2 = pf.powerflow.trafos.T5074507010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5075507010_1_615d(R = 0.005007934, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5075507010_1_T2,t2 = pf.powerflow.trafos.T5075507010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5076507010_1_616e(R = 0.005007934, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5076507010_1_T2,t2 = pf.powerflow.trafos.T5076507010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5077507020_1_617f(R = 0.00500000, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5077507020_1_T2,t2 = pf.powerflow.trafos.T5077507020_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T5078507010_1_6190(R = 0.005007934, X = 0.12000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T5078507010_1_T2,t2 = pf.powerflow.trafos.T5078507010_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T509050810_1_61a1(R = 0.00630000, X = 0.107799357, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T509050810_1_T1,t2 = pf.powerflow.trafos.T509050810_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T509050820_2_61b0(R = 0.00280000, X = 0.050401286, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T509050820_2_T1,t2 = pf.powerflow.trafos.T509050820_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T508650870_1_61bf(R = 0.008782507, X = 0.05400000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T508650870_1_T1,t2 = pf.powerflow.trafos.T508650870_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T509150860_1_61c8(R = 0.003697658, X = 0.078099174, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T509150860_1_T1,t2 = pf.powerflow.trafos.T509150860_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T508750910_1_61d1(R = 0.02000000, X = 0.360009183, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T508750910_1_T2,t2 = pf.powerflow.trafos.T508750910_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T508750910_2_61e0(R = 0.00318905, X = 0.046799816, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T508750910_2_T2,t2 = pf.powerflow.trafos.T508750910_2_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T508850890_1_61e9(R = 0.30697888, X = 2.17456382, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T508850890_1_T1,t2 = pf.powerflow.trafos.T508850890_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T509250930_1_61f8(R = 0.003865978, X = 0.083299525, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T509250930_1_T1,t2 = pf.powerflow.trafos.T509250930_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T509250930_2_6207(R = 0.00474999, X = 0.079998174, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T509250930_2_T1,t2 = pf.powerflow.trafos.T509250930_2_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T509550960_1_6216(R = 0.554196511, X = 3.30000000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T509550960_1_T1,t2 = pf.powerflow.trafos.T509550960_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T510151000_1_6225(R = 0.02250000, X = 0.419995409, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T510151000_1_T2,t2 = pf.powerflow.trafos.T510151000_1_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T510151000_2_6234(R = 0.053298898, X = 0.794008264, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T510151000_2_T2,t2 = pf.powerflow.trafos.T510151000_2_T1);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T510151050_1_6243(R = 0.036000132, X = 0.087801983, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T510151050_1_T1,t2 = pf.powerflow.trafos.T510151050_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T510151060_1_6252(R = 0.02600000, X = 0.06360000, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T510151060_1_T1,t2 = pf.powerflow.trafos.T510151060_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T520052010_1_6261(R = 0.04750000, X = 0.673324151, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T520052010_1_T1,t2 = pf.powerflow.trafos.T520052010_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T520052020_1_6272(R = 0.016069943, X = 0.321424071, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T520052020_1_T1,t2 = pf.powerflow.trafos.T520052020_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T520052030_1_6283(R = 0.246210632, X = 1.911111111, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T520052030_1_T1,t2 = pf.powerflow.trafos.T520052030_1_T2);
OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer T521152100_1_6292(R = 0.02250000, X = 0.444490358, G = 0.00000000, B = 0.00000000,t1 = pf.powerflow.trafos.T521152100_1_T2,t2 = pf.powerflow.trafos.T521152100_1_T1);
// -- Linear Shunt Compensators:
OpenIPSL.Electrical.Banks.PSSE.Shunt SHHVOLSV_11KV5099(G = 0.0000000000,B = 0.1000000000);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHVEM_BRAEDSLA509d(G = 0.0000000000,B = 0.0499999997);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHHAM50a1(G = 0.0000000000,B = 0.35000000006);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHBRENNIME50a5(G = 0.0000000000,B = 0.7500000112);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHSVC_16KV50a9(G = 0.0000000000,B = 0.1211000000);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHOLAFSVIK50ad(G = -0.01799999824,B = 0.0090000013);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHGEIRADAL50b1(G = 0.0000000000,B = 0.2000000075);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHBOLUNGAVIK50b5(G = 0.0000000000,B = -0.02999999851);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHISA_FORGANGS50b9(G = -0.00600000002,B = 0.00359999999);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHBILDUDALUR3350bd(G = -0.01599999964,B = 0.01340000016);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHBILDUDALUR3350c1(G = 0.0000000000,B = 0.02499999985);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHBOL_FORGANGS50c5(G = -0.00200000005,B = 0.00100000002);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHHOLMAVIK50c9(G = -0.02199999978,B = 0.01060000039);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHRANG50cd(G = 0.0000000000,B = 0.2000000075);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHHRYGG50d1(G = 0.0000000000,B = 0.00740000765);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHTEIGHO_250d5(G = 0.0000000000,B = -0.04999999994);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHSMYRLA_6_350d9(G = -0.01300000001,B = 0.00200000002);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHDIODE_150dd(G = 0.0000000000,B = 0.62000000142);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHDIODE_250e1(G = 0.0000000000,B = 0.62000000142);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHDIODE_350e5(G = 0.0000000000,B = 0.62000000142);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHDIODE_450e9(G = 0.0000000000,B = 0.62000000142);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHDIODE_550ed(G = 0.0000000000,B = 0.62000000142);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHDIODE_650f1(G = 0.0000000000,B = 0.62000000142);
OpenIPSL.Electrical.Banks.PSSE.Shunt SHSTO_VARFJ50f5(G = 0.0000000000,B = 0.02499999997);
// -- Conform Loads:
OpenIPSL.Electrical.Loads.PSSE.Load CL1015_1_4e09(V_b = BUR11SP5_3c7d.V_b, v_0 = pf.powerflow.bus.VBUR11SP5_3c7d,angle_0 = pf.powerflow.bus.ABUR11SP5_3c7d,P_0 = pf.powerflow.loads.PCL1015_1_4e09,Q_0 = pf.powerflow.loads.QCL1015_1_4e09, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1018_1_4e10(V_b = BUR11SP4_3c9b.V_b, v_0 = pf.powerflow.bus.VBUR11SP4_3c9b,angle_0 = pf.powerflow.bus.ABUR11SP4_3c9b,P_0 = pf.powerflow.loads.PCL1018_1_4e10,Q_0 = pf.powerflow.loads.QCL1018_1_4e10, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1078_1_4e17(V_b = FLU_33KV_3dde.V_b, v_0 = pf.powerflow.bus.VFLU_33KV_3dde,angle_0 = pf.powerflow.bus.AFLU_33KV_3dde,P_0 = pf.powerflow.loads.PCL1078_1_4e17,Q_0 = pf.powerflow.loads.QCL1078_1_4e17, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1085_1_4e1e(V_b = FLU_11KV_3e46.V_b, v_0 = pf.powerflow.bus.VFLU_11KV_3e46,angle_0 = pf.powerflow.bus.AFLU_11KV_3e46,P_0 = pf.powerflow.loads.PCL1085_1_4e1e,Q_0 = pf.powerflow.loads.QCL1085_1_4e1e, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1086_1_4e25(V_b = HELLA_11KV_3e55.V_b, v_0 = pf.powerflow.bus.VHELLA_11KV_3e55,angle_0 = pf.powerflow.bus.AHELLA_11KV_3e55,P_0 = pf.powerflow.loads.PCL1086_1_4e25,Q_0 = pf.powerflow.loads.QCL1086_1_4e25, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1087_1_4e2c(V_b = HVOLSV_11KV_3e64.V_b, v_0 = pf.powerflow.bus.VHVOLSV_11KV_3e64,angle_0 = pf.powerflow.bus.AHVOLSV_11KV_3e64,P_0 = pf.powerflow.loads.PCL1087_1_4e2c,Q_0 = pf.powerflow.loads.QCL1087_1_4e2c, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1091_1_4e33(V_b = RIMAKOT_3ea0.V_b, v_0 = pf.powerflow.bus.VRIMAKOT_3ea0,angle_0 = pf.powerflow.bus.ARIMAKOT_3ea0,P_0 = pf.powerflow.loads.PCL1091_1_4e33,Q_0 = pf.powerflow.loads.QCL1091_1_4e33, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1092_1_4e3a(V_b = VEM_FORGANGS_3eaf.V_b, v_0 = pf.powerflow.bus.VVEM_FORGANGS_3eaf,angle_0 = pf.powerflow.bus.AVEM_FORGANGS_3eaf,P_0 = pf.powerflow.loads.PCL1092_1_4e3a,Q_0 = pf.powerflow.loads.QCL1092_1_4e3a, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1095_1_4e41(V_b = VEM_BRAEDSLA_3edb.V_b, v_0 = pf.powerflow.bus.VVEM_BRAEDSLA_3edb,angle_0 = pf.powerflow.bus.AVEM_BRAEDSLA_3edb,P_0 = pf.powerflow.loads.PCL1095_1_4e41,Q_0 = pf.powerflow.loads.QCL1095_1_4e41, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1098_1_4e48(V_b = VEM_KETILL_3f06.V_b, v_0 = pf.powerflow.bus.VVEM_KETILL_3f06,angle_0 = pf.powerflow.bus.AVEM_KETILL_3f06,P_0 = pf.powerflow.loads.PCL1098_1_4e48,Q_0 = pf.powerflow.loads.QCL1098_1_4e48, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1134_1_4e4f(V_b = STN1_3fd5.V_b, v_0 = pf.powerflow.bus.VSTN1_3fd5,angle_0 = pf.powerflow.bus.ASTN1_3fd5,P_0 = pf.powerflow.loads.PCL1134_1_4e4f,Q_0 = pf.powerflow.loads.QCL1134_1_4e4f, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1137_1_4e56(V_b = HVERAG_11KV_3ff3.V_b, v_0 = pf.powerflow.bus.VHVERAG_11KV_3ff3,angle_0 = pf.powerflow.bus.AHVERAG_11KV_3ff3,P_0 = pf.powerflow.loads.PCL1137_1_4e56,Q_0 = pf.powerflow.loads.QCL1137_1_4e56, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1148_1_4e5d(V_b = THORLAK_11KV_4085.V_b, v_0 = pf.powerflow.bus.VTHORLAK_11KV_4085,angle_0 = pf.powerflow.bus.ATHORLAK_11KV_4085,P_0 = pf.powerflow.loads.PCL1148_1_4e5d,Q_0 = pf.powerflow.loads.QCL1148_1_4e5d, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1150_1_4e64(V_b = SEL_SKERDANL_40a3.V_b, v_0 = pf.powerflow.bus.VSEL_SKERDANL_40a3,angle_0 = pf.powerflow.bus.ASEL_SKERDANL_40a3,P_0 = pf.powerflow.loads.PCL1150_1_4e64,Q_0 = pf.powerflow.loads.QCL1150_1_4e64, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1151_1_4e6b(V_b = SEL_FORGANGS_40b2.V_b, v_0 = pf.powerflow.bus.VSEL_FORGANGS_40b2,angle_0 = pf.powerflow.bus.ASEL_FORGANGS_40b2,P_0 = pf.powerflow.loads.PCL1151_1_4e6b,Q_0 = pf.powerflow.loads.QCL1151_1_4e6b, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL1200_1_4e72(V_b = NESJAV_40c1.V_b, v_0 = pf.powerflow.bus.VNESJAV_40c1,angle_0 = pf.powerflow.bus.ANESJAV_40c1,P_0 = pf.powerflow.loads.PCL1200_1_4e72,Q_0 = pf.powerflow.loads.QCL1200_1_4e72, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2018_1_4e79(V_b = RR_A12_4171.V_b, v_0 = pf.powerflow.bus.VRR_A12_4171,angle_0 = pf.powerflow.bus.ARR_A12_4171,P_0 = pf.powerflow.loads.PCL2018_1_4e79,Q_0 = pf.powerflow.loads.QCL2018_1_4e79, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2030_1_4e8e(V_b = KORPA_419d.V_b, v_0 = pf.powerflow.bus.VKORPA_419d,angle_0 = pf.powerflow.bus.AKORPA_419d,P_0 = pf.powerflow.loads.PCL2030_1_4e8e,Q_0 = pf.powerflow.loads.QCL2030_1_4e8e, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2030_2_4e95(V_b = KORPA_419d.V_b, v_0 = pf.powerflow.bus.VKORPA_419d,angle_0 = pf.powerflow.bus.AKORPA_419d,P_0 = pf.powerflow.loads.PCL2030_2_4e95,Q_0 = pf.powerflow.loads.QCL2030_2_4e95, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2062_1_4e9c(V_b = RH_11_41f6.V_b, v_0 = pf.powerflow.bus.VRH_11_41f6,angle_0 = pf.powerflow.bus.ARH_11_41f6,P_0 = pf.powerflow.loads.PCL2062_1_4e9c,Q_0 = pf.powerflow.loads.QCL2062_1_4e9c, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2103_1_4ea3(V_b = BRENN_11_4232.V_b, v_0 = pf.powerflow.bus.VBRENN_11_4232,angle_0 = pf.powerflow.bus.ABRENN_11_4232,P_0 = pf.powerflow.loads.PCL2103_1_4ea3,Q_0 = pf.powerflow.loads.QCL2103_1_4ea3, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2111_1_4eaa(V_b = A20_6_429b.V_b, v_0 = pf.powerflow.bus.VA20_6_429b,angle_0 = pf.powerflow.bus.AA20_6_429b,P_0 = pf.powerflow.loads.PCL2111_1_4eaa,Q_0 = pf.powerflow.loads.QCL2111_1_4eaa, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2201_1_4ec6(V_b = A1_11_4312.V_b, v_0 = pf.powerflow.bus.VA1_11_4312,angle_0 = pf.powerflow.bus.AA1_11_4312,P_0 = pf.powerflow.loads.PCL2201_1_4ec6,Q_0 = pf.powerflow.loads.QCL2201_1_4ec6, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2210_1_4ecd(V_b = A2_4321.V_b, v_0 = pf.powerflow.bus.VA2_4321,angle_0 = pf.powerflow.bus.AA2_4321,P_0 = pf.powerflow.loads.PCL2210_1_4ecd,Q_0 = pf.powerflow.loads.QCL2210_1_4ecd, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2220_1_4ed4(V_b = A3_4330.V_b, v_0 = pf.powerflow.bus.VA3_4330,angle_0 = pf.powerflow.bus.AA3_4330,P_0 = pf.powerflow.loads.PCL2220_1_4ed4,Q_0 = pf.powerflow.loads.QCL2220_1_4ed4, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2231_1_4edb(V_b = A4_11_433f.V_b, v_0 = pf.powerflow.bus.VA4_11_433f,angle_0 = pf.powerflow.bus.AA4_11_433f,P_0 = pf.powerflow.loads.PCL2231_1_4edb,Q_0 = pf.powerflow.loads.QCL2231_1_4edb, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2241_1_4ee2(V_b = A5_11_435d.V_b, v_0 = pf.powerflow.bus.VA5_11_435d,angle_0 = pf.powerflow.bus.AA5_11_435d,P_0 = pf.powerflow.loads.PCL2241_1_4ee2,Q_0 = pf.powerflow.loads.QCL2241_1_4ee2, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2251_1_4ee9(V_b = A6_11_436c.V_b, v_0 = pf.powerflow.bus.VA6_11_436c,angle_0 = pf.powerflow.bus.AA6_11_436c,P_0 = pf.powerflow.loads.PCL2251_1_4ee9,Q_0 = pf.powerflow.loads.QCL2251_1_4ee9, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2261_1_4ef0(V_b = A7_11_438a.V_b, v_0 = pf.powerflow.bus.VA7_11_438a,angle_0 = pf.powerflow.bus.AA7_11_438a,P_0 = pf.powerflow.loads.PCL2261_1_4ef0,Q_0 = pf.powerflow.loads.QCL2261_1_4ef0, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2300_1_4ef7(V_b = FITJAR_4399.V_b, v_0 = pf.powerflow.bus.VFITJAR_4399,angle_0 = pf.powerflow.bus.AFITJAR_4399,P_0 = pf.powerflow.loads.PCL2300_1_4ef7,Q_0 = pf.powerflow.loads.QCL2300_1_4ef7, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2301_1_4efe(V_b = SVARTSENGI_43a8.V_b, v_0 = pf.powerflow.bus.VSVARTSENGI_43a8,angle_0 = pf.powerflow.bus.ASVARTSENGI_43a8,P_0 = pf.powerflow.loads.PCL2301_1_4efe,Q_0 = pf.powerflow.loads.QCL2301_1_4efe, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2305_1_4f05(V_b = STA_33KV_43e4.V_b, v_0 = pf.powerflow.bus.VSTA_33KV_43e4,angle_0 = pf.powerflow.bus.ASTA_33KV_43e4,P_0 = pf.powerflow.loads.PCL2305_1_4f05,Q_0 = pf.powerflow.loads.QCL2305_1_4f05, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL2350_1_4f0c(V_b = VALLARHEIDI_443c.V_b, v_0 = pf.powerflow.bus.VVALLARHEIDI_443c,angle_0 = pf.powerflow.bus.AVALLARHEIDI_443c,P_0 = pf.powerflow.loads.PCL2350_1_4f0c,Q_0 = pf.powerflow.loads.QCL2350_1_4f0c, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3124_1_4f13(V_b = VAT_19KV_4487.V_b, v_0 = pf.powerflow.bus.VVAT_19KV_4487,angle_0 = pf.powerflow.bus.AVAT_19KV_4487,P_0 = pf.powerflow.loads.PCL3124_1_4f13,Q_0 = pf.powerflow.loads.QCL3124_1_4f13, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3131_1_4f1a(V_b = VEG_11KV_44a5.V_b, v_0 = pf.powerflow.bus.VVEG_11KV_44a5,angle_0 = pf.powerflow.bus.AVEG_11KV_44a5,P_0 = pf.powerflow.loads.PCL3131_1_4f1a,Q_0 = pf.powerflow.loads.QCL3131_1_4f1a, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3141_1_4f21(V_b = OLA_19KV_44c3.V_b, v_0 = pf.powerflow.bus.VOLA_19KV_44c3,angle_0 = pf.powerflow.bus.AOLA_19KV_44c3,P_0 = pf.powerflow.loads.PCL3141_1_4f21,Q_0 = pf.powerflow.loads.QCL3141_1_4f21, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3151_1_4f28(V_b = VOG_11KV_44e1.V_b, v_0 = pf.powerflow.bus.VVOG_11KV_44e1,angle_0 = pf.powerflow.bus.AVOG_11KV_44e1,P_0 = pf.powerflow.loads.PCL3151_1_4f28,Q_0 = pf.powerflow.loads.QCL3151_1_4f28, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3161_1_4f2f(V_b = GRU_19KV_44ff.V_b, v_0 = pf.powerflow.bus.VGRU_19KV_44ff,angle_0 = pf.powerflow.bus.AGRU_19KV_44ff,P_0 = pf.powerflow.loads.PCL3161_1_4f2f,Q_0 = pf.powerflow.loads.QCL3161_1_4f2f, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3201_1_4f36(V_b = GLERA_19_452c.V_b, v_0 = pf.powerflow.bus.VGLERA_19_452c,angle_0 = pf.powerflow.bus.AGLERA_19_452c,P_0 = pf.powerflow.loads.PCL3201_1_4f36,Q_0 = pf.powerflow.loads.QCL3201_1_4f36, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3211_1_4f3d(V_b = GEIRADA3_4559.V_b, v_0 = pf.powerflow.bus.VGEIRADA3_4559,angle_0 = pf.powerflow.bus.AGEIRADA3_4559,P_0 = pf.powerflow.loads.PCL3211_1_4f3d,Q_0 = pf.powerflow.loads.QCL3211_1_4f3d, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3321_1_4f44(V_b = PATREKSF11_4600.V_b, v_0 = pf.powerflow.bus.VPATREKSF11_4600,angle_0 = pf.powerflow.bus.APATREKSF11_4600,P_0 = pf.powerflow.loads.PCL3321_1_4f44,Q_0 = pf.powerflow.loads.QCL3321_1_4f44, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3333_1_4f4b(V_b = BOL_SKER_ANL_461e.V_b, v_0 = pf.powerflow.bus.VBOL_SKER_ANL_461e,angle_0 = pf.powerflow.bus.ABOL_SKER_ANL_461e,P_0 = pf.powerflow.loads.PCL3333_1_4f4b,Q_0 = pf.powerflow.loads.QCL3333_1_4f4b, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3362_1_4f52(V_b = FLATEYRI_4677.V_b, v_0 = pf.powerflow.bus.VFLATEYRI_4677,angle_0 = pf.powerflow.bus.AFLATEYRI_4677,P_0 = pf.powerflow.loads.PCL3362_1_4f52,Q_0 = pf.powerflow.loads.QCL3362_1_4f52, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3370_1_4f59(V_b = ISA_SKERDANL_46a4.V_b, v_0 = pf.powerflow.bus.VISA_SKERDANL_46a4,angle_0 = pf.powerflow.bus.AISA_SKERDANL_46a4,P_0 = pf.powerflow.loads.PCL3370_1_4f59,Q_0 = pf.powerflow.loads.QCL3370_1_4f59, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3371_1_4f60(V_b = ISA_FORGANGS_46b3.V_b, v_0 = pf.powerflow.bus.VISA_FORGANGS_46b3,angle_0 = pf.powerflow.bus.AISA_FORGANGS_46b3,P_0 = pf.powerflow.loads.PCL3371_1_4f60,Q_0 = pf.powerflow.loads.QCL3371_1_4f60, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3380_1_4f67(V_b = BILDUDALUR33_46c1.V_b, v_0 = pf.powerflow.bus.VBILDUDALUR33_46c1,angle_0 = pf.powerflow.bus.ABILDUDALUR33_46c1,P_0 = pf.powerflow.loads.PCL3380_1_4f67,Q_0 = pf.powerflow.loads.QCL3380_1_4f67, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3381_1_4f6e(V_b = BOL_FORGANGS_46d0.V_b, v_0 = pf.powerflow.bus.VBOL_FORGANGS_46d0,angle_0 = pf.powerflow.bus.ABOL_FORGANGS_46d0,P_0 = pf.powerflow.loads.PCL3381_1_4f6e,Q_0 = pf.powerflow.loads.QCL3381_1_4f6e, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL3390_1_4f75(V_b = HOLMAVIK_46de.V_b, v_0 = pf.powerflow.bus.VHOLMAVIK_46de,angle_0 = pf.powerflow.bus.AHOLMAVIK_46de,P_0 = pf.powerflow.loads.PCL3390_1_4f75,Q_0 = pf.powerflow.loads.QCL3390_1_4f75, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4011_1_4f7c(V_b = HRUTA_19_46fc.V_b, v_0 = pf.powerflow.bus.VHRUTA_19_46fc,angle_0 = pf.powerflow.bus.AHRUTA_19_46fc,P_0 = pf.powerflow.loads.PCL4011_1_4f7c,Q_0 = pf.powerflow.loads.QCL4011_1_4f7c, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4021_1_4f83(V_b = LAXAVA_2_4729.V_b, v_0 = pf.powerflow.bus.VLAXAVA_2_4729,angle_0 = pf.powerflow.bus.ALAXAVA_2_4729,P_0 = pf.powerflow.loads.PCL4021_1_4f83,Q_0 = pf.powerflow.loads.QCL4021_1_4f83, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4042_1_4f8a(V_b = VARMAHL2_47ad.V_b, v_0 = pf.powerflow.bus.VVARMAHL2_47ad,angle_0 = pf.powerflow.bus.AVARMAHL2_47ad,P_0 = pf.powerflow.loads.PCL4042_1_4f8a,Q_0 = pf.powerflow.loads.QCL4042_1_4f8a, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4045_1_4f91(V_b = SAUDARKR_47bc.V_b, v_0 = pf.powerflow.bus.VSAUDARKR_47bc,angle_0 = pf.powerflow.bus.ASAUDARKR_47bc,P_0 = pf.powerflow.loads.PCL4045_1_4f91,Q_0 = pf.powerflow.loads.QCL4045_1_4f91, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4051_1_4f98(V_b = RANGARV5_47da.V_b, v_0 = pf.powerflow.bus.VRANGARV5_47da,angle_0 = pf.powerflow.bus.ARANGARV5_47da,P_0 = pf.powerflow.loads.PCL4051_1_4f98,Q_0 = pf.powerflow.loads.QCL4051_1_4f98, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4053_1_4f9f(V_b = RANG_11_47fc.V_b, v_0 = pf.powerflow.bus.VRANG_11_47fc,angle_0 = pf.powerflow.bus.ARANG_11_47fc,P_0 = pf.powerflow.loads.PCL4053_1_4f9f,Q_0 = pf.powerflow.loads.QCL4053_1_4f9f, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4058_1_4fad(V_b = DALVIK_4829.V_b, v_0 = pf.powerflow.bus.VDALVIK_4829,angle_0 = pf.powerflow.bus.ADALVIK_4829,P_0 = pf.powerflow.loads.PCL4058_1_4fad,Q_0 = pf.powerflow.loads.QCL4058_1_4fad, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4104_1_4fb4(V_b = LAXA11_48ab.V_b, v_0 = pf.powerflow.bus.VLAXA11_48ab,angle_0 = pf.powerflow.bus.ALAXA11_48ab,P_0 = pf.powerflow.loads.PCL4104_1_4fb4,Q_0 = pf.powerflow.loads.QCL4104_1_4fb4, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4108_1_4fbb(V_b = HUSAVIK_48c8.V_b, v_0 = pf.powerflow.bus.VHUSAVIK_48c8,angle_0 = pf.powerflow.bus.AHUSAVIK_48c8,P_0 = pf.powerflow.loads.PCL4108_1_4fbb,Q_0 = pf.powerflow.loads.QCL4108_1_4fbb, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4110_1_4fc2(V_b = LINDAB_48d7.V_b, v_0 = pf.powerflow.bus.VLINDAB_48d7,angle_0 = pf.powerflow.bus.ALINDAB_48d7,P_0 = pf.powerflow.loads.PCL4110_1_4fc2,Q_0 = pf.powerflow.loads.QCL4110_1_4fc2, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4120_1_4fc9(V_b = KOPASKER_48e6.V_b, v_0 = pf.powerflow.bus.VKOPASKER_48e6,angle_0 = pf.powerflow.bus.AKOPASKER_48e6,P_0 = pf.powerflow.loads.PCL4120_1_4fc9,Q_0 = pf.powerflow.loads.QCL4120_1_4fc9, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL4122_1_4fd0(V_b = THEYSTAR_11_4904.V_b, v_0 = pf.powerflow.bus.VTHEYSTAR_11_4904,angle_0 = pf.powerflow.bus.ATHEYSTAR_11_4904,P_0 = pf.powerflow.loads.PCL4122_1_4fd0,Q_0 = pf.powerflow.loads.QCL4122_1_4fd0, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5013_1_4fd7(V_b = STUDLAR_11_4940.V_b, v_0 = pf.powerflow.bus.VSTUDLAR_11_4940,angle_0 = pf.powerflow.bus.ASTUDLAR_11_4940,P_0 = pf.powerflow.loads.PCL5013_1_4fd7,Q_0 = pf.powerflow.loads.QCL5013_1_4fd7, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5015_1_4fde(V_b = EGILSSTADIR_495e.V_b, v_0 = pf.powerflow.bus.VEGILSSTADIR_495e,angle_0 = pf.powerflow.bus.AEGILSSTADIR_495e,P_0 = pf.powerflow.loads.PCL5015_1_4fde,Q_0 = pf.powerflow.loads.QCL5015_1_4fde, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5021_1_4fe5(V_b = TEIGHO_2_49b8.V_b, v_0 = pf.powerflow.bus.VTEIGHO_2_49b8,angle_0 = pf.powerflow.bus.ATEIGHO_2_49b8,P_0 = pf.powerflow.loads.PCL5021_1_4fe5,Q_0 = pf.powerflow.loads.QCL5021_1_4fe5, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5027_1_4fec(V_b = HOF_SKERDANL_4a02.V_b, v_0 = pf.powerflow.bus.VHOF_SKERDANL_4a02,angle_0 = pf.powerflow.bus.AHOF_SKERDANL_4a02,P_0 = pf.powerflow.loads.PCL5027_1_4fec,Q_0 = pf.powerflow.loads.QCL5027_1_4fec, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5039_1_4ff3(V_b = HOF_FORGANGS_4a79.V_b, v_0 = pf.powerflow.bus.VHOF_FORGANGS_4a79,angle_0 = pf.powerflow.bus.AHOF_FORGANGS_4a79,P_0 = pf.powerflow.loads.PCL5039_1_4ff3,Q_0 = pf.powerflow.loads.QCL5039_1_4ff3, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5041_1_4ffa(V_b = PREST_19_4a96.V_b, v_0 = pf.powerflow.bus.VPREST_19_4a96,angle_0 = pf.powerflow.bus.APREST_19_4a96,P_0 = pf.powerflow.loads.PCL5041_1_4ffa,Q_0 = pf.powerflow.loads.QCL5041_1_4ffa, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5051_1_5001(V_b = FLJOTSDA_4ab4.V_b, v_0 = pf.powerflow.bus.VFLJOTSDA_4ab4,angle_0 = pf.powerflow.bus.AFLJOTSDA_4ab4,P_0 = pf.powerflow.loads.PCL5051_1_5001,Q_0 = pf.powerflow.loads.QCL5051_1_5001, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5081_1_5040(V_b = ESK_SKERDANL_4c1c.V_b, v_0 = pf.powerflow.bus.VESK_SKERDANL_4c1c,angle_0 = pf.powerflow.bus.AESK_SKERDANL_4c1c,P_0 = pf.powerflow.loads.PCL5081_1_5040,Q_0 = pf.powerflow.loads.QCL5081_1_5040, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5082_1_5047(V_b = ESK_FORGANGS_4c2b.V_b, v_0 = pf.powerflow.bus.VESK_FORGANGS_4c2b,angle_0 = pf.powerflow.bus.AESK_FORGANGS_4c2b,P_0 = pf.powerflow.loads.PCL5082_1_5047,Q_0 = pf.powerflow.loads.QCL5082_1_5047, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5087_1_504e(V_b = FAS_FORGANGS_4c56.V_b, v_0 = pf.powerflow.bus.VFAS_FORGANGS_4c56,angle_0 = pf.powerflow.bus.AFAS_FORGANGS_4c56,P_0 = pf.powerflow.loads.PCL5087_1_504e,Q_0 = pf.powerflow.loads.QCL5087_1_504e, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5089_1_5055(V_b = STO_VARFJ_4c74.V_b, v_0 = pf.powerflow.bus.VSTO_VARFJ_4c74,angle_0 = pf.powerflow.bus.ASTO_VARFJ_4c74,P_0 = pf.powerflow.loads.PCL5089_1_5055,Q_0 = pf.powerflow.loads.QCL5089_1_5055, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5093_1_505c(V_b = NES_FORGANGS_4caf.V_b, v_0 = pf.powerflow.bus.VNES_FORGANGS_4caf,angle_0 = pf.powerflow.bus.ANES_FORGANGS_4caf,P_0 = pf.powerflow.loads.PCL5093_1_505c,Q_0 = pf.powerflow.loads.QCL5093_1_505c, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5094_1_5063(V_b = FAS_SKERDANL_4cbd.V_b, v_0 = pf.powerflow.bus.VFAS_SKERDANL_4cbd,angle_0 = pf.powerflow.bus.AFAS_SKERDANL_4cbd,P_0 = pf.powerflow.loads.PCL5094_1_5063,Q_0 = pf.powerflow.loads.QCL5094_1_5063, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5096_1_506a(V_b = BREIDDALSVIK_4cd9.V_b, v_0 = pf.powerflow.bus.VBREIDDALSVIK_4cd9,angle_0 = pf.powerflow.bus.ABREIDDALSVIK_4cd9,P_0 = pf.powerflow.loads.PCL5096_1_506a,Q_0 = pf.powerflow.loads.QCL5096_1_506a, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5097_2_5071(V_b = NES_SKERDANL_4ce7.V_b, v_0 = pf.powerflow.bus.VNES_SKERDANL_4ce7,angle_0 = pf.powerflow.bus.ANES_SKERDANL_4ce7,P_0 = pf.powerflow.loads.PCL5097_2_5071,Q_0 = pf.powerflow.loads.QCL5097_2_5071, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5101_1_5078(V_b = SEY_FORGANGS_4d20.V_b, v_0 = pf.powerflow.bus.VSEY_FORGANGS_4d20,angle_0 = pf.powerflow.bus.ASEY_FORGANGS_4d20,P_0 = pf.powerflow.loads.PCL5101_1_5078,Q_0 = pf.powerflow.loads.QCL5101_1_5078, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5107_1_507f(V_b = SEY_KYNDISTO_4d5c.V_b, v_0 = pf.powerflow.bus.VSEY_KYNDISTO_4d5c,angle_0 = pf.powerflow.bus.ASEY_KYNDISTO_4d5c,P_0 = pf.powerflow.loads.PCL5107_1_507f,Q_0 = pf.powerflow.loads.QCL5107_1_507f, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5203_1_5086(V_b = LAG_11KV_4da5.V_b, v_0 = pf.powerflow.bus.VLAG_11KV_4da5,angle_0 = pf.powerflow.bus.ALAG_11KV_4da5,P_0 = pf.powerflow.loads.PCL5203_1_5086,Q_0 = pf.powerflow.loads.QCL5203_1_5086, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5211_1_508d(V_b = VOP_FORGANGS_4dc2.V_b, v_0 = pf.powerflow.bus.VVOP_FORGANGS_4dc2,angle_0 = pf.powerflow.bus.AVOP_FORGANGS_4dc2,P_0 = pf.powerflow.loads.PCL5211_1_508d,Q_0 = pf.powerflow.loads.QCL5211_1_508d, PQBRAK = 0.7, characteristic = 2);
OpenIPSL.Electrical.Loads.PSSE.Load CL5212_1_5094(V_b = VOP_SKERDANL_4dd1.V_b, v_0 = pf.powerflow.bus.VVOP_SKERDANL_4dd1,angle_0 = pf.powerflow.bus.AVOP_SKERDANL_4dd1,P_0 = pf.powerflow.loads.PCL5212_1_5094,Q_0 = pf.powerflow.loads.QCL5212_1_5094, PQBRAK = 0.7, characteristic = 2);
// -- Non Conform Loads:
OpenIPSL.Electrical.Loads.PSSE.Load NCL2022_1_4e80(V_b = IS1_417f.V_b, v_0 = pf.powerflow.bus.VIS1_417f,angle_0 = pf.powerflow.bus.AIS1_417f,P_0 = pf.powerflow.loads.PNCL2022_1_4e80,Q_0 = pf.powerflow.loads.QNCL2022_1_4e80, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL2023_1_4e87(V_b = IS2_418e.V_b, v_0 = pf.powerflow.bus.VIS2_418e,angle_0 = pf.powerflow.bus.AIS2_418e,P_0 = pf.powerflow.loads.PNCL2023_1_4e87,Q_0 = pf.powerflow.loads.QNCL2023_1_4e87, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL2140_1_4eb1(V_b = FESI_42d7.V_b, v_0 = pf.powerflow.bus.VFESI_42d7,angle_0 = pf.powerflow.bus.AFESI_42d7,P_0 = pf.powerflow.loads.PNCL2140_1_4eb1,Q_0 = pf.powerflow.loads.QNCL2140_1_4eb1, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL2160_1_4eb8(V_b = NA_A_42e6.V_b, v_0 = pf.powerflow.bus.VNA_A_42e6,angle_0 = pf.powerflow.bus.ANA_A_42e6,P_0 = pf.powerflow.loads.PNCL2160_1_4eb8,Q_0 = pf.powerflow.loads.QNCL2160_1_4eb8, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL2161_2_4ebf(V_b = NA_B_42f5.V_b, v_0 = pf.powerflow.bus.VNA_B_42f5,angle_0 = pf.powerflow.bus.ANA_B_42f5,P_0 = pf.powerflow.loads.PNCL2161_2_4ebf,Q_0 = pf.powerflow.loads.QNCL2161_2_4ebf, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL4055_1_4fa6(V_b = BECROMAL_480b.V_b, v_0 = pf.powerflow.bus.VBECROMAL_480b,angle_0 = pf.powerflow.bus.ABECROMAL_480b,P_0 = pf.powerflow.loads.PNCL4055_1_4fa6,Q_0 = pf.powerflow.loads.QNCL4055_1_4fa6, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5071_1_5008(V_b = AUX_1_4b97.V_b, v_0 = pf.powerflow.bus.VAUX_1_4b97,angle_0 = pf.powerflow.bus.AAUX_1_4b97,P_0 = pf.powerflow.loads.PNCL5071_1_5008,Q_0 = pf.powerflow.loads.QNCL5071_1_5008, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5072_1_500f(V_b = DIODE_1_4baa.V_b, v_0 = pf.powerflow.bus.VDIODE_1_4baa,angle_0 = pf.powerflow.bus.ADIODE_1_4baa,P_0 = pf.powerflow.loads.PNCL5072_1_500f,Q_0 = pf.powerflow.loads.QNCL5072_1_500f, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5073_1_5016(V_b = DIODE_2_4bba.V_b, v_0 = pf.powerflow.bus.VDIODE_2_4bba,angle_0 = pf.powerflow.bus.ADIODE_2_4bba,P_0 = pf.powerflow.loads.PNCL5073_1_5016,Q_0 = pf.powerflow.loads.QNCL5073_1_5016, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5074_1_501d(V_b = DIODE_3_4bc8.V_b, v_0 = pf.powerflow.bus.VDIODE_3_4bc8,angle_0 = pf.powerflow.bus.ADIODE_3_4bc8,P_0 = pf.powerflow.loads.PNCL5074_1_501d,Q_0 = pf.powerflow.loads.QNCL5074_1_501d, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5075_1_5024(V_b = DIODE_4_4bd6.V_b, v_0 = pf.powerflow.bus.VDIODE_4_4bd6,angle_0 = pf.powerflow.bus.ADIODE_4_4bd6,P_0 = pf.powerflow.loads.PNCL5075_1_5024,Q_0 = pf.powerflow.loads.QNCL5075_1_5024, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5076_1_502b(V_b = DIODE_5_4be4.V_b, v_0 = pf.powerflow.bus.VDIODE_5_4be4,angle_0 = pf.powerflow.bus.ADIODE_5_4be4,P_0 = pf.powerflow.loads.PNCL5076_1_502b,Q_0 = pf.powerflow.loads.QNCL5076_1_502b, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5077_1_5032(V_b = AUX_2_4bf2.V_b, v_0 = pf.powerflow.bus.VAUX_2_4bf2,angle_0 = pf.powerflow.bus.AAUX_2_4bf2,P_0 = pf.powerflow.loads.PNCL5077_1_5032,Q_0 = pf.powerflow.loads.QNCL5077_1_5032, PQBRAK = 0.7, characteristic = 2);
			OpenIPSL.Electrical.Loads.PSSE.Load NCL5078_1_5039(V_b = DIODE_6_4c00.V_b, v_0 = pf.powerflow.bus.VDIODE_6_4c00,angle_0 = pf.powerflow.bus.ADIODE_6_4c00,P_0 = pf.powerflow.loads.PNCL5078_1_5039,Q_0 = pf.powerflow.loads.QNCL5078_1_5039, PQBRAK = 0.7, characteristic = 2);
			// -- Generator Units:

Iceland_modified_PF_solved_package.Generators.GEN1011_1_50fe gen1011_1_50fe(V_b = BURFE_12_3c43.V_b, v_0 = pf.powerflow.bus.VBURFE_12_3c43, angle_0 = pf.powerflow.bus.ABURFE_12_3c43, P_0 = pf.powerflow.loads.PGEN1011_1_50fe, Q_0 = pf.powerflow.loads.QGEN1011_1_50fe);
			
Iceland_modified_PF_solved_package.Generators.GEN1011_2_5104 gen1011_2_5104(V_b = BURFE_12_3c43.V_b, v_0 = pf.powerflow.bus.VBURFE_12_3c43, angle_0 = pf.powerflow.bus.ABURFE_12_3c43, P_0 = pf.powerflow.loads.PGEN1011_2_5104, Q_0 = pf.powerflow.loads.QGEN1011_2_5104);
			
Iceland_modified_PF_solved_package.Generators.GEN1012_1_510c gen1012_1_510c(V_b = BURFE_34_3c53.V_b, v_0 = pf.powerflow.bus.VBURFE_34_3c53, angle_0 = pf.powerflow.bus.ABURFE_34_3c53, P_0 = pf.powerflow.loads.PGEN1012_1_510c, Q_0 = pf.powerflow.loads.QGEN1012_1_510c);
			
Iceland_modified_PF_solved_package.Generators.GEN1012_2_5112 gen1012_2_5112(V_b = BURFE_34_3c53.V_b, v_0 = pf.powerflow.bus.VBURFE_34_3c53, angle_0 = pf.powerflow.bus.ABURFE_34_3c53, P_0 = pf.powerflow.loads.PGEN1012_2_5112, Q_0 = pf.powerflow.loads.QGEN1012_2_5112);
			
Iceland_modified_PF_solved_package.Generators.GEN1013_1_511a gen1013_1_511a(V_b = BURFE_56_3c61.V_b, v_0 = pf.powerflow.bus.VBURFE_56_3c61, angle_0 = pf.powerflow.bus.ABURFE_56_3c61, P_0 = pf.powerflow.loads.PGEN1013_1_511a, Q_0 = pf.powerflow.loads.QGEN1013_1_511a);
			
Iceland_modified_PF_solved_package.Generators.GEN1013_2_5120 gen1013_2_5120(V_b = BURFE_56_3c61.V_b, v_0 = pf.powerflow.bus.VBURFE_56_3c61, angle_0 = pf.powerflow.bus.ABURFE_56_3c61, P_0 = pf.powerflow.loads.PGEN1013_2_5120, Q_0 = pf.powerflow.loads.QGEN1013_2_5120);
			
Iceland_modified_PF_solved_package.Generators.GEN1021_1_5128 gen1021_1_5128(V_b = SIGALD12_3cb8.V_b, v_0 = pf.powerflow.bus.VSIGALD12_3cb8, angle_0 = pf.powerflow.bus.ASIGALD12_3cb8, P_0 = pf.powerflow.loads.PGEN1021_1_5128, Q_0 = pf.powerflow.loads.QGEN1021_1_5128);
			
Iceland_modified_PF_solved_package.Generators.GEN1022_1_5130 gen1022_1_5130(V_b = SIGALD22_3cc8.V_b, v_0 = pf.powerflow.bus.VSIGALD22_3cc8, angle_0 = pf.powerflow.bus.ASIGALD22_3cc8, P_0 = pf.powerflow.loads.PGEN1022_1_5130, Q_0 = pf.powerflow.loads.QGEN1022_1_5130);
			
Iceland_modified_PF_solved_package.Generators.GEN1023_1_5138 gen1023_1_5138(V_b = SIGALD32_3cd6.V_b, v_0 = pf.powerflow.bus.VSIGALD32_3cd6, angle_0 = pf.powerflow.bus.ASIGALD32_3cd6, P_0 = pf.powerflow.loads.PGEN1023_1_5138, Q_0 = pf.powerflow.loads.QGEN1023_1_5138);
			
Iceland_modified_PF_solved_package.Generators.GEN1031_1_5140 gen1031_1_5140(V_b = HRAUNE12_3d20.V_b, v_0 = pf.powerflow.bus.VHRAUNE12_3d20, angle_0 = pf.powerflow.bus.AHRAUNE12_3d20, P_0 = pf.powerflow.loads.PGEN1031_1_5140, Q_0 = pf.powerflow.loads.QGEN1031_1_5140);
			
Iceland_modified_PF_solved_package.Generators.GEN1032_1_5149 gen1032_1_5149(V_b = HRAUNE22_3d2f.V_b, v_0 = pf.powerflow.bus.VHRAUNE22_3d2f, angle_0 = pf.powerflow.bus.AHRAUNE22_3d2f, P_0 = pf.powerflow.loads.PGEN1032_1_5149, Q_0 = pf.powerflow.loads.QGEN1032_1_5149);
			
Iceland_modified_PF_solved_package.Generators.GEN1033_1_5152 gen1033_1_5152(V_b = HRAUNE32_3d3d.V_b, v_0 = pf.powerflow.bus.VHRAUNE32_3d3d, angle_0 = pf.powerflow.bus.AHRAUNE32_3d3d, P_0 = pf.powerflow.loads.PGEN1033_1_5152, Q_0 = pf.powerflow.loads.QGEN1033_1_5152);
			
Iceland_modified_PF_solved_package.Generators.GEN1041_1_515b gen1041_1_515b(V_b = VATN_V1_3d5a.V_b, v_0 = pf.powerflow.bus.VVATN_V1_3d5a, angle_0 = pf.powerflow.bus.AVATN_V1_3d5a, P_0 = pf.powerflow.loads.PGEN1041_1_515b, Q_0 = pf.powerflow.loads.QGEN1041_1_515b);
			
Iceland_modified_PF_solved_package.Generators.GEN1042_1_5163 gen1042_1_5163(V_b = VATN_V2_3d69.V_b, v_0 = pf.powerflow.bus.VVATN_V2_3d69, angle_0 = pf.powerflow.bus.AVATN_V2_3d69, P_0 = pf.powerflow.loads.PGEN1042_1_5163, Q_0 = pf.powerflow.loads.QGEN1042_1_5163);
			
Iceland_modified_PF_solved_package.Generators.GEN1051_1_516b gen1051_1_516b(V_b = SULT_V1_3d86.V_b, v_0 = pf.powerflow.bus.VSULT_V1_3d86, angle_0 = pf.powerflow.bus.ASULT_V1_3d86, P_0 = pf.powerflow.loads.PGEN1051_1_516b, Q_0 = pf.powerflow.loads.QGEN1051_1_516b);
			
Iceland_modified_PF_solved_package.Generators.GEN1052_1_5173 gen1052_1_5173(V_b = SULT_V2_3d95.V_b, v_0 = pf.powerflow.bus.VSULT_V2_3d95, angle_0 = pf.powerflow.bus.ASULT_V2_3d95, P_0 = pf.powerflow.loads.PGEN1052_1_5173, Q_0 = pf.powerflow.loads.QGEN1052_1_5173);
			
Iceland_modified_PF_solved_package.Generators.GEN1061_1_517b gen1061_1_517b(V_b = BUD_V1_3db2.V_b, v_0 = pf.powerflow.bus.VBUD_V1_3db2, angle_0 = pf.powerflow.bus.ABUD_V1_3db2, P_0 = pf.powerflow.loads.PGEN1061_1_517b, Q_0 = pf.powerflow.loads.QGEN1061_1_517b);
			
Iceland_modified_PF_solved_package.Generators.GEN1062_1_5183 gen1062_1_5183(V_b = BUD_V2_3dc1.V_b, v_0 = pf.powerflow.bus.VBUD_V2_3dc1, angle_0 = pf.powerflow.bus.ABUD_V2_3dc1, P_0 = pf.powerflow.loads.PGEN1062_1_5183, Q_0 = pf.powerflow.loads.QGEN1062_1_5183);
			
Iceland_modified_PF_solved_package.Generators.GEN1111_1_518b gen1111_1_518b(V_b = IRAFO_12_3f32.V_b, v_0 = pf.powerflow.bus.VIRAFO_12_3f32, angle_0 = pf.powerflow.bus.AIRAFO_12_3f32, P_0 = pf.powerflow.loads.PGEN1111_1_518b, Q_0 = pf.powerflow.loads.QGEN1111_1_518b);
			
Iceland_modified_PF_solved_package.Generators.GEN1112_1_5193 gen1112_1_5193(V_b = IRAFO_22_3f41.V_b, v_0 = pf.powerflow.bus.VIRAFO_22_3f41, angle_0 = pf.powerflow.bus.AIRAFO_22_3f41, P_0 = pf.powerflow.loads.PGEN1112_1_5193, Q_0 = pf.powerflow.loads.QGEN1112_1_5193);
			
Iceland_modified_PF_solved_package.Generators.GEN1113_1_519b gen1113_1_519b(V_b = IRAFO_32_3f4f.V_b, v_0 = pf.powerflow.bus.VIRAFO_32_3f4f, angle_0 = pf.powerflow.bus.AIRAFO_32_3f4f, P_0 = pf.powerflow.loads.PGEN1113_1_519b, Q_0 = pf.powerflow.loads.QGEN1113_1_519b);
			
Iceland_modified_PF_solved_package.Generators.GEN1121_1_51a3 gen1121_1_51a3(V_b = STEING1_3f8a.V_b, v_0 = pf.powerflow.bus.VSTEING1_3f8a, angle_0 = pf.powerflow.bus.ASTEING1_3f8a, P_0 = pf.powerflow.loads.PGEN1121_1_51a3, Q_0 = pf.powerflow.loads.QGEN1121_1_51a3);
			
Iceland_modified_PF_solved_package.Generators.GEN1122_1_51ab gen1122_1_51ab(V_b = STEING2_3f9a.V_b, v_0 = pf.powerflow.bus.VSTEING2_3f9a, angle_0 = pf.powerflow.bus.ASTEING2_3f9a, P_0 = pf.powerflow.loads.PGEN1122_1_51ab, Q_0 = pf.powerflow.loads.QGEN1122_1_51ab);
			
Iceland_modified_PF_solved_package.Generators.GEN1131_1_51b3 gen1131_1_51b3(V_b = LJOS_VEL_3fc6.V_b, v_0 = pf.powerflow.bus.VLJOS_VEL_3fc6, angle_0 = pf.powerflow.bus.ALJOS_VEL_3fc6, P_0 = pf.powerflow.loads.PGEN1131_1_51b3, Q_0 = pf.powerflow.loads.QGEN1131_1_51b3);
			
Iceland_modified_PF_solved_package.Generators.GEN1131_2_51b9 gen1131_2_51b9(V_b = LJOS_VEL_3fc6.V_b, v_0 = pf.powerflow.bus.VLJOS_VEL_3fc6, angle_0 = pf.powerflow.bus.ALJOS_VEL_3fc6, P_0 = pf.powerflow.loads.PGEN1131_2_51b9, Q_0 = pf.powerflow.loads.QGEN1131_2_51b9);
			
Iceland_modified_PF_solved_package.Generators.GEN1131_3_51bf gen1131_3_51bf(V_b = LJOS_VEL_3fc6.V_b, v_0 = pf.powerflow.bus.VLJOS_VEL_3fc6, angle_0 = pf.powerflow.bus.ALJOS_VEL_3fc6, P_0 = pf.powerflow.loads.PGEN1131_3_51bf, Q_0 = pf.powerflow.loads.QGEN1131_3_51bf);
			
Iceland_modified_PF_solved_package.Generators.GEN1141_1_51c7 gen1141_1_51c7(V_b = HELLIS_V1_401f.V_b, v_0 = pf.powerflow.bus.VHELLIS_V1_401f, angle_0 = pf.powerflow.bus.AHELLIS_V1_401f, P_0 = pf.powerflow.loads.PGEN1141_1_51c7, Q_0 = pf.powerflow.loads.QGEN1141_1_51c7);
			
Iceland_modified_PF_solved_package.Generators.GEN1142_1_51cf gen1142_1_51cf(V_b = HELLIS_V2_4031.V_b, v_0 = pf.powerflow.bus.VHELLIS_V2_4031, angle_0 = pf.powerflow.bus.AHELLIS_V2_4031, P_0 = pf.powerflow.loads.PGEN1142_1_51cf, Q_0 = pf.powerflow.loads.QGEN1142_1_51cf);
			
Iceland_modified_PF_solved_package.Generators.GEN1143_1_51d7 gen1143_1_51d7(V_b = HELLIS_V11_403f.V_b, v_0 = pf.powerflow.bus.VHELLIS_V11_403f, angle_0 = pf.powerflow.bus.AHELLIS_V11_403f, P_0 = pf.powerflow.loads.PGEN1143_1_51d7, Q_0 = pf.powerflow.loads.QGEN1143_1_51d7);
			
Iceland_modified_PF_solved_package.Generators.GEN1144_1_51df gen1144_1_51df(V_b = HELLIS_V3_404d.V_b, v_0 = pf.powerflow.bus.VHELLIS_V3_404d, angle_0 = pf.powerflow.bus.AHELLIS_V3_404d, P_0 = pf.powerflow.loads.PGEN1144_1_51df, Q_0 = pf.powerflow.loads.QGEN1144_1_51df);
			
Iceland_modified_PF_solved_package.Generators.GEN1145_1_51e7 gen1145_1_51e7(V_b = HELLIS_V4_405b.V_b, v_0 = pf.powerflow.bus.VHELLIS_V4_405b, angle_0 = pf.powerflow.bus.AHELLIS_V4_405b, P_0 = pf.powerflow.loads.PGEN1145_1_51e7, Q_0 = pf.powerflow.loads.QGEN1145_1_51e7);
			
Iceland_modified_PF_solved_package.Generators.GEN1146_1_51ef gen1146_1_51ef(V_b = HELLIS_V5_4069.V_b, v_0 = pf.powerflow.bus.VHELLIS_V5_4069, angle_0 = pf.powerflow.bus.AHELLIS_V5_4069, P_0 = pf.powerflow.loads.PGEN1146_1_51ef, Q_0 = pf.powerflow.loads.QGEN1146_1_51ef);
			
Iceland_modified_PF_solved_package.Generators.GEN1147_1_51f7 gen1147_1_51f7(V_b = HELLIS_V6_4077.V_b, v_0 = pf.powerflow.bus.VHELLIS_V6_4077, angle_0 = pf.powerflow.bus.AHELLIS_V6_4077, P_0 = pf.powerflow.loads.PGEN1147_1_51f7, Q_0 = pf.powerflow.loads.QGEN1147_1_51f7);
			
Iceland_modified_PF_solved_package.Generators.GEN1201_1_51ff gen1201_1_51ff(V_b = NESV_VEL_1_40d0.V_b, v_0 = pf.powerflow.bus.VNESV_VEL_1_40d0, angle_0 = pf.powerflow.bus.ANESV_VEL_1_40d0, P_0 = pf.powerflow.loads.PGEN1201_1_51ff, Q_0 = pf.powerflow.loads.QGEN1201_1_51ff);
			
Iceland_modified_PF_solved_package.Generators.GEN1202_1_5207 gen1202_1_5207(V_b = NESV_VEL_2_40df.V_b, v_0 = pf.powerflow.bus.VNESV_VEL_2_40df, angle_0 = pf.powerflow.bus.ANESV_VEL_2_40df, P_0 = pf.powerflow.loads.PGEN1202_1_5207, Q_0 = pf.powerflow.loads.QGEN1202_1_5207);
			
Iceland_modified_PF_solved_package.Generators.GEN1203_1_520f gen1203_1_520f(V_b = NESV_VEL_3_40ed.V_b, v_0 = pf.powerflow.bus.VNESV_VEL_3_40ed, angle_0 = pf.powerflow.bus.ANESV_VEL_3_40ed, P_0 = pf.powerflow.loads.PGEN1203_1_520f, Q_0 = pf.powerflow.loads.QGEN1203_1_520f);
			
Iceland_modified_PF_solved_package.Generators.GEN1204_1_5217 gen1204_1_5217(V_b = NESV_VEL_4_40fb.V_b, v_0 = pf.powerflow.bus.VNESV_VEL_4_40fb, angle_0 = pf.powerflow.bus.ANESV_VEL_4_40fb, P_0 = pf.powerflow.loads.PGEN1204_1_5217, Q_0 = pf.powerflow.loads.QGEN1204_1_5217);
			
Iceland_modified_PF_solved_package.Generators.GEN2302_1_521f gen2302_1_521f(V_b = SVARTS_VEL3_43b7.V_b, v_0 = pf.powerflow.bus.VSVARTS_VEL3_43b7, angle_0 = pf.powerflow.bus.ASVARTS_VEL3_43b7, P_0 = pf.powerflow.loads.PGEN2302_1_521f, Q_0 = pf.powerflow.loads.QGEN2302_1_521f);
			
Iceland_modified_PF_solved_package.Generators.GEN2332_1_5227 gen2332_1_5227(V_b = REYKJAV1_4411.V_b, v_0 = pf.powerflow.bus.VREYKJAV1_4411, angle_0 = pf.powerflow.bus.AREYKJAV1_4411, P_0 = pf.powerflow.loads.PGEN2332_1_5227, Q_0 = pf.powerflow.loads.QGEN2332_1_5227);
			
Iceland_modified_PF_solved_package.Generators.GEN2333_1_522f gen2333_1_522f(V_b = REYKJAV2_4420.V_b, v_0 = pf.powerflow.bus.VREYKJAV2_4420, angle_0 = pf.powerflow.bus.AREYKJAV2_4420, P_0 = pf.powerflow.loads.PGEN2333_1_522f, Q_0 = pf.powerflow.loads.QGEN2333_1_522f);
			
Iceland_modified_PF_solved_package.Generators.GEN2336_1_5237 gen2336_1_5237(V_b = SVARTVEL_442e.V_b, v_0 = pf.powerflow.bus.VSVARTVEL_442e, angle_0 = pf.powerflow.bus.ASVARTVEL_442e, P_0 = pf.powerflow.loads.PGEN2336_1_5237, Q_0 = pf.powerflow.loads.QGEN2336_1_5237);
			
Iceland_modified_PF_solved_package.Generators.GEN3170_1_523f gen3170_1_523f(V_b = ANDAKILL_450e.V_b, v_0 = pf.powerflow.bus.VANDAKILL_450e, angle_0 = pf.powerflow.bus.AANDAKILL_450e, P_0 = pf.powerflow.loads.PGEN3170_1_523f, Q_0 = pf.powerflow.loads.QGEN3170_1_523f);
			
Iceland_modified_PF_solved_package.Generators.GEN3303_1_5247 gen3303_1_5247(V_b = MJOLKVEL_4599.V_b, v_0 = pf.powerflow.bus.VMJOLKVEL_4599, angle_0 = pf.powerflow.bus.AMJOLKVEL_4599, P_0 = pf.powerflow.loads.PGEN3303_1_5247, Q_0 = pf.powerflow.loads.QGEN3303_1_5247);
			
Iceland_modified_PF_solved_package.Generators.GEN3304_2_524f gen3304_2_524f(V_b = MJO_V2_45a8.V_b, v_0 = pf.powerflow.bus.VMJO_V2_45a8, angle_0 = pf.powerflow.bus.AMJO_V2_45a8, P_0 = pf.powerflow.loads.PGEN3304_2_524f, Q_0 = pf.powerflow.loads.QGEN3304_2_524f);
			
Iceland_modified_PF_solved_package.Generators.GEN4031_1_5257 gen4031_1_5257(V_b = BLANDAV1_4756.V_b, v_0 = pf.powerflow.bus.VBLANDAV1_4756, angle_0 = pf.powerflow.bus.ABLANDAV1_4756, P_0 = pf.powerflow.loads.PGEN4031_1_5257, Q_0 = pf.powerflow.loads.QGEN4031_1_5257);
			
Iceland_modified_PF_solved_package.Generators.GEN4032_1_525f gen4032_1_525f(V_b = BLANDAV2_4765.V_b, v_0 = pf.powerflow.bus.VBLANDAV2_4765, angle_0 = pf.powerflow.bus.ABLANDAV2_4765, P_0 = pf.powerflow.loads.PGEN4032_1_525f, Q_0 = pf.powerflow.loads.QGEN4032_1_525f);
			
Iceland_modified_PF_solved_package.Generators.GEN4033_1_5267 gen4033_1_5267(V_b = BLANDAV3_4773.V_b, v_0 = pf.powerflow.bus.VBLANDAV3_4773, angle_0 = pf.powerflow.bus.ABLANDAV3_4773, P_0 = pf.powerflow.loads.PGEN4033_1_5267, Q_0 = pf.powerflow.loads.QGEN4033_1_5267);
			
Iceland_modified_PF_solved_package.Generators.GEN4061_1_526f gen4061_1_526f(V_b = KRAFLAV1_4855.V_b, v_0 = pf.powerflow.bus.VKRAFLAV1_4855, angle_0 = pf.powerflow.bus.AKRAFLAV1_4855, P_0 = pf.powerflow.loads.PGEN4061_1_526f, Q_0 = pf.powerflow.loads.QGEN4061_1_526f);
			
Iceland_modified_PF_solved_package.Generators.GEN4062_1_5277 gen4062_1_5277(V_b = KRAFLA11_4864.V_b, v_0 = pf.powerflow.bus.VKRAFLA11_4864, angle_0 = pf.powerflow.bus.AKRAFLA11_4864, P_0 = pf.powerflow.loads.PGEN4062_1_5277, Q_0 = pf.powerflow.loads.QGEN4062_1_5277);
			
Iceland_modified_PF_solved_package.Generators.GEN4101_1_527f gen4101_1_527f(V_b = LAXA_2_488f.V_b, v_0 = pf.powerflow.bus.VLAXA_2_488f, angle_0 = pf.powerflow.bus.ALAXA_2_488f, P_0 = pf.powerflow.loads.PGEN4101_1_527f, Q_0 = pf.powerflow.loads.QGEN4101_1_527f);
			
Iceland_modified_PF_solved_package.Generators.GEN4105_1_5287 gen4105_1_5287(V_b = LAXA2_48b9.V_b, v_0 = pf.powerflow.bus.VLAXA2_48b9, angle_0 = pf.powerflow.bus.ALAXA2_48b9, P_0 = pf.powerflow.loads.PGEN4105_1_5287, Q_0 = pf.powerflow.loads.QGEN4105_1_5287);
			
Iceland_modified_PF_solved_package.Generators.GEN5061_1_528f gen5061_1_528f(V_b = KARA_V1_4b42.V_b, v_0 = pf.powerflow.bus.VKARA_V1_4b42, angle_0 = pf.powerflow.bus.AKARA_V1_4b42, P_0 = pf.powerflow.loads.PGEN5061_1_528f, Q_0 = pf.powerflow.loads.QGEN5061_1_528f);
			
Iceland_modified_PF_solved_package.Generators.GEN5062_1_5297 gen5062_1_5297(V_b = KARA_V2_4b51.V_b, v_0 = pf.powerflow.bus.VKARA_V2_4b51, angle_0 = pf.powerflow.bus.AKARA_V2_4b51, P_0 = pf.powerflow.loads.PGEN5062_1_5297, Q_0 = pf.powerflow.loads.QGEN5062_1_5297);
			
Iceland_modified_PF_solved_package.Generators.GEN5063_1_529f gen5063_1_529f(V_b = KARA_V3_4b5f.V_b, v_0 = pf.powerflow.bus.VKARA_V3_4b5f, angle_0 = pf.powerflow.bus.AKARA_V3_4b5f, P_0 = pf.powerflow.loads.PGEN5063_1_529f, Q_0 = pf.powerflow.loads.QGEN5063_1_529f);
			
Iceland_modified_PF_solved_package.Generators.GEN5064_1_52a7 gen5064_1_52a7(V_b = KARA_V4_4b6d.V_b, v_0 = pf.powerflow.bus.VKARA_V4_4b6d, angle_0 = pf.powerflow.bus.AKARA_V4_4b6d, P_0 = pf.powerflow.loads.PGEN5064_1_52a7, Q_0 = pf.powerflow.loads.QGEN5064_1_52a7);
			
Iceland_modified_PF_solved_package.Generators.GEN5065_1_52af gen5065_1_52af(V_b = KARA_V5_4b7b.V_b, v_0 = pf.powerflow.bus.VKARA_V5_4b7b, angle_0 = pf.powerflow.bus.AKARA_V5_4b7b, P_0 = pf.powerflow.loads.PGEN5065_1_52af, Q_0 = pf.powerflow.loads.QGEN5065_1_52af);
			
Iceland_modified_PF_solved_package.Generators.GEN5066_1_52b7 gen5066_1_52b7(V_b = KARA_V6_4b89.V_b, v_0 = pf.powerflow.bus.VKARA_V6_4b89, angle_0 = pf.powerflow.bus.AKARA_V6_4b89, P_0 = pf.powerflow.loads.PGEN5066_1_52b7, Q_0 = pf.powerflow.loads.QGEN5066_1_52b7);
			
Iceland_modified_PF_solved_package.Generators.GEN5105_1_52bf gen5105_1_52bf(V_b = BJOLFSVIRKJU_4d3e.V_b, v_0 = pf.powerflow.bus.VBJOLFSVIRKJU_4d3e, angle_0 = pf.powerflow.bus.ABJOLFSVIRKJU_4d3e, P_0 = pf.powerflow.loads.PGEN5105_1_52bf, Q_0 = pf.powerflow.loads.QGEN5105_1_52bf);
			
Iceland_modified_PF_solved_package.Generators.GEN5106_1_52c7 gen5106_1_52c7(V_b = GULSVIRKJUN_4d4d.V_b, v_0 = pf.powerflow.bus.VGULSVIRKJUN_4d4d, angle_0 = pf.powerflow.bus.AGULSVIRKJUN_4d4d, P_0 = pf.powerflow.loads.PGEN5106_1_52c7, Q_0 = pf.powerflow.loads.QGEN5106_1_52c7);
			
Iceland_modified_PF_solved_package.Generators.GEN5201_1_52cf gen5201_1_52cf(V_b = LAGARFO1_4d87.V_b, v_0 = pf.powerflow.bus.VLAGARFO1_4d87, angle_0 = pf.powerflow.bus.ALAGARFO1_4d87, P_0 = pf.powerflow.loads.PGEN5201_1_52cf, Q_0 = pf.powerflow.loads.QGEN5201_1_52cf);
			
Iceland_modified_PF_solved_package.Generators.GEN5202_1_52d7 gen5202_1_52d7(V_b = LAGARFOSS_4d96.V_b, v_0 = pf.powerflow.bus.VLAGARFOSS_4d96, angle_0 = pf.powerflow.bus.ALAGARFOSS_4d96, P_0 = pf.powerflow.loads.PGEN5202_1_52d7, Q_0 = pf.powerflow.loads.QGEN5202_1_52d7);
			
// -- Fault Event
OpenIPSL.Electrical.Events.PwFault Fault(R = 0.1, X = 0.1, t1 = 0.3, t2 = 0.31);

equation
connect(BUR11SP5_3c7d.p, CL1015_1_4e09.p);
connect(BUR11SP4_3c9b.p, CL1018_1_4e10.p);
connect(FLU_33KV_3dde.p, CL1078_1_4e17.p);
connect(FLU_11KV_3e46.p, CL1085_1_4e1e.p);
connect(HELLA_11KV_3e55.p, CL1086_1_4e25.p);
connect(HVOLSV_11KV_3e64.p, CL1087_1_4e2c.p);
connect(RIMAKOT_3ea0.p, CL1091_1_4e33.p);
connect(VEM_FORGANGS_3eaf.p, CL1092_1_4e3a.p);
connect(VEM_BRAEDSLA_3edb.p, CL1095_1_4e41.p);
connect(VEM_KETILL_3f06.p, CL1098_1_4e48.p);
connect(STN1_3fd5.p, CL1134_1_4e4f.p);
connect(HVERAG_11KV_3ff3.p, CL1137_1_4e56.p);
connect(THORLAK_11KV_4085.p, CL1148_1_4e5d.p);
connect(SEL_SKERDANL_40a3.p, CL1150_1_4e64.p);
connect(SEL_FORGANGS_40b2.p, CL1151_1_4e6b.p);
connect(NESJAV_40c1.p, CL1200_1_4e72.p);
connect(RR_A12_4171.p, CL2018_1_4e79.p);
connect(IS1_417f.p, NCL2022_1_4e80.p);
connect(IS2_418e.p, NCL2023_1_4e87.p);
connect(KORPA_419d.p, CL2030_1_4e8e.p);
connect(KORPA_419d.p, CL2030_2_4e95.p);
connect(RH_11_41f6.p, CL2062_1_4e9c.p);
connect(BRENN_11_4232.p, CL2103_1_4ea3.p);
connect(A20_6_429b.p, CL2111_1_4eaa.p);
connect(FESI_42d7.p, NCL2140_1_4eb1.p);
connect(NA_A_42e6.p, NCL2160_1_4eb8.p);
connect(NA_B_42f5.p, NCL2161_2_4ebf.p);
connect(A1_11_4312.p, CL2201_1_4ec6.p);
connect(A2_4321.p, CL2210_1_4ecd.p);
connect(A3_4330.p, CL2220_1_4ed4.p);
connect(A4_11_433f.p, CL2231_1_4edb.p);
connect(A5_11_435d.p, CL2241_1_4ee2.p);
connect(A6_11_436c.p, CL2251_1_4ee9.p);
connect(A7_11_438a.p, CL2261_1_4ef0.p);
connect(FITJAR_4399.p, CL2300_1_4ef7.p);
connect(SVARTSENGI_43a8.p, CL2301_1_4efe.p);
connect(STA_33KV_43e4.p, CL2305_1_4f05.p);
connect(VALLARHEIDI_443c.p, CL2350_1_4f0c.p);
connect(VAT_19KV_4487.p, CL3124_1_4f13.p);
connect(VEG_11KV_44a5.p, CL3131_1_4f1a.p);
connect(OLA_19KV_44c3.p, CL3141_1_4f21.p);
connect(VOG_11KV_44e1.p, CL3151_1_4f28.p);
connect(GRU_19KV_44ff.p, CL3161_1_4f2f.p);
connect(GLERA_19_452c.p, CL3201_1_4f36.p);
connect(GEIRADA3_4559.p, CL3211_1_4f3d.p);
connect(PATREKSF11_4600.p, CL3321_1_4f44.p);
connect(BOL_SKER_ANL_461e.p, CL3333_1_4f4b.p);
connect(FLATEYRI_4677.p, CL3362_1_4f52.p);
connect(ISA_SKERDANL_46a4.p, CL3370_1_4f59.p);
connect(ISA_FORGANGS_46b3.p, CL3371_1_4f60.p);
connect(BILDUDALUR33_46c1.p, CL3380_1_4f67.p);
connect(BOL_FORGANGS_46d0.p, CL3381_1_4f6e.p);
connect(HOLMAVIK_46de.p, CL3390_1_4f75.p);
connect(HRUTA_19_46fc.p, CL4011_1_4f7c.p);
connect(LAXAVA_2_4729.p, CL4021_1_4f83.p);
connect(VARMAHL2_47ad.p, CL4042_1_4f8a.p);
connect(SAUDARKR_47bc.p, CL4045_1_4f91.p);
connect(RANGARV5_47da.p, CL4051_1_4f98.p);
connect(RANG_11_47fc.p, CL4053_1_4f9f.p);
connect(BECROMAL_480b.p, NCL4055_1_4fa6.p);
connect(DALVIK_4829.p, CL4058_1_4fad.p);
connect(LAXA11_48ab.p, CL4104_1_4fb4.p);
connect(HUSAVIK_48c8.p, CL4108_1_4fbb.p);
connect(LINDAB_48d7.p, CL4110_1_4fc2.p);
connect(KOPASKER_48e6.p, CL4120_1_4fc9.p);
connect(THEYSTAR_11_4904.p, CL4122_1_4fd0.p);
connect(STUDLAR_11_4940.p, CL5013_1_4fd7.p);
connect(EGILSSTADIR_495e.p, CL5015_1_4fde.p);
connect(TEIGHO_2_49b8.p, CL5021_1_4fe5.p);
connect(HOF_SKERDANL_4a02.p, CL5027_1_4fec.p);
connect(HOF_FORGANGS_4a79.p, CL5039_1_4ff3.p);
connect(PREST_19_4a96.p, CL5041_1_4ffa.p);
connect(FLJOTSDA_4ab4.p, CL5051_1_5001.p);
connect(AUX_1_4b97.p, NCL5071_1_5008.p);
connect(DIODE_1_4baa.p, NCL5072_1_500f.p);
connect(DIODE_2_4bba.p, NCL5073_1_5016.p);
connect(DIODE_3_4bc8.p, NCL5074_1_501d.p);
connect(DIODE_4_4bd6.p, NCL5075_1_5024.p);
connect(DIODE_5_4be4.p, NCL5076_1_502b.p);
connect(AUX_2_4bf2.p, NCL5077_1_5032.p);
connect(DIODE_6_4c00.p, NCL5078_1_5039.p);
connect(ESK_SKERDANL_4c1c.p, CL5081_1_5040.p);
connect(ESK_FORGANGS_4c2b.p, CL5082_1_5047.p);
connect(FAS_FORGANGS_4c56.p, CL5087_1_504e.p);
connect(STO_VARFJ_4c74.p, CL5089_1_5055.p);
connect(NES_FORGANGS_4caf.p, CL5093_1_505c.p);
connect(FAS_SKERDANL_4cbd.p, CL5094_1_5063.p);
connect(BREIDDALSVIK_4cd9.p, CL5096_1_506a.p);
connect(NES_SKERDANL_4ce7.p, CL5097_2_5071.p);
connect(SEY_FORGANGS_4d20.p, CL5101_1_5078.p);
connect(SEY_KYNDISTO_4d5c.p, CL5107_1_507f.p);
connect(LAG_11KV_4da5.p, CL5203_1_5086.p);
connect(VOP_FORGANGS_4dc2.p, CL5211_1_508d.p);
connect(VOP_SKERDANL_4dd1.p, CL5212_1_5094.p);
connect(HVOLSV_11KV_3e64.p, SHHVOLSV_11KV5099.p);
connect(VEM_BRAEDSLA_3edb.p, SHVEM_BRAEDSLA509d.p);
connect(HAM_41bb.p, SHHAM50a1.p);
connect(BRENNIME_4214.p, SHBRENNIME50a5.p);
connect(SVC_16KV_42b9.p, SHSVC_16KV50a9.p);
connect(OLAFSVIK_44b4.p, SHOLAFSVIK50ad.p);
connect(GEIRADAL_454a.p, SHGEIRADAL50b1.p);
connect(BOLUNGAVIK_460f.p, SHBOLUNGAVIK50b5.p);
connect(ISA_FORGANGS_46b3.p, SHISA_FORGANGS50b9.p);
connect(BILDUDALUR33_46c1.p, SHBILDUDALUR3350bd.p);
connect(BILDUDALUR33_46c1.p, SHBILDUDALUR3350c1.p);
connect(BOL_FORGANGS_46d0.p, SHBOL_FORGANGS50c5.p);
connect(HOLMAVIK_46de.p, SHHOLMAVIK50c9.p);
connect(RANG_47cb.p, SHRANG50cd.p);
connect(HRYGG_4922.p, SHHRYGG50d1.p);
connect(TEIGHO_2_49b8.p, SHTEIGHO_250d5.p);
connect(SMYRLA_6_3_4a5b.p, SHSMYRLA_6_350d9.p);
connect(DIODE_1_4baa.p, SHDIODE_150dd.p);
connect(DIODE_2_4bba.p, SHDIODE_250e1.p);
connect(DIODE_3_4bc8.p, SHDIODE_350e5.p);
connect(DIODE_4_4bd6.p, SHDIODE_450e9.p);
connect(DIODE_5_4be4.p, SHDIODE_550ed.p);
connect(DIODE_6_4c00.p, SHDIODE_650f1.p);
connect(STO_VARFJ_4c74.p, SHSTO_VARFJ50f5.p);
connect(BURFE_12_3c43.p, gen1011_1_50fe.p);
connect(BURFE_12_3c43.p, gen1011_2_5104.p);
connect(BURFE_34_3c53.p, gen1012_1_510c.p);
connect(BURFE_34_3c53.p, gen1012_2_5112.p);
connect(BURFE_56_3c61.p, gen1013_1_511a.p);
connect(BURFE_56_3c61.p, gen1013_2_5120.p);
connect(SIGALD12_3cb8.p, gen1021_1_5128.p);
connect(SIGALD22_3cc8.p, gen1022_1_5130.p);
connect(SIGALD32_3cd6.p, gen1023_1_5138.p);
connect(HRAUNE12_3d20.p, gen1031_1_5140.p);
connect(HRAUNE22_3d2f.p, gen1032_1_5149.p);
connect(HRAUNE32_3d3d.p, gen1033_1_5152.p);
connect(VATN_V1_3d5a.p, gen1041_1_515b.p);
connect(VATN_V2_3d69.p, gen1042_1_5163.p);
connect(SULT_V1_3d86.p, gen1051_1_516b.p);
connect(SULT_V2_3d95.p, gen1052_1_5173.p);
connect(BUD_V1_3db2.p, gen1061_1_517b.p);
connect(BUD_V2_3dc1.p, gen1062_1_5183.p);
connect(IRAFO_12_3f32.p, gen1111_1_518b.p);
connect(IRAFO_22_3f41.p, gen1112_1_5193.p);
connect(IRAFO_32_3f4f.p, gen1113_1_519b.p);
connect(STEING1_3f8a.p, gen1121_1_51a3.p);
connect(STEING2_3f9a.p, gen1122_1_51ab.p);
connect(LJOS_VEL_3fc6.p, gen1131_1_51b3.p);
connect(LJOS_VEL_3fc6.p, gen1131_2_51b9.p);
connect(LJOS_VEL_3fc6.p, gen1131_3_51bf.p);
connect(HELLIS_V1_401f.p, gen1141_1_51c7.p);
connect(HELLIS_V2_4031.p, gen1142_1_51cf.p);
connect(HELLIS_V11_403f.p, gen1143_1_51d7.p);
connect(HELLIS_V3_404d.p, gen1144_1_51df.p);
connect(HELLIS_V4_405b.p, gen1145_1_51e7.p);
connect(HELLIS_V5_4069.p, gen1146_1_51ef.p);
connect(HELLIS_V6_4077.p, gen1147_1_51f7.p);
connect(NESV_VEL_1_40d0.p, gen1201_1_51ff.p);
connect(NESV_VEL_2_40df.p, gen1202_1_5207.p);
connect(NESV_VEL_3_40ed.p, gen1203_1_520f.p);
connect(NESV_VEL_4_40fb.p, gen1204_1_5217.p);
connect(SVARTS_VEL3_43b7.p, gen2302_1_521f.p);
connect(REYKJAV1_4411.p, gen2332_1_5227.p);
connect(REYKJAV2_4420.p, gen2333_1_522f.p);
connect(SVARTVEL_442e.p, gen2336_1_5237.p);
connect(ANDAKILL_450e.p, gen3170_1_523f.p);
connect(MJOLKVEL_4599.p, gen3303_1_5247.p);
connect(MJO_V2_45a8.p, gen3304_2_524f.p);
connect(BLANDAV1_4756.p, gen4031_1_5257.p);
connect(BLANDAV2_4765.p, gen4032_1_525f.p);
connect(BLANDAV3_4773.p, gen4033_1_5267.p);
connect(KRAFLAV1_4855.p, gen4061_1_526f.p);
connect(KRAFLA11_4864.p, gen4062_1_5277.p);
connect(LAXA_2_488f.p, gen4101_1_527f.p);
connect(LAXA2_48b9.p, gen4105_1_5287.p);
connect(KARA_V1_4b42.p, gen5061_1_528f.p);
connect(KARA_V2_4b51.p, gen5062_1_5297.p);
connect(KARA_V3_4b5f.p, gen5063_1_529f.p);
connect(KARA_V4_4b6d.p, gen5064_1_52a7.p);
connect(KARA_V5_4b7b.p, gen5065_1_52af.p);
connect(KARA_V6_4b89.p, gen5066_1_52b7.p);
connect(BJOLFSVIRKJU_4d3e.p, gen5105_1_52bf.p);
connect(GULSVIRKJUN_4d4d.p, gen5106_1_52c7.p);
connect(LAGARFO1_4d87.p, gen5201_1_52cf.p);
connect(LAGARFOSS_4d96.p, gen5202_1_52d7.p);
connect(ESK2_CABLE_3c07.p, line801_5026_152da.p);
connect(STU_CABLE_49f4.p, line801_5026_152da.n);
connect(ESK2_CABLE_3c07.p, line801_5090_152e4.p);
connect(ESKIFJOR_4c83.p, line801_5090_152e4.n);
connect(BUR_CABLE_3c24.p, line1009_1014_152ec.p);
connect(BUR66SP5_3c6f.p, line1009_1014_152ec.n);
connect(BUR_CABLE_3c24.p, line1009_1083_152f4.p);
connect(FLU_CABLE_3e2a.p, line1009_1083_152f4.n);
connect(BURFELL_3c33.p, line1010_1026_152fe.p);
connect(SIG_TEINASPL_3d03.p, line1010_1026_152fe.n);
connect(BURFELL_3c33.p, line1010_1050_15308.p);
connect(SULTARTA_3d77.p, line1010_1050_15308.n);
connect(BURFELL_3c33.p, line1010_1100_15312.p);
connect(IRAFOSS2_3f14.p, line1010_1100_15312.n);
connect(BURFELL_3c33.p, line1010_1140_1531c.p);
connect(KOLVID_A_4011.p, line1010_1140_1531c.n);
connect(BURFELL_3c33.p, line1010_2090_15326.p);
connect(SANDSKEI_4205.p, line1010_2090_15326.n);
connect(BUR66SP5_3c6f.p, line1014_1017_15330.p);
connect(BUR66SP4_3c8d.p, line1014_1017_15330.n);
connect(BUR66SP4_3c8d.p, line1017_1080_1533a.p);
connect(HVOLSVOLLUR_3dfd.p, line1017_1080_1533a.n);
connect(SIGALDA_3ca9.p, line1020_1026_15342.p);
connect(SIG_TEINASPL_3d03.p, line1020_1026_15342.n);
connect(SIGALDA6_3ce4.p, line1024_5040_15346.p);
connect(PRES_4a87.p, line1024_5040_15346.n);
connect(SIG_TEINASPL_3d03.p, line1026_1030_15350.p);
connect(HRAUNEY_3d11.p, line1026_1030_15350.n);
connect(SIG_TEINASPL_3d03.p, line1026_1040_1535a.p);
connect(VATNSFEL_3d4b.p, line1026_1040_1535a.n);
connect(HRAUNEY_3d11.p, line1030_1065_15364.p);
connect(LANGALDA_3dcf.p, line1030_1065_15364.n);
connect(SULTARTA_3d77.p, line1050_1065_1536e.p);
connect(LANGALDA_3dcf.p, line1050_1065_1536e.n);
connect(SULTARTA_3d77.p, line1050_2100_15376.p);
connect(BRENNIME_4214.p, line1050_2100_15376.n);
connect(SULTARTA_3d77.p, line1050_2100_25380.p);
connect(BRENNIME_4214.p, line1050_2100_25380.n);
connect(BUDARHALS_3da3.p, line1060_1065_1538a.p);
connect(LANGALDA_3dcf.p, line1060_1065_1538a.n);
connect(HLA_CABLE_3dee.p, line1079_1082_15392.p);
connect(HELLA_3e1b.p, line1079_1082_15392.n);
connect(HLA_CABLE_3dee.p, line1079_1084_1539a.p);
connect(FLU2_CABLE_3e38.p, line1079_1084_1539a.n);
connect(HVOLSVOLLUR_3dfd.p, line1080_1082_153a2.p);
connect(HELLA_3e1b.p, line1080_1082_153a2.n);
connect(HVOLSVOLLUR_3dfd.p, line1080_1089_153aa.p);
connect(RIMCABLE_3e83.p, line1080_1089_153aa.n);
connect(FLUDIR_3e0c.p, line1081_1083_153b4.p);
connect(FLU_CABLE_3e2a.p, line1081_1083_153b4.n);
connect(FLUDIR_3e0c.p, line1081_1084_153bc.p);
connect(FLU2_CABLE_3e38.p, line1081_1084_153bc.n);
connect(RIMCABLE_3e83.p, line1089_1090_153c4.p);
connect(RIMAKOT_3e92.p, line1089_1090_153c4.n);
connect(RIMAKOT_3ea0.p, line1091_1093_253cc.p);
connect(VM3_JARDSTR1_3ebe.p, line1091_1093_253cc.n);
connect(RIMAKOT_3ea0.p, line1091_1096_153d6.p);
connect(VM1_RIM_ENDI_3ee9.p, line1091_1096_153d6.n);
connect(VEM_FORGANGS_3eaf.p, line1092_1094_253de.p);
connect(VM3_JARDSTR2_3ecd.p, line1092_1094_253de.n);
connect(VEM_FORGANGS_3eaf.p, line1092_1095_153e8.p);
connect(VEM_BRAEDSLA_3edb.p, line1092_1095_153e8.n);
connect(VEM_FORGANGS_3eaf.p, line1092_1097_153f2.p);
connect(VM1_VEM_ENDI_3ef8.p, line1092_1097_153f2.n);
connect(VEM_FORGANGS_3eaf.p, line1092_1098_153fa.p);
connect(VEM_KETILL_3f06.p, line1092_1098_153fa.n);
connect(VM3_JARDSTR1_3ebe.p, line1093_1094_25404.p);
connect(VM3_JARDSTR2_3ecd.p, line1093_1094_25404.n);
connect(VM1_RIM_ENDI_3ee9.p, line1096_1097_1540c.p);
connect(VM1_VEM_ENDI_3ef8.p, line1096_1097_1540c.n);
connect(IRAFOSS2_3f14.p, line1100_2010_15414.p);
connect(GEITHALS_4127.p, line1100_2010_15414.n);
connect(IRAFOSS_3f23.p, line1110_2011_1541e.p);
connect(GE_132_4136.p, line1110_2011_1541e.n);
connect(IRAFOSS5_3f5d.p, line1114_1130_25428.p);
connect(LJOSIFOSS_3fb7.p, line1114_1130_25428.n);
connect(STEINKA_3f7b.p, line1120_1130_15434.p);
connect(LJOSIFOSS_3fb7.p, line1120_1130_15434.n);
connect(LJOSIFOSS_3fb7.p, line1130_1136_1543e.p);
connect(HVERAGERDI_3fe4.p, line1130_1136_1543e.n);
connect(LJOSIFOSS_3fb7.p, line1130_1150_15446.p);
connect(SEL_SKERDANL_40a3.p, line1130_1150_15446.n);
connect(HVERAGERDI_3fe4.p, line1136_1149_1544e.p);
connect(THORLAKHOFN_4094.p, line1136_1149_1544e.n);
connect(KOLVID_B_4002.p, line1139_1140_15456.p);
connect(KOLVID_A_4011.p, line1139_1140_15456.n);
connect(KOLVID_B_4002.p, line1139_2010_1545a.p);
connect(GEITHALS_4127.p, line1139_2010_1545a.n);
connect(NESJAV_40c1.p, line1200_1210_15464.p);
connect(GRAFNING_4109.p, line1200_1210_15464.n);
connect(NESJAV_40c1.p, line1200_2011_1546e.p);
connect(GE_132_4136.p, line1200_2011_1546e.n);
connect(GRAFNING_4109.p, line1210_1220_15478.p);
connect(BRINGUR_4118.p, line1210_1220_15478.n);
connect(BRINGUR_4118.p, line1220_2030_15482.p);
connect(KORPA_419d.p, line1220_2030_15482.n);
connect(GEITHALS_4127.p, line2010_2050_1548c.p);
connect(HAMR_41ac.p, line2010_2050_1548c.n);
connect(GEITHALS_4127.p, line2010_2050_25496.p);
connect(HAMR_41ac.p, line2010_2050_25496.n);
connect(GEITHALS_4127.p, line2010_2100_154a0.p);
connect(BRENNIME_4214.p, line2010_2100_154a0.n);
connect(GE_132_4136.p, line2011_2018_254aa.p);
connect(RR_A12_4171.p, line2011_2018_254aa.n);
connect(GE_132_4136.p, line2011_2030_154b4.p);
connect(KORPA_419d.p, line2011_2030_154b4.n);
connect(RR_A5_4162.p, line2017_2240_154be.p);
connect(A5_434e.p, line2017_2240_154be.n);
connect(RR_A12_4171.p, line2018_2240_254c8.p);
connect(A5_434e.p, line2018_2240_254c8.n);
connect(IS1_417f.p, line2022_2050_154d2.p);
connect(HAMR_41ac.p, line2022_2050_154d2.n);
connect(IS2_418e.p, line2023_2050_154dc.p);
connect(HAMR_41ac.p, line2023_2050_154dc.n);
connect(KORPA_419d.p, line2030_2220_154e6.p);
connect(A3_4330.p, line2030_2220_154e6.n);
connect(HAMR_41ac.p, line2050_2090_154f0.p);
connect(SANDSKEI_4205.p, line2050_2090_154f0.n);
connect(HAM_41bb.p, line2051_2061_154fa.p);
connect(RH_41e7.p, line2051_2061_154fa.n);
connect(HAM_41bb.p, line2051_2260_15504.p);
connect(A7_437b.p, line2051_2260_15504.n);
connect(HAM_41bb.p, line2051_2300_1550e.p);
connect(FITJAR_4399.p, line2051_2300_1550e.n);
connect(BRENNIME_4214.p, line2100_2120_1551a.p);
connect(KLAFASTA_IR_42aa.p, line2100_2120_1551a.n);
connect(BRENNIME_4214.p, line2100_2140_15524.p);
connect(FESI_42d7.p, line2100_2140_15524.n);
connect(BRENNIME_4214.p, line2100_2161_2552e.p);
connect(NA_B_42f5.p, line2100_2161_2552e.n);
connect(BREN_132_4223.p, line2101_3120_15538.p);
connect(VATNSHAM_444b.p, line2101_3120_15538.n);
connect(SP5_ROFAREIT_4241.p, line2105_2109_15542.p);
connect(BRE_33_427d.p, line2105_2109_15542.n);
connect(BRENN_66_4260.p, line2107_2110_1554a.p);
connect(AKRANES_428c.p, line2107_2110_1554a.n);
connect(KLAFASTA_IR_42aa.p, line2120_2122_15554.p);
connect(KLA_LOFTLINA_42c9.p, line2120_2122_15554.n);
connect(KLAFASTA_IR_42aa.p, line2120_2160_15558.p);
connect(NA_A_42e6.p, line2120_2160_15558.n);
connect(NA_A_42e6.p, line2160_2161_15562.p);
connect(NA_B_42f5.p, line2160_2161_15562.n);
connect(A1_4303.p, line2200_2210_15566.p);
connect(A2_4321.p, line2200_2210_15566.n);
connect(A1_4303.p, line2200_2220_15570.p);
connect(A3_4330.p, line2200_2220_15570.n);
connect(A1_4303.p, line2200_2240_1557a.p);
connect(A5_434e.p, line2200_2240_1557a.n);
connect(A1_11_4312.p, line2201_2231_15584.p);
connect(A4_11_433f.p, line2201_2231_15584.n);
connect(A2_4321.p, line2210_2260_2558c.p);
connect(A7_437b.p, line2210_2260_2558c.n);
connect(A4_11_433f.p, line2231_2241_25596.p);
connect(A5_11_435d.p, line2231_2241_25596.n);
connect(A5_11_435d.p, line2241_2251_1559e.p);
connect(A6_11_436c.p, line2241_2251_1559e.n);
connect(A6_11_436c.p, line2251_2261_355a6.p);
connect(A7_11_438a.p, line2251_2261_355a6.n);
connect(FITJAR_4399.p, line2300_2304_155ae.p);
connect(STA_43d5.p, line2300_2304_155ae.n);
connect(FITJAR_4399.p, line2300_2320_155b6.p);
connect(RAUDIMELUR_43f3.p, line2300_2320_155b6.n);
connect(SVARTSENGI_43a8.p, line2301_2320_155c2.p);
connect(RAUDIMELUR_43f3.p, line2301_2320_155c2.n);
connect(FITJAR_33KV_43c6.p, line2303_2350_155cc.p);
connect(VALLARHEIDI_443c.p, line2303_2350_155cc.n);
connect(FITJAR_33KV_43c6.p, line2303_2350_255d4.p);
connect(VALLARHEIDI_443c.p, line2303_2350_255d4.n);
connect(RAUDIMELUR_43f3.p, line2320_2330_155dc.p);
connect(REYKJANES_4402.p, line2320_2330_155dc.n);
connect(VATNSHAM_444b.p, line3120_4010_155e8.p);
connect(HRUTATUN_46ed.p, line3120_4010_155e8.n);
connect(VATNS_66_445a.p, line3121_3130_155f2.p);
connect(VEGAMOT_4496.p, line3121_3130_155f2.n);
connect(VATNS_66_445a.p, line3121_3170_155fc.p);
connect(ANDAKILL_450e.p, line3121_3170_155fc.n);
connect(VEGAMOT_4496.p, line3130_3140_15606.p);
connect(OLAFSVIK_44b4.p, line3130_3140_15606.n);
connect(VEGAMOT_4496.p, line3130_3150_15610.p);
connect(VOGASKEI_44d2.p, line3130_3150_15610.n);
connect(VOGASKEI_44d2.p, line3150_3160_1561a.p);
connect(GRUNDARF_44f0.p, line3150_3160_1561a.n);
connect(GLERASKO_451d.p, line3200_3210_15622.p);
connect(GEIRADAL_454a.p, line3200_3210_15622.n);
connect(GLERASKO_451d.p, line3200_4010_1562c.p);
connect(HRUTATUN_46ed.p, line3200_4010_1562c.n);
connect(GEIRADAL_454a.p, line3210_3300_15636.p);
connect(MJOLKA_457b.p, line3210_3300_15636.n);
connect(GEIRADA4_456c.p, line3212_3390_15640.p);
connect(HOLMAVIK_46de.p, line3212_3390_15640.n);
connect(MJOLK_66_458a.p, line3301_3310_1564a.p);
connect(BREIDIDALUR_45c5.p, line3301_3310_1564a.n);
connect(MJOLK_66_458a.p, line3301_3340_15654.p);
connect(KELDEYRI66_462d.p, line3301_3340_15654.n);
connect(MJOLKVEL_4599.p, line3303_3304_1565e.p);
connect(MJO_V2_45a8.p, line3303_3304_1565e.n);
connect(MJODUMMY_45b6.p, line3305_3341_15662.p);
connect(HRAFSEYRI_463c.p, line3305_3341_15662.n);
connect(BREIDIDALUR_45c5.p, line3310_3320_1566c.p);
connect(ISAFJORDUR_45f1.p, line3310_3320_1566c.n);
connect(BREIDIDALUR_45c5.p, line3310_3330_15676.p);
connect(BOLUNGAVIK_460f.p, line3310_3330_15676.n);
connect(KELDEYRI33_45d3.p, line3311_3380_15680.p);
connect(BILDUDALUR33_46c1.p, line3311_3380_15680.n);
connect(PATREKSFJORD_45e2.p, line3313_3340_1568a.p);
connect(KELDEYRI66_462d.p, line3313_3340_1568a.n);
connect(ISAFJORDUR_45f1.p, line3320_3330_15694.p);
connect(BOLUNGAVIK_460f.p, line3320_3330_15694.n);
connect(BOL_SKER_ANL_461e.p, line3333_3381_1569c.p);
connect(BOL_FORGANGS_46d0.p, line3333_3381_1569c.n);
connect(HRAFSEYRI_463c.p, line3341_3342_156a0.p);
connect(_INGEYRI_464b.p, line3341_3342_156a0.n);
connect(_INGEYRI_464b.p, line3342_3361_156aa.p);
connect(BREIDAD33_4669.p, line3342_3361_156aa.n);
connect(ISA_SKERDANL_46a4.p, line3370_3371_156b4.p);
connect(ISA_FORGANGS_46b3.p, line3370_3371_156b4.n);
connect(HRUTATUN_46ed.p, line4010_4020_156b8.p);
connect(LAXARVAT_471a.p, line4010_4020_156b8.n);
connect(LAXARVAT_471a.p, line4020_4030_156c2.p);
connect(BLANDA_A_4747.p, line4020_4030_156c2.n);
connect(BLANDA_A_4747.p, line4030_4036_156cc.p);
connect(BLANDA_B_4781.p, line4030_4036_156cc.n);
connect(BLANDA_B_4781.p, line4036_4040_156d0.p);
connect(VARMAHLI_478f.p, line4036_4040_156d0.n);
connect(VARMAHLI_478f.p, line4040_4050_156da.p);
connect(RANG_47cb.p, line4040_4050_156da.n);
connect(VARMAHL4_479e.p, line4041_4045_156e4.p);
connect(SAUDARKR_47bc.p, line4041_4045_156e4.n);
connect(RANG_47cb.p, line4050_4056_156ec.p);
connect(BECROMAL132_481a.p, line4050_4056_156ec.n);
connect(RANG_47cb.p, line4050_4059_156f6.p);
connect(RANG_C_4838.p, line4050_4059_156f6.n);
connect(RANG_47cb.p, line4050_4065_156fa.p);
connect(KRAFLA2_4872.p, line4050_4065_156fa.n);
connect(RANGARV5_47da.p, line4051_4058_15704.p);
connect(DALVIK_4829.p, line4051_4058_15704.n);
connect(RANGARV5_47da.p, line4051_4100_1570c.p);
connect(LAXA_4880.p, line4051_4100_1570c.n);
connect(KRAFLA_4846.p, line4060_4065_15714.p);
connect(KRAFLA2_4872.p, line4060_4065_15714.n);
connect(KRAFLA_4846.p, line4060_5051_15718.p);
connect(FLJOTSDA_4ab4.p, line4060_5051_15718.n);
connect(LAXA_4880.p, line4100_4110_15722.p);
connect(LINDAB_48d7.p, line4100_4110_15722.n);
connect(LAXA33_489d.p, line4102_4108_1572c.p);
connect(HUSAVIK_48c8.p, line4102_4108_1572c.n);
connect(LINDAB_48d7.p, line4110_4120_15736.p);
connect(KOPASKER_48e6.p, line4110_4120_15736.n);
connect(LINDAB_48d7.p, line4110_4121_15740.p);
connect(THEISTAREYK_48f5.p, line4110_4121_15740.n);
connect(HRYGG_4922.p, line5010_5011_15748.p);
connect(STUDLAR_132_4931.p, line5010_5011_15748.n);
connect(HRYGG_4922.p, line5010_5016_15752.p);
connect(EYVIND_496d.p, line5010_5016_15752.n);
connect(HRYGG_4922.p, line5010_5020_1575c.p);
connect(TEIG_49a9.p, line5010_5020_1575c.n);
connect(HRYGG_4922.p, line5010_5051_15766.p);
connect(FLJOTSDA_4ab4.p, line5010_5051_15766.n);
connect(STUDLAR_66_494f.p, line5014_5026_15770.p);
connect(STU_CABLE_49f4.p, line5014_5026_15770.n);
connect(STUDLAR_66_494f.p, line5014_5099_15778.p);
connect(FAS_CABLE_4d03.p, line5014_5099_15778.n);
connect(EYVIND66_497c.p, line5017_5019_15782.p);
connect(LF1_KAPALL_499a.p, line5017_5019_15782.n);
connect(EYVIND66_497c.p, line5017_5083_1578c.p);
connect(ESK_CABLE_4c39.p, line5017_5083_1578c.n);
connect(EYVIND66_497c.p, line5017_5102_15796.p);
connect(SR_MJOL_4d2f.p, line5017_5102_15796.n);
connect(LF1_KAPALL_499a.p, line5019_5200_157a0.p);
connect(LAGARFOSS_4d78.p, line5019_5200_157a0.n);
connect(TEIG_49a9.p, line5020_5030_157aa.p);
connect(HOLAR_4a11.p, line5020_5030_157aa.n);
connect(TEIG_33_49c7.p, line5022_5095_157b4.p);
connect(BREIDDALSVIK_4ccb.p, line5022_5095_157b4.n);
connect(DIESEL_11KV_49d6.p, line5024_5025_157bc.p);
connect(FISKM_HOFN_49e5.p, line5024_5025_157bc.n);
connect(DIESEL_11KV_49d6.p, line5024_5025_257c4.p);
connect(FISKM_HOFN_49e5.p, line5024_5025_257c4.n);
connect(HOF_SKERDANL_4a02.p, line5027_5039_157cc.p);
connect(HOF_FORGANGS_4a79.p, line5027_5039_157cc.n);
connect(HOLAR_4a11.p, line5030_5034_157d0.p);
connect(HOLAR_SC_4a2f.p, line5030_5034_157d0.n);
connect(HOLAR_4a11.p, line5030_5038_157da.p);
connect(AEGISSIDA_4a6a.p, line5030_5038_157da.n);
connect(HOLAR_SC_4a2f.p, line5034_5040_157e2.p);
connect(PRES_4a87.p, line5034_5040_157e2.n);
connect(HOLAR_19_4a3d.p, line5035_5036_157ec.p);
connect(SMYRLA_19_4a4c.p, line5035_5036_157ec.n);
connect(AEGISSIDA_4a6a.p, line5038_5039_157f0.p);
connect(HOF_FORGANGS_4a79.p, line5038_5039_157f0.n);
connect(FLJ_KERFIVOR_4aa5.p, line5050_5051_157f8.p);
connect(FLJOTSDA_4ab4.p, line5050_5051_157f8.n);
connect(FLJ_V1_CABLE_4ad1.p, line5053_5060_157fc.p);
connect(FLJ_220_A_4b34.p, line5053_5060_157fc.n);
connect(FLJ_V2_CABLE_4ae0.p, line5054_5060_15806.p);
connect(FLJ_220_A_4b34.p, line5054_5060_15806.n);
connect(FLJ_V3_CABLE_4aee.p, line5055_5060_15810.p);
connect(FLJ_220_A_4b34.p, line5055_5060_15810.n);
connect(FLJ_V4_CABLE_4afc.p, line5056_5059_1581a.p);
connect(FLJ_220_B_4b26.p, line5056_5059_1581a.n);
connect(FLJ_V5_CABLE_4b0a.p, line5057_5060_15824.p);
connect(FLJ_220_A_4b34.p, line5057_5060_15824.n);
connect(FLJ_V6_CABLE_4b18.p, line5058_5060_1582e.p);
connect(FLJ_220_A_4b34.p, line5058_5060_1582e.n);
connect(FLJ_220_B_4b26.p, line5059_5060_15838.p);
connect(FLJ_220_A_4b34.p, line5059_5060_15838.n);
connect(FLJ_220_B_4b26.p, line5059_50702_1583c.p);
connect(ALCOA_2_4dee.p, line5059_50702_1583c.n);
connect(FLJ_220_A_4b34.p, line5060_50701_15848.p);
connect(ALCOA_1_4ddf.p, line5060_50701_15848.n);
connect(ESK_CABLE_4c0e.p, line5080_5090_15854.p);
connect(ESKIFJOR_4c83.p, line5080_5090_15854.n);
connect(ESK_CABLE_4c0e.p, line5080_5098_1585c.p);
connect(NES_CABLE_4cf5.p, line5080_5098_1585c.n);
connect(ESK_SKERDANL_4c1c.p, line5081_5082_15866.p);
connect(ESK_FORGANGS_4c2b.p, line5081_5082_15866.n);
connect(ESK_CABLE_4c39.p, line5083_5090_1586a.p);
connect(ESKIFJOR_4c83.p, line5083_5090_1586a.n);
connect(FAS_FORGANGS_4c56.p, line5087_5094_15872.p);
connect(FAS_SKERDANL_4cbd.p, line5087_5094_15872.n);
connect(STO_VARFJORD_4c65.p, line5088_5095_15876.p);
connect(BREIDDALSVIK_4ccb.p, line5088_5095_15876.n);
connect(FASKRUDS_4c91.p, line5091_5099_1587e.p);
connect(FAS_CABLE_4d03.p, line5091_5099_1587e.n);
connect(NESKAUPS_4ca0.p, line5092_5098_15886.p);
connect(NES_CABLE_4cf5.p, line5092_5098_15886.n);
connect(NES_FORGANGS_4caf.p, line5093_5097_1588e.p);
connect(NES_SKERDANL_4ce7.p, line5093_5097_1588e.n);
connect(SEYDISFJORDU_4d11.p, line5100_5108_15892.p);
connect(SEY_CABLE_4d6a.p, line5100_5108_15892.n);
connect(SEY_FORGANGS_4d20.p, line5101_5107_1589a.p);
connect(SEY_KYNDISTO_4d5c.p, line5101_5107_1589a.n);
connect(SR_MJOL_4d2f.p, line5102_5108_1589e.p);
connect(SEY_CABLE_4d6a.p, line5102_5108_1589e.n);
connect(LAGARFOSS_4d78.p, line5200_5210_158a8.p);
connect(VOPNAFJO_4db3.p, line5200_5210_158a8.n);
connect(VOP_FORGANGS_4dc2.p, line5211_5212_158b2.p);
connect(VOP_SKERDANL_4dd1.p, line5211_5212_158b2.n);
connect(ALCOA_1_4ddf.p, line50701_50702_158b6.p);
connect(ALCOA_2_4dee.p, line50701_50702_158b6.n);
connect(BURFELL_3c33.p, T101010110_1_58be.p);
connect(BURFE_12_3c43.p, T101010110_1_58be.n);
connect(BURFELL_3c33.p, T101010120_1_58cd.p);
connect(BURFE_34_3c53.p, T101010120_1_58cd.n);
connect(BURFELL_3c33.p, T101010130_1_58dc.p);
connect(BURFE_56_3c61.p, T101010130_1_58dc.n);
connect(BUR66SP5_3c6f.p, T101410110_1_58e8.p);
connect(BURFE_12_3c43.p, T101410110_1_58e8.n);
connect(BURFE_12_3c43.p, T101110150_1_58f1.p);
connect(BUR11SP5_3c7d.p, T101110150_1_58f1.n);
connect(BUR66SP4_3c8d.p, T101710120_1_58fa.p);
connect(BURFE_34_3c53.p, T101710120_1_58fa.n);
connect(BURFE_34_3c53.p, T101210180_1_5903.p);
connect(BUR11SP4_3c9b.p, T101210180_1_5903.n);
connect(BUR11SP5_3c7d.p, T101510140_1_590c.p);
connect(BUR66SP5_3c6f.p, T101510140_1_590c.n);
connect(BUR11SP4_3c9b.p, T101810170_1_5915.p);
connect(BUR66SP4_3c8d.p, T101810170_1_5915.n);
connect(SIGALDA_3ca9.p, T102010220_1_591e.p);
connect(SIGALD22_3cc8.p, T102010220_1_591e.n);
connect(SIGALDA_3ca9.p, T102010230_1_592d.p);
connect(SIGALD32_3cd6.p, T102010230_1_592d.n);
connect(SIGALDA_3ca9.p, T102010240_1_593c.p);
connect(SIGALDA6_3ce4.p, T102010240_1_593c.n);
connect(SIGHR11_3cf4.p, T102510200_1_5945.p);
connect(SIGALDA_3ca9.p, T102510200_1_5945.n);
connect(SIG_TEINASPL_3d03.p, T102610210_1_594e.p);
connect(SIGALD12_3cb8.p, T102610210_1_594e.n);
connect(SIGALDA6_3ce4.p, T102410250_1_595d.p);
connect(SIGHR11_3cf4.p, T102410250_1_595d.n);
connect(HRAUNEY_3d11.p, T103010310_1_5966.p);
connect(HRAUNE12_3d20.p, T103010310_1_5966.n);
connect(HRAUNEY_3d11.p, T103010320_1_5975.p);
connect(HRAUNE22_3d2f.p, T103010320_1_5975.n);
connect(HRAUNEY_3d11.p, T103010330_1_5984.p);
connect(HRAUNE32_3d3d.p, T103010330_1_5984.n);
connect(VATNSFEL_3d4b.p, T104010410_1_5993.p);
connect(VATN_V1_3d5a.p, T104010410_1_5993.n);
connect(VATNSFEL_3d4b.p, T104010420_1_59a2.p);
connect(VATN_V2_3d69.p, T104010420_1_59a2.n);
connect(SULTARTA_3d77.p, T105010510_1_59b1.p);
connect(SULT_V1_3d86.p, T105010510_1_59b1.n);
connect(SULTARTA_3d77.p, T105010520_1_59c0.p);
connect(SULT_V2_3d95.p, T105010520_1_59c0.n);
connect(BUDARHALS_3da3.p, T106010610_1_59cf.p);
connect(BUD_V1_3db2.p, T106010610_1_59cf.n);
connect(BUDARHALS_3da3.p, T106010620_1_59de.p);
connect(BUD_V2_3dc1.p, T106010620_1_59de.n);
connect(FLUDIR_3e0c.p, T108110780_1_59ed.p);
connect(FLU_33KV_3dde.p, T108110780_1_59ed.n);
connect(HVOLSVOLLUR_3dfd.p, T108010870_1_59fa.p);
connect(HVOLSV_11KV_3e64.p, T108010870_1_59fa.n);
connect(HVOLSV_DUMMY_3e73.p, T108810800_1_5a03.p);
connect(HVOLSVOLLUR_3dfd.p, T108810800_1_5a03.n);
connect(FLUDIR_3e0c.p, T108110850_1_5a0c.p);
connect(FLU_11KV_3e46.p, T108110850_1_5a0c.n);
connect(HELLA_3e1b.p, T108210860_1_5a19.p);
connect(HELLA_11KV_3e55.p, T108210860_1_5a19.n);
connect(HVOLSV_11KV_3e64.p, T108710880_1_5a26.p);
connect(HVOLSV_DUMMY_3e73.p, T108710880_1_5a26.n);
connect(RIMAKOT_3e92.p, T109010910_1_5a2f.p);
connect(RIMAKOT_3ea0.p, T109010910_1_5a2f.n);
connect(IRAFOSS2_3f14.p, T110011100_1_5a3e.p);
connect(IRAFOSS_3f23.p, T110011100_1_5a3e.n);
connect(SP5DELTA_3f6c.p, T111911000_1_5a47.p);
connect(IRAFOSS2_3f14.p, T111911000_1_5a47.n);
connect(IRAFOSS_3f23.p, T111011110_1_5a50.p);
connect(IRAFO_12_3f32.p, T111011110_1_5a50.n);
connect(IRAFOSS_3f23.p, T111011120_1_5a5f.p);
connect(IRAFO_22_3f41.p, T111011120_1_5a5f.n);
connect(IRAFOSS_3f23.p, T111011130_1_5a6e.p);
connect(IRAFO_32_3f4f.p, T111011130_1_5a6e.n);
connect(IRAFOSS_3f23.p, T111011140_1_5a7d.p);
connect(IRAFOSS5_3f5d.p, T111011140_1_5a7d.n);
connect(IRAFOSS_3f23.p, T111011190_1_5a86.p);
connect(SP5DELTA_3f6c.p, T111011190_1_5a86.n);
connect(STEINKA_3f7b.p, T112011210_1_5a8f.p);
connect(STEING1_3f8a.p, T112011210_1_5a8f.n);
connect(STEING2_3f9a.p, T112211200_1_5a98.p);
connect(STEINKA_3f7b.p, T112211200_1_5a98.n);
connect(STEINKA_3f7b.p, T112011260_1_5aa1.p);
connect(ST_SPOLD_3fa8.p, T112011260_1_5aa1.n);
connect(STEING1_3f8a.p, T112111220_1_5aad.p);
connect(STEING2_3f9a.p, T112111220_1_5aad.n);
connect(LJOSIFOSS_3fb7.p, T113011310_1_5ab6.p);
connect(LJOS_VEL_3fc6.p, T113011310_1_5ab6.n);
connect(LJOSIFOSS_3fb7.p, T113011340_1_5ac5.p);
connect(STN1_3fd5.p, T113011340_1_5ac5.n);
connect(HVERAGERDI_3fe4.p, T113611370_1_5ace.p);
connect(HVERAG_11KV_3ff3.p, T113611370_1_5ace.n);
connect(KOLVID_B_4002.p, T113911410_1_5adb.p);
connect(HELLIS_V1_401f.p, T113911410_1_5adb.n);
connect(KOLVID_B_4002.p, T113911420_1_5aea.p);
connect(HELLIS_V2_4031.p, T113911420_1_5aea.n);
connect(KOLVID_B_4002.p, T113911430_1_5af9.p);
connect(HELLIS_V11_403f.p, T113911430_1_5af9.n);
connect(KOLVID_A_4011.p, T114011440_1_5b08.p);
connect(HELLIS_V3_404d.p, T114011440_1_5b08.n);
connect(KOLVID_A_4011.p, T114011450_1_5b17.p);
connect(HELLIS_V4_405b.p, T114011450_1_5b17.n);
connect(KOLVID_A_4011.p, T114011460_1_5b26.p);
connect(HELLIS_V5_4069.p, T114011460_1_5b26.n);
connect(KOLVID_A_4011.p, T114011470_1_5b35.p);
connect(HELLIS_V6_4077.p, T114011470_1_5b35.n);
connect(THORLAKHOFN_4094.p, T114911480_1_5b44.p);
connect(THORLAK_11KV_4085.p, T114911480_1_5b44.n);
connect(SEL_SKERDANL_40a3.p, T115011510_1_5b51.p);
connect(SEL_FORGANGS_40b2.p, T115011510_1_5b51.n);
connect(NESJAV_40c1.p, T120012010_1_5b5d.p);
connect(NESV_VEL_1_40d0.p, T120012010_1_5b5d.n);
connect(NESJAV_40c1.p, T120012020_1_5b69.p);
connect(NESV_VEL_2_40df.p, T120012020_1_5b69.n);
connect(NESJAV_40c1.p, T120012030_1_5b75.p);
connect(NESV_VEL_3_40ed.p, T120012030_1_5b75.n);
connect(NESJAV_40c1.p, T120012040_1_5b81.p);
connect(NESV_VEL_4_40fb.p, T120012040_1_5b81.n);
connect(GEITHALS_4127.p, T201020110_1_5b8d.p);
connect(GE_132_4136.p, T201020110_1_5b8d.n);
connect(GEITHALS_4127.p, T201020110_2_5b96.p);
connect(GE_132_4136.p, T201020110_2_5b96.n);
connect(GE_11SP1_4145.p, T201220100_1_5b9f.p);
connect(GEITHALS_4127.p, T201220100_1_5b9f.n);
connect(GE_11SP2_4154.p, T201320100_1_5ba8.p);
connect(GEITHALS_4127.p, T201320100_1_5ba8.n);
connect(GE_132_4136.p, T201120120_1_5bb1.p);
connect(GE_11SP1_4145.p, T201120120_1_5bb1.n);
connect(GE_132_4136.p, T201120130_1_5bba.p);
connect(GE_11SP2_4154.p, T201120130_1_5bba.n);
connect(HAMR_41ac.p, T205020510_1_5bc3.p);
connect(HAM_41bb.p, T205020510_1_5bc3.n);
connect(HAMR_41ac.p, T205020510_2_5bcc.p);
connect(HAM_41bb.p, T205020510_2_5bcc.n);
connect(HAM_DSP1_41ca.p, T205220500_1_5bd5.p);
connect(HAMR_41ac.p, T205220500_1_5bd5.n);
connect(HAM_DSP2_41d9.p, T205320500_1_5bde.p);
connect(HAMR_41ac.p, T205320500_1_5bde.n);
connect(HAM_41bb.p, T205120520_1_5be7.p);
connect(HAM_DSP1_41ca.p, T205120520_1_5be7.n);
connect(HAM_41bb.p, T205120530_1_5bf0.p);
connect(HAM_DSP2_41d9.p, T205120530_1_5bf0.n);
connect(RH_41e7.p, T206120620_1_5bf9.p);
connect(RH_11_41f6.p, T206120620_1_5bf9.n);
connect(BRENNIME_4214.p, T210021010_1_5c08.p);
connect(BREN_132_4223.p, T210021010_1_5c08.n);
connect(BRENNIME_4214.p, T210021010_2_5c11.p);
connect(BREN_132_4223.p, T210021010_2_5c11.n);
connect(BRENN_11_4232.p, T210321000_1_5c1a.p);
connect(BRENNIME_4214.p, T210321000_1_5c1a.n);
connect(BRENN_11_4232.p, T210321000_2_5c23.p);
connect(BRENNIME_4214.p, T210321000_2_5c23.n);
connect(BREN_132_4223.p, T210121030_1_5c2c.p);
connect(BRENN_11_4232.p, T210121030_1_5c2c.n);
connect(BREN_132_4223.p, T210121030_2_5c35.p);
connect(BRENN_11_4232.p, T210121030_2_5c35.n);
connect(BRE_6_3_4250.p, T210621010_1_5c3e.p);
connect(BREN_132_4223.p, T210621010_1_5c3e.n);
connect(BREN_132_4223.p, T210121070_1_5c47.p);
connect(BRENN_66_4260.p, T210121070_1_5c47.n);
connect(BREN_132_4223.p, T210121090_1_5c56.p);
connect(BRE_33_427d.p, T210121090_1_5c56.n);
connect(BRE_33_427d.p, T210921060_1_5c5f.p);
connect(BRE_6_3_4250.p, T210921060_1_5c5f.n);
connect(BRENN_66_4260.p, T210721080_1_5c68.p);
connect(BRESP3DE_426f.p, T210721080_1_5c68.n);
connect(AKRANES_428c.p, T211021110_1_5c74.p);
connect(A20_6_429b.p, T211021110_1_5c74.n);
connect(AKRANES_428c.p, T211021110_2_5c83.p);
connect(A20_6_429b.p, T211021110_2_5c83.n);
connect(SVC_16KV_42b9.p, T212121220_1_5c92.p);
connect(KLA_LOFTLINA_42c9.p, T212121220_1_5c92.n);
connect(A1_4303.p, T220022010_1_5c9f.p);
connect(A1_11_4312.p, T220022010_1_5c9f.n);
connect(A5_434e.p, T224022410_3_5cae.p);
connect(A5_11_435d.p, T224022410_3_5cae.n);
connect(A7_437b.p, T226022610_2_5cbd.p);
connect(A7_11_438a.p, T226022610_2_5cbd.n);
connect(FITJAR_4399.p, T230023030_1_5ccc.p);
connect(FITJAR_33KV_43c6.p, T230023030_1_5ccc.n);
connect(FITJAR_4399.p, T230023030_2_5cdb.p);
connect(FITJAR_33KV_43c6.p, T230023030_2_5cdb.n);
connect(SVARTSENGI_43a8.p, T230123020_1_5cea.p);
connect(SVARTS_VEL3_43b7.p, T230123020_1_5cea.n);
connect(SVARTSENGI_43a8.p, T230123360_1_5cf6.p);
connect(SVARTVEL_442e.p, T230123360_1_5cf6.n);
connect(STA_43d5.p, T230423050_1_5d02.p);
connect(STA_33KV_43e4.p, T230423050_1_5d02.n);
connect(REYKJANES_4402.p, T233023320_1_5d11.p);
connect(REYKJAV1_4411.p, T233023320_1_5d11.n);
connect(REYKJANES_4402.p, T233023330_1_5d20.p);
connect(REYKJAV2_4420.p, T233023330_1_5d20.n);
connect(VATNSHAM_444b.p, T312031210_1_5d2f.p);
connect(VATNS_66_445a.p, T312031210_1_5d2f.n);
connect(VATNSHAM_444b.p, T312031210_2_5d3e.p);
connect(VATNS_66_445a.p, T312031210_2_5d3e.n);
connect(VATNSH19_4469.p, T312231200_1_5d47.p);
connect(VATNSHAM_444b.p, T312231200_1_5d47.n);
connect(VATNS_66_445a.p, T312131220_1_5d50.p);
connect(VATNSH19_4469.p, T312131220_1_5d50.n);
connect(VATNS_66_445a.p, T312131240_1_5d59.p);
connect(VAT_19KV_4487.p, T312131240_1_5d59.n);
connect(VATNS_66_445a.p, T312131240_2_5d66.p);
connect(VAT_19KV_4487.p, T312131240_2_5d66.n);
connect(VATNSH19_4469.p, T312231230_1_5d73.p);
connect(VATNSH_S_4477.p, T312231230_1_5d73.n);
connect(VEGAMOT_4496.p, T313031310_1_5d7f.p);
connect(VEG_11KV_44a5.p, T313031310_1_5d7f.n);
connect(OLAFSVIK_44b4.p, T314031410_1_5d8c.p);
connect(OLA_19KV_44c3.p, T314031410_1_5d8c.n);
connect(VOGASKEI_44d2.p, T315031510_1_5d99.p);
connect(VOG_11KV_44e1.p, T315031510_1_5d99.n);
connect(GRUNDARF_44f0.p, T316031610_1_5da6.p);
connect(GRU_19KV_44ff.p, T316031610_1_5da6.n);
connect(GLERASKO_451d.p, T320032010_1_5db3.p);
connect(GLERA_19_452c.p, T320032010_1_5db3.n);
connect(GLERA_19_452c.p, T320132030_1_5dc2.p);
connect(GLERA_D1_453b.p, T320132030_1_5dc2.n);
connect(GEIRADA3_4559.p, T321132100_1_5dce.p);
connect(GEIRADAL_454a.p, T321132100_1_5dce.n);
connect(GEIRADAL_454a.p, T321032120_1_5dd7.p);
connect(GEIRADA4_456c.p, T321032120_1_5dd7.n);
connect(GEIRADA4_456c.p, T321232110_1_5de0.p);
connect(GEIRADA3_4559.p, T321232110_1_5de0.n);
connect(MJOLKA_457b.p, T330033010_1_5de9.p);
connect(MJOLK_66_458a.p, T330033010_1_5de9.n);
connect(MJOLK_66_458a.p, T330133040_1_5df2.p);
connect(MJO_V2_45a8.p, T330133040_1_5df2.n);
connect(MJODUMMY_45b6.p, T330533030_1_5e01.p);
connect(MJOLKVEL_4599.p, T330533030_1_5e01.n);
connect(BREIDIDALUR_45c5.p, T331033610_1_5e12.p);
connect(BREIDAD33_4669.p, T331033610_1_5e12.n);
connect(BREIDAD11_4686.p, T336333100_1_5e1b.p);
connect(BREIDIDALUR_45c5.p, T336333100_1_5e1b.n);
connect(KELDEYRI66_462d.p, T334033110_1_5e24.p);
connect(KELDEYRI33_45d3.p, T334033110_1_5e24.n);
connect(PATREKSFJORD_45e2.p, T331333210_1_5e2d.p);
connect(PATREKSF11_4600.p, T331333210_1_5e2d.n);
connect(ISAFJORDUR_45f1.p, T332033710_1_5e3e.p);
connect(ISA_FORGANGS_46b3.p, T332033710_1_5e3e.n);
connect(ISAFJORDUR_45f1.p, T332033710_2_5e4f.p);
connect(ISA_FORGANGS_46b3.p, T332033710_2_5e4f.n);
connect(BOLUNGAVIK_460f.p, T333033810_1_5e58.p);
connect(BOL_FORGANGS_46d0.p, T333033810_1_5e58.n);
connect(_INGEYRI_464b.p, T334233510_1_5e61.p);
connect(THINGEYRI11_465a.p, T334233510_1_5e61.n);
connect(BREIDAD33_4669.p, T336133620_1_5e6a.p);
connect(FLATEYRI_4677.p, T336133620_1_5e6a.n);
connect(BREIDAD33_4669.p, T336133630_1_5e73.p);
connect(BREIDAD11_4686.p, T336133630_1_5e73.n);
connect(BREIDAD0_7_4694.p, T336633610_1_5e7c.p);
connect(BREIDAD33_4669.p, T336633610_1_5e7c.n);
connect(FLATEYRI_4677.p, T336233660_1_5e85.p);
connect(BREIDAD0_7_4694.p, T336233660_1_5e85.n);
connect(HRUTATUN_46ed.p, T401040110_1_5e8e.p);
connect(HRUTA_19_46fc.p, T401040110_1_5e8e.n);
connect(HRUTA_19_46fc.p, T401140130_1_5e9d.p);
connect(HRUTA_D1_470b.p, T401140130_1_5e9d.n);
connect(LAXAVA_2_4729.p, T402140200_1_5ea7.p);
connect(LAXARVAT_471a.p, T402140200_1_5ea7.n);
connect(LAXARVAT_471a.p, T402040220_1_5eb0.p);
connect(LAXAVA_4_4738.p, T402040220_1_5eb0.n);
connect(LAXAVA_4_4738.p, T402240210_1_5eb9.p);
connect(LAXAVA_2_4729.p, T402240210_1_5eb9.n);
connect(BLANDA_A_4747.p, T403040310_1_5ec2.p);
connect(BLANDAV1_4756.p, T403040310_1_5ec2.n);
connect(BLANDAV2_4765.p, T403240360_1_5ece.p);
connect(BLANDA_B_4781.p, T403240360_1_5ece.n);
connect(BLANDA_B_4781.p, T403640330_1_5eda.p);
connect(BLANDAV3_4773.p, T403640330_1_5eda.n);
connect(VARMAHLI_478f.p, T404040410_1_5ee6.p);
connect(VARMAHL4_479e.p, T404040410_1_5ee6.n);
connect(VARMAHL2_47ad.p, T404240400_1_5eef.p);
connect(VARMAHLI_478f.p, T404240400_1_5eef.n);
connect(VARMAHL4_479e.p, T404140420_1_5ef8.p);
connect(VARMAHL2_47ad.p, T404140420_1_5ef8.n);
connect(RANG_47cb.p, T405040510_1_5f01.p);
connect(RANGARV5_47da.p, T405040510_1_5f01.n);
connect(RANG_47cb.p, T405040510_2_5f0a.p);
connect(RANGARV5_47da.p, T405040510_2_5f0a.n);
connect(RANGARV1_47e9.p, T405240500_1_5f13.p);
connect(RANG_47cb.p, T405240500_1_5f13.n);
connect(RANGARV1_47e9.p, T405240500_2_5f1c.p);
connect(RANG_47cb.p, T405240500_2_5f1c.n);
connect(RANGARV5_47da.p, T405140520_1_5f25.p);
connect(RANGARV1_47e9.p, T405140520_1_5f25.n);
connect(RANGARV5_47da.p, T405140520_2_5f2e.p);
connect(RANGARV1_47e9.p, T405140520_2_5f2e.n);
connect(RANGARV5_47da.p, T405140530_1_5f37.p);
connect(RANG_11_47fc.p, T405140530_1_5f37.n);
connect(BECROMAL132_481a.p, T405640550_1_5f43.p);
connect(BECROMAL_480b.p, T405640550_1_5f43.n);
connect(BECROMAL132_481a.p, T405640550_2_5f50.p);
connect(BECROMAL_480b.p, T405640550_2_5f50.n);
connect(KRAFLA2_4872.p, T406540610_1_5f5d.p);
connect(KRAFLAV1_4855.p, T406540610_1_5f5d.n);
connect(KRAFLA2_4872.p, T406540620_1_5f69.p);
connect(KRAFLA11_4864.p, T406540620_1_5f69.n);
connect(LAXA_4880.p, T410041010_1_5f75.p);
connect(LAXA_2_488f.p, T410041010_1_5f75.n);
connect(LAXA_4880.p, T410041020_1_5f86.p);
connect(LAXA33_489d.p, T410041020_1_5f86.n);
connect(LAXA11_48ab.p, T410441000_1_5f8f.p);
connect(LAXA_4880.p, T410441000_1_5f8f.n);
connect(LAXA_4880.p, T410041050_1_5f98.p);
connect(LAXA2_48b9.p, T410041050_1_5f98.n);
connect(LAXA33_489d.p, T410241040_1_5fa4.p);
connect(LAXA11_48ab.p, T410241040_1_5fa4.n);
connect(THEISTAREYK_48f5.p, T412141220_1_5fad.p);
connect(THEYSTAR_11_4904.p, T412141220_1_5fad.n);
connect(EGILSSTADIR_495e.p, T501550090_1_5fba.p);
connect(GRIMSARVIRKJ_4913.p, T501550090_1_5fba.n);
connect(STUDLAR_132_4931.p, T501150140_1_5fc7.p);
connect(STUDLAR_66_494f.p, T501150140_1_5fc7.n);
connect(STUDLAR_132_4931.p, T501150140_2_5fd0.p);
connect(STUDLAR_66_494f.p, T501150140_2_5fd0.n);
connect(STUDLAR_11_4940.p, T501350140_1_5fd9.p);
connect(STUDLAR_66_494f.p, T501350140_1_5fd9.n);
connect(EGILSSTADIR_495e.p, T501550180_1_5fe8.p);
connect(EYV_DELT_498b.p, T501550180_1_5fe8.n);
connect(EYVIND_496d.p, T501650170_1_5ff9.p);
connect(EYVIND66_497c.p, T501650170_1_5ff9.n);
connect(EYVIND66_497c.p, T501750180_1_6008.p);
connect(EYV_DELT_498b.p, T501750180_1_6008.n);
connect(TEIG_49a9.p, T502050220_1_6017.p);
connect(TEIG_33_49c7.p, T502050220_1_6017.n);
connect(TEIG_33_49c7.p, T502250210_1_6026.p);
connect(TEIGHO_2_49b8.p, T502250210_1_6026.n);
connect(HOF_FORGANGS_4a79.p, T503950240_1_6035.p);
connect(DIESEL_11KV_49d6.p, T503950240_1_6035.n);
connect(HOLAR_4a11.p, T503050310_1_6044.p);
connect(HOLAR_11_4a20.p, T503050310_1_6044.n);
connect(HOLAR_11_4a20.p, T503150350_1_6053.p);
connect(HOLAR_19_4a3d.p, T503150350_1_6053.n);
connect(SMYRLA_19_4a4c.p, T503650370_1_605f.p);
connect(SMYRLA_6_3_4a5b.p, T503650370_1_605f.n);
connect(PRES_4a87.p, T504050410_1_606e.p);
connect(PREST_19_4a96.p, T504050410_1_606e.n);
connect(FLJ_KERFIVOR_4aa5.p, T505050520_1_607d.p);
connect(FLJ_11_4ac2.p, T505050520_1_607d.n);
connect(FLJ_220_B_4b26.p, T505950500_1_6086.p);
connect(FLJ_KERFIVOR_4aa5.p, T505950500_1_6086.n);
connect(FLJ_220_B_4b26.p, T505950500_2_608f.p);
connect(FLJ_KERFIVOR_4aa5.p, T505950500_2_608f.n);
connect(FLJ_KERFIVOR_4aa5.p, T50505052110_1_6098.p);
connect(DUM_4dfc.p, T50505052110_1_6098.n);
connect(FLJ_11_4ac2.p, T505250590_1_60a1.p);
connect(FLJ_220_B_4b26.p, T505250590_1_60a1.n);
connect(FLJ_V1_CABLE_4ad1.p, T505350620_1_60aa.p);
connect(KARA_V2_4b51.p, T505350620_1_60aa.n);
connect(FLJ_V2_CABLE_4ae0.p, T505450630_1_60bb.p);
connect(KARA_V3_4b5f.p, T505450630_1_60bb.n);
connect(FLJ_V3_CABLE_4aee.p, T505550660_1_60cc.p);
connect(KARA_V6_4b89.p, T505550660_1_60cc.n);
connect(FLJ_V4_CABLE_4afc.p, T505650640_1_60dd.p);
connect(KARA_V4_4b6d.p, T505650640_1_60dd.n);
connect(FLJ_V5_CABLE_4b0a.p, T505750650_1_60ee.p);
connect(KARA_V5_4b7b.p, T505750650_1_60ee.n);
connect(FLJ_V6_CABLE_4b18.p, T505850610_1_60ff.p);
connect(KARA_V1_4b42.p, T505850610_1_60ff.n);
connect(DUM_4dfc.p, T50521150590_1_6110.p);
connect(FLJ_220_B_4b26.p, T50521150590_1_6110.n);
connect(AUX_1_4b97.p, T5071507020_1_6119.p);
connect(ALCOA_2_4dee.p, T5071507020_1_6119.n);
connect(DIODE_1_4baa.p, T5072507010_1_612a.p);
connect(ALCOA_1_4ddf.p, T5072507010_1_612a.n);
connect(DIODE_2_4bba.p, T5073507010_1_613b.p);
connect(ALCOA_1_4ddf.p, T5073507010_1_613b.n);
connect(DIODE_3_4bc8.p, T5074507010_1_614c.p);
connect(ALCOA_1_4ddf.p, T5074507010_1_614c.n);
connect(DIODE_4_4bd6.p, T5075507010_1_615d.p);
connect(ALCOA_1_4ddf.p, T5075507010_1_615d.n);
connect(DIODE_5_4be4.p, T5076507010_1_616e.p);
connect(ALCOA_1_4ddf.p, T5076507010_1_616e.n);
connect(AUX_2_4bf2.p, T5077507020_1_617f.p);
connect(ALCOA_2_4dee.p, T5077507020_1_617f.n);
connect(DIODE_6_4c00.p, T5078507010_1_6190.p);
connect(ALCOA_1_4ddf.p, T5078507010_1_6190.n);
connect(ESKIFJOR_4c83.p, T509050810_1_61a1.p);
connect(ESK_SKERDANL_4c1c.p, T509050810_1_61a1.n);
connect(ESKIFJOR_4c83.p, T509050820_2_61b0.p);
connect(ESK_FORGANGS_4c2b.p, T509050820_2_61b0.n);
connect(FASKRUDSFJ_4c47.p, T508650870_1_61bf.p);
connect(FAS_FORGANGS_4c56.p, T508650870_1_61bf.n);
connect(FASKRUDS_4c91.p, T509150860_1_61c8.p);
connect(FASKRUDSFJ_4c47.p, T509150860_1_61c8.n);
connect(FAS_FORGANGS_4c56.p, T508750910_1_61d1.p);
connect(FASKRUDS_4c91.p, T508750910_1_61d1.n);
connect(FAS_FORGANGS_4c56.p, T508750910_2_61e0.p);
connect(FASKRUDS_4c91.p, T508750910_2_61e0.n);
connect(STO_VARFJORD_4c65.p, T508850890_1_61e9.p);
connect(STO_VARFJ_4c74.p, T508850890_1_61e9.n);
connect(NESKAUPS_4ca0.p, T509250930_1_61f8.p);
connect(NES_FORGANGS_4caf.p, T509250930_1_61f8.n);
connect(NESKAUPS_4ca0.p, T509250930_2_6207.p);
connect(NES_FORGANGS_4caf.p, T509250930_2_6207.n);
connect(BREIDDALSVIK_4ccb.p, T509550960_1_6216.p);
connect(BREIDDALSVIK_4cd9.p, T509550960_1_6216.n);
connect(SEY_FORGANGS_4d20.p, T510151000_1_6225.p);
connect(SEYDISFJORDU_4d11.p, T510151000_1_6225.n);
connect(SEY_FORGANGS_4d20.p, T510151000_2_6234.p);
connect(SEYDISFJORDU_4d11.p, T510151000_2_6234.n);
connect(SEY_FORGANGS_4d20.p, T510151050_1_6243.p);
connect(BJOLFSVIRKJU_4d3e.p, T510151050_1_6243.n);
connect(SEY_FORGANGS_4d20.p, T510151060_1_6252.p);
connect(GULSVIRKJUN_4d4d.p, T510151060_1_6252.n);
connect(LAGARFOSS_4d78.p, T520052010_1_6261.p);
connect(LAGARFO1_4d87.p, T520052010_1_6261.n);
connect(LAGARFOSS_4d78.p, T520052020_1_6272.p);
connect(LAGARFOSS_4d96.p, T520052020_1_6272.n);
connect(LAGARFOSS_4d78.p, T520052030_1_6283.p);
connect(LAG_11KV_4da5.p, T520052030_1_6283.n);
connect(VOP_FORGANGS_4dc2.p, T521152100_1_6292.p);
connect(VOPNAFJO_4db3.p, T521152100_1_6292.n);

// -- Connect fault event:
connect(Fault.p, bus_5.p);

end Iceland_modified_PF_solved;package Generators "Library of machine models translated automatically from PSSE CIM using XSLT_OpenIPSL."
model GEN1011_1_50fe
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1011_1_50fe;
model GEN1011_2_5104
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1011_2_5104;
model GEN1012_1_510c
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1012_1_510c;
model GEN1012_2_5112
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1012_2_5112;
model GEN1013_1_511a
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1013_1_511a;
model GEN1013_2_5120
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1013_2_5120;
model GEN1021_1_5128
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1021_1_5128;
model GEN1022_1_5130
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1022_1_5130;
model GEN1023_1_5138
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1023_1_5138;
model GEN1031_1_5140
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1031_1_5140;
model GEN1032_1_5149
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1032_1_5149;
model GEN1033_1_5152
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1033_1_5152;
model GEN1041_1_515b
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1041_1_515b;
model GEN1042_1_5163
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1042_1_5163;
model GEN1051_1_516b
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1051_1_516b;
model GEN1052_1_5173
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1052_1_5173;
model GEN1061_1_517b
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1061_1_517b;
model GEN1062_1_5183
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1062_1_5183;
model GEN1111_1_518b
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1111_1_518b;
model GEN1112_1_5193
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1112_1_5193;
model GEN1113_1_519b
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1113_1_519b;
model GEN1121_1_51a3
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1121_1_51a3;
model GEN1122_1_51ab
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1122_1_51ab;
model GEN1131_1_51b3
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1131_1_51b3;
model GEN1131_2_51b9
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1131_2_51b9;
model GEN1131_3_51bf
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1131_3_51bf;
model GEN1141_1_51c7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1141_1_51c7;
model GEN1142_1_51cf
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1142_1_51cf;
model GEN1143_1_51d7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1143_1_51d7;
model GEN1144_1_51df
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1144_1_51df;
model GEN1145_1_51e7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1145_1_51e7;
model GEN1146_1_51ef
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1146_1_51ef;
model GEN1147_1_51f7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1147_1_51f7;
model GEN1201_1_51ff
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1201_1_51ff;
model GEN1202_1_5207
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1202_1_5207;
model GEN1203_1_520f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1203_1_520f;
model GEN1204_1_5217
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN1204_1_5217;
model GEN2302_1_521f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN2302_1_521f;
model GEN2332_1_5227
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN2332_1_5227;
model GEN2333_1_522f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN2333_1_522f;
model GEN2336_1_5237
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN2336_1_5237;
model GEN3170_1_523f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN3170_1_523f;
model GEN3303_1_5247
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN3303_1_5247;
model GEN3304_2_524f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN3304_2_524f;
model GEN4031_1_5257
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4031_1_5257;
model GEN4032_1_525f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4032_1_525f;
model GEN4033_1_5267
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4033_1_5267;
model GEN4061_1_526f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4061_1_526f;
model GEN4062_1_5277
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4062_1_5277;
model GEN4101_1_527f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4101_1_527f;
model GEN4105_1_5287
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN4105_1_5287;
model GEN5061_1_528f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5061_1_528f;
model GEN5062_1_5297
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5062_1_5297;
model GEN5063_1_529f
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5063_1_529f;
model GEN5064_1_52a7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5064_1_52a7;
model GEN5065_1_52af
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5065_1_52af;
model GEN5066_1_52b7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5066_1_52b7;
model GEN5105_1_52bf
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5105_1_52bf;
model GEN5106_1_52c7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5106_1_52c7;
model GEN5201_1_52cf
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5201_1_52cf;
model GEN5202_1_52d7
	extends OpenIPSL.Electrical.Essentials.pfComponent;
	OpenIPSL.Interfaces.PwPin p annotation(Placement(transformation(extent = {{100, -10}, {120, 10}})));
	// Writing machine;
	
end GEN5202_1_52d7;
end Generators;

package PF_Data "Modelica records for power flow data."
record Power_Flow " Translated and calculated power flow data."
  	extends Modelica.Icons.Record;
  	replaceable record PowerFlow = Iceland_modified_PF_solved_package.PF_Data.Power_Flow_Template constrainedby Iceland_modified_PF_solved_package.PF_Data.Power_Flow_Template annotation(choicesAllMatching);
  	PowerFlow powerflow;
end Power_Flow;
record Power_Flow_Template "Template for power flow"
	 extends Modelica.Icons.Record;
end Power_Flow_Template;  

record Bus_Data

partial record Bus_Template
// ESK2_CABLE_3c07
parameter OpenIPSL.Types.PerUnit VESK2_CABLE_3c07;
parameter OpenIPSL.Types.Angle AESK2_CABLE_3c07;
// BUR_CABLE_3c24
parameter OpenIPSL.Types.PerUnit VBUR_CABLE_3c24;
parameter OpenIPSL.Types.Angle ABUR_CABLE_3c24;
// BURFELL_3c33
parameter OpenIPSL.Types.PerUnit VBURFELL_3c33;
parameter OpenIPSL.Types.Angle ABURFELL_3c33;
// BURFE_12_3c43
parameter OpenIPSL.Types.PerUnit VBURFE_12_3c43;
parameter OpenIPSL.Types.Angle ABURFE_12_3c43;
// BURFE_34_3c53
parameter OpenIPSL.Types.PerUnit VBURFE_34_3c53;
parameter OpenIPSL.Types.Angle ABURFE_34_3c53;
// BURFE_56_3c61
parameter OpenIPSL.Types.PerUnit VBURFE_56_3c61;
parameter OpenIPSL.Types.Angle ABURFE_56_3c61;
// BUR66SP5_3c6f
parameter OpenIPSL.Types.PerUnit VBUR66SP5_3c6f;
parameter OpenIPSL.Types.Angle ABUR66SP5_3c6f;
// BUR11SP5_3c7d
parameter OpenIPSL.Types.PerUnit VBUR11SP5_3c7d;
parameter OpenIPSL.Types.Angle ABUR11SP5_3c7d;
// BUR66SP4_3c8d
parameter OpenIPSL.Types.PerUnit VBUR66SP4_3c8d;
parameter OpenIPSL.Types.Angle ABUR66SP4_3c8d;
// BUR11SP4_3c9b
parameter OpenIPSL.Types.PerUnit VBUR11SP4_3c9b;
parameter OpenIPSL.Types.Angle ABUR11SP4_3c9b;
// SIGALDA_3ca9
parameter OpenIPSL.Types.PerUnit VSIGALDA_3ca9;
parameter OpenIPSL.Types.Angle ASIGALDA_3ca9;
// SIGALD12_3cb8
parameter OpenIPSL.Types.PerUnit VSIGALD12_3cb8;
parameter OpenIPSL.Types.Angle ASIGALD12_3cb8;
// SIGALD22_3cc8
parameter OpenIPSL.Types.PerUnit VSIGALD22_3cc8;
parameter OpenIPSL.Types.Angle ASIGALD22_3cc8;
// SIGALD32_3cd6
parameter OpenIPSL.Types.PerUnit VSIGALD32_3cd6;
parameter OpenIPSL.Types.Angle ASIGALD32_3cd6;
// SIGALDA6_3ce4
parameter OpenIPSL.Types.PerUnit VSIGALDA6_3ce4;
parameter OpenIPSL.Types.Angle ASIGALDA6_3ce4;
// SIGHR11_3cf4
parameter OpenIPSL.Types.PerUnit VSIGHR11_3cf4;
parameter OpenIPSL.Types.Angle ASIGHR11_3cf4;
// SIG_TEINASPL_3d03
parameter OpenIPSL.Types.PerUnit VSIG_TEINASPL_3d03;
parameter OpenIPSL.Types.Angle ASIG_TEINASPL_3d03;
// HRAUNEY_3d11
parameter OpenIPSL.Types.PerUnit VHRAUNEY_3d11;
parameter OpenIPSL.Types.Angle AHRAUNEY_3d11;
// HRAUNE12_3d20
parameter OpenIPSL.Types.PerUnit VHRAUNE12_3d20;
parameter OpenIPSL.Types.Angle AHRAUNE12_3d20;
// HRAUNE22_3d2f
parameter OpenIPSL.Types.PerUnit VHRAUNE22_3d2f;
parameter OpenIPSL.Types.Angle AHRAUNE22_3d2f;
// HRAUNE32_3d3d
parameter OpenIPSL.Types.PerUnit VHRAUNE32_3d3d;
parameter OpenIPSL.Types.Angle AHRAUNE32_3d3d;
// VATNSFEL_3d4b
parameter OpenIPSL.Types.PerUnit VVATNSFEL_3d4b;
parameter OpenIPSL.Types.Angle AVATNSFEL_3d4b;
// VATN_V1_3d5a
parameter OpenIPSL.Types.PerUnit VVATN_V1_3d5a;
parameter OpenIPSL.Types.Angle AVATN_V1_3d5a;
// VATN_V2_3d69
parameter OpenIPSL.Types.PerUnit VVATN_V2_3d69;
parameter OpenIPSL.Types.Angle AVATN_V2_3d69;
// SULTARTA_3d77
parameter OpenIPSL.Types.PerUnit VSULTARTA_3d77;
parameter OpenIPSL.Types.Angle ASULTARTA_3d77;
// SULT_V1_3d86
parameter OpenIPSL.Types.PerUnit VSULT_V1_3d86;
parameter OpenIPSL.Types.Angle ASULT_V1_3d86;
// SULT_V2_3d95
parameter OpenIPSL.Types.PerUnit VSULT_V2_3d95;
parameter OpenIPSL.Types.Angle ASULT_V2_3d95;
// BUDARHALS_3da3
parameter OpenIPSL.Types.PerUnit VBUDARHALS_3da3;
parameter OpenIPSL.Types.Angle ABUDARHALS_3da3;
// BUD_V1_3db2
parameter OpenIPSL.Types.PerUnit VBUD_V1_3db2;
parameter OpenIPSL.Types.Angle ABUD_V1_3db2;
// BUD_V2_3dc1
parameter OpenIPSL.Types.PerUnit VBUD_V2_3dc1;
parameter OpenIPSL.Types.Angle ABUD_V2_3dc1;
// LANGALDA_3dcf
parameter OpenIPSL.Types.PerUnit VLANGALDA_3dcf;
parameter OpenIPSL.Types.Angle ALANGALDA_3dcf;
// FLU_33KV_3dde
parameter OpenIPSL.Types.PerUnit VFLU_33KV_3dde;
parameter OpenIPSL.Types.Angle AFLU_33KV_3dde;
// HLA_CABLE_3dee
parameter OpenIPSL.Types.PerUnit VHLA_CABLE_3dee;
parameter OpenIPSL.Types.Angle AHLA_CABLE_3dee;
// HVOLSVOLLUR_3dfd
parameter OpenIPSL.Types.PerUnit VHVOLSVOLLUR_3dfd;
parameter OpenIPSL.Types.Angle AHVOLSVOLLUR_3dfd;
// FLUDIR_3e0c
parameter OpenIPSL.Types.PerUnit VFLUDIR_3e0c;
parameter OpenIPSL.Types.Angle AFLUDIR_3e0c;
// HELLA_3e1b
parameter OpenIPSL.Types.PerUnit VHELLA_3e1b;
parameter OpenIPSL.Types.Angle AHELLA_3e1b;
// FLU_CABLE_3e2a
parameter OpenIPSL.Types.PerUnit VFLU_CABLE_3e2a;
parameter OpenIPSL.Types.Angle AFLU_CABLE_3e2a;
// FLU2_CABLE_3e38
parameter OpenIPSL.Types.PerUnit VFLU2_CABLE_3e38;
parameter OpenIPSL.Types.Angle AFLU2_CABLE_3e38;
// FLU_11KV_3e46
parameter OpenIPSL.Types.PerUnit VFLU_11KV_3e46;
parameter OpenIPSL.Types.Angle AFLU_11KV_3e46;
// HELLA_11KV_3e55
parameter OpenIPSL.Types.PerUnit VHELLA_11KV_3e55;
parameter OpenIPSL.Types.Angle AHELLA_11KV_3e55;
// HVOLSV_11KV_3e64
parameter OpenIPSL.Types.PerUnit VHVOLSV_11KV_3e64;
parameter OpenIPSL.Types.Angle AHVOLSV_11KV_3e64;
// HVOLSV_DUMMY_3e73
parameter OpenIPSL.Types.PerUnit VHVOLSV_DUMMY_3e73;
parameter OpenIPSL.Types.Angle AHVOLSV_DUMMY_3e73;
// RIMCABLE_3e83
parameter OpenIPSL.Types.PerUnit VRIMCABLE_3e83;
parameter OpenIPSL.Types.Angle ARIMCABLE_3e83;
// RIMAKOT_3e92
parameter OpenIPSL.Types.PerUnit VRIMAKOT_3e92;
parameter OpenIPSL.Types.Angle ARIMAKOT_3e92;
// RIMAKOT_3ea0
parameter OpenIPSL.Types.PerUnit VRIMAKOT_3ea0;
parameter OpenIPSL.Types.Angle ARIMAKOT_3ea0;
// VEM_FORGANGS_3eaf
parameter OpenIPSL.Types.PerUnit VVEM_FORGANGS_3eaf;
parameter OpenIPSL.Types.Angle AVEM_FORGANGS_3eaf;
// VM3_JARDSTR1_3ebe
parameter OpenIPSL.Types.PerUnit VVM3_JARDSTR1_3ebe;
parameter OpenIPSL.Types.Angle AVM3_JARDSTR1_3ebe;
// VM3_JARDSTR2_3ecd
parameter OpenIPSL.Types.PerUnit VVM3_JARDSTR2_3ecd;
parameter OpenIPSL.Types.Angle AVM3_JARDSTR2_3ecd;
// VEM_BRAEDSLA_3edb
parameter OpenIPSL.Types.PerUnit VVEM_BRAEDSLA_3edb;
parameter OpenIPSL.Types.Angle AVEM_BRAEDSLA_3edb;
// VM1_RIM_ENDI_3ee9
parameter OpenIPSL.Types.PerUnit VVM1_RIM_ENDI_3ee9;
parameter OpenIPSL.Types.Angle AVM1_RIM_ENDI_3ee9;
// VM1_VEM_ENDI_3ef8
parameter OpenIPSL.Types.PerUnit VVM1_VEM_ENDI_3ef8;
parameter OpenIPSL.Types.Angle AVM1_VEM_ENDI_3ef8;
// VEM_KETILL_3f06
parameter OpenIPSL.Types.PerUnit VVEM_KETILL_3f06;
parameter OpenIPSL.Types.Angle AVEM_KETILL_3f06;
// IRAFOSS2_3f14
parameter OpenIPSL.Types.PerUnit VIRAFOSS2_3f14;
parameter OpenIPSL.Types.Angle AIRAFOSS2_3f14;
// IRAFOSS_3f23
parameter OpenIPSL.Types.PerUnit VIRAFOSS_3f23;
parameter OpenIPSL.Types.Angle AIRAFOSS_3f23;
// IRAFO_12_3f32
parameter OpenIPSL.Types.PerUnit VIRAFO_12_3f32;
parameter OpenIPSL.Types.Angle AIRAFO_12_3f32;
// IRAFO_22_3f41
parameter OpenIPSL.Types.PerUnit VIRAFO_22_3f41;
parameter OpenIPSL.Types.Angle AIRAFO_22_3f41;
// IRAFO_32_3f4f
parameter OpenIPSL.Types.PerUnit VIRAFO_32_3f4f;
parameter OpenIPSL.Types.Angle AIRAFO_32_3f4f;
// IRAFOSS5_3f5d
parameter OpenIPSL.Types.PerUnit VIRAFOSS5_3f5d;
parameter OpenIPSL.Types.Angle AIRAFOSS5_3f5d;
// SP5DELTA_3f6c
parameter OpenIPSL.Types.PerUnit VSP5DELTA_3f6c;
parameter OpenIPSL.Types.Angle ASP5DELTA_3f6c;
// STEINKA_3f7b
parameter OpenIPSL.Types.PerUnit VSTEINKA_3f7b;
parameter OpenIPSL.Types.Angle ASTEINKA_3f7b;
// STEING1_3f8a
parameter OpenIPSL.Types.PerUnit VSTEING1_3f8a;
parameter OpenIPSL.Types.Angle ASTEING1_3f8a;
// STEING2_3f9a
parameter OpenIPSL.Types.PerUnit VSTEING2_3f9a;
parameter OpenIPSL.Types.Angle ASTEING2_3f9a;
// ST_SPOLD_3fa8
parameter OpenIPSL.Types.PerUnit VST_SPOLD_3fa8;
parameter OpenIPSL.Types.Angle AST_SPOLD_3fa8;
// LJOSIFOSS_3fb7
parameter OpenIPSL.Types.PerUnit VLJOSIFOSS_3fb7;
parameter OpenIPSL.Types.Angle ALJOSIFOSS_3fb7;
// LJOS_VEL_3fc6
parameter OpenIPSL.Types.PerUnit VLJOS_VEL_3fc6;
parameter OpenIPSL.Types.Angle ALJOS_VEL_3fc6;
// STN1_3fd5
parameter OpenIPSL.Types.PerUnit VSTN1_3fd5;
parameter OpenIPSL.Types.Angle ASTN1_3fd5;
// HVERAGERDI_3fe4
parameter OpenIPSL.Types.PerUnit VHVERAGERDI_3fe4;
parameter OpenIPSL.Types.Angle AHVERAGERDI_3fe4;
// HVERAG_11KV_3ff3
parameter OpenIPSL.Types.PerUnit VHVERAG_11KV_3ff3;
parameter OpenIPSL.Types.Angle AHVERAG_11KV_3ff3;
// KOLVID_B_4002
parameter OpenIPSL.Types.PerUnit VKOLVID_B_4002;
parameter OpenIPSL.Types.Angle AKOLVID_B_4002;
// KOLVID_A_4011
parameter OpenIPSL.Types.PerUnit VKOLVID_A_4011;
parameter OpenIPSL.Types.Angle AKOLVID_A_4011;
// HELLIS_V1_401f
parameter OpenIPSL.Types.PerUnit VHELLIS_V1_401f;
parameter OpenIPSL.Types.Angle AHELLIS_V1_401f;
// HELLIS_V2_4031
parameter OpenIPSL.Types.PerUnit VHELLIS_V2_4031;
parameter OpenIPSL.Types.Angle AHELLIS_V2_4031;
// HELLIS_V11_403f
parameter OpenIPSL.Types.PerUnit VHELLIS_V11_403f;
parameter OpenIPSL.Types.Angle AHELLIS_V11_403f;
// HELLIS_V3_404d
parameter OpenIPSL.Types.PerUnit VHELLIS_V3_404d;
parameter OpenIPSL.Types.Angle AHELLIS_V3_404d;
// HELLIS_V4_405b
parameter OpenIPSL.Types.PerUnit VHELLIS_V4_405b;
parameter OpenIPSL.Types.Angle AHELLIS_V4_405b;
// HELLIS_V5_4069
parameter OpenIPSL.Types.PerUnit VHELLIS_V5_4069;
parameter OpenIPSL.Types.Angle AHELLIS_V5_4069;
// HELLIS_V6_4077
parameter OpenIPSL.Types.PerUnit VHELLIS_V6_4077;
parameter OpenIPSL.Types.Angle AHELLIS_V6_4077;
// THORLAK_11KV_4085
parameter OpenIPSL.Types.PerUnit VTHORLAK_11KV_4085;
parameter OpenIPSL.Types.Angle ATHORLAK_11KV_4085;
// THORLAKHOFN_4094
parameter OpenIPSL.Types.PerUnit VTHORLAKHOFN_4094;
parameter OpenIPSL.Types.Angle ATHORLAKHOFN_4094;
// SEL_SKERDANL_40a3
parameter OpenIPSL.Types.PerUnit VSEL_SKERDANL_40a3;
parameter OpenIPSL.Types.Angle ASEL_SKERDANL_40a3;
// SEL_FORGANGS_40b2
parameter OpenIPSL.Types.PerUnit VSEL_FORGANGS_40b2;
parameter OpenIPSL.Types.Angle ASEL_FORGANGS_40b2;
// NESJAV_40c1
parameter OpenIPSL.Types.PerUnit VNESJAV_40c1;
parameter OpenIPSL.Types.Angle ANESJAV_40c1;
// NESV_VEL_1_40d0
parameter OpenIPSL.Types.PerUnit VNESV_VEL_1_40d0;
parameter OpenIPSL.Types.Angle ANESV_VEL_1_40d0;
// NESV_VEL_2_40df
parameter OpenIPSL.Types.PerUnit VNESV_VEL_2_40df;
parameter OpenIPSL.Types.Angle ANESV_VEL_2_40df;
// NESV_VEL_3_40ed
parameter OpenIPSL.Types.PerUnit VNESV_VEL_3_40ed;
parameter OpenIPSL.Types.Angle ANESV_VEL_3_40ed;
// NESV_VEL_4_40fb
parameter OpenIPSL.Types.PerUnit VNESV_VEL_4_40fb;
parameter OpenIPSL.Types.Angle ANESV_VEL_4_40fb;
// GRAFNING_4109
parameter OpenIPSL.Types.PerUnit VGRAFNING_4109;
parameter OpenIPSL.Types.Angle AGRAFNING_4109;
// BRINGUR_4118
parameter OpenIPSL.Types.PerUnit VBRINGUR_4118;
parameter OpenIPSL.Types.Angle ABRINGUR_4118;
// GEITHALS_4127
parameter OpenIPSL.Types.PerUnit VGEITHALS_4127;
parameter OpenIPSL.Types.Angle AGEITHALS_4127;
// GE_132_4136
parameter OpenIPSL.Types.PerUnit VGE_132_4136;
parameter OpenIPSL.Types.Angle AGE_132_4136;
// GE_11SP1_4145
parameter OpenIPSL.Types.PerUnit VGE_11SP1_4145;
parameter OpenIPSL.Types.Angle AGE_11SP1_4145;
// GE_11SP2_4154
parameter OpenIPSL.Types.PerUnit VGE_11SP2_4154;
parameter OpenIPSL.Types.Angle AGE_11SP2_4154;
// RR_A5_4162
parameter OpenIPSL.Types.PerUnit VRR_A5_4162;
parameter OpenIPSL.Types.Angle ARR_A5_4162;
// RR_A12_4171
parameter OpenIPSL.Types.PerUnit VRR_A12_4171;
parameter OpenIPSL.Types.Angle ARR_A12_4171;
// IS1_417f
parameter OpenIPSL.Types.PerUnit VIS1_417f;
parameter OpenIPSL.Types.Angle AIS1_417f;
// IS2_418e
parameter OpenIPSL.Types.PerUnit VIS2_418e;
parameter OpenIPSL.Types.Angle AIS2_418e;
// KORPA_419d
parameter OpenIPSL.Types.PerUnit VKORPA_419d;
parameter OpenIPSL.Types.Angle AKORPA_419d;
// HAMR_41ac
parameter OpenIPSL.Types.PerUnit VHAMR_41ac;
parameter OpenIPSL.Types.Angle AHAMR_41ac;
// HAM_41bb
parameter OpenIPSL.Types.PerUnit VHAM_41bb;
parameter OpenIPSL.Types.Angle AHAM_41bb;
// HAM_DSP1_41ca
parameter OpenIPSL.Types.PerUnit VHAM_DSP1_41ca;
parameter OpenIPSL.Types.Angle AHAM_DSP1_41ca;
// HAM_DSP2_41d9
parameter OpenIPSL.Types.PerUnit VHAM_DSP2_41d9;
parameter OpenIPSL.Types.Angle AHAM_DSP2_41d9;
// RH_41e7
parameter OpenIPSL.Types.PerUnit VRH_41e7;
parameter OpenIPSL.Types.Angle ARH_41e7;
// RH_11_41f6
parameter OpenIPSL.Types.PerUnit VRH_11_41f6;
parameter OpenIPSL.Types.Angle ARH_11_41f6;
// SANDSKEI_4205
parameter OpenIPSL.Types.PerUnit VSANDSKEI_4205;
parameter OpenIPSL.Types.Angle ASANDSKEI_4205;
// BRENNIME_4214
parameter OpenIPSL.Types.PerUnit VBRENNIME_4214;
parameter OpenIPSL.Types.Angle ABRENNIME_4214;
// BREN_132_4223
parameter OpenIPSL.Types.PerUnit VBREN_132_4223;
parameter OpenIPSL.Types.Angle ABREN_132_4223;
// BRENN_11_4232
parameter OpenIPSL.Types.PerUnit VBRENN_11_4232;
parameter OpenIPSL.Types.Angle ABRENN_11_4232;
// SP5_ROFAREIT_4241
parameter OpenIPSL.Types.PerUnit VSP5_ROFAREIT_4241;
parameter OpenIPSL.Types.Angle ASP5_ROFAREIT_4241;
// BRE_6_3_4250
parameter OpenIPSL.Types.PerUnit VBRE_6_3_4250;
parameter OpenIPSL.Types.Angle ABRE_6_3_4250;
// BRENN_66_4260
parameter OpenIPSL.Types.PerUnit VBRENN_66_4260;
parameter OpenIPSL.Types.Angle ABRENN_66_4260;
// BRESP3DE_426f
parameter OpenIPSL.Types.PerUnit VBRESP3DE_426f;
parameter OpenIPSL.Types.Angle ABRESP3DE_426f;
// BRE_33_427d
parameter OpenIPSL.Types.PerUnit VBRE_33_427d;
parameter OpenIPSL.Types.Angle ABRE_33_427d;
// AKRANES_428c
parameter OpenIPSL.Types.PerUnit VAKRANES_428c;
parameter OpenIPSL.Types.Angle AAKRANES_428c;
// A20_6_429b
parameter OpenIPSL.Types.PerUnit VA20_6_429b;
parameter OpenIPSL.Types.Angle AA20_6_429b;
// KLAFASTA_IR_42aa
parameter OpenIPSL.Types.PerUnit VKLAFASTA_IR_42aa;
parameter OpenIPSL.Types.Angle AKLAFASTA_IR_42aa;
// SVC_16KV_42b9
parameter OpenIPSL.Types.PerUnit VSVC_16KV_42b9;
parameter OpenIPSL.Types.Angle ASVC_16KV_42b9;
// KLA_LOFTLINA_42c9
parameter OpenIPSL.Types.PerUnit VKLA_LOFTLINA_42c9;
parameter OpenIPSL.Types.Angle AKLA_LOFTLINA_42c9;
// FESI_42d7
parameter OpenIPSL.Types.PerUnit VFESI_42d7;
parameter OpenIPSL.Types.Angle AFESI_42d7;
// NA_A_42e6
parameter OpenIPSL.Types.PerUnit VNA_A_42e6;
parameter OpenIPSL.Types.Angle ANA_A_42e6;
// NA_B_42f5
parameter OpenIPSL.Types.PerUnit VNA_B_42f5;
parameter OpenIPSL.Types.Angle ANA_B_42f5;
// A1_4303
parameter OpenIPSL.Types.PerUnit VA1_4303;
parameter OpenIPSL.Types.Angle AA1_4303;
// A1_11_4312
parameter OpenIPSL.Types.PerUnit VA1_11_4312;
parameter OpenIPSL.Types.Angle AA1_11_4312;
// A2_4321
parameter OpenIPSL.Types.PerUnit VA2_4321;
parameter OpenIPSL.Types.Angle AA2_4321;
// A3_4330
parameter OpenIPSL.Types.PerUnit VA3_4330;
parameter OpenIPSL.Types.Angle AA3_4330;
// A4_11_433f
parameter OpenIPSL.Types.PerUnit VA4_11_433f;
parameter OpenIPSL.Types.Angle AA4_11_433f;
// A5_434e
parameter OpenIPSL.Types.PerUnit VA5_434e;
parameter OpenIPSL.Types.Angle AA5_434e;
// A5_11_435d
parameter OpenIPSL.Types.PerUnit VA5_11_435d;
parameter OpenIPSL.Types.Angle AA5_11_435d;
// A6_11_436c
parameter OpenIPSL.Types.PerUnit VA6_11_436c;
parameter OpenIPSL.Types.Angle AA6_11_436c;
// A7_437b
parameter OpenIPSL.Types.PerUnit VA7_437b;
parameter OpenIPSL.Types.Angle AA7_437b;
// A7_11_438a
parameter OpenIPSL.Types.PerUnit VA7_11_438a;
parameter OpenIPSL.Types.Angle AA7_11_438a;
// FITJAR_4399
parameter OpenIPSL.Types.PerUnit VFITJAR_4399;
parameter OpenIPSL.Types.Angle AFITJAR_4399;
// SVARTSENGI_43a8
parameter OpenIPSL.Types.PerUnit VSVARTSENGI_43a8;
parameter OpenIPSL.Types.Angle ASVARTSENGI_43a8;
// SVARTS_VEL3_43b7
parameter OpenIPSL.Types.PerUnit VSVARTS_VEL3_43b7;
parameter OpenIPSL.Types.Angle ASVARTS_VEL3_43b7;
// FITJAR_33KV_43c6
parameter OpenIPSL.Types.PerUnit VFITJAR_33KV_43c6;
parameter OpenIPSL.Types.Angle AFITJAR_33KV_43c6;
// STA_43d5
parameter OpenIPSL.Types.PerUnit VSTA_43d5;
parameter OpenIPSL.Types.Angle ASTA_43d5;
// STA_33KV_43e4
parameter OpenIPSL.Types.PerUnit VSTA_33KV_43e4;
parameter OpenIPSL.Types.Angle ASTA_33KV_43e4;
// RAUDIMELUR_43f3
parameter OpenIPSL.Types.PerUnit VRAUDIMELUR_43f3;
parameter OpenIPSL.Types.Angle ARAUDIMELUR_43f3;
// REYKJANES_4402
parameter OpenIPSL.Types.PerUnit VREYKJANES_4402;
parameter OpenIPSL.Types.Angle AREYKJANES_4402;
// REYKJAV1_4411
parameter OpenIPSL.Types.PerUnit VREYKJAV1_4411;
parameter OpenIPSL.Types.Angle AREYKJAV1_4411;
// REYKJAV2_4420
parameter OpenIPSL.Types.PerUnit VREYKJAV2_4420;
parameter OpenIPSL.Types.Angle AREYKJAV2_4420;
// SVARTVEL_442e
parameter OpenIPSL.Types.PerUnit VSVARTVEL_442e;
parameter OpenIPSL.Types.Angle ASVARTVEL_442e;
// VALLARHEIDI_443c
parameter OpenIPSL.Types.PerUnit VVALLARHEIDI_443c;
parameter OpenIPSL.Types.Angle AVALLARHEIDI_443c;
// VATNSHAM_444b
parameter OpenIPSL.Types.PerUnit VVATNSHAM_444b;
parameter OpenIPSL.Types.Angle AVATNSHAM_444b;
// VATNS_66_445a
parameter OpenIPSL.Types.PerUnit VVATNS_66_445a;
parameter OpenIPSL.Types.Angle AVATNS_66_445a;
// VATNSH19_4469
parameter OpenIPSL.Types.PerUnit VVATNSH19_4469;
parameter OpenIPSL.Types.Angle AVATNSH19_4469;
// VATNSH_S_4477
parameter OpenIPSL.Types.PerUnit VVATNSH_S_4477;
parameter OpenIPSL.Types.Angle AVATNSH_S_4477;
// VAT_19KV_4487
parameter OpenIPSL.Types.PerUnit VVAT_19KV_4487;
parameter OpenIPSL.Types.Angle AVAT_19KV_4487;
// VEGAMOT_4496
parameter OpenIPSL.Types.PerUnit VVEGAMOT_4496;
parameter OpenIPSL.Types.Angle AVEGAMOT_4496;
// VEG_11KV_44a5
parameter OpenIPSL.Types.PerUnit VVEG_11KV_44a5;
parameter OpenIPSL.Types.Angle AVEG_11KV_44a5;
// OLAFSVIK_44b4
parameter OpenIPSL.Types.PerUnit VOLAFSVIK_44b4;
parameter OpenIPSL.Types.Angle AOLAFSVIK_44b4;
// OLA_19KV_44c3
parameter OpenIPSL.Types.PerUnit VOLA_19KV_44c3;
parameter OpenIPSL.Types.Angle AOLA_19KV_44c3;
// VOGASKEI_44d2
parameter OpenIPSL.Types.PerUnit VVOGASKEI_44d2;
parameter OpenIPSL.Types.Angle AVOGASKEI_44d2;
// VOG_11KV_44e1
parameter OpenIPSL.Types.PerUnit VVOG_11KV_44e1;
parameter OpenIPSL.Types.Angle AVOG_11KV_44e1;
// GRUNDARF_44f0
parameter OpenIPSL.Types.PerUnit VGRUNDARF_44f0;
parameter OpenIPSL.Types.Angle AGRUNDARF_44f0;
// GRU_19KV_44ff
parameter OpenIPSL.Types.PerUnit VGRU_19KV_44ff;
parameter OpenIPSL.Types.Angle AGRU_19KV_44ff;
// ANDAKILL_450e
parameter OpenIPSL.Types.PerUnit VANDAKILL_450e;
parameter OpenIPSL.Types.Angle AANDAKILL_450e;
// GLERASKO_451d
parameter OpenIPSL.Types.PerUnit VGLERASKO_451d;
parameter OpenIPSL.Types.Angle AGLERASKO_451d;
// GLERA_19_452c
parameter OpenIPSL.Types.PerUnit VGLERA_19_452c;
parameter OpenIPSL.Types.Angle AGLERA_19_452c;
// GLERA_D1_453b
parameter OpenIPSL.Types.PerUnit VGLERA_D1_453b;
parameter OpenIPSL.Types.Angle AGLERA_D1_453b;
// GEIRADAL_454a
parameter OpenIPSL.Types.PerUnit VGEIRADAL_454a;
parameter OpenIPSL.Types.Angle AGEIRADAL_454a;
// GEIRADA3_4559
parameter OpenIPSL.Types.PerUnit VGEIRADA3_4559;
parameter OpenIPSL.Types.Angle AGEIRADA3_4559;
// GEIRADA4_456c
parameter OpenIPSL.Types.PerUnit VGEIRADA4_456c;
parameter OpenIPSL.Types.Angle AGEIRADA4_456c;
// MJOLKA_457b
parameter OpenIPSL.Types.PerUnit VMJOLKA_457b;
parameter OpenIPSL.Types.Angle AMJOLKA_457b;
// MJOLK_66_458a
parameter OpenIPSL.Types.PerUnit VMJOLK_66_458a;
parameter OpenIPSL.Types.Angle AMJOLK_66_458a;
// MJOLKVEL_4599
parameter OpenIPSL.Types.PerUnit VMJOLKVEL_4599;
parameter OpenIPSL.Types.Angle AMJOLKVEL_4599;
// MJO_V2_45a8
parameter OpenIPSL.Types.PerUnit VMJO_V2_45a8;
parameter OpenIPSL.Types.Angle AMJO_V2_45a8;
// MJODUMMY_45b6
parameter OpenIPSL.Types.PerUnit VMJODUMMY_45b6;
parameter OpenIPSL.Types.Angle AMJODUMMY_45b6;
// BREIDIDALUR_45c5
parameter OpenIPSL.Types.PerUnit VBREIDIDALUR_45c5;
parameter OpenIPSL.Types.Angle ABREIDIDALUR_45c5;
// KELDEYRI33_45d3
parameter OpenIPSL.Types.PerUnit VKELDEYRI33_45d3;
parameter OpenIPSL.Types.Angle AKELDEYRI33_45d3;
// PATREKSFJORD_45e2
parameter OpenIPSL.Types.PerUnit VPATREKSFJORD_45e2;
parameter OpenIPSL.Types.Angle APATREKSFJORD_45e2;
// ISAFJORDUR_45f1
parameter OpenIPSL.Types.PerUnit VISAFJORDUR_45f1;
parameter OpenIPSL.Types.Angle AISAFJORDUR_45f1;
// PATREKSF11_4600
parameter OpenIPSL.Types.PerUnit VPATREKSF11_4600;
parameter OpenIPSL.Types.Angle APATREKSF11_4600;
// BOLUNGAVIK_460f
parameter OpenIPSL.Types.PerUnit VBOLUNGAVIK_460f;
parameter OpenIPSL.Types.Angle ABOLUNGAVIK_460f;
// BOL_SKER_ANL_461e
parameter OpenIPSL.Types.PerUnit VBOL_SKER_ANL_461e;
parameter OpenIPSL.Types.Angle ABOL_SKER_ANL_461e;
// KELDEYRI66_462d
parameter OpenIPSL.Types.PerUnit VKELDEYRI66_462d;
parameter OpenIPSL.Types.Angle AKELDEYRI66_462d;
// HRAFSEYRI_463c
parameter OpenIPSL.Types.PerUnit VHRAFSEYRI_463c;
parameter OpenIPSL.Types.Angle AHRAFSEYRI_463c;
// _INGEYRI_464b
parameter OpenIPSL.Types.PerUnit V_INGEYRI_464b;
parameter OpenIPSL.Types.Angle A_INGEYRI_464b;
// THINGEYRI11_465a
parameter OpenIPSL.Types.PerUnit VTHINGEYRI11_465a;
parameter OpenIPSL.Types.Angle ATHINGEYRI11_465a;
// BREIDAD33_4669
parameter OpenIPSL.Types.PerUnit VBREIDAD33_4669;
parameter OpenIPSL.Types.Angle ABREIDAD33_4669;
// FLATEYRI_4677
parameter OpenIPSL.Types.PerUnit VFLATEYRI_4677;
parameter OpenIPSL.Types.Angle AFLATEYRI_4677;
// BREIDAD11_4686
parameter OpenIPSL.Types.PerUnit VBREIDAD11_4686;
parameter OpenIPSL.Types.Angle ABREIDAD11_4686;
// BREIDAD0_7_4694
parameter OpenIPSL.Types.PerUnit VBREIDAD0_7_4694;
parameter OpenIPSL.Types.Angle ABREIDAD0_7_4694;
// ISA_SKERDANL_46a4
parameter OpenIPSL.Types.PerUnit VISA_SKERDANL_46a4;
parameter OpenIPSL.Types.Angle AISA_SKERDANL_46a4;
// ISA_FORGANGS_46b3
parameter OpenIPSL.Types.PerUnit VISA_FORGANGS_46b3;
parameter OpenIPSL.Types.Angle AISA_FORGANGS_46b3;
// BILDUDALUR33_46c1
parameter OpenIPSL.Types.PerUnit VBILDUDALUR33_46c1;
parameter OpenIPSL.Types.Angle ABILDUDALUR33_46c1;
// BOL_FORGANGS_46d0
parameter OpenIPSL.Types.PerUnit VBOL_FORGANGS_46d0;
parameter OpenIPSL.Types.Angle ABOL_FORGANGS_46d0;
// HOLMAVIK_46de
parameter OpenIPSL.Types.PerUnit VHOLMAVIK_46de;
parameter OpenIPSL.Types.Angle AHOLMAVIK_46de;
// HRUTATUN_46ed
parameter OpenIPSL.Types.PerUnit VHRUTATUN_46ed;
parameter OpenIPSL.Types.Angle AHRUTATUN_46ed;
// HRUTA_19_46fc
parameter OpenIPSL.Types.PerUnit VHRUTA_19_46fc;
parameter OpenIPSL.Types.Angle AHRUTA_19_46fc;
// HRUTA_D1_470b
parameter OpenIPSL.Types.PerUnit VHRUTA_D1_470b;
parameter OpenIPSL.Types.Angle AHRUTA_D1_470b;
// LAXARVAT_471a
parameter OpenIPSL.Types.PerUnit VLAXARVAT_471a;
parameter OpenIPSL.Types.Angle ALAXARVAT_471a;
// LAXAVA_2_4729
parameter OpenIPSL.Types.PerUnit VLAXAVA_2_4729;
parameter OpenIPSL.Types.Angle ALAXAVA_2_4729;
// LAXAVA_4_4738
parameter OpenIPSL.Types.PerUnit VLAXAVA_4_4738;
parameter OpenIPSL.Types.Angle ALAXAVA_4_4738;
// BLANDA_A_4747
parameter OpenIPSL.Types.PerUnit VBLANDA_A_4747;
parameter OpenIPSL.Types.Angle ABLANDA_A_4747;
// BLANDAV1_4756
parameter OpenIPSL.Types.PerUnit VBLANDAV1_4756;
parameter OpenIPSL.Types.Angle ABLANDAV1_4756;
// BLANDAV2_4765
parameter OpenIPSL.Types.PerUnit VBLANDAV2_4765;
parameter OpenIPSL.Types.Angle ABLANDAV2_4765;
// BLANDAV3_4773
parameter OpenIPSL.Types.PerUnit VBLANDAV3_4773;
parameter OpenIPSL.Types.Angle ABLANDAV3_4773;
// BLANDA_B_4781
parameter OpenIPSL.Types.PerUnit VBLANDA_B_4781;
parameter OpenIPSL.Types.Angle ABLANDA_B_4781;
// VARMAHLI_478f
parameter OpenIPSL.Types.PerUnit VVARMAHLI_478f;
parameter OpenIPSL.Types.Angle AVARMAHLI_478f;
// VARMAHL4_479e
parameter OpenIPSL.Types.PerUnit VVARMAHL4_479e;
parameter OpenIPSL.Types.Angle AVARMAHL4_479e;
// VARMAHL2_47ad
parameter OpenIPSL.Types.PerUnit VVARMAHL2_47ad;
parameter OpenIPSL.Types.Angle AVARMAHL2_47ad;
// SAUDARKR_47bc
parameter OpenIPSL.Types.PerUnit VSAUDARKR_47bc;
parameter OpenIPSL.Types.Angle ASAUDARKR_47bc;
// RANG_47cb
parameter OpenIPSL.Types.PerUnit VRANG_47cb;
parameter OpenIPSL.Types.Angle ARANG_47cb;
// RANGARV5_47da
parameter OpenIPSL.Types.PerUnit VRANGARV5_47da;
parameter OpenIPSL.Types.Angle ARANGARV5_47da;
// RANGARV1_47e9
parameter OpenIPSL.Types.PerUnit VRANGARV1_47e9;
parameter OpenIPSL.Types.Angle ARANGARV1_47e9;
// RANG_11_47fc
parameter OpenIPSL.Types.PerUnit VRANG_11_47fc;
parameter OpenIPSL.Types.Angle ARANG_11_47fc;
// BECROMAL_480b
parameter OpenIPSL.Types.PerUnit VBECROMAL_480b;
parameter OpenIPSL.Types.Angle ABECROMAL_480b;
// BECROMAL132_481a
parameter OpenIPSL.Types.PerUnit VBECROMAL132_481a;
parameter OpenIPSL.Types.Angle ABECROMAL132_481a;
// DALVIK_4829
parameter OpenIPSL.Types.PerUnit VDALVIK_4829;
parameter OpenIPSL.Types.Angle ADALVIK_4829;
// RANG_C_4838
parameter OpenIPSL.Types.PerUnit VRANG_C_4838;
parameter OpenIPSL.Types.Angle ARANG_C_4838;
// KRAFLA_4846
parameter OpenIPSL.Types.PerUnit VKRAFLA_4846;
parameter OpenIPSL.Types.Angle AKRAFLA_4846;
// KRAFLAV1_4855
parameter OpenIPSL.Types.PerUnit VKRAFLAV1_4855;
parameter OpenIPSL.Types.Angle AKRAFLAV1_4855;
// KRAFLA11_4864
parameter OpenIPSL.Types.PerUnit VKRAFLA11_4864;
parameter OpenIPSL.Types.Angle AKRAFLA11_4864;
// KRAFLA2_4872
parameter OpenIPSL.Types.PerUnit VKRAFLA2_4872;
parameter OpenIPSL.Types.Angle AKRAFLA2_4872;
// LAXA_4880
parameter OpenIPSL.Types.PerUnit VLAXA_4880;
parameter OpenIPSL.Types.Angle ALAXA_4880;
// LAXA_2_488f
parameter OpenIPSL.Types.PerUnit VLAXA_2_488f;
parameter OpenIPSL.Types.Angle ALAXA_2_488f;
// LAXA33_489d
parameter OpenIPSL.Types.PerUnit VLAXA33_489d;
parameter OpenIPSL.Types.Angle ALAXA33_489d;
// LAXA11_48ab
parameter OpenIPSL.Types.PerUnit VLAXA11_48ab;
parameter OpenIPSL.Types.Angle ALAXA11_48ab;
// LAXA2_48b9
parameter OpenIPSL.Types.PerUnit VLAXA2_48b9;
parameter OpenIPSL.Types.Angle ALAXA2_48b9;
// HUSAVIK_48c8
parameter OpenIPSL.Types.PerUnit VHUSAVIK_48c8;
parameter OpenIPSL.Types.Angle AHUSAVIK_48c8;
// LINDAB_48d7
parameter OpenIPSL.Types.PerUnit VLINDAB_48d7;
parameter OpenIPSL.Types.Angle ALINDAB_48d7;
// KOPASKER_48e6
parameter OpenIPSL.Types.PerUnit VKOPASKER_48e6;
parameter OpenIPSL.Types.Angle AKOPASKER_48e6;
// THEISTAREYK_48f5
parameter OpenIPSL.Types.PerUnit VTHEISTAREYK_48f5;
parameter OpenIPSL.Types.Angle ATHEISTAREYK_48f5;
// THEYSTAR_11_4904
parameter OpenIPSL.Types.PerUnit VTHEYSTAR_11_4904;
parameter OpenIPSL.Types.Angle ATHEYSTAR_11_4904;
// GRIMSARVIRKJ_4913
parameter OpenIPSL.Types.PerUnit VGRIMSARVIRKJ_4913;
parameter OpenIPSL.Types.Angle AGRIMSARVIRKJ_4913;
// HRYGG_4922
parameter OpenIPSL.Types.PerUnit VHRYGG_4922;
parameter OpenIPSL.Types.Angle AHRYGG_4922;
// STUDLAR_132_4931
parameter OpenIPSL.Types.PerUnit VSTUDLAR_132_4931;
parameter OpenIPSL.Types.Angle ASTUDLAR_132_4931;
// STUDLAR_11_4940
parameter OpenIPSL.Types.PerUnit VSTUDLAR_11_4940;
parameter OpenIPSL.Types.Angle ASTUDLAR_11_4940;
// STUDLAR_66_494f
parameter OpenIPSL.Types.PerUnit VSTUDLAR_66_494f;
parameter OpenIPSL.Types.Angle ASTUDLAR_66_494f;
// EGILSSTADIR_495e
parameter OpenIPSL.Types.PerUnit VEGILSSTADIR_495e;
parameter OpenIPSL.Types.Angle AEGILSSTADIR_495e;
// EYVIND_496d
parameter OpenIPSL.Types.PerUnit VEYVIND_496d;
parameter OpenIPSL.Types.Angle AEYVIND_496d;
// EYVIND66_497c
parameter OpenIPSL.Types.PerUnit VEYVIND66_497c;
parameter OpenIPSL.Types.Angle AEYVIND66_497c;
// EYV_DELT_498b
parameter OpenIPSL.Types.PerUnit VEYV_DELT_498b;
parameter OpenIPSL.Types.Angle AEYV_DELT_498b;
// LF1_KAPALL_499a
parameter OpenIPSL.Types.PerUnit VLF1_KAPALL_499a;
parameter OpenIPSL.Types.Angle ALF1_KAPALL_499a;
// TEIG_49a9
parameter OpenIPSL.Types.PerUnit VTEIG_49a9;
parameter OpenIPSL.Types.Angle ATEIG_49a9;
// TEIGHO_2_49b8
parameter OpenIPSL.Types.PerUnit VTEIGHO_2_49b8;
parameter OpenIPSL.Types.Angle ATEIGHO_2_49b8;
// TEIG_33_49c7
parameter OpenIPSL.Types.PerUnit VTEIG_33_49c7;
parameter OpenIPSL.Types.Angle ATEIG_33_49c7;
// DIESEL_11KV_49d6
parameter OpenIPSL.Types.PerUnit VDIESEL_11KV_49d6;
parameter OpenIPSL.Types.Angle ADIESEL_11KV_49d6;
// FISKM_HOFN_49e5
parameter OpenIPSL.Types.PerUnit VFISKM_HOFN_49e5;
parameter OpenIPSL.Types.Angle AFISKM_HOFN_49e5;
// STU_CABLE_49f4
parameter OpenIPSL.Types.PerUnit VSTU_CABLE_49f4;
parameter OpenIPSL.Types.Angle ASTU_CABLE_49f4;
// HOF_SKERDANL_4a02
parameter OpenIPSL.Types.PerUnit VHOF_SKERDANL_4a02;
parameter OpenIPSL.Types.Angle AHOF_SKERDANL_4a02;
// HOLAR_4a11
parameter OpenIPSL.Types.PerUnit VHOLAR_4a11;
parameter OpenIPSL.Types.Angle AHOLAR_4a11;
// HOLAR_11_4a20
parameter OpenIPSL.Types.PerUnit VHOLAR_11_4a20;
parameter OpenIPSL.Types.Angle AHOLAR_11_4a20;
// HOLAR_SC_4a2f
parameter OpenIPSL.Types.PerUnit VHOLAR_SC_4a2f;
parameter OpenIPSL.Types.Angle AHOLAR_SC_4a2f;
// HOLAR_19_4a3d
parameter OpenIPSL.Types.PerUnit VHOLAR_19_4a3d;
parameter OpenIPSL.Types.Angle AHOLAR_19_4a3d;
// SMYRLA_19_4a4c
parameter OpenIPSL.Types.PerUnit VSMYRLA_19_4a4c;
parameter OpenIPSL.Types.Angle ASMYRLA_19_4a4c;
// SMYRLA_6_3_4a5b
parameter OpenIPSL.Types.PerUnit VSMYRLA_6_3_4a5b;
parameter OpenIPSL.Types.Angle ASMYRLA_6_3_4a5b;
// AEGISSIDA_4a6a
parameter OpenIPSL.Types.PerUnit VAEGISSIDA_4a6a;
parameter OpenIPSL.Types.Angle AAEGISSIDA_4a6a;
// HOF_FORGANGS_4a79
parameter OpenIPSL.Types.PerUnit VHOF_FORGANGS_4a79;
parameter OpenIPSL.Types.Angle AHOF_FORGANGS_4a79;
// PRES_4a87
parameter OpenIPSL.Types.PerUnit VPRES_4a87;
parameter OpenIPSL.Types.Angle APRES_4a87;
// PREST_19_4a96
parameter OpenIPSL.Types.PerUnit VPREST_19_4a96;
parameter OpenIPSL.Types.Angle APREST_19_4a96;
// FLJ_KERFIVOR_4aa5
parameter OpenIPSL.Types.PerUnit VFLJ_KERFIVOR_4aa5;
parameter OpenIPSL.Types.Angle AFLJ_KERFIVOR_4aa5;
// FLJOTSDA_4ab4
parameter OpenIPSL.Types.PerUnit VFLJOTSDA_4ab4;
parameter OpenIPSL.Types.Angle AFLJOTSDA_4ab4;
// FLJ_11_4ac2
parameter OpenIPSL.Types.PerUnit VFLJ_11_4ac2;
parameter OpenIPSL.Types.Angle AFLJ_11_4ac2;
// FLJ_V1_CABLE_4ad1
parameter OpenIPSL.Types.PerUnit VFLJ_V1_CABLE_4ad1;
parameter OpenIPSL.Types.Angle AFLJ_V1_CABLE_4ad1;
// FLJ_V2_CABLE_4ae0
parameter OpenIPSL.Types.PerUnit VFLJ_V2_CABLE_4ae0;
parameter OpenIPSL.Types.Angle AFLJ_V2_CABLE_4ae0;
// FLJ_V3_CABLE_4aee
parameter OpenIPSL.Types.PerUnit VFLJ_V3_CABLE_4aee;
parameter OpenIPSL.Types.Angle AFLJ_V3_CABLE_4aee;
// FLJ_V4_CABLE_4afc
parameter OpenIPSL.Types.PerUnit VFLJ_V4_CABLE_4afc;
parameter OpenIPSL.Types.Angle AFLJ_V4_CABLE_4afc;
// FLJ_V5_CABLE_4b0a
parameter OpenIPSL.Types.PerUnit VFLJ_V5_CABLE_4b0a;
parameter OpenIPSL.Types.Angle AFLJ_V5_CABLE_4b0a;
// FLJ_V6_CABLE_4b18
parameter OpenIPSL.Types.PerUnit VFLJ_V6_CABLE_4b18;
parameter OpenIPSL.Types.Angle AFLJ_V6_CABLE_4b18;
// FLJ_220_B_4b26
parameter OpenIPSL.Types.PerUnit VFLJ_220_B_4b26;
parameter OpenIPSL.Types.Angle AFLJ_220_B_4b26;
// FLJ_220_A_4b34
parameter OpenIPSL.Types.PerUnit VFLJ_220_A_4b34;
parameter OpenIPSL.Types.Angle AFLJ_220_A_4b34;
// KARA_V1_4b42
parameter OpenIPSL.Types.PerUnit VKARA_V1_4b42;
parameter OpenIPSL.Types.Angle AKARA_V1_4b42;
// KARA_V2_4b51
parameter OpenIPSL.Types.PerUnit VKARA_V2_4b51;
parameter OpenIPSL.Types.Angle AKARA_V2_4b51;
// KARA_V3_4b5f
parameter OpenIPSL.Types.PerUnit VKARA_V3_4b5f;
parameter OpenIPSL.Types.Angle AKARA_V3_4b5f;
// KARA_V4_4b6d
parameter OpenIPSL.Types.PerUnit VKARA_V4_4b6d;
parameter OpenIPSL.Types.Angle AKARA_V4_4b6d;
// KARA_V5_4b7b
parameter OpenIPSL.Types.PerUnit VKARA_V5_4b7b;
parameter OpenIPSL.Types.Angle AKARA_V5_4b7b;
// KARA_V6_4b89
parameter OpenIPSL.Types.PerUnit VKARA_V6_4b89;
parameter OpenIPSL.Types.Angle AKARA_V6_4b89;
// AUX_1_4b97
parameter OpenIPSL.Types.PerUnit VAUX_1_4b97;
parameter OpenIPSL.Types.Angle AAUX_1_4b97;
// DIODE_1_4baa
parameter OpenIPSL.Types.PerUnit VDIODE_1_4baa;
parameter OpenIPSL.Types.Angle ADIODE_1_4baa;
// DIODE_2_4bba
parameter OpenIPSL.Types.PerUnit VDIODE_2_4bba;
parameter OpenIPSL.Types.Angle ADIODE_2_4bba;
// DIODE_3_4bc8
parameter OpenIPSL.Types.PerUnit VDIODE_3_4bc8;
parameter OpenIPSL.Types.Angle ADIODE_3_4bc8;
// DIODE_4_4bd6
parameter OpenIPSL.Types.PerUnit VDIODE_4_4bd6;
parameter OpenIPSL.Types.Angle ADIODE_4_4bd6;
// DIODE_5_4be4
parameter OpenIPSL.Types.PerUnit VDIODE_5_4be4;
parameter OpenIPSL.Types.Angle ADIODE_5_4be4;
// AUX_2_4bf2
parameter OpenIPSL.Types.PerUnit VAUX_2_4bf2;
parameter OpenIPSL.Types.Angle AAUX_2_4bf2;
// DIODE_6_4c00
parameter OpenIPSL.Types.PerUnit VDIODE_6_4c00;
parameter OpenIPSL.Types.Angle ADIODE_6_4c00;
// ESK_CABLE_4c0e
parameter OpenIPSL.Types.PerUnit VESK_CABLE_4c0e;
parameter OpenIPSL.Types.Angle AESK_CABLE_4c0e;
// ESK_SKERDANL_4c1c
parameter OpenIPSL.Types.PerUnit VESK_SKERDANL_4c1c;
parameter OpenIPSL.Types.Angle AESK_SKERDANL_4c1c;
// ESK_FORGANGS_4c2b
parameter OpenIPSL.Types.PerUnit VESK_FORGANGS_4c2b;
parameter OpenIPSL.Types.Angle AESK_FORGANGS_4c2b;
// ESK_CABLE_4c39
parameter OpenIPSL.Types.PerUnit VESK_CABLE_4c39;
parameter OpenIPSL.Types.Angle AESK_CABLE_4c39;
// FASKRUDSFJ_4c47
parameter OpenIPSL.Types.PerUnit VFASKRUDSFJ_4c47;
parameter OpenIPSL.Types.Angle AFASKRUDSFJ_4c47;
// FAS_FORGANGS_4c56
parameter OpenIPSL.Types.PerUnit VFAS_FORGANGS_4c56;
parameter OpenIPSL.Types.Angle AFAS_FORGANGS_4c56;
// STO_VARFJORD_4c65
parameter OpenIPSL.Types.PerUnit VSTO_VARFJORD_4c65;
parameter OpenIPSL.Types.Angle ASTO_VARFJORD_4c65;
// STO_VARFJ_4c74
parameter OpenIPSL.Types.PerUnit VSTO_VARFJ_4c74;
parameter OpenIPSL.Types.Angle ASTO_VARFJ_4c74;
// ESKIFJOR_4c83
parameter OpenIPSL.Types.PerUnit VESKIFJOR_4c83;
parameter OpenIPSL.Types.Angle AESKIFJOR_4c83;
// FASKRUDS_4c91
parameter OpenIPSL.Types.PerUnit VFASKRUDS_4c91;
parameter OpenIPSL.Types.Angle AFASKRUDS_4c91;
// NESKAUPS_4ca0
parameter OpenIPSL.Types.PerUnit VNESKAUPS_4ca0;
parameter OpenIPSL.Types.Angle ANESKAUPS_4ca0;
// NES_FORGANGS_4caf
parameter OpenIPSL.Types.PerUnit VNES_FORGANGS_4caf;
parameter OpenIPSL.Types.Angle ANES_FORGANGS_4caf;
// FAS_SKERDANL_4cbd
parameter OpenIPSL.Types.PerUnit VFAS_SKERDANL_4cbd;
parameter OpenIPSL.Types.Angle AFAS_SKERDANL_4cbd;
// BREIDDALSVIK_4ccb
parameter OpenIPSL.Types.PerUnit VBREIDDALSVIK_4ccb;
parameter OpenIPSL.Types.Angle ABREIDDALSVIK_4ccb;
// BREIDDALSVIK_4cd9
parameter OpenIPSL.Types.PerUnit VBREIDDALSVIK_4cd9;
parameter OpenIPSL.Types.Angle ABREIDDALSVIK_4cd9;
// NES_SKERDANL_4ce7
parameter OpenIPSL.Types.PerUnit VNES_SKERDANL_4ce7;
parameter OpenIPSL.Types.Angle ANES_SKERDANL_4ce7;
// NES_CABLE_4cf5
parameter OpenIPSL.Types.PerUnit VNES_CABLE_4cf5;
parameter OpenIPSL.Types.Angle ANES_CABLE_4cf5;
// FAS_CABLE_4d03
parameter OpenIPSL.Types.PerUnit VFAS_CABLE_4d03;
parameter OpenIPSL.Types.Angle AFAS_CABLE_4d03;
// SEYDISFJORDU_4d11
parameter OpenIPSL.Types.PerUnit VSEYDISFJORDU_4d11;
parameter OpenIPSL.Types.Angle ASEYDISFJORDU_4d11;
// SEY_FORGANGS_4d20
parameter OpenIPSL.Types.PerUnit VSEY_FORGANGS_4d20;
parameter OpenIPSL.Types.Angle ASEY_FORGANGS_4d20;
// SR_MJOL_4d2f
parameter OpenIPSL.Types.PerUnit VSR_MJOL_4d2f;
parameter OpenIPSL.Types.Angle ASR_MJOL_4d2f;
// BJOLFSVIRKJU_4d3e
parameter OpenIPSL.Types.PerUnit VBJOLFSVIRKJU_4d3e;
parameter OpenIPSL.Types.Angle ABJOLFSVIRKJU_4d3e;
// GULSVIRKJUN_4d4d
parameter OpenIPSL.Types.PerUnit VGULSVIRKJUN_4d4d;
parameter OpenIPSL.Types.Angle AGULSVIRKJUN_4d4d;
// SEY_KYNDISTO_4d5c
parameter OpenIPSL.Types.PerUnit VSEY_KYNDISTO_4d5c;
parameter OpenIPSL.Types.Angle ASEY_KYNDISTO_4d5c;
// SEY_CABLE_4d6a
parameter OpenIPSL.Types.PerUnit VSEY_CABLE_4d6a;
parameter OpenIPSL.Types.Angle ASEY_CABLE_4d6a;
// LAGARFOSS_4d78
parameter OpenIPSL.Types.PerUnit VLAGARFOSS_4d78;
parameter OpenIPSL.Types.Angle ALAGARFOSS_4d78;
// LAGARFO1_4d87
parameter OpenIPSL.Types.PerUnit VLAGARFO1_4d87;
parameter OpenIPSL.Types.Angle ALAGARFO1_4d87;
// LAGARFOSS_4d96
parameter OpenIPSL.Types.PerUnit VLAGARFOSS_4d96;
parameter OpenIPSL.Types.Angle ALAGARFOSS_4d96;
// LAG_11KV_4da5
parameter OpenIPSL.Types.PerUnit VLAG_11KV_4da5;
parameter OpenIPSL.Types.Angle ALAG_11KV_4da5;
// VOPNAFJO_4db3
parameter OpenIPSL.Types.PerUnit VVOPNAFJO_4db3;
parameter OpenIPSL.Types.Angle AVOPNAFJO_4db3;
// VOP_FORGANGS_4dc2
parameter OpenIPSL.Types.PerUnit VVOP_FORGANGS_4dc2;
parameter OpenIPSL.Types.Angle AVOP_FORGANGS_4dc2;
// VOP_SKERDANL_4dd1
parameter OpenIPSL.Types.PerUnit VVOP_SKERDANL_4dd1;
parameter OpenIPSL.Types.Angle AVOP_SKERDANL_4dd1;
// ALCOA_1_4ddf
parameter OpenIPSL.Types.PerUnit VALCOA_1_4ddf;
parameter OpenIPSL.Types.Angle AALCOA_1_4ddf;
// ALCOA_2_4dee
parameter OpenIPSL.Types.PerUnit VALCOA_2_4dee;
parameter OpenIPSL.Types.Angle AALCOA_2_4dee;
// DUM_4dfc
parameter OpenIPSL.Types.PerUnit VDUM_4dfc;
parameter OpenIPSL.Types.Angle ADUM_4dfc;end Bus_Template;
record PF_Bus_00000
	extends Iceland_modified_PF_solved_package.PF_Data.Bus_Data.Bus_Template(VESK2_CABLE_3c07=0.96698,AESK2_CABLE_3c07=-0.412953,VBUR_CABLE_3c24=0.97987,ABUR_CABLE_3c24=-0.080023,VBURFELL_3c33=1.04898,ABURFELL_3c33=-0.15436,VBURFE_12_3c43=0.99000,ABURFE_12_3c43=-0.026653,VBURFE_34_3c53=0.99000,ABURFE_34_3c53=-0.027972,VBURFE_56_3c61=1.06500,ABURFE_56_3c61=-0.067024,VBUR66SP5_3c6f=0.98007,ABUR66SP5_3c6f=-0.079451,VBUR11SP5_3c7d=0.98515,ABUR11SP5_3c7d=-0.046213,VBUR66SP4_3c8d=0.98007,ABUR66SP4_3c8d=-0.079451,VBUR11SP4_3c9b=0.98463,ABUR11SP4_3c9b=-0.048623,VSIGALDA_3ca9=1.06313,ASIGALDA_3ca9=-0.114371,VSIGALD12_3cb8=0.98000,ASIGALD12_3cb8=-0.005316,VSIGALD22_3cc8=0.98000,ASIGALD22_3cc8=-0.005316,VSIGALD32_3cd6=0.98000,ASIGALD32_3cd6=-0.005316,VSIGALDA6_3ce4=1.06521,ASIGALDA6_3ce4=-0.162998,VSIGHR11_3cf4=1.06353,ASIGHR11_3cf4=-0.134251,VSIG_TEINASPL_3d03=1.06313,ASIG_TEINASPL_3d03=-0.114371,VHRAUNEY_3d11=1.06173,AHRAUNEY_3d11=-0.116239,VHRAUNE12_3d20=1.00000,AHRAUNE12_3d20=0.00000,VHRAUNE22_3d2f=1.00000,AHRAUNE22_3d2f=0.00000,VHRAUNE32_3d3d=1.00000,AHRAUNE32_3d3d=0.00000,VVATNSFEL_3d4b=1.06511,AVATNSFEL_3d4b=-0.111207,VVATN_V1_3d5a=1.01000,AVATN_V1_3d5a=-0.018673,VVATN_V2_3d69=1.01000,AVATN_V2_3d69=-0.018673,VSULTARTA_3d77=1.04651,ASULTARTA_3d77=-0.15664,VSULT_V1_3d86=1.05400,ASULT_V1_3d86=-0.057458,VSULT_V2_3d95=1.05400,ASULT_V2_3d95=-0.071707,VBUDARHALS_3da3=1.05002,ABUDARHALS_3da3=-0.120766,VBUD_V1_3db2=1.05000,ABUD_V1_3db2=-0.120724,VBUD_V2_3dc1=1.05000,ABUD_V2_3dc1=-0.120724,VLANGALDA_3dcf=1.05305,ALANGALDA_3dcf=-0.13268,VFLU_33KV_3dde=0.92689,AFLU_33KV_3dde=-0.19600,VHLA_CABLE_3dee=0.93317,AHLA_CABLE_3dee=-0.187796,VHVOLSVOLLUR_3dfd=0.93244,AHVOLSVOLLUR_3dfd=-0.192124,VFLUDIR_3e0c=0.94370,AFLUDIR_3e0c=-0.141527,VHELLA_3e1b=0.93314,AHELLA_3e1b=-0.18860,VFLU_CABLE_3e2a=0.94375,AFLU_CABLE_3e2a=-0.141361,VFLU2_CABLE_3e38=0.94369,AFLU2_CABLE_3e38=-0.141693,VFLU_11KV_3e46=0.93071,AFLU_11KV_3e46=-0.183511,VHELLA_11KV_3e55=0.92277,AHELLA_11KV_3e55=-0.252868,VHVOLSV_11KV_3e64=0.96609,AHVOLSV_11KV_3e64=-0.22433,VHVOLSV_DUMMY_3e73=0.95266,AHVOLSV_DUMMY_3e73=-0.211117,VRIMCABLE_3e83=0.91184,ARIMCABLE_3e83=-0.250196,VRIMAKOT_3e92=0.91178,ARIMAKOT_3e92=-0.250346,VRIMAKOT_3ea0=0.96164,ARIMAKOT_3ea0=-0.351083,VVEM_FORGANGS_3eaf=0.94865,AVEM_FORGANGS_3eaf=-0.385635,VVM3_JARDSTR1_3ebe=0.95950,AVM3_JARDSTR1_3ebe=-0.357874,VVM3_JARDSTR2_3ecd=0.94934,AVM3_JARDSTR2_3ecd=-0.383663,VVEM_BRAEDSLA_3edb=0.94864,AVEM_BRAEDSLA_3edb=-0.386281,VVM1_RIM_ENDI_3ee9=0.95997,AVM1_RIM_ENDI_3ee9=-0.35664,VVM1_VEM_ENDI_3ef8=0.94969,AVM1_VEM_ENDI_3ef8=-0.38371,VVEM_KETILL_3f06=0.94824,AVEM_KETILL_3f06=-0.386796,VIRAFOSS2_3f14=1.03276,AIRAFOSS2_3f14=-0.220545,VIRAFOSS_3f23=1.03910,AIRAFOSS_3f23=-0.236731,VIRAFO_12_3f32=1.01000,AIRAFO_12_3f32=-0.170217,VIRAFO_22_3f41=1.01000,AIRAFO_22_3f41=-0.201289,VIRAFO_32_3f4f=1.01000,AIRAFO_32_3f4f=-0.204629,VIRAFOSS5_3f5d=1.02807,AIRAFOSS5_3f5d=-0.237787,VSP5DELTA_3f6c=1.03507,ASP5DELTA_3f6c=-0.22676,VSTEINKA_3f7b=1.03172,ASTEINKA_3f7b=-0.233774,VSTEING1_3f8a=1.05000,ASTEING1_3f8a=-0.195941,VSTEING2_3f9a=1.05000,ASTEING2_3f9a=-0.196191,VST_SPOLD_3fa8=1.03172,AST_SPOLD_3fa8=-0.233774,VLJOSIFOSS_3fb7=1.02785,ALJOSIFOSS_3fb7=-0.237729,VLJOS_VEL_3fc6=1.03000,ALJOS_VEL_3fc6=-0.193588,VSTN1_3fd5=0.99922,ASTN1_3fd5=-0.308321,VHVERAGERDI_3fe4=1.02038,AHVERAGERDI_3fe4=-0.246327,VHVERAG_11KV_3ff3=1.01179,AHVERAG_11KV_3ff3=-0.271777,VKOLVID_B_4002=1.03176,AKOLVID_B_4002=-0.205429,VKOLVID_A_4011=1.03176,AKOLVID_A_4011=-0.205429,VHELLIS_V1_401f=1.04000,AHELLIS_V1_401f=-0.105067,VHELLIS_V2_4031=1.04000,AHELLIS_V2_4031=-0.105067,VHELLIS_V11_403f=1.04000,AHELLIS_V11_403f=-0.143457,VHELLIS_V3_404d=1.04000,AHELLIS_V3_404d=-0.109868,VHELLIS_V4_405b=1.04000,AHELLIS_V4_405b=-0.109868,VHELLIS_V5_4069=1.04000,AHELLIS_V5_4069=-0.098101,VHELLIS_V6_4077=1.04000,AHELLIS_V6_4077=-0.098101,VTHORLAK_11KV_4085=1.00855,ATHORLAK_11KV_4085=-0.274236,VTHORLAKHOFN_4094=1.01602,ATHORLAKHOFN_4094=-0.251311,VSEL_SKERDANL_40a3=1.00187,ASEL_SKERDANL_40a3=-0.259722,VSEL_FORGANGS_40b2=0.93633,ASEL_FORGANGS_40b2=-0.410606,VNESJAV_40c1=1.03038,ANESJAV_40c1=-0.263216,VNESV_VEL_1_40d0=1.03000,ANESV_VEL_1_40d0=-0.247378,VNESV_VEL_2_40df=1.03000,ANESV_VEL_2_40df=-0.247088,VNESV_VEL_3_40ed=1.03000,ANESV_VEL_3_40ed=-0.24658,VNESV_VEL_4_40fb=1.03000,ANESV_VEL_4_40fb=-0.245929,VGRAFNING_4109=1.03016,AGRAFNING_4109=-0.263822,VBRINGUR_4118=1.02710,ABRINGUR_4118=-0.275666,VGEITHALS_4127=1.02242,AGEITHALS_4127=-0.257565,VGE_132_4136=1.02624,AGE_132_4136=-0.273388,VGE_11SP1_4145=1.02453,AGE_11SP1_4145=-0.265915,VGE_11SP2_4154=1.02453,AGE_11SP2_4154=-0.265915,VRR_A5_4162=1.02284,ARR_A5_4162=-0.279432,VRR_A12_4171=1.02431,ARR_A12_4171=-0.276793,VIS1_417f=1.01721,AIS1_417f=-0.27769,VIS2_418e=1.01721,AIS2_418e=-0.27769,VKORPA_419d=1.02532,AKORPA_419d=-0.278605,VHAMR_41ac=1.01878,AHAMR_41ac=-0.272772,VHAM_41bb=1.02599,AHAM_41bb=-0.273139,VHAM_DSP1_41ca=1.02282,AHAM_DSP1_41ca=-0.272962,VHAM_DSP2_41d9=1.02130,AHAM_DSP2_41d9=-0.272931,VRH_41e7=1.02546,ARH_41e7=-0.273936,VRH_11_41f6=1.01908,ARH_11_41f6=-0.363182,VSANDSKEI_4205=1.02735,ASANDSKEI_4205=-0.243199,VBRENNIME_4214=1.00902,ABRENNIME_4214=-0.360812,VBREN_132_4223=1.01719,ABREN_132_4223=-0.357721,VBRENN_11_4232=1.00631,ABRENN_11_4232=-0.379028,VSP5_ROFAREIT_4241=1.01754,ASP5_ROFAREIT_4241=-0.357974,VBRE_6_3_4250=1.01731,ABRE_6_3_4250=-0.357794,VBRENN_66_4260=1.02592,ABRENN_66_4260=-0.384199,VBRESP3DE_426f=1.02592,ABRESP3DE_426f=-0.384199,VBRE_33_427d=1.01743,ABRE_33_427d=-0.357865,VAKRANES_428c=1.02134,AAKRANES_428c=-0.389543,VA20_6_429b=1.04677,AA20_6_429b=-0.40860,VKLAFASTA_IR_42aa=1.00655,AKLAFASTA_IR_42aa=-0.369205,VSVC_16KV_42b9=1.01931,ASVC_16KV_42b9=-0.370043,VKLA_LOFTLINA_42c9=1.00655,AKLA_LOFTLINA_42c9=-0.369205,VFESI_42d7=1.00744,AFESI_42d7=-0.365768,VNA_A_42e6=1.00616,ANA_A_42e6=-0.370343,VNA_B_42f5=1.00616,ANA_B_42f5=-0.370343,VA1_4303=1.02331,AA1_4303=-0.280284,VA1_11_4312=1.02570,AA1_11_4312=-0.324509,VA2_4321=1.02372,AA2_4321=-0.280603,VA3_4330=1.02350,AA3_4330=-0.280157,VA4_11_433f=1.03486,AA4_11_433f=-0.34328,VA5_434e=1.02281,AA5_434e=-0.279425,VA5_11_435d=1.05683,AA5_11_435d=-0.339499,VA6_11_436c=1.02927,AA6_11_436c=-0.341271,VA7_437b=1.02449,AA7_437b=-0.279837,VA7_11_438a=1.01800,AA7_11_438a=-0.331527,VFITJAR_4399=1.02239,AFITJAR_4399=-0.228912,VSVARTSENGI_43a8=1.02526,ASVARTSENGI_43a8=-0.20743,VSVARTS_VEL3_43b7=1.03000,ASVARTS_VEL3_43b7=-0.170407,VFITJAR_33KV_43c6=1.01783,AFITJAR_33KV_43c6=-0.244239,VSTA_43d5=1.02176,ASTA_43d5=-0.23068,VSTA_33KV_43e4=1.02065,ASTA_33KV_43e4=-0.328378,VRAUDIMELUR_43f3=1.02412,ARAUDIMELUR_43f3=-0.213422,VREYKJANES_4402=1.02756,AREYKJANES_4402=-0.181024,VREYKJAV1_4411=1.03000,AREYKJAV1_4411=-0.103412,VREYKJAV2_4420=1.03000,AREYKJAV2_4420=-0.103412,VSVARTVEL_442e=1.03000,ASVARTVEL_442e=-0.113771,VVALLARHEIDI_443c=1.01572,AVALLARHEIDI_443c=-0.246648,VVATNSHAM_444b=1.02161,AVATNSHAM_444b=-0.352621,VVATNS_66_445a=1.01885,AVATNS_66_445a=-0.373751,VVATNSH19_4469=1.02007,AVATNSH19_4469=-0.364351,VVATNSH_S_4477=1.02007,AVATNSH_S_4477=-0.364351,VVAT_19KV_4487=1.00607,AVAT_19KV_4487=-0.410079,VVEGAMOT_4496=0.97665,AVEGAMOT_4496=-0.43092,VVEG_11KV_44a5=1.00492,AVEG_11KV_44a5=-0.438116,VOLAFSVIK_44b4=0.95948,AOLAFSVIK_44b4=-0.453176,VOLA_19KV_44c3=0.98299,AOLA_19KV_44c3=-0.503366,VVOGASKEI_44d2=0.96170,AVOGASKEI_44d2=-0.441521,VVOG_11KV_44e1=1.00397,AVOG_11KV_44e1=-0.466685,VGRUNDARF_44f0=0.95072,AGRUNDARF_44f0=-0.453141,VGRU_19KV_44ff=1.00040,AGRU_19KV_44ff=-0.485857,VANDAKILL_450e=1.02020,AANDAKILL_450e=-0.372655,VGLERASKO_451d=1.05348,AGLERASKO_451d=-0.33534,VGLERA_19_452c=1.04841,AGLERA_19_452c=-0.350027,VGLERA_D1_453b=1.04841,AGLERA_D1_453b=-0.350027,VGEIRADAL_454a=1.06937,AGEIRADAL_454a=-0.364761,VGEIRADA3_4559=1.06812,AGEIRADA3_4559=-0.376584,VGEIRADA4_456c=1.06937,AGEIRADA4_456c=-0.376015,VMJOLKA_457b=1.05265,AMJOLKA_457b=-0.402677,VMJOLK_66_458a=1.02649,AMJOLK_66_458a=-0.489297,VMJOLKVEL_4599=1.08000,AMJOLKVEL_4599=-0.42590,VMJO_V2_45a8=1.08000,AMJO_V2_45a8=-0.42590,VMJODUMMY_45b6=1.07075,AMJODUMMY_45b6=-0.456009,VBREIDIDALUR_45c5=0.99090,ABREIDIDALUR_45c5=-0.527391,VKELDEYRI33_45d3=0.99355,AKELDEYRI33_45d3=-0.631269,VPATREKSFJORD_45e2=0.98467,APATREKSFJORD_45e2=-0.53629,VISAFJORDUR_45f1=0.97368,AISAFJORDUR_45f1=-0.546282,VPATREKSF11_4600=0.97389,APATREKSF11_4600=-0.566978,VBOLUNGAVIK_460f=0.97622,ABOLUNGAVIK_460f=-0.544521,VBOL_SKER_ANL_461e=0.96460,ABOL_SKER_ANL_461e=-0.582653,VKELDEYRI66_462d=0.99661,AKELDEYRI66_462d=-0.527281,VHRAFSEYRI_463c=1.04094,AHRAFSEYRI_463c=-0.475169,V_INGEYRI_464b=1.02220,A_INGEYRI_464b=-0.488578,VTHINGEYRI11_465a=1.02220,ATHINGEYRI11_465a=-0.488578,VBREIDAD33_4669=0.98934,ABREIDAD33_4669=-0.514491,VFLATEYRI_4677=0.97195,AFLATEYRI_4677=-0.56453,VBREIDAD11_4686=0.98994,ABREIDAD11_4686=-0.519645,VBREIDAD0_7_4694=0.97667,ABREIDAD0_7_4694=-0.550054,VISA_SKERDANL_46a4=0.99683,AISA_SKERDANL_46a4=-0.591935,VISA_FORGANGS_46b3=0.99683,AISA_FORGANGS_46b3=-0.591935,VBILDUDALUR33_46c1=0.94819,ABILDUDALUR33_46c1=-0.692012,VBOL_FORGANGS_46d0=0.96460,ABOL_FORGANGS_46d0=-0.582653,VHOLMAVIK_46de=1.06172,AHOLMAVIK_46de=-0.390542,VHRUTATUN_46ed=1.04133,AHRUTATUN_46ed=-0.312621,VHRUTA_19_46fc=1.03413,AHRUTA_19_46fc=-0.334124,VHRUTA_D1_470b=1.03413,AHRUTA_D1_470b=-0.334124,VLAXARVAT_471a=1.03613,ALAXARVAT_471a=-0.217225,VLAXAVA_2_4729=1.02711,ALAXAVA_2_4729=-0.247254,VLAXAVA_4_4738=1.03028,ALAXAVA_4_4738=-0.236839,VBLANDA_A_4747=1.03561,ABLANDA_A_4747=-0.172653,VBLANDAV1_4756=1.03000,ABLANDAV1_4756=-0.11006,VBLANDAV2_4765=1.03000,ABLANDAV2_4765=-0.11053,VBLANDAV3_4773=1.03000,ABLANDAV3_4773=-0.109903,VBLANDA_B_4781=1.03561,ABLANDA_B_4781=-0.172653,VVARMAHLI_478f=1.03088,AVARMAHLI_478f=-0.213614,VVARMAHL4_479e=1.02229,AVARMAHL4_479e=-0.243986,VVARMAHL2_47ad=1.02254,AVARMAHL2_47ad=-0.242389,VSAUDARKR_47bc=1.01164,ASAUDARKR_47bc=-0.251463,VRANG_47cb=1.00402,ARANG_47cb=-0.321235,VRANGARV5_47da=0.99564,ARANGARV5_47da=-0.351575,VRANGARV1_47e9=0.99798,ARANGARV1_47e9=-0.34381,VRANG_11_47fc=0.97857,ARANG_11_47fc=-0.401263,VBECROMAL_480b=0.98845,ABECROMAL_480b=-0.359234,VBECROMAL132_481a=1.00324,ABECROMAL132_481a=-0.322484,VDALVIK_4829=0.98526,ADALVIK_4829=-0.373097,VRANG_C_4838=1.00402,ARANG_C_4838=-0.321235,VKRAFLA_4846=1.03044,AKRAFLA_4846=-0.252874,VKRAFLAV1_4855=1.04000,AKRAFLAV1_4855=-0.152339,VKRAFLA11_4864=1.04000,AKRAFLA11_4864=-0.152399,VKRAFLA2_4872=1.03044,AKRAFLA2_4872=-0.252874,VLAXA_4880=1.04251,ALAXA_4880=-0.299875,VLAXA_2_488f=1.00000,ALAXA_2_488f=-0.270676,VLAXA33_489d=1.03991,ALAXA33_489d=-0.309101,VLAXA11_48ab=1.03355,ALAXA11_48ab=-0.326916,VLAXA2_48b9=1.04434,ALAXA2_48b9=-0.241904,VHUSAVIK_48c8=1.03794,AHUSAVIK_48c8=-0.311059,VLINDAB_48d7=1.04333,ALINDAB_48d7=-0.31811,VKOPASKER_48e6=1.03125,AKOPASKER_48e6=-0.337684,VTHEISTAREYK_48f5=1.04376,ATHEISTAREYK_48f5=-0.318997,VTHEYSTAR_11_4904=1.04204,ATHEYSTAR_11_4904=-0.32121,VGRIMSARVIRKJ_4913=0.96612,AGRIMSARVIRKJ_4913=-0.404958,VHRYGG_4922=1.01069,AHRYGG_4922=-0.316238,VSTUDLAR_132_4931=1.00680,ASTUDLAR_132_4931=-0.320322,VSTUDLAR_11_4940=0.96927,ASTUDLAR_11_4940=-0.430499,VSTUDLAR_66_494f=0.98313,ASTUDLAR_66_494f=-0.388564,VEGILSSTADIR_495e=0.96612,AEGILSSTADIR_495e=-0.404958,VEYVIND_496d=0.99170,AEYVIND_496d=-0.317353,VEYVIND66_497c=1.03156,AEYVIND66_497c=-0.341004,VEYV_DELT_498b=1.01727,AEYV_DELT_498b=-0.379572,VLF1_KAPALL_499a=1.03349,ALF1_KAPALL_499a=-0.33747,VTEIG_49a9=1.01699,ATEIG_49a9=-0.290035,VTEIGHO_2_49b8=1.02985,ATEIGHO_2_49b8=-0.354237,VTEIG_33_49c7=1.06541,ATEIG_33_49c7=-0.341829,VDIESEL_11KV_49d6=1.04289,ADIESEL_11KV_49d6=-0.234745,VFISKM_HOFN_49e5=1.04289,AFISKM_HOFN_49e5=-0.234745,VSTU_CABLE_49f4=0.98304,ASTU_CABLE_49f4=-0.388774,VHOF_SKERDANL_4a02=1.04283,AHOF_SKERDANL_4a02=-0.234722,VHOLAR_4a11=1.04314,AHOLAR_4a11=-0.233863,VHOLAR_11_4a20=1.04576,AHOLAR_11_4a20=-0.226683,VHOLAR_SC_4a2f=1.03159,AHOLAR_SC_4a2f=-0.387217,VHOLAR_19_4a3d=1.05027,AHOLAR_19_4a3d=-0.195136,VSMYRLA_19_4a4c=1.05027,ASMYRLA_19_4a4c=-0.195136,VSMYRLA_6_3_4a5b=1.06377,ASMYRLA_6_3_4a5b=-0.131114,VAEGISSIDA_4a6a=1.04285,AAEGISSIDA_4a6a=-0.23463,VHOF_FORGANGS_4a79=1.04283,AHOF_FORGANGS_4a79=-0.234722,VPRES_4a87=1.05643,APRES_4a87=-0.23534,VPREST_19_4a96=1.05110,APREST_19_4a96=-0.25164,VFLJ_KERFIVOR_4aa5=1.02214,AFLJ_KERFIVOR_4aa5=-0.306703,VFLJOTSDA_4ab4=1.02213,AFLJOTSDA_4ab4=-0.306705,VFLJ_11_4ac2=1.02517,AFLJ_11_4ac2=-0.305075,VFLJ_V1_CABLE_4ad1=1.03038,AFLJ_V1_CABLE_4ad1=-0.30208,VFLJ_V2_CABLE_4ae0=1.03038,AFLJ_V2_CABLE_4ae0=-0.302074,VFLJ_V3_CABLE_4aee=1.03038,AFLJ_V3_CABLE_4aee=-0.302071,VFLJ_V4_CABLE_4afc=1.03039,AFLJ_V4_CABLE_4afc=-0.302059,VFLJ_V5_CABLE_4b0a=1.03039,AFLJ_V5_CABLE_4b0a=-0.302053,VFLJ_V6_CABLE_4b18=1.03039,AFLJ_V6_CABLE_4b18=-0.30205,VFLJ_220_B_4b26=1.03025,AFLJ_220_B_4b26=-0.302361,VFLJ_220_A_4b34=1.03025,AFLJ_220_A_4b34=-0.302361,VKARA_V1_4b42=1.03000,AKARA_V1_4b42=-0.229308,VKARA_V2_4b51=1.03000,AKARA_V2_4b51=-0.229338,VKARA_V3_4b5f=1.03000,AKARA_V3_4b5f=-0.229333,VKARA_V4_4b6d=1.03000,AKARA_V4_4b6d=-0.229317,VKARA_V5_4b7b=1.03000,AKARA_V5_4b7b=-0.229312,VKARA_V6_4b89=1.03000,AKARA_V6_4b89=-0.229329,VAUX_1_4b97=1.00131,AAUX_1_4b97=-0.454167,VDIODE_1_4baa=1.01178,ADIODE_1_4baa=-0.456648,VDIODE_2_4bba=1.01178,ADIODE_2_4bba=-0.456648,VDIODE_3_4bc8=1.01178,ADIODE_3_4bc8=-0.456648,VDIODE_4_4bd6=1.01178,ADIODE_4_4bd6=-0.456648,VDIODE_5_4be4=1.01178,ADIODE_5_4be4=-0.456648,VAUX_2_4bf2=1.00131,AAUX_2_4bf2=0.069431,VDIODE_6_4c00=1.01178,ADIODE_6_4c00=-0.456648,VESK_CABLE_4c0e=0.96636,AESK_CABLE_4c0e=-0.414309,VESK_SKERDANL_4c1c=0.96688,AESK_SKERDANL_4c1c=-0.46210,VESK_FORGANGS_4c2b=0.96688,AESK_FORGANGS_4c2b=-0.46210,VESK_CABLE_4c39=0.96681,AESK_CABLE_4c39=-0.413545,VFASKRUDSFJ_4c47=0.95730,AFASKRUDSFJ_4c47=-0.428776,VFAS_FORGANGS_4c56=0.95225,AFAS_FORGANGS_4c56=-0.441807,VSTO_VARFJORD_4c65=0.93878,ASTO_VARFJORD_4c65=-0.428152,VSTO_VARFJ_4c74=0.91321,ASTO_VARFJ_4c74=-0.598167,VESKIFJOR_4c83=0.96656,AESKIFJOR_4c83=-0.413952,VFASKRUDS_4c91=0.96276,AFASKRUDS_4c91=-0.409609,VNESKAUPS_4ca0=0.93149,ANESKAUPS_4ca0=-0.460585,VNES_FORGANGS_4caf=0.96090,ANES_FORGANGS_4caf=-0.515364,VFAS_SKERDANL_4cbd=0.95225,AFAS_SKERDANL_4cbd=-0.441807,VBREIDDALSVIK_4ccb=0.96599,ABREIDDALSVIK_4ccb=-0.41424,VBREIDDALSVIK_4cd9=0.94514,ABREIDDALSVIK_4cd9=-0.461175,VNES_SKERDANL_4ce7=0.96090,ANES_SKERDANL_4ce7=-0.515364,VNES_CABLE_4cf5=0.93233,ANES_CABLE_4cf5=-0.458939,VFAS_CABLE_4d03=0.96289,AFAS_CABLE_4d03=-0.40933,VSEYDISFJORDU_4d11=1.03253,ASEYDISFJORDU_4d11=-0.330378,VSEY_FORGANGS_4d20=1.01031,ASEY_FORGANGS_4d20=-0.316393,VSR_MJOL_4d2f=1.03238,ASR_MJOL_4d2f=-0.332611,VBJOLFSVIRKJU_4d3e=1.03707,ABJOLFSVIRKJU_4d3e=-0.245793,VGULSVIRKJUN_4d4d=1.03000,AGULSVIRKJUN_4d4d=-0.271262,VSEY_KYNDISTO_4d5c=1.01031,ASEY_KYNDISTO_4d5c=-0.316393,VSEY_CABLE_4d6a=1.03255,ASEY_CABLE_4d6a=-0.330499,VLAGARFOSS_4d78=1.03650,ALAGARFOSS_4d78=-0.292976,VLAGARFO1_4d87=1.07685,ALAGARFO1_4d87=-0.24710,VLAGARFOSS_4d96=1.08312,ALAGARFOSS_4d96=-0.237942,VLAG_11KV_4da5=1.07872,ALAG_11KV_4da5=-0.320823,VVOPNAFJO_4db3=1.02701,AVOPNAFJO_4db3=-0.308935,VVOP_FORGANGS_4dc2=1.02248,AVOP_FORGANGS_4dc2=-0.323065,VVOP_SKERDANL_4dd1=1.02248,AVOP_SKERDANL_4dd1=-0.323065,VALCOA_1_4ddf=1.03741,AALCOA_1_4ddf=-0.395568,VALCOA_2_4dee=1.03741,AALCOA_2_4dee=-0.395568,VDUM_4dfc=1.02517,ADUM_4dfc=-0.305075);
end PF_Bus_00000;
end Bus_Data;

record Loads_Data

partial record Loads_Template
parameter OpenIPSL.Types.ActivePower PCL1015_1_4e09;
parameter OpenIPSL.Types.ReactivePower QCL1015_1_4e09;
parameter OpenIPSL.Types.ActivePower PCL1018_1_4e10;
parameter OpenIPSL.Types.ReactivePower QCL1018_1_4e10;
parameter OpenIPSL.Types.ActivePower PCL1078_1_4e17;
parameter OpenIPSL.Types.ReactivePower QCL1078_1_4e17;
parameter OpenIPSL.Types.ActivePower PCL1085_1_4e1e;
parameter OpenIPSL.Types.ReactivePower QCL1085_1_4e1e;
parameter OpenIPSL.Types.ActivePower PCL1086_1_4e25;
parameter OpenIPSL.Types.ReactivePower QCL1086_1_4e25;
parameter OpenIPSL.Types.ActivePower PCL1087_1_4e2c;
parameter OpenIPSL.Types.ReactivePower QCL1087_1_4e2c;
parameter OpenIPSL.Types.ActivePower PCL1091_1_4e33;
parameter OpenIPSL.Types.ReactivePower QCL1091_1_4e33;
parameter OpenIPSL.Types.ActivePower PCL1092_1_4e3a;
parameter OpenIPSL.Types.ReactivePower QCL1092_1_4e3a;
parameter OpenIPSL.Types.ActivePower PCL1095_1_4e41;
parameter OpenIPSL.Types.ReactivePower QCL1095_1_4e41;
parameter OpenIPSL.Types.ActivePower PCL1098_1_4e48;
parameter OpenIPSL.Types.ReactivePower QCL1098_1_4e48;
parameter OpenIPSL.Types.ActivePower PCL1134_1_4e4f;
parameter OpenIPSL.Types.ReactivePower QCL1134_1_4e4f;
parameter OpenIPSL.Types.ActivePower PCL1137_1_4e56;
parameter OpenIPSL.Types.ReactivePower QCL1137_1_4e56;
parameter OpenIPSL.Types.ActivePower PCL1148_1_4e5d;
parameter OpenIPSL.Types.ReactivePower QCL1148_1_4e5d;
parameter OpenIPSL.Types.ActivePower PCL1150_1_4e64;
parameter OpenIPSL.Types.ReactivePower QCL1150_1_4e64;
parameter OpenIPSL.Types.ActivePower PCL1151_1_4e6b;
parameter OpenIPSL.Types.ReactivePower QCL1151_1_4e6b;
parameter OpenIPSL.Types.ActivePower PCL1200_1_4e72;
parameter OpenIPSL.Types.ReactivePower QCL1200_1_4e72;
parameter OpenIPSL.Types.ActivePower PCL2018_1_4e79;
parameter OpenIPSL.Types.ReactivePower QCL2018_1_4e79;
parameter OpenIPSL.Types.ActivePower PNCL2022_1_4e80;
parameter OpenIPSL.Types.ReactivePower QNCL2022_1_4e80;
parameter OpenIPSL.Types.ActivePower PNCL2023_1_4e87;
parameter OpenIPSL.Types.ReactivePower QNCL2023_1_4e87;
parameter OpenIPSL.Types.ActivePower PCL2030_1_4e8e;
parameter OpenIPSL.Types.ReactivePower QCL2030_1_4e8e;
parameter OpenIPSL.Types.ActivePower PCL2030_2_4e95;
parameter OpenIPSL.Types.ReactivePower QCL2030_2_4e95;
parameter OpenIPSL.Types.ActivePower PCL2062_1_4e9c;
parameter OpenIPSL.Types.ReactivePower QCL2062_1_4e9c;
parameter OpenIPSL.Types.ActivePower PCL2103_1_4ea3;
parameter OpenIPSL.Types.ReactivePower QCL2103_1_4ea3;
parameter OpenIPSL.Types.ActivePower PCL2111_1_4eaa;
parameter OpenIPSL.Types.ReactivePower QCL2111_1_4eaa;
parameter OpenIPSL.Types.ActivePower PNCL2140_1_4eb1;
parameter OpenIPSL.Types.ReactivePower QNCL2140_1_4eb1;
parameter OpenIPSL.Types.ActivePower PNCL2160_1_4eb8;
parameter OpenIPSL.Types.ReactivePower QNCL2160_1_4eb8;
parameter OpenIPSL.Types.ActivePower PNCL2161_2_4ebf;
parameter OpenIPSL.Types.ReactivePower QNCL2161_2_4ebf;
parameter OpenIPSL.Types.ActivePower PCL2201_1_4ec6;
parameter OpenIPSL.Types.ReactivePower QCL2201_1_4ec6;
parameter OpenIPSL.Types.ActivePower PCL2210_1_4ecd;
parameter OpenIPSL.Types.ReactivePower QCL2210_1_4ecd;
parameter OpenIPSL.Types.ActivePower PCL2220_1_4ed4;
parameter OpenIPSL.Types.ReactivePower QCL2220_1_4ed4;
parameter OpenIPSL.Types.ActivePower PCL2231_1_4edb;
parameter OpenIPSL.Types.ReactivePower QCL2231_1_4edb;
parameter OpenIPSL.Types.ActivePower PCL2241_1_4ee2;
parameter OpenIPSL.Types.ReactivePower QCL2241_1_4ee2;
parameter OpenIPSL.Types.ActivePower PCL2251_1_4ee9;
parameter OpenIPSL.Types.ReactivePower QCL2251_1_4ee9;
parameter OpenIPSL.Types.ActivePower PCL2261_1_4ef0;
parameter OpenIPSL.Types.ReactivePower QCL2261_1_4ef0;
parameter OpenIPSL.Types.ActivePower PCL2300_1_4ef7;
parameter OpenIPSL.Types.ReactivePower QCL2300_1_4ef7;
parameter OpenIPSL.Types.ActivePower PCL2301_1_4efe;
parameter OpenIPSL.Types.ReactivePower QCL2301_1_4efe;
parameter OpenIPSL.Types.ActivePower PCL2305_1_4f05;
parameter OpenIPSL.Types.ReactivePower QCL2305_1_4f05;
parameter OpenIPSL.Types.ActivePower PCL2350_1_4f0c;
parameter OpenIPSL.Types.ReactivePower QCL2350_1_4f0c;
parameter OpenIPSL.Types.ActivePower PCL3124_1_4f13;
parameter OpenIPSL.Types.ReactivePower QCL3124_1_4f13;
parameter OpenIPSL.Types.ActivePower PCL3131_1_4f1a;
parameter OpenIPSL.Types.ReactivePower QCL3131_1_4f1a;
parameter OpenIPSL.Types.ActivePower PCL3141_1_4f21;
parameter OpenIPSL.Types.ReactivePower QCL3141_1_4f21;
parameter OpenIPSL.Types.ActivePower PCL3151_1_4f28;
parameter OpenIPSL.Types.ReactivePower QCL3151_1_4f28;
parameter OpenIPSL.Types.ActivePower PCL3161_1_4f2f;
parameter OpenIPSL.Types.ReactivePower QCL3161_1_4f2f;
parameter OpenIPSL.Types.ActivePower PCL3201_1_4f36;
parameter OpenIPSL.Types.ReactivePower QCL3201_1_4f36;
parameter OpenIPSL.Types.ActivePower PCL3211_1_4f3d;
parameter OpenIPSL.Types.ReactivePower QCL3211_1_4f3d;
parameter OpenIPSL.Types.ActivePower PCL3321_1_4f44;
parameter OpenIPSL.Types.ReactivePower QCL3321_1_4f44;
parameter OpenIPSL.Types.ActivePower PCL3333_1_4f4b;
parameter OpenIPSL.Types.ReactivePower QCL3333_1_4f4b;
parameter OpenIPSL.Types.ActivePower PCL3362_1_4f52;
parameter OpenIPSL.Types.ReactivePower QCL3362_1_4f52;
parameter OpenIPSL.Types.ActivePower PCL3370_1_4f59;
parameter OpenIPSL.Types.ReactivePower QCL3370_1_4f59;
parameter OpenIPSL.Types.ActivePower PCL3371_1_4f60;
parameter OpenIPSL.Types.ReactivePower QCL3371_1_4f60;
parameter OpenIPSL.Types.ActivePower PCL3380_1_4f67;
parameter OpenIPSL.Types.ReactivePower QCL3380_1_4f67;
parameter OpenIPSL.Types.ActivePower PCL3381_1_4f6e;
parameter OpenIPSL.Types.ReactivePower QCL3381_1_4f6e;
parameter OpenIPSL.Types.ActivePower PCL3390_1_4f75;
parameter OpenIPSL.Types.ReactivePower QCL3390_1_4f75;
parameter OpenIPSL.Types.ActivePower PCL4011_1_4f7c;
parameter OpenIPSL.Types.ReactivePower QCL4011_1_4f7c;
parameter OpenIPSL.Types.ActivePower PCL4021_1_4f83;
parameter OpenIPSL.Types.ReactivePower QCL4021_1_4f83;
parameter OpenIPSL.Types.ActivePower PCL4042_1_4f8a;
parameter OpenIPSL.Types.ReactivePower QCL4042_1_4f8a;
parameter OpenIPSL.Types.ActivePower PCL4045_1_4f91;
parameter OpenIPSL.Types.ReactivePower QCL4045_1_4f91;
parameter OpenIPSL.Types.ActivePower PCL4051_1_4f98;
parameter OpenIPSL.Types.ReactivePower QCL4051_1_4f98;
parameter OpenIPSL.Types.ActivePower PCL4053_1_4f9f;
parameter OpenIPSL.Types.ReactivePower QCL4053_1_4f9f;
parameter OpenIPSL.Types.ActivePower PNCL4055_1_4fa6;
parameter OpenIPSL.Types.ReactivePower QNCL4055_1_4fa6;
parameter OpenIPSL.Types.ActivePower PCL4058_1_4fad;
parameter OpenIPSL.Types.ReactivePower QCL4058_1_4fad;
parameter OpenIPSL.Types.ActivePower PCL4104_1_4fb4;
parameter OpenIPSL.Types.ReactivePower QCL4104_1_4fb4;
parameter OpenIPSL.Types.ActivePower PCL4108_1_4fbb;
parameter OpenIPSL.Types.ReactivePower QCL4108_1_4fbb;
parameter OpenIPSL.Types.ActivePower PCL4110_1_4fc2;
parameter OpenIPSL.Types.ReactivePower QCL4110_1_4fc2;
parameter OpenIPSL.Types.ActivePower PCL4120_1_4fc9;
parameter OpenIPSL.Types.ReactivePower QCL4120_1_4fc9;
parameter OpenIPSL.Types.ActivePower PCL4122_1_4fd0;
parameter OpenIPSL.Types.ReactivePower QCL4122_1_4fd0;
parameter OpenIPSL.Types.ActivePower PCL5013_1_4fd7;
parameter OpenIPSL.Types.ReactivePower QCL5013_1_4fd7;
parameter OpenIPSL.Types.ActivePower PCL5015_1_4fde;
parameter OpenIPSL.Types.ReactivePower QCL5015_1_4fde;
parameter OpenIPSL.Types.ActivePower PCL5021_1_4fe5;
parameter OpenIPSL.Types.ReactivePower QCL5021_1_4fe5;
parameter OpenIPSL.Types.ActivePower PCL5027_1_4fec;
parameter OpenIPSL.Types.ReactivePower QCL5027_1_4fec;
parameter OpenIPSL.Types.ActivePower PCL5039_1_4ff3;
parameter OpenIPSL.Types.ReactivePower QCL5039_1_4ff3;
parameter OpenIPSL.Types.ActivePower PCL5041_1_4ffa;
parameter OpenIPSL.Types.ReactivePower QCL5041_1_4ffa;
parameter OpenIPSL.Types.ActivePower PCL5051_1_5001;
parameter OpenIPSL.Types.ReactivePower QCL5051_1_5001;
parameter OpenIPSL.Types.ActivePower PNCL5071_1_5008;
parameter OpenIPSL.Types.ReactivePower QNCL5071_1_5008;
parameter OpenIPSL.Types.ActivePower PNCL5072_1_500f;
parameter OpenIPSL.Types.ReactivePower QNCL5072_1_500f;
parameter OpenIPSL.Types.ActivePower PNCL5073_1_5016;
parameter OpenIPSL.Types.ReactivePower QNCL5073_1_5016;
parameter OpenIPSL.Types.ActivePower PNCL5074_1_501d;
parameter OpenIPSL.Types.ReactivePower QNCL5074_1_501d;
parameter OpenIPSL.Types.ActivePower PNCL5075_1_5024;
parameter OpenIPSL.Types.ReactivePower QNCL5075_1_5024;
parameter OpenIPSL.Types.ActivePower PNCL5076_1_502b;
parameter OpenIPSL.Types.ReactivePower QNCL5076_1_502b;
parameter OpenIPSL.Types.ActivePower PNCL5077_1_5032;
parameter OpenIPSL.Types.ReactivePower QNCL5077_1_5032;
parameter OpenIPSL.Types.ActivePower PNCL5078_1_5039;
parameter OpenIPSL.Types.ReactivePower QNCL5078_1_5039;
parameter OpenIPSL.Types.ActivePower PCL5081_1_5040;
parameter OpenIPSL.Types.ReactivePower QCL5081_1_5040;
parameter OpenIPSL.Types.ActivePower PCL5082_1_5047;
parameter OpenIPSL.Types.ReactivePower QCL5082_1_5047;
parameter OpenIPSL.Types.ActivePower PCL5087_1_504e;
parameter OpenIPSL.Types.ReactivePower QCL5087_1_504e;
parameter OpenIPSL.Types.ActivePower PCL5089_1_5055;
parameter OpenIPSL.Types.ReactivePower QCL5089_1_5055;
parameter OpenIPSL.Types.ActivePower PCL5093_1_505c;
parameter OpenIPSL.Types.ReactivePower QCL5093_1_505c;
parameter OpenIPSL.Types.ActivePower PCL5094_1_5063;
parameter OpenIPSL.Types.ReactivePower QCL5094_1_5063;
parameter OpenIPSL.Types.ActivePower PCL5096_1_506a;
parameter OpenIPSL.Types.ReactivePower QCL5096_1_506a;
parameter OpenIPSL.Types.ActivePower PCL5097_2_5071;
parameter OpenIPSL.Types.ReactivePower QCL5097_2_5071;
parameter OpenIPSL.Types.ActivePower PCL5101_1_5078;
parameter OpenIPSL.Types.ReactivePower QCL5101_1_5078;
parameter OpenIPSL.Types.ActivePower PCL5107_1_507f;
parameter OpenIPSL.Types.ReactivePower QCL5107_1_507f;
parameter OpenIPSL.Types.ActivePower PCL5203_1_5086;
parameter OpenIPSL.Types.ReactivePower QCL5203_1_5086;
parameter OpenIPSL.Types.ActivePower PCL5211_1_508d;
parameter OpenIPSL.Types.ReactivePower QCL5211_1_508d;
parameter OpenIPSL.Types.ActivePower PCL5212_1_5094;
parameter OpenIPSL.Types.ReactivePower QCL5212_1_5094;
parameter OpenIPSL.Types.ActivePower PSHHVOLSV_11KV5099;
parameter OpenIPSL.Types.ReactivePower QSHHVOLSV_11KV5099;
parameter OpenIPSL.Types.ActivePower PSHVEM_BRAEDSLA509d;
parameter OpenIPSL.Types.ReactivePower QSHVEM_BRAEDSLA509d;
parameter OpenIPSL.Types.ActivePower PSHHAM50a1;
parameter OpenIPSL.Types.ReactivePower QSHHAM50a1;
parameter OpenIPSL.Types.ActivePower PSHBRENNIME50a5;
parameter OpenIPSL.Types.ReactivePower QSHBRENNIME50a5;
parameter OpenIPSL.Types.ActivePower PSHSVC_16KV50a9;
parameter OpenIPSL.Types.ReactivePower QSHSVC_16KV50a9;
parameter OpenIPSL.Types.ActivePower PSHOLAFSVIK50ad;
parameter OpenIPSL.Types.ReactivePower QSHOLAFSVIK50ad;
parameter OpenIPSL.Types.ActivePower PSHGEIRADAL50b1;
parameter OpenIPSL.Types.ReactivePower QSHGEIRADAL50b1;
parameter OpenIPSL.Types.ActivePower PSHBOLUNGAVIK50b5;
parameter OpenIPSL.Types.ReactivePower QSHBOLUNGAVIK50b5;
parameter OpenIPSL.Types.ActivePower PSHISA_FORGANGS50b9;
parameter OpenIPSL.Types.ReactivePower QSHISA_FORGANGS50b9;
parameter OpenIPSL.Types.ActivePower PSHBILDUDALUR3350bd;
parameter OpenIPSL.Types.ReactivePower QSHBILDUDALUR3350bd;
parameter OpenIPSL.Types.ActivePower PSHBILDUDALUR3350c1;
parameter OpenIPSL.Types.ReactivePower QSHBILDUDALUR3350c1;
parameter OpenIPSL.Types.ActivePower PSHBOL_FORGANGS50c5;
parameter OpenIPSL.Types.ReactivePower QSHBOL_FORGANGS50c5;
parameter OpenIPSL.Types.ActivePower PSHHOLMAVIK50c9;
parameter OpenIPSL.Types.ReactivePower QSHHOLMAVIK50c9;
parameter OpenIPSL.Types.ActivePower PSHRANG50cd;
parameter OpenIPSL.Types.ReactivePower QSHRANG50cd;
parameter OpenIPSL.Types.ActivePower PSHHRYGG50d1;
parameter OpenIPSL.Types.ReactivePower QSHHRYGG50d1;
parameter OpenIPSL.Types.ActivePower PSHTEIGHO_250d5;
parameter OpenIPSL.Types.ReactivePower QSHTEIGHO_250d5;
parameter OpenIPSL.Types.ActivePower PSHSMYRLA_6_350d9;
parameter OpenIPSL.Types.ReactivePower QSHSMYRLA_6_350d9;
parameter OpenIPSL.Types.ActivePower PSHDIODE_150dd;
parameter OpenIPSL.Types.ReactivePower QSHDIODE_150dd;
parameter OpenIPSL.Types.ActivePower PSHDIODE_250e1;
parameter OpenIPSL.Types.ReactivePower QSHDIODE_250e1;
parameter OpenIPSL.Types.ActivePower PSHDIODE_350e5;
parameter OpenIPSL.Types.ReactivePower QSHDIODE_350e5;
parameter OpenIPSL.Types.ActivePower PSHDIODE_450e9;
parameter OpenIPSL.Types.ReactivePower QSHDIODE_450e9;
parameter OpenIPSL.Types.ActivePower PSHDIODE_550ed;
parameter OpenIPSL.Types.ReactivePower QSHDIODE_550ed;
parameter OpenIPSL.Types.ActivePower PSHDIODE_650f1;
parameter OpenIPSL.Types.ReactivePower QSHDIODE_650f1;
parameter OpenIPSL.Types.ActivePower PSHSTO_VARFJ50f5;
parameter OpenIPSL.Types.ReactivePower QSHSTO_VARFJ50f5;
parameter OpenIPSL.Types.ActivePower PGEN1011_1_50fe;
parameter OpenIPSL.Types.ReactivePower QGEN1011_1_50fe;
parameter OpenIPSL.Types.ActivePower PGEN1011_2_5104;
parameter OpenIPSL.Types.ReactivePower QGEN1011_2_5104;
parameter OpenIPSL.Types.ActivePower PGEN1012_1_510c;
parameter OpenIPSL.Types.ReactivePower QGEN1012_1_510c;
parameter OpenIPSL.Types.ActivePower PGEN1012_2_5112;
parameter OpenIPSL.Types.ReactivePower QGEN1012_2_5112;
parameter OpenIPSL.Types.ActivePower PGEN1013_1_511a;
parameter OpenIPSL.Types.ReactivePower QGEN1013_1_511a;
parameter OpenIPSL.Types.ActivePower PGEN1013_2_5120;
parameter OpenIPSL.Types.ReactivePower QGEN1013_2_5120;
parameter OpenIPSL.Types.ActivePower PGEN1021_1_5128;
parameter OpenIPSL.Types.ReactivePower QGEN1021_1_5128;
parameter OpenIPSL.Types.ActivePower PGEN1022_1_5130;
parameter OpenIPSL.Types.ReactivePower QGEN1022_1_5130;
parameter OpenIPSL.Types.ActivePower PGEN1023_1_5138;
parameter OpenIPSL.Types.ReactivePower QGEN1023_1_5138;
parameter OpenIPSL.Types.ActivePower PGEN1031_1_5140;
parameter OpenIPSL.Types.ReactivePower QGEN1031_1_5140;
parameter OpenIPSL.Types.ActivePower PGEN1032_1_5149;
parameter OpenIPSL.Types.ReactivePower QGEN1032_1_5149;
parameter OpenIPSL.Types.ActivePower PGEN1033_1_5152;
parameter OpenIPSL.Types.ReactivePower QGEN1033_1_5152;
parameter OpenIPSL.Types.ActivePower PGEN1041_1_515b;
parameter OpenIPSL.Types.ReactivePower QGEN1041_1_515b;
parameter OpenIPSL.Types.ActivePower PGEN1042_1_5163;
parameter OpenIPSL.Types.ReactivePower QGEN1042_1_5163;
parameter OpenIPSL.Types.ActivePower PGEN1051_1_516b;
parameter OpenIPSL.Types.ReactivePower QGEN1051_1_516b;
parameter OpenIPSL.Types.ActivePower PGEN1052_1_5173;
parameter OpenIPSL.Types.ReactivePower QGEN1052_1_5173;
parameter OpenIPSL.Types.ActivePower PGEN1061_1_517b;
parameter OpenIPSL.Types.ReactivePower QGEN1061_1_517b;
parameter OpenIPSL.Types.ActivePower PGEN1062_1_5183;
parameter OpenIPSL.Types.ReactivePower QGEN1062_1_5183;
parameter OpenIPSL.Types.ActivePower PGEN1111_1_518b;
parameter OpenIPSL.Types.ReactivePower QGEN1111_1_518b;
parameter OpenIPSL.Types.ActivePower PGEN1112_1_5193;
parameter OpenIPSL.Types.ReactivePower QGEN1112_1_5193;
parameter OpenIPSL.Types.ActivePower PGEN1113_1_519b;
parameter OpenIPSL.Types.ReactivePower QGEN1113_1_519b;
parameter OpenIPSL.Types.ActivePower PGEN1121_1_51a3;
parameter OpenIPSL.Types.ReactivePower QGEN1121_1_51a3;
parameter OpenIPSL.Types.ActivePower PGEN1122_1_51ab;
parameter OpenIPSL.Types.ReactivePower QGEN1122_1_51ab;
parameter OpenIPSL.Types.ActivePower PGEN1131_1_51b3;
parameter OpenIPSL.Types.ReactivePower QGEN1131_1_51b3;
parameter OpenIPSL.Types.ActivePower PGEN1131_2_51b9;
parameter OpenIPSL.Types.ReactivePower QGEN1131_2_51b9;
parameter OpenIPSL.Types.ActivePower PGEN1131_3_51bf;
parameter OpenIPSL.Types.ReactivePower QGEN1131_3_51bf;
parameter OpenIPSL.Types.ActivePower PGEN1141_1_51c7;
parameter OpenIPSL.Types.ReactivePower QGEN1141_1_51c7;
parameter OpenIPSL.Types.ActivePower PGEN1142_1_51cf;
parameter OpenIPSL.Types.ReactivePower QGEN1142_1_51cf;
parameter OpenIPSL.Types.ActivePower PGEN1143_1_51d7;
parameter OpenIPSL.Types.ReactivePower QGEN1143_1_51d7;
parameter OpenIPSL.Types.ActivePower PGEN1144_1_51df;
parameter OpenIPSL.Types.ReactivePower QGEN1144_1_51df;
parameter OpenIPSL.Types.ActivePower PGEN1145_1_51e7;
parameter OpenIPSL.Types.ReactivePower QGEN1145_1_51e7;
parameter OpenIPSL.Types.ActivePower PGEN1146_1_51ef;
parameter OpenIPSL.Types.ReactivePower QGEN1146_1_51ef;
parameter OpenIPSL.Types.ActivePower PGEN1147_1_51f7;
parameter OpenIPSL.Types.ReactivePower QGEN1147_1_51f7;
parameter OpenIPSL.Types.ActivePower PGEN1201_1_51ff;
parameter OpenIPSL.Types.ReactivePower QGEN1201_1_51ff;
parameter OpenIPSL.Types.ActivePower PGEN1202_1_5207;
parameter OpenIPSL.Types.ReactivePower QGEN1202_1_5207;
parameter OpenIPSL.Types.ActivePower PGEN1203_1_520f;
parameter OpenIPSL.Types.ReactivePower QGEN1203_1_520f;
parameter OpenIPSL.Types.ActivePower PGEN1204_1_5217;
parameter OpenIPSL.Types.ReactivePower QGEN1204_1_5217;
parameter OpenIPSL.Types.ActivePower PGEN2302_1_521f;
parameter OpenIPSL.Types.ReactivePower QGEN2302_1_521f;
parameter OpenIPSL.Types.ActivePower PGEN2332_1_5227;
parameter OpenIPSL.Types.ReactivePower QGEN2332_1_5227;
parameter OpenIPSL.Types.ActivePower PGEN2333_1_522f;
parameter OpenIPSL.Types.ReactivePower QGEN2333_1_522f;
parameter OpenIPSL.Types.ActivePower PGEN2336_1_5237;
parameter OpenIPSL.Types.ReactivePower QGEN2336_1_5237;
parameter OpenIPSL.Types.ActivePower PGEN3170_1_523f;
parameter OpenIPSL.Types.ReactivePower QGEN3170_1_523f;
parameter OpenIPSL.Types.ActivePower PGEN3303_1_5247;
parameter OpenIPSL.Types.ReactivePower QGEN3303_1_5247;
parameter OpenIPSL.Types.ActivePower PGEN3304_2_524f;
parameter OpenIPSL.Types.ReactivePower QGEN3304_2_524f;
parameter OpenIPSL.Types.ActivePower PGEN4031_1_5257;
parameter OpenIPSL.Types.ReactivePower QGEN4031_1_5257;
parameter OpenIPSL.Types.ActivePower PGEN4032_1_525f;
parameter OpenIPSL.Types.ReactivePower QGEN4032_1_525f;
parameter OpenIPSL.Types.ActivePower PGEN4033_1_5267;
parameter OpenIPSL.Types.ReactivePower QGEN4033_1_5267;
parameter OpenIPSL.Types.ActivePower PGEN4061_1_526f;
parameter OpenIPSL.Types.ReactivePower QGEN4061_1_526f;
parameter OpenIPSL.Types.ActivePower PGEN4062_1_5277;
parameter OpenIPSL.Types.ReactivePower QGEN4062_1_5277;
parameter OpenIPSL.Types.ActivePower PGEN4101_1_527f;
parameter OpenIPSL.Types.ReactivePower QGEN4101_1_527f;
parameter OpenIPSL.Types.ActivePower PGEN4105_1_5287;
parameter OpenIPSL.Types.ReactivePower QGEN4105_1_5287;
parameter OpenIPSL.Types.ActivePower PGEN5061_1_528f;
parameter OpenIPSL.Types.ReactivePower QGEN5061_1_528f;
parameter OpenIPSL.Types.ActivePower PGEN5062_1_5297;
parameter OpenIPSL.Types.ReactivePower QGEN5062_1_5297;
parameter OpenIPSL.Types.ActivePower PGEN5063_1_529f;
parameter OpenIPSL.Types.ReactivePower QGEN5063_1_529f;
parameter OpenIPSL.Types.ActivePower PGEN5064_1_52a7;
parameter OpenIPSL.Types.ReactivePower QGEN5064_1_52a7;
parameter OpenIPSL.Types.ActivePower PGEN5065_1_52af;
parameter OpenIPSL.Types.ReactivePower QGEN5065_1_52af;
parameter OpenIPSL.Types.ActivePower PGEN5066_1_52b7;
parameter OpenIPSL.Types.ReactivePower QGEN5066_1_52b7;
parameter OpenIPSL.Types.ActivePower PGEN5105_1_52bf;
parameter OpenIPSL.Types.ReactivePower QGEN5105_1_52bf;
parameter OpenIPSL.Types.ActivePower PGEN5106_1_52c7;
parameter OpenIPSL.Types.ReactivePower QGEN5106_1_52c7;
parameter OpenIPSL.Types.ActivePower PGEN5201_1_52cf;
parameter OpenIPSL.Types.ReactivePower QGEN5201_1_52cf;
parameter OpenIPSL.Types.ActivePower PGEN5202_1_52d7;
parameter OpenIPSL.Types.ReactivePower QGEN5202_1_52d7;
end Loads_Template;

record PF_Loads_00000
	extends Iceland_modified_PF_solved_package.PF_Data.Loads_Data.Loads_Template(PCL1015_1_4e09 = 631000,QCL1015_1_4e09 = 158000,PCL1018_1_4e10 = 1.324E6,QCL1018_1_4e10 = 332000,PCL1078_1_4e17 = 4.901E6,QCL1078_1_4e17 = 1.228E6,PCL1085_1_4e1e = 7.351E6,QCL1085_1_4e1e = 1.842E6,PCL1086_1_4e25 = 4.756E6,QCL1086_1_4e25 = 1.192E6,PCL1087_1_4e2c = 4.94E6,QCL1087_1_4e2c = 1.238E6,PCL1091_1_4e33 = 2.668E6,QCL1091_1_4e33 = 669000,PCL1092_1_4e3a = 2.0E6,QCL1092_1_4e3a = 501000,PCL1095_1_4e41 = 1.32E7,QCL1095_1_4e41 = 3.308E6,PCL1098_1_4e48 = 6.569E6,QCL1098_1_4e48 = 1.646E6,PCL1134_1_4e4f = 4.644E6,QCL1134_1_4e4f = 1.164E6,PCL1137_1_4e56 = 3.707E6,QCL1137_1_4e56 = 929000,PCL1148_1_4e5d = 3.218E6,QCL1148_1_4e5d = 807000,PCL1150_1_4e64 = 2.363E6,QCL1150_1_4e64 = 592000,PCL1151_1_4e6b = 1.4463E7,QCL1151_1_4e6b = 3.625E6,PCL1200_1_4e72 = 20000,QCL1200_1_4e72 = 5000,PCL2018_1_4e79 = 1.1336E7,QCL2018_1_4e79 = 2.841E6,PNCL2022_1_4e80 = 1.9245E8,QNCL2022_1_4e80 = 2.7423E7,PNCL2023_1_4e87 = 1.9245E8,QNCL2023_1_4e87 = 2.7423E7,PCL2030_1_4e8e = 2.0686E7,QCL2030_1_4e8e = 5.184E6,PCL2030_2_4e95 = 9.849E6,QCL2030_2_4e95 = 2.468E6,PCL2062_1_4e9c = 1.9698E7,QCL2062_1_4e9c = 4.937E6,PCL2103_1_4ea3 = 5.673E6,QCL2103_1_4ea3 = 1.422E6,PCL2111_1_4eaa = 6.681E6,QCL2111_1_4eaa = 1.674E6,PNCL2140_1_4eb1 = 1.29E8,QNCL2140_1_4eb1 = 1.8382E7,PNCL2160_1_4eb8 = 2.5739999999999997E8,QNCL2160_1_4eb8 = 3.6678E7,PNCL2161_2_4ebf = 2.682E8,QNCL2161_2_4ebf = 3.8216E7,PCL2201_1_4ec6 = 1.7987E7,QCL2201_1_4ec6 = 4.508E6,PCL2210_1_4ecd = 1.9015E7,QCL2210_1_4ecd = 4.766E6,PCL2220_1_4ed4 = 2.0299E7,QCL2220_1_4ed4 = 5.087E6,PCL2231_1_4edb = 1.5675E7,QCL2231_1_4edb = 3.928E6,PCL2241_1_4ee2 = 4.1677E7,QCL2241_1_4ee2 = 1.0445E7,PCL2251_1_4ee9 = 1.2558E7,QCL2251_1_4ee9 = 3.147E6,PCL2261_1_4ef0 = 2.2162E7,QCL2261_1_4ef0 = 5.554E6,PCL2300_1_4ef7 = 2.9709E7,QCL2300_1_4ef7 = 7.446E6,PCL2301_1_4efe = 4.492E6,QCL2301_1_4efe = 1.126E6,PCL2305_1_4f05 = 3.5E7,QCL2305_1_4f05 = 8.772E6,PCL2350_1_4f0c = 1.0582E7,QCL2350_1_4f0c = 2.652E6,PCL3124_1_4f13 = 9.024E6,QCL3124_1_4f13 = 2.262E6,PCL3131_1_4f1a = 387000,QCL3131_1_4f1a = 97000,PCL3141_1_4f21 = 6.671E6,QCL3141_1_4f21 = 1.672E6,PCL3151_1_4f28 = 1.324E6,QCL3151_1_4f28 = 332000,PCL3161_1_4f2f = 3.605E6,QCL3161_1_4f2f = 904000,PCL3201_1_4f36 = 2.088E6,QCL3201_1_4f36 = 523000,PCL3211_1_4f3d = 723000,QCL3211_1_4f3d = 181000,PCL3321_1_4f44 = 2.21E6,QCL3321_1_4f44 = 554000,PCL3333_1_4f4b = 1.976E6,QCL3333_1_4f4b = 495000,PCL3362_1_4f52 = 2.78E6,QCL3362_1_4f52 = 697000,PCL3370_1_4f59 = 7.751E6,QCL3370_1_4f59 = 1.943E6,PCL3371_1_4f60 = 5.622E6,QCL3371_1_4f60 = 1.409E6,PCL3380_1_4f67 = 9.075E6,QCL3380_1_4f67 = 2.274E6,PCL3381_1_4f6e = 2.353E6,QCL3381_1_4f6e = 590000,PCL3390_1_4f75 = 3.768E6,QCL3390_1_4f75 = 944000,PCL4011_1_4f7c = 2.974E6,QCL4011_1_4f7c = 745000,PCL4021_1_4f83 = 3.534E6,QCL4021_1_4f83 = 886000,PCL4042_1_4f8a = 1.731E6,QCL4042_1_4f8a = 434000,PCL4045_1_4f91 = 5.092E6,QCL4045_1_4f91 = 1.276E6,PCL4051_1_4f98 = 2.0787E7,QCL4051_1_4f98 = 5.21E6,PCL4053_1_4f9f = 5.673E6,QCL4053_1_4f9f = 1.422E6,PNCL4055_1_4fa6 = 6.285E7,QNCL4055_1_4fa6 = 1.2762E7,PCL4058_1_4fad = 6.04E6,QCL4058_1_4fad = 1.514E6,PCL4104_1_4fb4 = 1.945E6,QCL4104_1_4fb4 = 488000,PCL4108_1_4fbb = 234000,QCL4108_1_4fbb = 59000,PCL4110_1_4fc2 = 581000,QCL4110_1_4fc2 = 145000,PCL4120_1_4fc9 = 4.879E6,QCL4120_1_4fc9 = 1.223E6,PCL4122_1_4fd0 = 112000,QCL4122_1_4fd0 = 28000,PCL5013_1_4fd7 = 5.408E6,QCL5013_1_4fd7 = 1.355E6,PCL5015_1_4fde = 4.95E6,QCL5015_1_4fde = 1.241E6,PCL5021_1_4fe5 = 2.699E6,QCL5021_1_4fe5 = 676000,PCL5027_1_4fec = 0,QCL5027_1_4fec = 0,PCL5039_1_4ff3 = 6.63E6,QCL5039_1_4ff3 = 1.662E6,PCL5041_1_4ffa = 2.475E6,QCL5041_1_4ffa = 620000,PCL5051_1_5001 = 1.314E6,QCL5051_1_5001 = 329000,PNCL5071_1_5008 = 1.295E7,QNCL5071_1_5008 = 6.62E6,PNCL5072_1_500f = 8.765E7,QNCL5072_1_500f = 3.972E7,PNCL5073_1_5016 = 8.765E7,QNCL5073_1_5016 = 3.972E7,PNCL5074_1_501d = 8.765E7,QNCL5074_1_501d = 3.972E7,PNCL5075_1_5024 = 8.765E7,QNCL5075_1_5024 = 3.972E7,PNCL5076_1_502b = 8.765E7,QNCL5076_1_502b = 3.972E7,PNCL5077_1_5032 = 1.295E7,QNCL5077_1_5032 = 6.62E6,PNCL5078_1_5039 = 8.765E7,QNCL5078_1_5039 = 3.972E7,PCL5081_1_5040 = 1.4962E7,QCL5081_1_5040 = 3.75E6,PCL5082_1_5047 = 3.962E6,QCL5082_1_5047 = 993000,PCL5087_1_504e = 6.61E6,QCL5087_1_504e = 1.657E6,PCL5089_1_5055 = 6.61E6,QCL5089_1_5055 = 1.657E6,PCL5093_1_505c = 7.639E6,QCL5093_1_505c = 1.914E6,PCL5094_1_5063 = 8.340999999999999E6,QCL5094_1_5063 = 2.0910000000000002E6,PCL5096_1_506a = 1.355E6,QCL5096_1_506a = 339000,PCL5097_2_5071 = 1.8023E7,QCL5097_2_5071 = 5.269E6,PCL5101_1_5078 = 2.0E6,QCL5101_1_5078 = 501000,PCL5107_1_507f = 2.0779999999999998E6,QCL5107_1_507f = 521000,PCL5203_1_5086 = 1.772E6,QCL5203_1_5086 = 444000,PCL5211_1_508d = 3.3E6,QCL5211_1_508d = 827000,PCL5212_1_5094 = 81000,QCL5212_1_5094 = 20000,PSHHVOLSV_11KV5099 = 0,QSHHVOLSV_11KV5099 = 9.3332996368E6,PSHVEM_BRAEDSLA509d = 0,QSHVEM_BRAEDSLA509d = 4.4995894432E6,PSHHAM50a1 = 0,QSHHAM50a1 = 3.6842941284200005E7,PSHBRENNIME50a5 = 0,QSHBRENNIME50a5 = 7.63591079712E7,PSHSVC_16KV50a9 = 0,QSHSVC_16KV50a9 = 1.25822038651E7,PSHOLAFSVIK50ad = 1.6570831537E6,QSHOLAFSVIK50ad = 828541.7557,PSHGEIRADAL50b1 = 0,QSHGEIRADAL50b1 = 2.28710479736E7,PSHBOLUNGAVIK50b5 = 0,QSHBOLUNGAVIK50b5 = 2.8590164185E6,PSHISA_FORGANGS50b9 = 596201.9563,QSHISA_FORGANGS50b9 = 357721.2095,PSHBILDUDALUR3350bd = 1.4385029078E6,QSHBILDUDALUR3350bd = 1.2047461271E6,PSHBILDUDALUR3350c1 = 0,QSHBILDUDALUR3350c1 = 2.2476606369000003E6,PSHBOL_FORGANGS50c5 = 186090.6482,QSHBOL_FORGANGS50c5 = 93045.3241,PSHHOLMAVIK50c9 = 2.4799485206999998E6,QSHHOLMAVIK50c9 = 1.1948843002E6,PSHRANG50cd = 0,QSHRANG50cd = 2.01611251831E7,PSHHRYGG50d1 = 0,QSHHRYGG50d1 = 755906.6415,PSHTEIGHO_250d5 = 0,QSHTEIGHO_250d5 = 5.3029551506E6,PSHSMYRLA_6_350d9 = 1.4710887670999998E6,QSHSMYRLA_6_350d9 = 226321.3396,PSHDIODE_150dd = 0,QSHDIODE_150dd = 6.34693260193E7,PSHDIODE_250e1 = 0,QSHDIODE_250e1 = 6.34693260193E7,PSHDIODE_350e5 = 0,QSHDIODE_350e5 = 6.34693260193E7,PSHDIODE_450e9 = 0,QSHDIODE_450e9 = 6.34693260193E7,PSHDIODE_550ed = 0,QSHDIODE_550ed = 6.34693260193E7,PSHDIODE_650f1 = 0,QSHDIODE_650f1 = 6.34693260193E7,PSHSTO_VARFJ50f5 = 0,QSHSTO_VARFJ50f5 = 2.0848813057000001E6,PGEN1011_1_50fe = 4.87E7,QGEN1011_1_50fe = 1.082E7,PGEN1011_2_5104 = 4.85E7,QGEN1011_2_5104 = 1.0775E7,PGEN1012_1_510c = 4.87E7,QGEN1012_1_510c = 1.0974E7,PGEN1012_2_5112 = 4.76E7,QGEN1012_2_5112 = 1.0726E7,PGEN1013_1_511a = 4.86E7,QGEN1013_1_511a = 9.323E6,PGEN1013_2_5120 = 4.76E7,QGEN1013_2_5120 = 9.131E6,PGEN1021_1_5128 = 5.0E7,QGEN1021_1_5128 = 1.485E7,PGEN1022_1_5130 = 5.0E7,QGEN1022_1_5130 = 1.485E7,PGEN1023_1_5138 = 5.0E7,QGEN1023_1_5138 = 1.485E7,PGEN1031_1_5140 = 6.3998E7,QGEN1031_1_5140 = 3.1266E7,PGEN1032_1_5149 = 6.3998E7,QGEN1032_1_5149 = 3.1266E7,PGEN1033_1_5152 = 6.3998E7,QGEN1033_1_5152 = 3.1266E7,PGEN1041_1_515b = 3.6E7,QGEN1041_1_515b = 1.5541E7,PGEN1042_1_5163 = 3.6E7,QGEN1042_1_5163 = 1.5541E7,PGEN1051_1_516b = 6.409999999999999E7,QGEN1051_1_516b = 4.603E6,PGEN1052_1_5173 = 6.42E7,QGEN1052_1_5173 = 6.523E6,PGEN1061_1_517b = 4.47E7,QGEN1061_1_517b = 1.6213000000000002E7,PGEN1062_1_5183 = 4.47E7,QGEN1062_1_5183 = 1.6213000000000002E7,PGEN1111_1_518b = 1.3E7,QGEN1111_1_518b = 2.482E6,PGEN1112_1_5193 = 7.0E6,QGEN1112_1_5193 = 2.626E6,PGEN1113_1_519b = 7.0E6,QGEN1113_1_519b = 3.094E6,PGEN1121_1_51a3 = 7.0E6,QGEN1121_1_51a3 = 3.151E6,PGEN1122_1_51ab = 7.0E6,QGEN1122_1_51ab = 3.111E6,PGEN1131_1_51b3 = 4.0E6,QGEN1131_1_51b3 = 16000,PGEN1131_2_51b9 = 4.0E6,QGEN1131_2_51b9 = 16000,PGEN1131_3_51bf = 6.4E6,QGEN1131_3_51bf = 25000,PGEN1141_1_51c7 = 4.2E7,QGEN1141_1_51c7 = 3.343E6,PGEN1142_1_51cf = 4.2E7,QGEN1142_1_51cf = 3.343E6,PGEN1143_1_51d7 = 2.6E7,QGEN1143_1_51d7 = 2.84E6,PGEN1144_1_51df = 4.0E7,QGEN1144_1_51df = 3.246E6,PGEN1145_1_51e7 = 4.0E7,QGEN1145_1_51e7 = 3.246E6,PGEN1146_1_51ef = 4.49E7,QGEN1146_1_51ef = 3.5E6,PGEN1147_1_51f7 = 4.49E7,QGEN1147_1_51f7 = 3.5E6,PGEN1201_1_51ff = 2.18E7,QGEN1201_1_51ff = 1.905E6,PGEN1202_1_5207 = 2.22E7,QGEN1202_1_5207 = 1.927E6,PGEN1203_1_520f = 2.29E7,QGEN1203_1_520f = 1.966E6,PGEN1204_1_5217 = 2.38E7,QGEN1204_1_5217 = 2.016E6,PGEN2302_1_521f = 1.8E7,QGEN2302_1_521f = 1.645E6,PGEN2332_1_5227 = 4.8E7,QGEN2332_1_5227 = 1.89E6,PGEN2333_1_522f = 4.8E7,QGEN2333_1_522f = 1.89E6,PGEN2336_1_5237 = 2.65E7,QGEN2336_1_5237 = 1.752E6,PGEN3170_1_523f = 7.8E6,QGEN3170_1_523f = 3.3E6,PGEN3303_1_5247 = 2.0E6,QGEN3303_1_5247 = 1.117E6,PGEN3304_2_524f = 6.0E6,QGEN3304_2_524f = 2.591E6,PGEN4031_1_5257 = 3.99E7,QGEN4031_1_5257 = 3.337E6,PGEN4032_1_525f = 3.96E7,QGEN4032_1_525f = 3.347E6,PGEN4033_1_5267 = 4.0E7,QGEN4033_1_5267 = 3.334E6,PGEN4061_1_526f = 2.89E7,QGEN4061_1_526f = 3.246E6,PGEN4062_1_5277 = 2.88E7,QGEN4062_1_5277 = 3.238E6,PGEN4101_1_527f = 9.9E6,QGEN4101_1_527f = 2.0139999999999998E6,PGEN4105_1_5287 = 8.300000000000001E6,QGEN4105_1_5287 = 0,PGEN5061_1_528f = 9.42E7,QGEN5061_1_528f = 1.114E6,PGEN5062_1_5297 = 9.42E7,QGEN5062_1_5297 = 1.098E6,PGEN5063_1_529f = 9.42E7,QGEN5063_1_529f = 1.1E6,PGEN5064_1_52a7 = 9.42E7,QGEN5064_1_52a7 = 1.109E6,PGEN5065_1_52af = 9.42E7,QGEN5065_1_52af = 1.111E6,PGEN5066_1_52b7 = 9.42E7,QGEN5066_1_52b7 = 1.102E6,PGEN5105_1_52bf = 6.4E6,QGEN5105_1_52bf = 0,PGEN5106_1_52c7 = 3.3E6,QGEN5106_1_52c7 = 127000,PGEN5201_1_52cf = 7.1E6,QGEN5201_1_52cf = 2.0E6,PGEN5202_1_52d7 = 1.82E7,QGEN5202_1_52d7 = 2.0E6);
		end PF_Loads_00000;
	end Loads_Data;

	record Trafos_Data
		partial record Trafos_Template
parameter Real T101010110_1_T1;
parameter Real T101010110_1_T2;
parameter Real T101010120_1_T1;
parameter Real T101010120_1_T2;
parameter Real T101010130_1_T1;
parameter Real T101010130_1_T2;
parameter Real T101410110_1_T1;
parameter Real T101410110_1_T2;
parameter Real T101110150_1_T1;
parameter Real T101110150_1_T2;
parameter Real T101710120_1_T1;
parameter Real T101710120_1_T2;
parameter Real T101210180_1_T1;
parameter Real T101210180_1_T2;
parameter Real T101510140_1_T1;
parameter Real T101510140_1_T2;
parameter Real T101810170_1_T1;
parameter Real T101810170_1_T2;
parameter Real T102010220_1_T1;
parameter Real T102010220_1_T2;
parameter Real T102010230_1_T1;
parameter Real T102010230_1_T2;
parameter Real T102010240_1_T1;
parameter Real T102010240_1_T2;
parameter Real T102510200_1_T1;
parameter Real T102510200_1_T2;
parameter Real T102610210_1_T1;
parameter Real T102610210_1_T2;
parameter Real T102410250_1_T1;
parameter Real T102410250_1_T2;
parameter Real T103010310_1_T1;
parameter Real T103010310_1_T2;
parameter Real T103010320_1_T1;
parameter Real T103010320_1_T2;
parameter Real T103010330_1_T1;
parameter Real T103010330_1_T2;
parameter Real T104010410_1_T1;
parameter Real T104010410_1_T2;
parameter Real T104010420_1_T1;
parameter Real T104010420_1_T2;
parameter Real T105010510_1_T1;
parameter Real T105010510_1_T2;
parameter Real T105010520_1_T1;
parameter Real T105010520_1_T2;
parameter Real T106010610_1_T1;
parameter Real T106010610_1_T2;
parameter Real T106010620_1_T1;
parameter Real T106010620_1_T2;
parameter Real T108110780_1_T1;
parameter Real T108110780_1_T2;
parameter Real T108010870_1_T1;
parameter Real T108010870_1_T2;
parameter Real T108810800_1_T1;
parameter Real T108810800_1_T2;
parameter Real T108110850_1_T1;
parameter Real T108110850_1_T2;
parameter Real T108210860_1_T1;
parameter Real T108210860_1_T2;
parameter Real T108710880_1_T1;
parameter Real T108710880_1_T2;
parameter Real T109010910_1_T1;
parameter Real T109010910_1_T2;
parameter Real T110011100_1_T1;
parameter Real T110011100_1_T2;
parameter Real T111911000_1_T1;
parameter Real T111911000_1_T2;
parameter Real T111011110_1_T1;
parameter Real T111011110_1_T2;
parameter Real T111011120_1_T1;
parameter Real T111011120_1_T2;
parameter Real T111011130_1_T1;
parameter Real T111011130_1_T2;
parameter Real T111011140_1_T1;
parameter Real T111011140_1_T2;
parameter Real T111011190_1_T1;
parameter Real T111011190_1_T2;
parameter Real T112011210_1_T1;
parameter Real T112011210_1_T2;
parameter Real T112211200_1_T1;
parameter Real T112211200_1_T2;
parameter Real T112011260_1_T1;
parameter Real T112011260_1_T2;
parameter Real T112111220_1_T1;
parameter Real T112111220_1_T2;
parameter Real T113011310_1_T1;
parameter Real T113011310_1_T2;
parameter Real T113011340_1_T1;
parameter Real T113011340_1_T2;
parameter Real T113611370_1_T1;
parameter Real T113611370_1_T2;
parameter Real T113911410_1_T1;
parameter Real T113911410_1_T2;
parameter Real T113911420_1_T1;
parameter Real T113911420_1_T2;
parameter Real T113911430_1_T1;
parameter Real T113911430_1_T2;
parameter Real T114011440_1_T1;
parameter Real T114011440_1_T2;
parameter Real T114011450_1_T1;
parameter Real T114011450_1_T2;
parameter Real T114011460_1_T1;
parameter Real T114011460_1_T2;
parameter Real T114011470_1_T1;
parameter Real T114011470_1_T2;
parameter Real T114911480_1_T1;
parameter Real T114911480_1_T2;
parameter Real T115011510_1_T1;
parameter Real T115011510_1_T2;
parameter Real T120012010_1_T1;
parameter Real T120012010_1_T2;
parameter Real T120012020_1_T1;
parameter Real T120012020_1_T2;
parameter Real T120012030_1_T1;
parameter Real T120012030_1_T2;
parameter Real T120012040_1_T1;
parameter Real T120012040_1_T2;
parameter Real T201020110_1_T1;
parameter Real T201020110_1_T2;
parameter Real T201020110_2_T1;
parameter Real T201020110_2_T2;
parameter Real T201220100_1_T1;
parameter Real T201220100_1_T2;
parameter Real T201320100_1_T1;
parameter Real T201320100_1_T2;
parameter Real T201120120_1_T1;
parameter Real T201120120_1_T2;
parameter Real T201120130_1_T1;
parameter Real T201120130_1_T2;
parameter Real T205020510_1_T1;
parameter Real T205020510_1_T2;
parameter Real T205020510_2_T1;
parameter Real T205020510_2_T2;
parameter Real T205220500_1_T1;
parameter Real T205220500_1_T2;
parameter Real T205320500_1_T1;
parameter Real T205320500_1_T2;
parameter Real T205120520_1_T1;
parameter Real T205120520_1_T2;
parameter Real T205120530_1_T1;
parameter Real T205120530_1_T2;
parameter Real T206120620_1_T1;
parameter Real T206120620_1_T2;
parameter Real T210021010_1_T1;
parameter Real T210021010_1_T2;
parameter Real T210021010_2_T1;
parameter Real T210021010_2_T2;
parameter Real T210321000_1_T1;
parameter Real T210321000_1_T2;
parameter Real T210321000_2_T1;
parameter Real T210321000_2_T2;
parameter Real T210121030_1_T1;
parameter Real T210121030_1_T2;
parameter Real T210121030_2_T1;
parameter Real T210121030_2_T2;
parameter Real T210621010_1_T1;
parameter Real T210621010_1_T2;
parameter Real T210121070_1_T1;
parameter Real T210121070_1_T2;
parameter Real T210121090_1_T1;
parameter Real T210121090_1_T2;
parameter Real T210921060_1_T1;
parameter Real T210921060_1_T2;
parameter Real T210721080_1_T1;
parameter Real T210721080_1_T2;
parameter Real T211021110_1_T1;
parameter Real T211021110_1_T2;
parameter Real T211021110_2_T1;
parameter Real T211021110_2_T2;
parameter Real T212121220_1_T1;
parameter Real T212121220_1_T2;
parameter Real T220022010_1_T1;
parameter Real T220022010_1_T2;
parameter Real T224022410_3_T1;
parameter Real T224022410_3_T2;
parameter Real T226022610_2_T1;
parameter Real T226022610_2_T2;
parameter Real T230023030_1_T1;
parameter Real T230023030_1_T2;
parameter Real T230023030_2_T1;
parameter Real T230023030_2_T2;
parameter Real T230123020_1_T1;
parameter Real T230123020_1_T2;
parameter Real T230123360_1_T1;
parameter Real T230123360_1_T2;
parameter Real T230423050_1_T1;
parameter Real T230423050_1_T2;
parameter Real T233023320_1_T1;
parameter Real T233023320_1_T2;
parameter Real T233023330_1_T1;
parameter Real T233023330_1_T2;
parameter Real T312031210_1_T1;
parameter Real T312031210_1_T2;
parameter Real T312031210_2_T1;
parameter Real T312031210_2_T2;
parameter Real T312231200_1_T1;
parameter Real T312231200_1_T2;
parameter Real T312131220_1_T1;
parameter Real T312131220_1_T2;
parameter Real T312131240_1_T1;
parameter Real T312131240_1_T2;
parameter Real T312131240_2_T1;
parameter Real T312131240_2_T2;
parameter Real T312231230_1_T1;
parameter Real T312231230_1_T2;
parameter Real T313031310_1_T1;
parameter Real T313031310_1_T2;
parameter Real T314031410_1_T1;
parameter Real T314031410_1_T2;
parameter Real T315031510_1_T1;
parameter Real T315031510_1_T2;
parameter Real T316031610_1_T1;
parameter Real T316031610_1_T2;
parameter Real T320032010_1_T1;
parameter Real T320032010_1_T2;
parameter Real T320132030_1_T1;
parameter Real T320132030_1_T2;
parameter Real T321132100_1_T1;
parameter Real T321132100_1_T2;
parameter Real T321032120_1_T1;
parameter Real T321032120_1_T2;
parameter Real T321232110_1_T1;
parameter Real T321232110_1_T2;
parameter Real T330033010_1_T1;
parameter Real T330033010_1_T2;
parameter Real T330133040_1_T1;
parameter Real T330133040_1_T2;
parameter Real T330533030_1_T1;
parameter Real T330533030_1_T2;
parameter Real T331033610_1_T1;
parameter Real T331033610_1_T2;
parameter Real T336333100_1_T1;
parameter Real T336333100_1_T2;
parameter Real T334033110_1_T1;
parameter Real T334033110_1_T2;
parameter Real T331333210_1_T1;
parameter Real T331333210_1_T2;
parameter Real T332033710_1_T1;
parameter Real T332033710_1_T2;
parameter Real T332033710_2_T1;
parameter Real T332033710_2_T2;
parameter Real T333033810_1_T1;
parameter Real T333033810_1_T2;
parameter Real T334233510_1_T1;
parameter Real T334233510_1_T2;
parameter Real T336133620_1_T1;
parameter Real T336133620_1_T2;
parameter Real T336133630_1_T1;
parameter Real T336133630_1_T2;
parameter Real T336633610_1_T1;
parameter Real T336633610_1_T2;
parameter Real T336233660_1_T1;
parameter Real T336233660_1_T2;
parameter Real T401040110_1_T1;
parameter Real T401040110_1_T2;
parameter Real T401140130_1_T1;
parameter Real T401140130_1_T2;
parameter Real T402140200_1_T1;
parameter Real T402140200_1_T2;
parameter Real T402040220_1_T1;
parameter Real T402040220_1_T2;
parameter Real T402240210_1_T1;
parameter Real T402240210_1_T2;
parameter Real T403040310_1_T1;
parameter Real T403040310_1_T2;
parameter Real T403240360_1_T1;
parameter Real T403240360_1_T2;
parameter Real T403640330_1_T1;
parameter Real T403640330_1_T2;
parameter Real T404040410_1_T1;
parameter Real T404040410_1_T2;
parameter Real T404240400_1_T1;
parameter Real T404240400_1_T2;
parameter Real T404140420_1_T1;
parameter Real T404140420_1_T2;
parameter Real T405040510_1_T1;
parameter Real T405040510_1_T2;
parameter Real T405040510_2_T1;
parameter Real T405040510_2_T2;
parameter Real T405240500_1_T1;
parameter Real T405240500_1_T2;
parameter Real T405240500_2_T1;
parameter Real T405240500_2_T2;
parameter Real T405140520_1_T1;
parameter Real T405140520_1_T2;
parameter Real T405140520_2_T1;
parameter Real T405140520_2_T2;
parameter Real T405140530_1_T1;
parameter Real T405140530_1_T2;
parameter Real T405640550_1_T1;
parameter Real T405640550_1_T2;
parameter Real T405640550_2_T1;
parameter Real T405640550_2_T2;
parameter Real T406540610_1_T1;
parameter Real T406540610_1_T2;
parameter Real T406540620_1_T1;
parameter Real T406540620_1_T2;
parameter Real T410041010_1_T1;
parameter Real T410041010_1_T2;
parameter Real T410041020_1_T1;
parameter Real T410041020_1_T2;
parameter Real T410441000_1_T1;
parameter Real T410441000_1_T2;
parameter Real T410041050_1_T1;
parameter Real T410041050_1_T2;
parameter Real T410241040_1_T1;
parameter Real T410241040_1_T2;
parameter Real T412141220_1_T1;
parameter Real T412141220_1_T2;
parameter Real T501550090_1_T1;
parameter Real T501550090_1_T2;
parameter Real T501150140_1_T1;
parameter Real T501150140_1_T2;
parameter Real T501150140_2_T1;
parameter Real T501150140_2_T2;
parameter Real T501350140_1_T1;
parameter Real T501350140_1_T2;
parameter Real T501550180_1_T1;
parameter Real T501550180_1_T2;
parameter Real T501650170_1_T1;
parameter Real T501650170_1_T2;
parameter Real T501750180_1_T1;
parameter Real T501750180_1_T2;
parameter Real T502050220_1_T1;
parameter Real T502050220_1_T2;
parameter Real T502250210_1_T1;
parameter Real T502250210_1_T2;
parameter Real T503950240_1_T1;
parameter Real T503950240_1_T2;
parameter Real T503050310_1_T1;
parameter Real T503050310_1_T2;
parameter Real T503150350_1_T1;
parameter Real T503150350_1_T2;
parameter Real T503650370_1_T1;
parameter Real T503650370_1_T2;
parameter Real T504050410_1_T1;
parameter Real T504050410_1_T2;
parameter Real T505050520_1_T1;
parameter Real T505050520_1_T2;
parameter Real T505950500_1_T1;
parameter Real T505950500_1_T2;
parameter Real T505950500_2_T1;
parameter Real T505950500_2_T2;
parameter Real T50505052110_1_T1;
parameter Real T50505052110_1_T2;
parameter Real T505250590_1_T1;
parameter Real T505250590_1_T2;
parameter Real T505350620_1_T1;
parameter Real T505350620_1_T2;
parameter Real T505450630_1_T1;
parameter Real T505450630_1_T2;
parameter Real T505550660_1_T1;
parameter Real T505550660_1_T2;
parameter Real T505650640_1_T1;
parameter Real T505650640_1_T2;
parameter Real T505750650_1_T1;
parameter Real T505750650_1_T2;
parameter Real T505850610_1_T1;
parameter Real T505850610_1_T2;
parameter Real T50521150590_1_T1;
parameter Real T50521150590_1_T2;
parameter Real T5071507020_1_T1;
parameter Real T5071507020_1_T2;
parameter Real T5072507010_1_T1;
parameter Real T5072507010_1_T2;
parameter Real T5073507010_1_T1;
parameter Real T5073507010_1_T2;
parameter Real T5074507010_1_T1;
parameter Real T5074507010_1_T2;
parameter Real T5075507010_1_T1;
parameter Real T5075507010_1_T2;
parameter Real T5076507010_1_T1;
parameter Real T5076507010_1_T2;
parameter Real T5077507020_1_T1;
parameter Real T5077507020_1_T2;
parameter Real T5078507010_1_T1;
parameter Real T5078507010_1_T2;
parameter Real T509050810_1_T1;
parameter Real T509050810_1_T2;
parameter Real T509050820_2_T1;
parameter Real T509050820_2_T2;
parameter Real T508650870_1_T1;
parameter Real T508650870_1_T2;
parameter Real T509150860_1_T1;
parameter Real T509150860_1_T2;
parameter Real T508750910_1_T1;
parameter Real T508750910_1_T2;
parameter Real T508750910_2_T1;
parameter Real T508750910_2_T2;
parameter Real T508850890_1_T1;
parameter Real T508850890_1_T2;
parameter Real T509250930_1_T1;
parameter Real T509250930_1_T2;
parameter Real T509250930_2_T1;
parameter Real T509250930_2_T2;
parameter Real T509550960_1_T1;
parameter Real T509550960_1_T2;
parameter Real T510151000_1_T1;
parameter Real T510151000_1_T2;
parameter Real T510151000_2_T1;
parameter Real T510151000_2_T2;
parameter Real T510151050_1_T1;
parameter Real T510151050_1_T2;
parameter Real T510151060_1_T1;
parameter Real T510151060_1_T2;
parameter Real T520052010_1_T1;
parameter Real T520052010_1_T2;
parameter Real T520052020_1_T1;
parameter Real T520052020_1_T2;
parameter Real T520052030_1_T1;
parameter Real T520052030_1_T2;
parameter Real T521152100_1_T1;
parameter Real T521152100_1_T2;
		end Trafos_Template;

	record PF_Trafos_00000
		extends Iceland_modified_PF_solved_package.PF_Data.Trafos_Data.Trafos_Template(T101010110_1_T1=1,T101010110_1_T2=1,T101010120_1_T1=1,T101010120_1_T2=1,T101010130_1_T1=1,T101010130_1_T2=1,T101410110_1_T1=1,T101410110_1_T2=1,T101110150_1_T1=1,T101110150_1_T2=1,T101710120_1_T1=1,T101710120_1_T2=1,T101210180_1_T1=1,T101210180_1_T2=1,T101510140_1_T1=1,T101510140_1_T2=1,T101810170_1_T1=1,T101810170_1_T2=1,T102010220_1_T1=1,T102010220_1_T2=1,T102010230_1_T1=1,T102010230_1_T2=1,T102010240_1_T1=1,T102010240_1_T2=1,T102510200_1_T1=1,T102510200_1_T2=1,T102610210_1_T1=1,T102610210_1_T2=1,T102410250_1_T1=1,T102410250_1_T2=1,T103010310_1_T1=1,T103010310_1_T2=1,T103010320_1_T1=1,T103010320_1_T2=1,T103010330_1_T1=1,T103010330_1_T2=1,T104010410_1_T1=1,T104010410_1_T2=1,T104010420_1_T1=1,T104010420_1_T2=1,T105010510_1_T1=1,T105010510_1_T2=1,T105010520_1_T1=1,T105010520_1_T2=1,T106010610_1_T1=1,T106010610_1_T2=1,T106010620_1_T1=1,T106010620_1_T2=1,T108110780_1_T1=1,T108110780_1_T2=1,T108010870_1_T1=1,T108010870_1_T2=1,T108810800_1_T1=1,T108810800_1_T2=1,T108110850_1_T1=1,T108110850_1_T2=1,T108210860_1_T1=1,T108210860_1_T2=1,T108710880_1_T1=1,T108710880_1_T2=1,T109010910_1_T1=1,T109010910_1_T2=1,T110011100_1_T1=1,T110011100_1_T2=1,T111911000_1_T1=1,T111911000_1_T2=1,T111011110_1_T1=1,T111011110_1_T2=1,T111011120_1_T1=1,T111011120_1_T2=1,T111011130_1_T1=1,T111011130_1_T2=1,T111011140_1_T1=1,T111011140_1_T2=1,T111011190_1_T1=1,T111011190_1_T2=1,T112011210_1_T1=1,T112011210_1_T2=1,T112211200_1_T1=1,T112211200_1_T2=1,T112011260_1_T1=1,T112011260_1_T2=1,T112111220_1_T1=1,T112111220_1_T2=1,T113011310_1_T1=1,T113011310_1_T2=1,T113011340_1_T1=1,T113011340_1_T2=1,T113611370_1_T1=1,T113611370_1_T2=1,T113911410_1_T1=1,T113911410_1_T2=1,T113911420_1_T1=1,T113911420_1_T2=1,T113911430_1_T1=1,T113911430_1_T2=1,T114011440_1_T1=1,T114011440_1_T2=1,T114011450_1_T1=1,T114011450_1_T2=1,T114011460_1_T1=1,T114011460_1_T2=1,T114011470_1_T1=1,T114011470_1_T2=1,T114911480_1_T1=1,T114911480_1_T2=1,T115011510_1_T1=1,T115011510_1_T2=1,T120012010_1_T1=1,T120012010_1_T2=1,T120012020_1_T1=1,T120012020_1_T2=1,T120012030_1_T1=1,T120012030_1_T2=1,T120012040_1_T1=1,T120012040_1_T2=1,T201020110_1_T1=1,T201020110_1_T2=1,T201020110_2_T1=1,T201020110_2_T2=1,T201220100_1_T1=1,T201220100_1_T2=1,T201320100_1_T1=1,T201320100_1_T2=1,T201120120_1_T1=1,T201120120_1_T2=1,T201120130_1_T1=1,T201120130_1_T2=1,T205020510_1_T1=1,T205020510_1_T2=1,T205020510_2_T1=1,T205020510_2_T2=1,T205220500_1_T1=1,T205220500_1_T2=1,T205320500_1_T1=1,T205320500_1_T2=1,T205120520_1_T1=1,T205120520_1_T2=1,T205120530_1_T1=1,T205120530_1_T2=1,T206120620_1_T1=1,T206120620_1_T2=1,T210021010_1_T1=1,T210021010_1_T2=1,T210021010_2_T1=1,T210021010_2_T2=1,T210321000_1_T1=1,T210321000_1_T2=1,T210321000_2_T1=1,T210321000_2_T2=1,T210121030_1_T1=1,T210121030_1_T2=1,T210121030_2_T1=1,T210121030_2_T2=1,T210621010_1_T1=1,T210621010_1_T2=1,T210121070_1_T1=1,T210121070_1_T2=1,T210121090_1_T1=1,T210121090_1_T2=1,T210921060_1_T1=1,T210921060_1_T2=1,T210721080_1_T1=1,T210721080_1_T2=1,T211021110_1_T1=1,T211021110_1_T2=1,T211021110_2_T1=1,T211021110_2_T2=1,T212121220_1_T1=1,T212121220_1_T2=1,T220022010_1_T1=1,T220022010_1_T2=1,T224022410_3_T1=1,T224022410_3_T2=1,T226022610_2_T1=1,T226022610_2_T2=1,T230023030_1_T1=1,T230023030_1_T2=1,T230023030_2_T1=1,T230023030_2_T2=1,T230123020_1_T1=1,T230123020_1_T2=1,T230123360_1_T1=1,T230123360_1_T2=1,T230423050_1_T1=1,T230423050_1_T2=1,T233023320_1_T1=1,T233023320_1_T2=1,T233023330_1_T1=1,T233023330_1_T2=1,T312031210_1_T1=1,T312031210_1_T2=1,T312031210_2_T1=1,T312031210_2_T2=1,T312231200_1_T1=1,T312231200_1_T2=1,T312131220_1_T1=1,T312131220_1_T2=1,T312131240_1_T1=1,T312131240_1_T2=1,T312131240_2_T1=1,T312131240_2_T2=1,T312231230_1_T1=1,T312231230_1_T2=1,T313031310_1_T1=1,T313031310_1_T2=1,T314031410_1_T1=1,T314031410_1_T2=1,T315031510_1_T1=1,T315031510_1_T2=1,T316031610_1_T1=1,T316031610_1_T2=1,T320032010_1_T1=1,T320032010_1_T2=1,T320132030_1_T1=1,T320132030_1_T2=1,T321132100_1_T1=1,T321132100_1_T2=1,T321032120_1_T1=1,T321032120_1_T2=1,T321232110_1_T1=1,T321232110_1_T2=1,T330033010_1_T1=1,T330033010_1_T2=1,T330133040_1_T1=1,T330133040_1_T2=1,T330533030_1_T1=1,T330533030_1_T2=1,T331033610_1_T1=1,T331033610_1_T2=1,T336333100_1_T1=1,T336333100_1_T2=1,T334033110_1_T1=1,T334033110_1_T2=1,T331333210_1_T1=1,T331333210_1_T2=1,T332033710_1_T1=1,T332033710_1_T2=1,T332033710_2_T1=1,T332033710_2_T2=1,T333033810_1_T1=1,T333033810_1_T2=1,T334233510_1_T1=1,T334233510_1_T2=1,T336133620_1_T1=1,T336133620_1_T2=1,T336133630_1_T1=1,T336133630_1_T2=1,T336633610_1_T1=1,T336633610_1_T2=1,T336233660_1_T1=1,T336233660_1_T2=1,T401040110_1_T1=1,T401040110_1_T2=1,T401140130_1_T1=1,T401140130_1_T2=1,T402140200_1_T1=1,T402140200_1_T2=1,T402040220_1_T1=1,T402040220_1_T2=1,T402240210_1_T1=1,T402240210_1_T2=1,T403040310_1_T1=1,T403040310_1_T2=1,T403240360_1_T1=1,T403240360_1_T2=1,T403640330_1_T1=1,T403640330_1_T2=1,T404040410_1_T1=1,T404040410_1_T2=1,T404240400_1_T1=1,T404240400_1_T2=1,T404140420_1_T1=1,T404140420_1_T2=1,T405040510_1_T1=1,T405040510_1_T2=1,T405040510_2_T1=1,T405040510_2_T2=1,T405240500_1_T1=1,T405240500_1_T2=1,T405240500_2_T1=1,T405240500_2_T2=1,T405140520_1_T1=1,T405140520_1_T2=1,T405140520_2_T1=1,T405140520_2_T2=1,T405140530_1_T1=1,T405140530_1_T2=1,T405640550_1_T1=1,T405640550_1_T2=1,T405640550_2_T1=1,T405640550_2_T2=1,T406540610_1_T1=1,T406540610_1_T2=1,T406540620_1_T1=1,T406540620_1_T2=1,T410041010_1_T1=1,T410041010_1_T2=1,T410041020_1_T1=1,T410041020_1_T2=1,T410441000_1_T1=1,T410441000_1_T2=1,T410041050_1_T1=1,T410041050_1_T2=1,T410241040_1_T1=1,T410241040_1_T2=1,T412141220_1_T1=1,T412141220_1_T2=1,T501550090_1_T1=1,T501550090_1_T2=1,T501150140_1_T1=1,T501150140_1_T2=1,T501150140_2_T1=1,T501150140_2_T2=1,T501350140_1_T1=1,T501350140_1_T2=1,T501550180_1_T1=1,T501550180_1_T2=1,T501650170_1_T1=1,T501650170_1_T2=1,T501750180_1_T1=1,T501750180_1_T2=1,T502050220_1_T1=1,T502050220_1_T2=1,T502250210_1_T1=1,T502250210_1_T2=1,T503950240_1_T1=1,T503950240_1_T2=1,T503050310_1_T1=1,T503050310_1_T2=1,T503150350_1_T1=1,T503150350_1_T2=1,T503650370_1_T1=1,T503650370_1_T2=1,T504050410_1_T1=1,T504050410_1_T2=1,T505050520_1_T1=1,T505050520_1_T2=1,T505950500_1_T1=1,T505950500_1_T2=1,T505950500_2_T1=1,T505950500_2_T2=1,T50505052110_1_T1=1,T50505052110_1_T2=1,T505250590_1_T1=1,T505250590_1_T2=1,T505350620_1_T1=1,T505350620_1_T2=1,T505450630_1_T1=1,T505450630_1_T2=1,T505550660_1_T1=1,T505550660_1_T2=1,T505650640_1_T1=1,T505650640_1_T2=1,T505750650_1_T1=1,T505750650_1_T2=1,T505850610_1_T1=1,T505850610_1_T2=1,T50521150590_1_T1=1,T50521150590_1_T2=1,T5071507020_1_T1=1,T5071507020_1_T2=1,T5072507010_1_T1=1,T5072507010_1_T2=1,T5073507010_1_T1=1,T5073507010_1_T2=1,T5074507010_1_T1=1,T5074507010_1_T2=1,T5075507010_1_T1=1,T5075507010_1_T2=1,T5076507010_1_T1=1,T5076507010_1_T2=1,T5077507020_1_T1=1,T5077507020_1_T2=1,T5078507010_1_T1=1,T5078507010_1_T2=1,T509050810_1_T1=1,T509050810_1_T2=1,T509050820_2_T1=1,T509050820_2_T2=1,T508650870_1_T1=1,T508650870_1_T2=1,T509150860_1_T1=1,T509150860_1_T2=1,T508750910_1_T1=1,T508750910_1_T2=1,T508750910_2_T1=1,T508750910_2_T2=1,T508850890_1_T1=1,T508850890_1_T2=1,T509250930_1_T1=1,T509250930_1_T2=1,T509250930_2_T1=1,T509250930_2_T2=1,T509550960_1_T1=1,T509550960_1_T2=1,T510151000_1_T1=1,T510151000_1_T2=1,T510151000_2_T1=1,T510151000_2_T2=1,T510151050_1_T1=1,T510151050_1_T2=1,T510151060_1_T1=1,T510151060_1_T2=1,T520052010_1_T1=1,T520052010_1_T2=1,T520052020_1_T1=1,T520052020_1_T2=1,T520052030_1_T1=1,T520052030_1_T2=1,T521152100_1_T1=1,T521152100_1_T2=1);
	end PF_Trafos_00000;
end Trafos_Data;

	record PF_00000
  		extends Iceland_modified_PF_solved_package.PF_Data.Power_Flow_Template;
  		replaceable record Bus = Iceland_modified_PF_solved_package.PF_Data.Bus_Data.PF_Bus_00000 constrainedby Iceland_modified_PF_solved_package.PF_Data.Bus_Data.Bus_Template "Bus power flow result";
  		Bus bus;
  		replaceable record Loads = Iceland_modified_PF_solved_package.PF_Data.Loads_Data.PF_Loads_00000 constrainedby Iceland_modified_PF_solved_package.PF_Data.Loads_Data.Loads_Template "Loads power flow result";
  		Loads loads;
		replaceable record Trafos = Iceland_modified_PF_solved_package.PF_Data.Trafos_Data.PF_Trafos_00000 constrainedby Iceland_modified_PF_solved_package.PF_Data.Trafos_Data.Trafos_Template "Trafos power flow result";
  		Trafos trafos;
	end PF_00000;
end PF_Data;

  annotation(uses(Modelica(version = "4.0.0"), Complex, OpenIPSL(version = "3.1.0-dev")), Documentation(info = "HTML This package contains power system models translated from CGMES CIM using XSLT_OpenIPSL.HTML"));
end Iceland_modified_PF_solved_package;