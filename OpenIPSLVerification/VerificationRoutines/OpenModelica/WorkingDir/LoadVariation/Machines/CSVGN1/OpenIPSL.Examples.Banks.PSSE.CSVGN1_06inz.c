/* Initialization */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_11mix.h"
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[86] /* gENCLS.omega variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.local_reset = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[2] /* cSVGN1.leadLagLim.integrator.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.local_set = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[66] /* cSVGN1.leadLagLim.integrator.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[35] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[34] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[43] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[42] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[39] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[38] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[31] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[30] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
SHUNT.p.ir = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[46] /* SHUNT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
SHUNT.p.ii = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[45] /* SHUNT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[4] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[201] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
cSVGN1.k50 = (cSVGN1.CBASE / cSVGN1.S_b - cSVGN1.Y0) * cSVGN1.S_b / cSVGN1.MBASE
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[90] /* cSVGN1.k50 PARAM */ = (DIVISION_SIM(data->simulationInfo->realParameter[42] /* cSVGN1.CBASE PARAM */,data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */,"cSVGN1.S_b",equationIndexes) - data->simulationInfo->realParameter[65] /* cSVGN1.Y0 PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */,data->simulationInfo->realParameter[51] /* cSVGN1.MBASE PARAM */,"cSVGN1.MBASE",equationIndexes));
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
cSVGN1.k30 = cSVGN1.k50
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[89] /* cSVGN1.k30 PARAM */ = data->simulationInfo->realParameter[90] /* cSVGN1.k50 PARAM */;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
cSVGN1.k0 = cSVGN1.k30 / cSVGN1.K
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[88] /* cSVGN1.k0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[89] /* cSVGN1.k30 PARAM */,data->simulationInfo->realParameter[43] /* cSVGN1.K PARAM */,"cSVGN1.K",equationIndexes);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.y_start = cSVGN1.k30
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->simulationInfo->realParameter[124] /* cSVGN1.leadLagLim.y_start PARAM */ = data->simulationInfo->realParameter[89] /* cSVGN1.k30 PARAM */;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.y_start = cSVGN1.leadLagLim.y_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->simulationInfo->realParameter[119] /* cSVGN1.leadLagLim.integrator.y_start PARAM */ = data->simulationInfo->realParameter[124] /* cSVGN1.leadLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$START.cSVGN1.leadLagLim.integrator.y = cSVGN1.leadLagLim.integrator.y_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y STATE(1) */.start = data->simulationInfo->realParameter[119] /* cSVGN1.leadLagLim.integrator.y_start PARAM */;
    data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */ = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* cSVGN1.leadLagLim.integrator.y */.name, (modelica_real) data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
cSVGN1.leadLag.y_start = cSVGN1.k30
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->simulationInfo->realParameter[108] /* cSVGN1.leadLag.y_start PARAM */ = data->simulationInfo->realParameter[89] /* cSVGN1.k30 PARAM */;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.y_start = cSVGN1.leadLag.y_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[104] /* cSVGN1.leadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[108] /* cSVGN1.leadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
cSVGN1.LagLim.y_start = cSVGN1.k50
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->realParameter[50] /* cSVGN1.LagLim.y_start PARAM */ = data->simulationInfo->realParameter[90] /* cSVGN1.k50 PARAM */;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
$START.cSVGN1.LagLim.y = cSVGN1.LagLim.y_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->modelData->realVarsData[48].attribute /* cSVGN1.LagLim.y variable */.start = data->simulationInfo->realParameter[50] /* cSVGN1.LagLim.y_start PARAM */;
    data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */ = data->modelData->realVarsData[48].attribute /* cSVGN1.LagLim.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* cSVGN1.LagLim.y */.name, (modelica_real) data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$DER.cSVGN1.leadLagLim.integrator.y = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[12] /* der(cSVGN1.leadLagLim.integrator.y) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add3.y = $DER.cSVGN1.leadLagLim.integrator.y / cSVGN1.leadLagLim.integrator.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[64] /* cSVGN1.leadLagLim.add3.y variable */ = DIVISION_SIM(data->localData[0]->realVars[12] /* der(cSVGN1.leadLagLim.integrator.y) STATE_DER */,data->simulationInfo->realParameter[118] /* cSVGN1.leadLagLim.integrator.k PARAM */,"cSVGN1.leadLagLim.integrator.k",equationIndexes);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.y = cSVGN1.leadLag.TF.y_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[60] /* cSVGN1.leadLag.TF.y variable */ = data->simulationInfo->realParameter[104] /* cSVGN1.leadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
cSVGN1.LagLim.state = cSVGN1.LagLim.y_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */ = data->simulationInfo->realParameter[50] /* cSVGN1.LagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
gENSAL.w = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[9] /* gENSAL.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
gENSAL.delta = gENSAL.delta0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */ = data->simulationInfo->realParameter[263] /* gENSAL.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
$DER.gENSAL.PSIppq = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[17] /* der(gENSAL.PSIppq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$DER.gENSAL.PSIkd = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[16] /* der(gENSAL.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$DER.gENSAL.Epq = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[15] /* der(gENSAL.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
gENSAL.ISORCE = gENSAL.efd0 - $DER.gENSAL.Epq * gENSAL.Tpd0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */ = data->simulationInfo->realParameter[265] /* gENSAL.efd0 PARAM */ - ((data->localData[0]->realVars[15] /* der(gENSAL.Epq) STATE_DER */) * (data->simulationInfo->realParameter[245] /* gENSAL.Tpd0 PARAM */));
  TRACE_POP
}

