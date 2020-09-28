/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[85] /* gENCLS.omega variable */ = data->modelData->realVarsData[85].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[37] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[36] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[45] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[44] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[41] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[40] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[33] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[32] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[182] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_337(DATA *data, threadData_t *threadData);


/*
equation index: 13
type: SIMPLE_ASSIGN
eSST4B.Efd0 = eSST4B.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[86] /* eSST4B.Efd0 PARAM */ = data->localData[0]->realVars[58] /* eSST4B.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
eSST4B.VR0 = eSST4B.Efd0 * eSST4B.K_G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->realParameter[124] /* eSST4B.VR0 PARAM */ = (data->simulationInfo->realParameter[86] /* eSST4B.Efd0 PARAM */) * (data->simulationInfo->realParameter[92] /* eSST4B.K_G PARAM */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eSST4B.VR1.y_start = eSST4B.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[128] /* eSST4B.VR1.y_start PARAM */ = data->simulationInfo->realParameter[124] /* eSST4B.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$START.eSST4B.VR1.y = eSST4B.VR1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->modelData->realVarsData[3].attribute /* eSST4B.VR1.y STATE(1) */.start = data->simulationInfo->realParameter[128] /* eSST4B.VR1.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSST4B.VR1.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSST4B.VR1.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
eSST4B.VA.y_start = eSST4B.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[114] /* eSST4B.VA.y_start PARAM */ = data->simulationInfo->realParameter[124] /* eSST4B.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
$START.eSST4B.VA.state = eSST4B.VA.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->modelData->realVarsData[1].attribute /* eSST4B.VA.state STATE(1) */.start = data->simulationInfo->realParameter[114] /* eSST4B.VA.y_start PARAM */;
    data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */ = data->modelData->realVarsData[1].attribute /* eSST4B.VA.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eSST4B.VA.state */.name, (modelica_real) data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$START.eSST4B.VA.y = eSST4B.VA.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->modelData->realVarsData[66].attribute /* eSST4B.VA.y variable */.start = data->simulationInfo->realParameter[114] /* eSST4B.VA.y_start PARAM */;
    data->localData[0]->realVars[66] /* eSST4B.VA.y variable */ = data->modelData->realVarsData[66].attribute /* eSST4B.VA.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* eSST4B.VA.y */.name, (modelica_real) data->localData[0]->realVars[66] /* eSST4B.VA.y variable */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
eSST4B.VR1.y = eSST4B.VR1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[3] /* eSST4B.VR1.y STATE(1) */ = data->simulationInfo->realParameter[128] /* eSST4B.VR1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
eSST4B.VA.state = eSST4B.VA.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[1] /* eSST4B.VA.state STATE(1) */ = data->simulationInfo->realParameter[114] /* eSST4B.VA.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
gENROU.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[11] /* gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_344(DATA *data, threadData_t *threadData);


/*
equation index: 24
type: SIMPLE_ASSIGN
gENROU.delta = gENROU.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[254] /* gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[21] /* der(gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[20] /* der(gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[19] /* der(gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[18] /* der(gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
gENROU.XaqIlq = (-$DER.gENROU.Epd) * gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[100] /* gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[18] /* der(gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[232] /* gENROU.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_120(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_119(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_118(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_117(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_116(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_115(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_114(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_113(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_112(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_111(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_110(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_109(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_88(DATA*, threadData_t*);
/*
equation index: 121
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine3.is.re, pwLine.ir.im, pwLine3.is.im, pwLine1.is.im, pwLine3.ir.re, pwLine4.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine1.ir.re, pwLine1.ir.im, gENCLS.id, gENCLS.iq, gENROU.PSIkd, gENROU.Epd, gENROU.PSIppq, gENROU.iq, gENROU.PSIppd, gENROU.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, eSST4B.VE, eSST4B.ECOMP, eSST4B.XADIFD, pwLine.is.im, pwLine.is.re, pwLine1.vs.re, pwLine1.vs.im, pwLine3.vr.re, pwLine3.vr.im}
eqns: {30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 121 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[96] /* gENROU.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[104] /* gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[95] /* gENROU.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[103] /* gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[118] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[117] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[67] /* eSST4B.VE variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[68] /* eSST4B.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[115] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[116] /* pwLine.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[30] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[31] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[32] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,121};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 121 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[96] /* gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[104] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[95] /* gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[103] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[67] /* eSST4B.VE variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[68] /* eSST4B.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[30];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[31];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(DATA *data, threadData_t *threadData);


/*
equation index: 123
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[129] /* pwLine1.vs.im variable */, data->localData[0]->realVars[130] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_503(DATA *data, threadData_t *threadData);


/*
equation index: 125
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[127] /* pwLine1.vr.im variable */, data->localData[0]->realVars[128] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_513(DATA *data, threadData_t *threadData);


/*
equation index: 131
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[139] /* pwLine3.vr.im variable */, data->localData[0]->realVars[140] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_444(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_450(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: SIMPLE_ASSIGN
eSST4B.DiffV.u1 = eSST4B.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->simulationInfo->realParameter[84] /* eSST4B.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
eSST4B.VoltageReference.y = eSST4B.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->simulationInfo->realParameter[137] /* eSST4B.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[136] /* eSST4B.VoltageReference.k PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(DATA *data, threadData_t *threadData);


/*
equation index: 152
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_338(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_339(DATA *data, threadData_t *threadData);


/*
equation index: 169
type: ALGORITHM

  assert(eSST4B.limiter.uMax >= eSST4B.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */,data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.limiter.uMax >= eSST4B.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 168
type: ALGORITHM

  assert(eSST4B.limiter1.uMax >= eSST4B.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,11,") < uMin (=");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp6 = GreaterEq(data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */,data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp9));
      tmp10 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp10);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.limiter1.uMax >= eSST4B.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 167
type: ALGORITHM

  assert(eSST4B.maxLimiter.uMax >= eSST4B.maxLimiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST4B.maxLimiter.uMax, 6, 0, true) + ") < uMin (=" + String(eSST4B.maxLimiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,11,") < uMin (=");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */,data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp15));
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[157] /* eSST4B.maxLimiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp16);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.maxLimiter.uMax >= eSST4B.maxLimiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_337(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_344(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_26(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_338(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_339(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_167(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_337(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_344(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_25(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_26(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_27(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_28(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_29(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_211(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_225(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_233(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_256(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_289(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_288(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_287(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_286(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_285(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_284(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_283(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_282(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_276(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_263(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_260(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_257(DATA*, threadData_t*);
/*
equation index: 290
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine3.is.re, pwLine.ir.im, pwLine3.is.im, pwLine1.is.im, pwLine3.ir.re, pwLine4.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine1.ir.re, pwLine1.ir.im, gENCLS.id, gENCLS.iq, gENROU.PSIkd, gENROU.Epd, gENROU.PSIppq, gENROU.iq, gENROU.PSIppd, gENROU.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, eSST4B.VE, eSST4B.ECOMP, eSST4B.XADIFD, pwLine.is.im, pwLine.is.re, pwLine1.vs.re, pwLine1.vs.im, pwLine3.vr.re, pwLine3.vr.im}
eqns: {199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 289, 288, 287, 286, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 290 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[174] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[176] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[212] /* gENROU.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[191] /* gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->simulationInfo->realParameter[219] /* gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[67] /* eSST4B.VE variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->simulationInfo->realParameter[256] /* gENROU.efd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = (-data->simulationInfo->realParameter[259] /* gENROU.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = (-data->simulationInfo->realParameter[261] /* gENROU.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[30] = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[31] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[32] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,290};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 290 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[96] /* gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[104] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[95] /* gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[103] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[67] /* eSST4B.VE variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[68] /* eSST4B.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[30];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[31];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_123(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_125(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_131(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_444(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_450(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_338(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_339(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_19(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_24(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_25(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_26(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_27(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_28(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_29(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_131(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_444(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_450(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_449(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_339(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[85] /* gENCLS.omega variable */;
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = gENCLS.omega", res);
    return 1;
  }
  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