void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_111(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_110(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_109(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_81(DATA*, threadData_t*);
/*
equation index: 112
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.im, pwLine1.is.im, pwLine.ir.re, pwLine3.is.re, pwLine3.is.im, pwLine3.ir.im, pwLine4.is.im, pwLine3.ir.re, pwLine4.is.re, constantLoad.p.ir, pwLine4.ir.re, pwLine4.ir.im, gENCLS.iq, gENCLS.id, pwLine2.vr.re, pwLine2.vr.im, pwLine1.ir.re, pwLine1.ir.im, pwLine1.vr.im, cSVGN1.vq, cSVGN1.V, cSVGN1.leadLagLim.integrator.y, cSVGN1.Y, gENSAL.Epq, gENSAL.uq, gENSAL.id, gENSAL.iq, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81}
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 112 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[148] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[145] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[146] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[156] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[155] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[85] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[84] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[71] /* cSVGN1.vq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[51] /* cSVGN1.V variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[52] /* cSVGN1.Y variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[106] /* gENSAL.uq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[103] /* gENSAL.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[104] /* gENSAL.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[30] = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,112};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 112 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[148] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[147] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[157] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[158] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[71] /* cSVGN1.vq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[51] /* cSVGN1.V variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[106] /* gENSAL.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[103] /* gENSAL.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[104] /* gENSAL.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[30];
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_921(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_919(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_920(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[33] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */));
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
cSVGN1.add1.u1 = cSVGN1.const2.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[71] /* cSVGN1.add1.u1 PARAM */ = data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
cSVGN1.const2.y = cSVGN1.const2.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[82] /* cSVGN1.const2.y PARAM */ = data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_947(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_953(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_952(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_955(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_954(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_945(DATA *data, threadData_t *threadData);


/*
equation index: 125
type: SIMPLE_ASSIGN
SHUNT.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[44] /* SHUNT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[127] /* pwLine1.vr.im variable */, data->localData[0]->realVars[128] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(DATA *data, threadData_t *threadData);


/*
equation index: 127
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.x[1] = (cSVGN1.leadLag.TF.d * cSVGN1.add2.y - cSVGN1.leadLag.TF.y) / (cSVGN1.leadLag.TF.a[2] * cSVGN1.leadLag.TF.d - cSVGN1.leadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[59] /* cSVGN1.leadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[102] /* cSVGN1.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */) - data->localData[0]->realVars[60] /* cSVGN1.leadLag.TF.y variable */,(data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[102] /* cSVGN1.leadLag.TF.d PARAM */) - data->simulationInfo->realParameter[101] /* cSVGN1.leadLag.TF.bb[2] PARAM */,"cSVGN1.leadLag.TF.a[2] * cSVGN1.leadLag.TF.d - cSVGN1.leadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.x_scaled[1] = cSVGN1.leadLag.TF.x[1] * cSVGN1.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[1] /* cSVGN1.leadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[59] /* cSVGN1.leadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[97] /* cSVGN1.leadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(DATA *data, threadData_t *threadData);


/*
equation index: 130
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[41] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[129] /* pwLine1.vs.im variable */, data->localData[0]->realVars[130] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_910(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_930(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine2.vr.im, pwLine2.vr.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[37] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[139] /* pwLine2.vr.im variable */, data->localData[0]->realVars[140] /* pwLine2.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_962(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_963(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_964(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_967(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_966(DATA *data, threadData_t *threadData);


/*
equation index: 139
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[29] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[149] /* pwLine3.vr.im variable */, data->localData[0]->realVars[150] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_940(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_961(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_960(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_939(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_938(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_937(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_936(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_915(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_914(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_925(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_923(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_924(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_935(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_934(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_959(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_958(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_957(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_956(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_944(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_943(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_929(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_928(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_932(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_933(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_926(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_927(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(DATA *data, threadData_t *threadData);


/*
equation index: 170
type: ALGORITHM

  assert(cSVGN1.leadLagLim.limiter.uMax >= cSVGN1.leadLagLim.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(cSVGN1.leadLagLim.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(cSVGN1.leadLagLim.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */,data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncSVGN1.leadLagLim.limiter.uMax >= cSVGN1.leadLagLim.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_26(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_112(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_921(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_919(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_920(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_947(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_953(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_952(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_955(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_954(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_945(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_128(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_130(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_910(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_930(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_962(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_963(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_964(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_967(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_966(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_940(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_961(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_960(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_939(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_938(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_937(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_936(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_915(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_914(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_925(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_923(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_924(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_935(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_934(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_959(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_958(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_957(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_956(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_944(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_943(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_929(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_928(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_932(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_933(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_926(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_927(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_170(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
cSVGN1.T5 = 0.05
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[60] /* cSVGN1.T5 PARAM */ = 0.05;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
cSVGN1.LagLim.T = cSVGN1.T5
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */ = data->simulationInfo->realParameter[60] /* cSVGN1.T5 PARAM */;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
cSVGN1.LagLim.const.y = cSVGN1.LagLim.T
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->realParameter[47] /* cSVGN1.LagLim.const.y PARAM */ = data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
cSVGN1.T1 = 0.01
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[56] /* cSVGN1.T1 PARAM */ = 0.01;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
cSVGN1.leadLag.T1 = 1e-15 + cSVGN1.T1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */ = 1e-15 + data->simulationInfo->realParameter[56] /* cSVGN1.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
cSVGN1.leadLag.par1.y = cSVGN1.leadLag.T1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[105] /* cSVGN1.leadLag.par1.y PARAM */ = data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
cSVGN1.T3 = 10.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[58] /* cSVGN1.T3 PARAM */ = 10.0;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
cSVGN1.leadLag.T2 = 1e-15 + cSVGN1.T3
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */ = 1e-15 + data->simulationInfo->realParameter[58] /* cSVGN1.T3 PARAM */;
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
cSVGN1.leadLag.par2.y = cSVGN1.leadLag.T2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[106] /* cSVGN1.leadLag.par2.y PARAM */ = data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
SysData.S_b = 100000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
cSVGN1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
cSVGN1.CBASE = 40000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->simulationInfo->realParameter[42] /* cSVGN1.CBASE PARAM */ = 40000000.0;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
cSVGN1.const1.k = cSVGN1.CBASE / cSVGN1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->simulationInfo->realParameter[79] /* cSVGN1.const1.k PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[42] /* cSVGN1.CBASE PARAM */,data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */,"cSVGN1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
cSVGN1.add.u1 = cSVGN1.const1.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->simulationInfo->realParameter[68] /* cSVGN1.add.u1 PARAM */ = data->simulationInfo->realParameter[79] /* cSVGN1.const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
cSVGN1.const1.y = cSVGN1.const1.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->simulationInfo->realParameter[80] /* cSVGN1.const1.y PARAM */ = data->simulationInfo->realParameter[79] /* cSVGN1.const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
cSVGN1.MBASE = 80000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->simulationInfo->realParameter[51] /* cSVGN1.MBASE PARAM */ = 80000000.0;
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
cSVGN1.const.k = cSVGN1.MBASE / cSVGN1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[51] /* cSVGN1.MBASE PARAM */,data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */,"cSVGN1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
cSVGN1.product1.u1 = cSVGN1.const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->realParameter[126] /* cSVGN1.product1.u1 PARAM */ = data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
cSVGN1.const.y = cSVGN1.const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->simulationInfo->realParameter[78] /* cSVGN1.const.y PARAM */ = data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
gENSAL.R_a = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
gENSAL.P_0 = 40000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->simulationInfo->realParameter[237] /* gENSAL.P_0 PARAM */ = 40000000.0;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
gENSAL.M_b = 100000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->simulationInfo->realParameter[225] /* gENSAL.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
gENSAL.p0 = gENSAL.P_0 / gENSAL.M_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[271] /* gENSAL.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[237] /* gENSAL.P_0 PARAM */,data->simulationInfo->realParameter[225] /* gENSAL.M_b PARAM */,"gENSAL.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
gENSAL.I_dq.re = 0.3113960437123098
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[216] /* gENSAL.I_dq.re PARAM */ = 0.3113960437123098;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
gENSAL.iq0 = gENSAL.I_dq.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->simulationInfo->realParameter[269] /* gENSAL.iq0 PARAM */ = data->simulationInfo->realParameter[216] /* gENSAL.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
gENSAL.I_dq.im = 0.2548941673480077
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[215] /* gENSAL.I_dq.im PARAM */ = 0.2548941673480077;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
gENSAL.id0 = gENSAL.I_dq.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */ = data->simulationInfo->realParameter[215] /* gENSAL.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
gENSAL.pm0 = gENSAL.p0 + gENSAL.R_a * (gENSAL.iq0 ^ 2.0 + gENSAL.id0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[269] /* gENSAL.iq0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */;
  data->simulationInfo->realParameter[272] /* gENSAL.pm0 PARAM */ = data->simulationInfo->realParameter[271] /* gENSAL.p0 PARAM */ + (data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
gENSAL.PMECH = gENSAL.pm0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[226] /* gENSAL.PMECH PARAM */ = data->simulationInfo->realParameter[272] /* gENSAL.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
gENSAL.PMECH0 = gENSAL.pm0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[227] /* gENSAL.PMECH0 PARAM */ = data->simulationInfo->realParameter[272] /* gENSAL.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
gENSAL.Xd = 1.84
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->simulationInfo->realParameter[251] /* gENSAL.Xd PARAM */ = 1.84;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
gENSAL.Xpd = 0.41
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ = 0.41;
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
gENSAL.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[276] /* gENSAL.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
gENSAL.angle_0 = 4.038907
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[261] /* gENSAL.angle_0 PARAM */ = 4.038907;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
gENSAL.angle_0rad = 0.0174532925199433 * gENSAL.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[262] /* gENSAL.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[261] /* gENSAL.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
gENSAL.Epqp.re = 1.025071739911121
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[213] /* gENSAL.Epqp.re PARAM */ = 1.025071739911121;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
gENSAL.Epqp.im = 0.7741223282437074
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[212] /* gENSAL.Epqp.im PARAM */ = 0.7741223282437074;
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
gENSAL.delta0 = Modelica.Math.atan3(gENSAL.Epqp.im, gENSAL.Epqp.re, 0.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->realParameter[263] /* gENSAL.delta0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[212] /* gENSAL.Epqp.im PARAM */, data->simulationInfo->realParameter[213] /* gENSAL.Epqp.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
gENSAL.uq0 = gENSAL.v_0 * sin(1.570796326794897 + gENSAL.angle_0rad - gENSAL.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[275] /* gENSAL.uq0 PARAM */ = (data->simulationInfo->realParameter[276] /* gENSAL.v_0 PARAM */) * (sin(1.570796326794897 + data->simulationInfo->realParameter[262] /* gENSAL.angle_0rad PARAM */ - data->simulationInfo->realParameter[263] /* gENSAL.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
gENSAL.Epq0 = gENSAL.uq0 + gENSAL.Xpd * gENSAL.id0 + gENSAL.R_a * gENSAL.iq0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->realParameter[211] /* gENSAL.Epq0 PARAM */ = data->simulationInfo->realParameter[275] /* gENSAL.uq0 PARAM */ + (data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */) + (data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->simulationInfo->realParameter[269] /* gENSAL.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
gENSAL.S10 = 0.11
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->simulationInfo->realParameter[242] /* gENSAL.S10 PARAM */ = 0.11;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
gENSAL.S12 = 0.39
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[243] /* gENSAL.S12 PARAM */ = 0.39;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
gENSAL.dsat = OpenIPSL.NonElectrical.Functions.SE(gENSAL.Epq0, gENSAL.S10, gENSAL.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[264] /* gENSAL.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[211] /* gENSAL.Epq0 PARAM */, data->simulationInfo->realParameter[242] /* gENSAL.S10 PARAM */, data->simulationInfo->realParameter[243] /* gENSAL.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
gENSAL.efd0 = gENSAL.Epq0 * (1.0 + gENSAL.dsat) + (gENSAL.Xd - gENSAL.Xpd) * gENSAL.id0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->simulationInfo->realParameter[265] /* gENSAL.efd0 PARAM */ = (data->simulationInfo->realParameter[211] /* gENSAL.Epq0 PARAM */) * (1.0 + data->simulationInfo->realParameter[264] /* gENSAL.dsat PARAM */) + (data->simulationInfo->realParameter[251] /* gENSAL.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
gENSAL.EFD = gENSAL.efd0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[209] /* gENSAL.EFD PARAM */ = data->simulationInfo->realParameter[265] /* gENSAL.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
gENSAL.EFD0 = gENSAL.efd0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[210] /* gENSAL.EFD0 PARAM */ = data->simulationInfo->realParameter[265] /* gENSAL.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
const.k = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[135] /* const.k PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
cSVGN1.add2.u2 = const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->simulationInfo->realParameter[74] /* cSVGN1.add2.u2 PARAM */ = data->simulationInfo->realParameter[135] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
cSVGN1.VOTHSG = const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->realParameter[63] /* cSVGN1.VOTHSG PARAM */ = data->simulationInfo->realParameter[135] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
const.y = const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[136] /* const.y PARAM */ = data->simulationInfo->realParameter[135] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
cSVGN1.P_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->simulationInfo->realParameter[52] /* cSVGN1.P_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
cSVGN1.p0 = cSVGN1.P_0 / cSVGN1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[125] /* cSVGN1.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[52] /* cSVGN1.P_0 PARAM */,data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */,"cSVGN1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
cSVGN1.Q_0 = 6009897.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[53] /* cSVGN1.Q_0 PARAM */ = 6009897.0;
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
cSVGN1.q0 = cSVGN1.Q_0 / cSVGN1.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->realParameter[127] /* cSVGN1.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[53] /* cSVGN1.Q_0 PARAM */,data->simulationInfo->realParameter[55] /* cSVGN1.S_b PARAM */,"cSVGN1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
cSVGN1.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
cSVGN1.angle_0 = -0.29
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[75] /* cSVGN1.angle_0 PARAM */ = -0.29;
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
cSVGN1.anglev_rad = 0.0174532925199433 * cSVGN1.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->simulationInfo->realParameter[76] /* cSVGN1.anglev_rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[75] /* cSVGN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
cSVGN1.vr0 = cSVGN1.v_0 * cos(cSVGN1.anglev_rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */ = (data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[76] /* cSVGN1.anglev_rad PARAM */));
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
cSVGN1.vi0 = cSVGN1.v_0 * sin(cSVGN1.anglev_rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */ = (data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[76] /* cSVGN1.anglev_rad PARAM */));
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
cSVGN1.ir0 = (cSVGN1.p0 * cSVGN1.vr0 + cSVGN1.q0 * cSVGN1.vi0) / (cSVGN1.vr0 ^ 2.0 + cSVGN1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */;
  tmp3 = data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */;
  data->simulationInfo->realParameter[87] /* cSVGN1.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[125] /* cSVGN1.p0 PARAM */) * (data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */) + (data->simulationInfo->realParameter[127] /* cSVGN1.q0 PARAM */) * (data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */),(tmp2 * tmp2) + (tmp3 * tmp3),"cSVGN1.vr0 ^ 2.0 + cSVGN1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
cSVGN1.ii0 = (cSVGN1.p0 * cSVGN1.vi0 - cSVGN1.q0 * cSVGN1.vr0) / (cSVGN1.vr0 ^ 2.0 + cSVGN1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */;
  tmp5 = data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */;
  data->simulationInfo->realParameter[85] /* cSVGN1.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[125] /* cSVGN1.p0 PARAM */) * (data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */) - ((data->simulationInfo->realParameter[127] /* cSVGN1.q0 PARAM */) * (data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */)),(tmp4 * tmp4) + (tmp5 * tmp5),"cSVGN1.vr0 ^ 2.0 + cSVGN1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
cSVGN1.ra = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[128] /* cSVGN1.ra PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
cSVGN1.x1d = 9999.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->realParameter[134] /* cSVGN1.x1d PARAM */ = 9999.0;
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
cSVGN1.delta0 = atan2(cSVGN1.vi0 + cSVGN1.ra * cSVGN1.ii0 + cSVGN1.x1d * cSVGN1.ir0, cSVGN1.vr0 + cSVGN1.ra * cSVGN1.ir0 - cSVGN1.x1d * cSVGN1.ii0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */ + (data->simulationInfo->realParameter[128] /* cSVGN1.ra PARAM */) * (data->simulationInfo->realParameter[85] /* cSVGN1.ii0 PARAM */) + (data->simulationInfo->realParameter[134] /* cSVGN1.x1d PARAM */) * (data->simulationInfo->realParameter[87] /* cSVGN1.ir0 PARAM */), data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */ + (data->simulationInfo->realParameter[128] /* cSVGN1.ra PARAM */) * (data->simulationInfo->realParameter[87] /* cSVGN1.ir0 PARAM */) - ((data->simulationInfo->realParameter[134] /* cSVGN1.x1d PARAM */) * (data->simulationInfo->realParameter[85] /* cSVGN1.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
cSVGN1.iq0 = cSVGN1.ir0 * sin(1.570796326794897 - cSVGN1.delta0) + cSVGN1.ii0 * cos(1.570796326794897 - cSVGN1.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->realParameter[86] /* cSVGN1.iq0 PARAM */ = (data->simulationInfo->realParameter[87] /* cSVGN1.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) + (data->simulationInfo->realParameter[85] /* cSVGN1.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
cSVGN1.id0 = cSVGN1.ir0 * cos(1.570796326794897 - cSVGN1.delta0) - cSVGN1.ii0 * sin(1.570796326794897 - cSVGN1.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[84] /* cSVGN1.id0 PARAM */ = (data->simulationInfo->realParameter[87] /* cSVGN1.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) - ((data->simulationInfo->realParameter[85] /* cSVGN1.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
cSVGN1.vq0 = cSVGN1.vr0 * sin(1.570796326794897 - cSVGN1.delta0) + cSVGN1.vi0 * cos(1.570796326794897 - cSVGN1.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[132] /* cSVGN1.vq0 PARAM */ = (data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) + (data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
cSVGN1.vd0 = cSVGN1.vr0 * cos(1.570796326794897 - cSVGN1.delta0) - cSVGN1.vi0 * sin(1.570796326794897 - cSVGN1.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[130] /* cSVGN1.vd0 PARAM */ = (data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) - ((data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
cSVGN1.Y0 = cSVGN1.q0 / cSVGN1.v_0 ^ 2.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */;
  data->simulationInfo->realParameter[65] /* cSVGN1.Y0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[127] /* cSVGN1.q0 PARAM */,(tmp6 * tmp6),"cSVGN1.v_0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
cSVGN1.add2.k2 = -1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[73] /* cSVGN1.add2.k2 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
cSVGN1.add2.k1 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[72] /* cSVGN1.add2.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.limiter.limitsAtInit = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->booleanParameter[47] /* cSVGN1.leadLagLim.limiter.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.limiter.homotopyType = Modelica.Blocks.Types.LimiterHomotopy.Linear
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->integerParameter[5] /* cSVGN1.leadLagLim.limiter.homotopyType PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.limiter.strict = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->booleanParameter[48] /* cSVGN1.leadLagLim.limiter.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
cSVGN1.VMIN = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[62] /* cSVGN1.VMIN PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.outMin = cSVGN1.VMIN
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[123] /* cSVGN1.leadLagLim.outMin PARAM */ = data->simulationInfo->realParameter[62] /* cSVGN1.VMIN PARAM */;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.limiter.uMin = cSVGN1.leadLagLim.outMin
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */ = data->simulationInfo->realParameter[123] /* cSVGN1.leadLagLim.outMin PARAM */;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
cSVGN1.VMAX = 1.05
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[61] /* cSVGN1.VMAX PARAM */ = 1.05;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.outMax = cSVGN1.VMAX
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[122] /* cSVGN1.leadLagLim.outMax PARAM */ = data->simulationInfo->realParameter[61] /* cSVGN1.VMAX PARAM */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.limiter.uMax = cSVGN1.leadLagLim.outMax
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */ = data->simulationInfo->realParameter[122] /* cSVGN1.leadLagLim.outMax PARAM */;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
cSVGN1.T2 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[57] /* cSVGN1.T2 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.T1 = 1e-15 + cSVGN1.T2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[110] /* cSVGN1.leadLagLim.T1 PARAM */ = 1e-15 + data->simulationInfo->realParameter[57] /* cSVGN1.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
cSVGN1.T4 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[59] /* cSVGN1.T4 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.T2 = 1e-15 + cSVGN1.T4
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[111] /* cSVGN1.leadLagLim.T2 PARAM */ = 1e-15 + data->simulationInfo->realParameter[59] /* cSVGN1.T4 PARAM */;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.gain1.k = -1.0 + cSVGN1.leadLagLim.T2 / cSVGN1.leadLagLim.T1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[117] /* cSVGN1.leadLagLim.gain1.k PARAM */ = -1.0 + DIVISION_SIM(data->simulationInfo->realParameter[111] /* cSVGN1.leadLagLim.T2 PARAM */,data->simulationInfo->realParameter[110] /* cSVGN1.leadLagLim.T1 PARAM */,"cSVGN1.leadLagLim.T1",equationIndexes);
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.initType = Modelica.Blocks.Types.Init.SteadyState
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->integerParameter[4] /* cSVGN1.leadLagLim.integrator.initType PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.use_set = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->booleanParameter[46] /* cSVGN1.leadLagLim.integrator.use_set PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.use_reset = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->booleanParameter[45] /* cSVGN1.leadLagLim.integrator.use_reset PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.integrator.k = 1.0 / cSVGN1.leadLagLim.T1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[118] /* cSVGN1.leadLagLim.integrator.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[110] /* cSVGN1.leadLagLim.T1 PARAM */,"cSVGN1.leadLagLim.T1",equationIndexes);
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add3.k2 = -1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[115] /* cSVGN1.leadLagLim.add3.k2 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add3.k1 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[114] /* cSVGN1.leadLagLim.add3.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.gain.k = cSVGN1.leadLagLim.T1 / cSVGN1.leadLagLim.T2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[116] /* cSVGN1.leadLagLim.gain.k PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[110] /* cSVGN1.leadLagLim.T1 PARAM */,data->simulationInfo->realParameter[111] /* cSVGN1.leadLagLim.T2 PARAM */,"cSVGN1.leadLagLim.T2",equationIndexes);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.k2 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[113] /* cSVGN1.leadLagLim.add2.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.k1 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[112] /* cSVGN1.leadLagLim.add2.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
cSVGN1.K = 5.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[43] /* cSVGN1.K PARAM */ = 5.0;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.K = cSVGN1.K
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[109] /* cSVGN1.leadLagLim.K PARAM */ = data->simulationInfo->realParameter[43] /* cSVGN1.K PARAM */;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
cSVGN1.leadLag.T2_dummy = if abs(cSVGN1.leadLag.T1 - cSVGN1.leadLag.T2) < 1e-15 then 1000.0 else cSVGN1.leadLag.T2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[94] /* cSVGN1.leadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.a[1] = cSVGN1.leadLag.T2_dummy
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[95] /* cSVGN1.leadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[94] /* cSVGN1.leadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.a_end = if cSVGN1.leadLag.TF.a[2] > 1e-13 * sqrt(cSVGN1.leadLag.TF.a[1] ^ 2.0 + cSVGN1.leadLag.TF.a[2] ^ 2.0) then cSVGN1.leadLag.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[95] /* cSVGN1.leadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[97] /* cSVGN1.leadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
cSVGN1.leadLag.K = cSVGN1.K
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */ = data->simulationInfo->realParameter[43] /* cSVGN1.K PARAM */;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.b[1] = cSVGN1.leadLag.K * cSVGN1.leadLag.T1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[98] /* cSVGN1.leadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */) * (data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.bb[1] = cSVGN1.leadLag.TF.b[1]
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[100] /* cSVGN1.leadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[98] /* cSVGN1.leadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.d = cSVGN1.leadLag.TF.bb[1] / cSVGN1.leadLag.TF.a[1]
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[102] /* cSVGN1.leadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[100] /* cSVGN1.leadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[95] /* cSVGN1.leadLag.TF.a[1] PARAM */,"cSVGN1.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.b[2] = cSVGN1.leadLag.K
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[99] /* cSVGN1.leadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.bb[2] = cSVGN1.leadLag.TF.b[2]
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[101] /* cSVGN1.leadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[99] /* cSVGN1.leadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.nx = 1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->integerParameter[3] /* cSVGN1.leadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.nb = 2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->integerParameter[2] /* cSVGN1.leadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.na = 2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->integerParameter[1] /* cSVGN1.leadLag.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
cSVGN1.leadLag.x_start = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[107] /* cSVGN1.leadLag.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.x_start[1] = cSVGN1.leadLag.x_start
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[103] /* cSVGN1.leadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[107] /* cSVGN1.leadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->integerParameter[0] /* cSVGN1.leadLag.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
cSVGN1.LagLim.T_mod = if cSVGN1.LagLim.T < 1e-15 then 1000.0 else cSVGN1.LagLim.T
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  modelica_boolean tmp11;
  tmp11 = Less(data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[46] /* cSVGN1.LagLim.T_mod PARAM */ = (tmp11?1000.0:data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
cSVGN1.RMIN = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[54] /* cSVGN1.RMIN PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
cSVGN1.LagLim.outMin = cSVGN1.RMIN / cSVGN1.MBASE
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[54] /* cSVGN1.RMIN PARAM */,data->simulationInfo->realParameter[51] /* cSVGN1.MBASE PARAM */,"cSVGN1.MBASE",equationIndexes);
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
cSVGN1.LagLim.outMax = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
cSVGN1.LagLim.K = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
cSVGN1.add1.k2 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[70] /* cSVGN1.add1.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
cSVGN1.add1.k1 = -1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[69] /* cSVGN1.add1.k1 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
cSVGN1.add.k2 = -1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[67] /* cSVGN1.add.k2 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
cSVGN1.add.k1 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[66] /* cSVGN1.add.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
gENSAL.Xppd = 0.2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
gENSAL.Xl = 0.12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ = 0.12;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
gENSAL.K4d = (gENSAL.Xpd - gENSAL.Xppd) / (gENSAL.Xpd - gENSAL.Xl)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[224] /* gENSAL.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */,data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */,"gENSAL.Xpd - gENSAL.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
gENSAL.K3d = (gENSAL.Xppd - gENSAL.Xl) / (gENSAL.Xpd - gENSAL.Xl)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[223] /* gENSAL.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */ - data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */,data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */,"gENSAL.Xpd - gENSAL.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
gENSAL.K2d = (gENSAL.Xpd - gENSAL.Xl) * (gENSAL.Xppd - gENSAL.Xl) / (gENSAL.Xpd - gENSAL.Xppd)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[222] /* gENSAL.K2d PARAM */ = (data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */ - data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */,data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */,"gENSAL.Xpd - gENSAL.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
gENSAL.K1d = (gENSAL.Xpd - gENSAL.Xppd) * (gENSAL.Xd - gENSAL.Xpd) / (gENSAL.Xpd - gENSAL.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */;
  data->simulationInfo->realParameter[221] /* gENSAL.K1d PARAM */ = (data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */ - data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[251] /* gENSAL.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */,(tmp12 * tmp12),"(gENSAL.Xpd - gENSAL.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
gENSAL.Xppq = 0.2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
gENSAL.PSIpp0_dq.im = -0.4826638677540802
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[232] /* gENSAL.PSIpp0_dq.im PARAM */ = -0.4826638677540802;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
gENSAL.PSIppq0 = -gENSAL.PSIpp0_dq.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[235] /* gENSAL.PSIppq0 PARAM */ = (-data->simulationInfo->realParameter[232] /* gENSAL.PSIpp0_dq.im PARAM */);
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
gENSAL.PSIq0 = (-gENSAL.PSIppq0) - gENSAL.Xppq * gENSAL.iq0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[236] /* gENSAL.PSIq0 PARAM */ = (-data->simulationInfo->realParameter[235] /* gENSAL.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */) * (data->simulationInfo->realParameter[269] /* gENSAL.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
gENSAL.PSIpp0_dq.re = 0.8894518761957726
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[233] /* gENSAL.PSIpp0_dq.re PARAM */ = 0.8894518761957726;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
gENSAL.PSIppd0 = gENSAL.PSIpp0_dq.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[234] /* gENSAL.PSIppd0 PARAM */ = data->simulationInfo->realParameter[233] /* gENSAL.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
gENSAL.PSId0 = gENSAL.PSIppd0 - gENSAL.Xppd * gENSAL.id0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[228] /* gENSAL.PSId0 PARAM */ = data->simulationInfo->realParameter[234] /* gENSAL.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */) * (data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
gENSAL.PSIkd0 = (gENSAL.PSIppd0 + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.K3d * gENSAL.id0) / (gENSAL.K3d + gENSAL.K4d)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[229] /* gENSAL.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[234] /* gENSAL.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * ((data->simulationInfo->realParameter[223] /* gENSAL.K3d PARAM */) * (data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */)),data->simulationInfo->realParameter[223] /* gENSAL.K3d PARAM */ + data->simulationInfo->realParameter[224] /* gENSAL.K4d PARAM */,"gENSAL.K3d + gENSAL.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
gENSAL.ud0 = gENSAL.v_0 * cos(1.570796326794897 + gENSAL.angle_0rad - gENSAL.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[274] /* gENSAL.ud0 PARAM */ = (data->simulationInfo->realParameter[276] /* gENSAL.v_0 PARAM */) * (cos(1.570796326794897 + data->simulationInfo->realParameter[262] /* gENSAL.angle_0rad PARAM */ - data->simulationInfo->realParameter[263] /* gENSAL.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
gENSAL.DQ_dq.im = -0.6026465759111315
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[207] /* gENSAL.DQ_dq.im PARAM */ = -0.6026465759111315;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
gENSAL.DQ_dq.re = 0.7980082108240422
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[208] /* gENSAL.DQ_dq.re PARAM */ = 0.7980082108240422;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
gENSAL.It.im = -0.01574587893937105
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[219] /* gENSAL.It.im PARAM */ = -0.01574587893937105;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
gENSAL.It.re = 0.4021076968725413
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[220] /* gENSAL.It.re PARAM */ = 0.4021076968725413;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
gENSAL.S.im = 0.04402877
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[240] /* gENSAL.S.im PARAM */ = 0.04402877;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
gENSAL.S.re = 0.4
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[241] /* gENSAL.S.re PARAM */ = 0.4;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
gENSAL.VT.im = 0.0704338587167601
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[248] /* gENSAL.VT.im PARAM */ = 0.0704338587167601;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
gENSAL.VT.re = 0.9975164517672215
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[249] /* gENSAL.VT.re PARAM */ = 0.9975164517672215;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
gENSAL.a.im = 1.55
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[259] /* gENSAL.a.im PARAM */ = 1.55;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
gENSAL.a.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[260] /* gENSAL.a.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
gENSAL.PSIpp0.im = 0.1508553980912684
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->realParameter[230] /* gENSAL.PSIpp0.im PARAM */ = 0.1508553980912684;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
gENSAL.PSIpp0.re = 1.000665627555096
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[231] /* gENSAL.PSIpp0.re PARAM */ = 1.000665627555096;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
gENSAL.Is.im = -5.003328137775478
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[217] /* gENSAL.Is.im PARAM */ = -5.003328137775478;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
gENSAL.Is.re = 0.7542769904563418
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[218] /* gENSAL.Is.re PARAM */ = 0.7542769904563418;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
gENSAL.Zs.im = 0.2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[257] /* gENSAL.Zs.im PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
gENSAL.Zs.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[258] /* gENSAL.Zs.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
gENSAL.Q_0 = 4402877.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[238] /* gENSAL.Q_0 PARAM */ = 4402877.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
gENSAL.q0 = gENSAL.Q_0 / gENSAL.M_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[273] /* gENSAL.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[238] /* gENSAL.Q_0 PARAM */,data->simulationInfo->realParameter[225] /* gENSAL.M_b PARAM */,"gENSAL.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
gENSAL.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[244] /* gENSAL.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
gENSAL.CoB = gENSAL.M_b / gENSAL.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[225] /* gENSAL.M_b PARAM */,data->simulationInfo->realParameter[244] /* gENSAL.S_b PARAM */,"gENSAL.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
gENSAL.vr0 = gENSAL.v_0 * cos(gENSAL.angle_0rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[278] /* gENSAL.vr0 PARAM */ = (data->simulationInfo->realParameter[276] /* gENSAL.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[262] /* gENSAL.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
gENSAL.vi0 = gENSAL.v_0 * sin(gENSAL.angle_0rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[277] /* gENSAL.vi0 PARAM */ = (data->simulationInfo->realParameter[276] /* gENSAL.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[262] /* gENSAL.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
gENSAL.ii0 = gENSAL.CoB * (gENSAL.q0 * gENSAL.vr0 - gENSAL.p0 * gENSAL.vi0) / (gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  modelica_real tmp13;
  modelica_real tmp14;
  tmp13 = data->simulationInfo->realParameter[278] /* gENSAL.vr0 PARAM */;
  tmp14 = data->simulationInfo->realParameter[277] /* gENSAL.vi0 PARAM */;
  data->simulationInfo->realParameter[268] /* gENSAL.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */) * ((data->simulationInfo->realParameter[273] /* gENSAL.q0 PARAM */) * (data->simulationInfo->realParameter[278] /* gENSAL.vr0 PARAM */) - ((data->simulationInfo->realParameter[271] /* gENSAL.p0 PARAM */) * (data->simulationInfo->realParameter[277] /* gENSAL.vi0 PARAM */))),(tmp13 * tmp13) + (tmp14 * tmp14),"gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
gENSAL.ir0 = (-gENSAL.CoB) * (gENSAL.p0 * gENSAL.vr0 + gENSAL.q0 * gENSAL.vi0) / (gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = data->simulationInfo->realParameter[278] /* gENSAL.vr0 PARAM */;
  tmp16 = data->simulationInfo->realParameter[277] /* gENSAL.vi0 PARAM */;
  data->simulationInfo->realParameter[270] /* gENSAL.ir0 PARAM */ = ((-data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[271] /* gENSAL.p0 PARAM */) * (data->simulationInfo->realParameter[278] /* gENSAL.vr0 PARAM */) + (data->simulationInfo->realParameter[273] /* gENSAL.q0 PARAM */) * (data->simulationInfo->realParameter[277] /* gENSAL.vi0 PARAM */),(tmp15 * tmp15) + (tmp16 * tmp16),"gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
SysData.fn = 50.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[41] /* SysData.fn PARAM */ = 50.0;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENSAL.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[266] /* gENSAL.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENSAL.w_b = 6.283185307179586 * gENSAL.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[279] /* gENSAL.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[266] /* gENSAL.fn PARAM */);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENSAL.Xq = 1.75
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[256] /* gENSAL.Xq PARAM */ = 1.75;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
gENSAL.D = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[206] /* gENSAL.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
gENSAL.H = 4.28
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[214] /* gENSAL.H PARAM */ = 4.28;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENSAL.Tppq0 = 0.09
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[247] /* gENSAL.Tppq0 PARAM */ = 0.09;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENSAL.Tppd0 = 0.07000000000000001
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[246] /* gENSAL.Tppd0 PARAM */ = 0.07000000000000001;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENSAL.Tpd0 = 5.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[245] /* gENSAL.Tpd0 PARAM */ = 5.0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
gENSAL.enabledisplayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->booleanParameter[73] /* gENSAL.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENSAL.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->booleanParameter[67] /* gENSAL.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENSAL.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->booleanParameter[72] /* gENSAL.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENSAL.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->booleanParameter[75] /* gENSAL.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENSAL.enableQ_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->booleanParameter[69] /* gENSAL.enableQ_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENSAL.enableP_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->booleanParameter[68] /* gENSAL.enableP_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
gENSAL.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->booleanParameter[74] /* gENSAL.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENSAL.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->booleanParameter[71] /* gENSAL.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
gENSAL.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[250] /* gENSAL.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
gENSAL.enableS_b = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->booleanParameter[70] /* gENSAL.enableS_b PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
SHUNT.angle_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[36] /* SHUNT.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
SHUNT.angle_0rad = 0.0174532925199433 * SHUNT.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[37] /* SHUNT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[36] /* SHUNT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
SHUNT.enabledisplayPF = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->booleanParameter[42] /* SHUNT.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
SHUNT.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->booleanParameter[36] /* SHUNT.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
SHUNT.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->booleanParameter[41] /* SHUNT.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
SHUNT.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->booleanParameter[44] /* SHUNT.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
SHUNT.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[39] /* SHUNT.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
SHUNT.enableQ_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->booleanParameter[38] /* SHUNT.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
SHUNT.Q_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[33] /* SHUNT.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
SHUNT.enableP_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->booleanParameter[37] /* SHUNT.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
SHUNT.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[32] /* SHUNT.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
SHUNT.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->booleanParameter[43] /* SHUNT.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
SHUNT.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[38] /* SHUNT.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
SHUNT.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->booleanParameter[40] /* SHUNT.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
SHUNT.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[35] /* SHUNT.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
SHUNT.enableS_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->booleanParameter[39] /* SHUNT.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
SHUNT.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[34] /* SHUNT.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
FAULT.angle_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
FAULT.enabledisplayPF = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->booleanParameter[6] /* FAULT.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
FAULT.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->booleanParameter[0] /* FAULT.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
FAULT.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->booleanParameter[5] /* FAULT.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
FAULT.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->booleanParameter[8] /* FAULT.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
FAULT.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
FAULT.enableQ_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->booleanParameter[2] /* FAULT.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
FAULT.Q_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[1] /* FAULT.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
FAULT.enableP_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->booleanParameter[1] /* FAULT.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
FAULT.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[0] /* FAULT.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
FAULT.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->booleanParameter[7] /* FAULT.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
FAULT.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->booleanParameter[4] /* FAULT.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
FAULT.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[3] /* FAULT.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
FAULT.enableS_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->booleanParameter[3] /* FAULT.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
GEN2.angle_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
GEN2.enabledisplayPF = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->booleanParameter[24] /* GEN2.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
GEN2.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->booleanParameter[18] /* GEN2.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
GEN2.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->booleanParameter[23] /* GEN2.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
GEN2.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->booleanParameter[26] /* GEN2.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
GEN2.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[23] /* GEN2.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
GEN2.enableQ_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->booleanParameter[20] /* GEN2.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
GEN2.Q_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->realParameter[17] /* GEN2.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
GEN2.enableP_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->booleanParameter[19] /* GEN2.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
GEN2.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[16] /* GEN2.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
GEN2.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->booleanParameter[25] /* GEN2.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
GEN2.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->booleanParameter[22] /* GEN2.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
GEN2.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[19] /* GEN2.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
GEN2.enableS_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->booleanParameter[21] /* GEN2.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
LOAD.angle_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
LOAD.enabledisplayPF = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->booleanParameter[33] /* LOAD.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
LOAD.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->booleanParameter[27] /* LOAD.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
LOAD.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->booleanParameter[32] /* LOAD.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
LOAD.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->booleanParameter[35] /* LOAD.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
LOAD.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
LOAD.enableQ_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->booleanParameter[29] /* LOAD.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
LOAD.Q_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[25] /* LOAD.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
LOAD.enableP_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->booleanParameter[28] /* LOAD.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
LOAD.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[24] /* LOAD.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
LOAD.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->booleanParameter[34] /* LOAD.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
LOAD.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->booleanParameter[31] /* LOAD.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
LOAD.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[27] /* LOAD.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
LOAD.enableS_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->booleanParameter[30] /* LOAD.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
GEN1.angle_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
GEN1.enabledisplayPF = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->booleanParameter[15] /* GEN1.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
GEN1.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->booleanParameter[9] /* GEN1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
GEN1.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->booleanParameter[14] /* GEN1.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
GEN1.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->booleanParameter[17] /* GEN1.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
GEN1.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
GEN1.enableQ_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->booleanParameter[11] /* GEN1.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
GEN1.Q_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->realParameter[9] /* GEN1.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
GEN1.enableP_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->booleanParameter[10] /* GEN1.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
GEN1.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->realParameter[8] /* GEN1.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
GEN1.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->booleanParameter[16] /* GEN1.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
GEN1.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->booleanParameter[13] /* GEN1.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
GEN1.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[11] /* GEN1.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
GEN1.enableS_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->booleanParameter[12] /* GEN1.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
pwFault.R = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->realParameter[280] /* pwFault.R PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
pwFault.X = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[281] /* pwFault.X PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  tmp17 = Less(fabs(data->simulationInfo->realParameter[280] /* pwFault.R PARAM */),1e-15);
  tmp18 = Less(fabs(data->simulationInfo->realParameter[281] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */ = (tmp17 && tmp18);
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
pwFault.t2 = 2.15
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */ = 2.15;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
pwFault.t1 = 2.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[147] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
constantLoad.v_0 = 0.9940152
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */ = 0.9940152;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
constantLoad.S_p.re = 50000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[151] /* constantLoad.S_p.re PARAM */ = 50000000.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
constantLoad.S_i.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->realParameter[149] /* constantLoad.S_i.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
constantLoad.S_y.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[153] /* constantLoad.S_y.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  modelica_real tmp19;
  tmp19 = data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[172] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[149] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[153] /* constantLoad.S_y.re PARAM */) * ((tmp19 * tmp19)) + data->simulationInfo->realParameter[151] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[147] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
constantLoad.S_p.im = 10000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->realParameter[150] /* constantLoad.S_p.im PARAM */ = 10000000.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
constantLoad.S_i.im = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->realParameter[148] /* constantLoad.S_i.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
constantLoad.S_y.im = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[152] /* constantLoad.S_y.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  modelica_real tmp20;
  tmp20 = data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[173] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[148] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[152] /* constantLoad.S_y.im PARAM */) * ((tmp20 * tmp20)) + data->simulationInfo->realParameter[150] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[147] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
constantLoad.d_P = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->simulationInfo->realParameter[166] /* constantLoad.d_P PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->realParameter[137] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[173] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[172] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[173] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->realParameter[167] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[172] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[166] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[137] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[173] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
constantLoad.d_t = 20.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */ = 20.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
constantLoad.t1 = 0.5
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
constantLoad.wp = 3.964
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */ = 3.964;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
constantLoad.b1 = 0.1389
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[164] /* constantLoad.b1 PARAM */ = 0.1389;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
constantLoad.a1 = -0.4999
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->realParameter[158] /* constantLoad.a1 PARAM */ = -0.4999;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
constantLoad.a0 = 0.4881
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->realParameter[157] /* constantLoad.a0 PARAM */ = 0.4881;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
constantLoad.b2 = 1.769
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */ = 1.769;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
constantLoad.a2 = 1.502
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */ = 1.502;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
constantLoad.S_Y.im = 0.1012077917404318
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */ = 0.1012077917404318;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
constantLoad.S_Y.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
constantLoad.S_I.im = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
constantLoad.S_I.re = 0.5030104167421182
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */ = 0.5030104167421182;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
constantLoad.S_P.im = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
constantLoad.S_P.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
constantLoad.angle_0 = -0.5748014
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->realParameter[160] /* constantLoad.angle_0 PARAM */ = -0.5748014;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->realParameter[161] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[160] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[161] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[161] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  modelica_real tmp22;
  modelica_real tmp23;
  tmp22 = data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */;
  tmp23 = data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[170] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[172] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[173] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */)),(tmp22 * tmp22) + (tmp23 * tmp23),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  modelica_real tmp24;
  modelica_real tmp25;
  tmp24 = data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */;
  tmp25 = data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[171] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[172] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[173] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */),(tmp24 * tmp24) + (tmp25 * tmp25),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
constantLoad.characteristic = 2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->integerParameter[6] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
constantLoad.PQBRAK = 0.7
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */ = 0.7;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
constantLoad.b.im = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[162] /* constantLoad.b.im PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
constantLoad.b.re = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[163] /* constantLoad.b.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
constantLoad.a.im = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[155] /* constantLoad.a.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
constantLoad.a.re = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->realParameter[156] /* constantLoad.a.re PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
constantLoad.enabledisplayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->booleanParameter[55] /* constantLoad.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
constantLoad.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->booleanParameter[49] /* constantLoad.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
constantLoad.enableangle_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->booleanParameter[54] /* constantLoad.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
constantLoad.enablev_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->simulationInfo->booleanParameter[57] /* constantLoad.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
constantLoad.enableQ_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->booleanParameter[51] /* constantLoad.enableQ_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
constantLoad.Q_0 = 10000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[140] /* constantLoad.Q_0 PARAM */ = 10000000.0;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
constantLoad.enableP_0 = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->booleanParameter[50] /* constantLoad.enableP_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
constantLoad.P_0 = 50000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[139] /* constantLoad.P_0 PARAM */ = 50000000.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
constantLoad.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->booleanParameter[56] /* constantLoad.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[169] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
constantLoad.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->booleanParameter[53] /* constantLoad.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
constantLoad.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[154] /* constantLoad.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
constantLoad.enableS_b = true
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->booleanParameter[52] /* constantLoad.enableS_b PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
gENCLS.R_a = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
gENCLS.X_d = 0.2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
gENCLS.v_0 = 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[199] /* gENCLS.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
gENCLS.angle_0 = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->realParameter[189] /* gENCLS.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[190] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[189] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[199] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[190] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[199] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[190] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
gENCLS.P_0 = 10016960.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[183] /* gENCLS.P_0 PARAM */ = 10016960.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
gENCLS.M_b = 100000000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[182] /* gENCLS.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->realParameter[197] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[183] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[182] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
gENCLS.Q_0 = 2979912.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->realParameter[184] /* gENCLS.Q_0 PARAM */ = 2979912.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[198] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[184] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[182] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  modelica_real tmp26;
  modelica_real tmp27;
  tmp26 = data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */;
  tmp27 = data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[196] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[197] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[198] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */),(tmp26 * tmp26) + (tmp27 * tmp27),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */;
  tmp29 = data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[194] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[197] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[198] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */)),(tmp28 * tmp28) + (tmp29 * tmp29),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[194] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[196] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[196] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[194] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->realParameter[203] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->realParameter[193] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[196] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[194] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->realParameter[195] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[196] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[194] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[201] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[203] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[195] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[193] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->realParameter[200] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->realParameter[186] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[182] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[186] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
gENCLS.D = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->simulationInfo->realParameter[180] /* gENCLS.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
gENCLS.H = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->realParameter[181] /* gENCLS.H PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
gENCLS.enabledisplayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->booleanParameter[64] /* gENCLS.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
gENCLS.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->booleanParameter[58] /* gENCLS.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
gENCLS.enableangle_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->booleanParameter[63] /* gENCLS.enableangle_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
gENCLS.enablev_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->booleanParameter[66] /* gENCLS.enablev_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
gENCLS.enableQ_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->booleanParameter[60] /* gENCLS.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
gENCLS.enableP_0 = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->booleanParameter[59] /* gENCLS.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
gENCLS.enablefn = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->booleanParameter[65] /* gENCLS.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[192] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[41] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENCLS.enableV_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->booleanParameter[62] /* gENCLS.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS.V_b = 400000.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[187] /* gENCLS.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENCLS.enableS_b = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->booleanParameter[61] /* gENCLS.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
pwLine4.X = 0.1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->realParameter[332] /* pwLine4.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[332] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
pwLine4.R = 0.0005
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->realParameter[330] /* pwLine4.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[330] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
pwLine4.B = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->realParameter[328] /* pwLine4.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[328] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
pwLine4.G = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->realParameter[329] /* pwLine4.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[329] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
pwLine4.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->booleanParameter[81] /* pwLine4.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
pwLine4.opening = 1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->integerParameter[11] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
pwLine4.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
pwLine4.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
pwLine3.X = 0.1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[321] /* pwLine3.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[321] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
pwLine3.R = 0.0005
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[319] /* pwLine3.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[319] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
pwLine3.B = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[317] /* pwLine3.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[317] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
pwLine3.G = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->realParameter[318] /* pwLine3.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[318] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
pwLine3.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->booleanParameter[80] /* pwLine3.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
pwLine3.opening = 1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->integerParameter[10] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
pwLine3.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
pwLine3.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
pwLine2.X = 0.1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[310] /* pwLine2.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
pwLine2.Z.im = pwLine2.X
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */ = data->simulationInfo->realParameter[310] /* pwLine2.X PARAM */;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
pwLine2.R = 0.0005
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[308] /* pwLine2.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
pwLine2.Z.re = pwLine2.R
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */ = data->simulationInfo->realParameter[308] /* pwLine2.R PARAM */;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
pwLine2.B = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[306] /* pwLine2.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
pwLine2.Y.im = pwLine2.B
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */ = data->simulationInfo->realParameter[306] /* pwLine2.B PARAM */;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
pwLine2.G = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[307] /* pwLine2.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
pwLine2.Y.re = pwLine2.G
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */ = data->simulationInfo->realParameter[307] /* pwLine2.G PARAM */;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
pwLine2.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->booleanParameter[79] /* pwLine2.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
pwLine2.opening = 1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->integerParameter[9] /* pwLine2.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
pwLine2.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
pwLine2.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
pwLine2.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->realParameter[309] /* pwLine2.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
pwLine1.X = 0.1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[299] /* pwLine1.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[299] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
pwLine1.R = 0.0005
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->realParameter[297] /* pwLine1.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[297] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine1.B = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->realParameter[295] /* pwLine1.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[295] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
pwLine1.G = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[296] /* pwLine1.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[296] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pwLine1.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->booleanParameter[78] /* pwLine1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
pwLine1.opening = 1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->integerParameter[8] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
pwLine1.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
pwLine1.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->realParameter[298] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwLine.X = 0.2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[288] /* pwLine.X PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[288] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
pwLine.R = 0.001
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[286] /* pwLine.R PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[286] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
pwLine.B = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[284] /* pwLine.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[284] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine.G = 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[285] /* pwLine.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[285] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
pwLine.displayPF = false
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->booleanParameter[77] /* pwLine.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
pwLine.opening = 1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->integerParameter[7] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
pwLine.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
pwLine.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[287] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[40] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_19(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_23(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_25(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_26(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_27(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_28(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_29(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_30(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_32(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_33(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_34(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_35(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_36(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_628(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_629(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_630(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_631(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_632(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_633(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_634(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_635(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_636(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_637(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_638(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_639(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_640(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_641(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_642(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_643(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_644(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_645(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_646(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_647(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_648(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_649(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_650(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_651(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_652(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_653(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_654(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_655(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_656(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_657(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_658(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_659(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_660(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_661(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_662(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_663(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_664(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_665(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_666(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_667(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_668(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_669(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_670(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_671(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_702(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_701(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_700(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_699(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_698(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_697(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_696(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_695(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_694(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_693(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_692(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_691(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_690(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_689(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_688(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_687(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_686(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_685(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_684(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_683(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_682(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_681(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_680(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_679(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_678(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_677(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_676(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_675(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_674(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_673(DATA*, threadData_t*);
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_672(DATA*, threadData_t*);
/*
equation index: 703
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.im, pwLine1.is.im, pwLine.ir.re, pwLine3.is.re, pwLine3.is.im, pwLine3.ir.im, pwLine4.is.im, pwLine3.ir.re, pwLine4.is.re, constantLoad.p.ir, pwLine4.ir.re, pwLine4.ir.im, gENCLS.iq, gENCLS.id, pwLine2.vr.re, pwLine2.vr.im, pwLine1.ir.re, pwLine1.ir.im, pwLine1.vr.im, cSVGN1.vq, cSVGN1.V, cSVGN1.leadLagLim.integrator.y, cSVGN1.Y, gENSAL.Epq, gENSAL.uq, gENSAL.id, gENSAL.iq, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 702, 701, 700, 699, 698, 697, 696, 695, 694, 693, 692, 691, 690, 689, 688, 687, 686, 685, 684, 683, 682, 681, 680, 679, 678, 677, 676, 675, 674, 673, 672}
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 703 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[148] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[145] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[146] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->simulationInfo->realParameter[171] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[156] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[155] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[195] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[193] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[132] /* cSVGN1.vq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[119] /* cSVGN1.leadLagLim.integrator.y_start PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[65] /* cSVGN1.Y0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->simulationInfo->realParameter[211] /* gENSAL.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->simulationInfo->realParameter[275] /* gENSAL.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->simulationInfo->realParameter[269] /* gENSAL.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[30] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,703};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 703 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[148] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[147] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[157] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[158] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[71] /* cSVGN1.vq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[51] /* cSVGN1.V variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[106] /* gENSAL.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[103] /* gENSAL.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[104] /* gENSAL.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[30];
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_921(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_919(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_920(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_116(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_117(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_118(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_947(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_953(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_952(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_955(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_954(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_945(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_125(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_127(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_128(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_130(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_910(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_930(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_133(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_962(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_963(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_964(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_967(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_966(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_139(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_940(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_961(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_960(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_939(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_938(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_937(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_936(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_915(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_914(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_925(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_923(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_924(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_935(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_934(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_959(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_958(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_957(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_956(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_944(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_943(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_929(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_928(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_932(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_933(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_926(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_927(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_591(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_590(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_589(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_588(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_587(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_586(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_585(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_584(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_583(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_582(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_581(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_580(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_450(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_449(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_448(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_447(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_444(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_443(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_442(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_441(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_440(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_439(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_438(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_437(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_436(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_435(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_434(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_433(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_432(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_431(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_430(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_429(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_428(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_426(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_425(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_424(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_423(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_422(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_421(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_420(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_419(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_418(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_417(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_416(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_415(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_414(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_413(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_412(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_411(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_410(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_409(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_408(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_407(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_406(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_405(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_404(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_403(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_402(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_401(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_400(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_399(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_398(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_237(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_236(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_235(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_234(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_215(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_214(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_213(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_212(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_210(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_209(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_208(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_207(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_206(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_205(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_204(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_203(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_199(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_197(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_196(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_195(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_194(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_193(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_192(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_189(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_19(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_23(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_24(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_25(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_26(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_27(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_28(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_29(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_30(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_32(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_33(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_34(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_35(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_36(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_703(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_921(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_919(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_920(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_947(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_953(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_952(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_955(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_954(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_945(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_949(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_127(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_128(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_948(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_130(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_930(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_133(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_962(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_963(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_964(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_967(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_966(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_139(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_940(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_961(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_960(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_939(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_938(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_937(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_936(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_915(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_914(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_925(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_923(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_924(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_935(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_934(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_959(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_958(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_957(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_956(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_944(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_943(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_929(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_928(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_932(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_933(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_926(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_927(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_917(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_918(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_763(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[86] /* gENCLS.omega variable */;
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

