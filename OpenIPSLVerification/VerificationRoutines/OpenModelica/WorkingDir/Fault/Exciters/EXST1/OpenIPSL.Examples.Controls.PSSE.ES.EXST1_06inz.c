/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[76] /* gENCLS.omega variable */ = data->modelData->realVarsData[76].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eXST1.Limiters.y = const.k * (eXST1.Limiters.k1 + eXST1.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[61] /* eXST1.Limiters.y variable */ = (data->simulationInfo->realParameter[34] /* const.k PARAM */) * (data->simulationInfo->realParameter[87] /* eXST1.Limiters.k1 PARAM */ + data->simulationInfo->realParameter[88] /* eXST1.Limiters.k2 PARAM */);
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[166] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
eXST1.Efd0 = eXST1.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[82] /* eXST1.Efd0 PARAM */ = data->localData[0]->realVars[58] /* eXST1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
eXST1.Vm1.y_start = eXST1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[113] /* eXST1.Vm1.y_start PARAM */ = data->simulationInfo->realParameter[82] /* eXST1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$START.eXST1.Vm1.state = eXST1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->modelData->realVarsData[1].attribute /* eXST1.Vm1.state STATE(1) */.start = data->simulationInfo->realParameter[113] /* eXST1.Vm1.y_start PARAM */;
    data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */ = data->modelData->realVarsData[1].attribute /* eXST1.Vm1.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eXST1.Vm1.state */.name, (modelica_real) data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$START.eXST1.Vm1.y = eXST1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->modelData->realVarsData[62].attribute /* eXST1.Vm1.y variable */.start = data->simulationInfo->realParameter[113] /* eXST1.Vm1.y_start PARAM */;
    data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */ = data->modelData->realVarsData[62].attribute /* eXST1.Vm1.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eXST1.Vm1.y */.name, (modelica_real) data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
eXST1.imLeadLag.y_start = eXST1.Efd0 / eXST1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[141] /* eXST1.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[82] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y_start = eXST1.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[137] /* eXST1.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[141] /* eXST1.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
eXST1.imLeadLag.x_start = eXST1.Efd0 / eXST1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[140] /* eXST1.imLeadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[82] /* eXST1.Efd0 PARAM */,data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */,"eXST1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.x_start[1] = eXST1.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[136] /* eXST1.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[140] /* eXST1.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$START.eXST1.imLeadLag.TF.x[1] = eXST1.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->modelData->realVarsData[67].attribute /* eXST1.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[136] /* eXST1.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[67] /* eXST1.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[67].attribute /* eXST1.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* eXST1.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[67] /* eXST1.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y = eXST1.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[66] /* eXST1.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[123] /* eXST1.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
eXST1.Vm1.state = eXST1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[1] /* eXST1.Vm1.state STATE(1) */ = data->simulationInfo->realParameter[113] /* eXST1.Vm1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y = eXST1.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[68] /* eXST1.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[137] /* eXST1.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[11] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(DATA *data, threadData_t *threadData);


/*
equation index: 20
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[238] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[21] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[20] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[19] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[18] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[18] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[216] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_66(DATA*, threadData_t*);
/*
equation index: 96
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine3.ir.im, pwLine4.is.im, pwLine3.is.im, pwLine3.is.re, pwLine4.is.re, pwLine3.ir.re, pwLine4.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, gENROE.PSIkd, gENROE.Epd, gENROE.PSIppq, gENROE.PSIppd, gENROE.iq, gENROE.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, eXST1.XADIFD, eXST1.ECOMP, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.re}
eqns: {26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 96 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[63] /* eXST1.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[56] /* eXST1.ECOMP variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,96};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 96 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[56] /* eXST1.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_796(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_795(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.x = 10.0 * (eXST1.Vm1.y / eXST1.imDerivativeLag.T * 0.1 - eXST1.imDerivativeLag.y) * eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[62] /* eXST1.Vm1.y variable */,data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[66] /* eXST1.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA *data, threadData_t *threadData);


/*
equation index: 103
type: SIMPLE_ASSIGN
eXST1.DiffV.u1 = eXST1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->simulationInfo->realParameter[80] /* eXST1.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[114] /* eXST1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
eXST1.VoltageReference.y = eXST1.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->simulationInfo->realParameter[115] /* eXST1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[114] /* eXST1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.x[1] = (eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u - eXST1.imLeadLag.TF.y) / (eXST1.imLeadLag.TF.a[2] * eXST1.imLeadLag.TF.d - eXST1.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[67] /* eXST1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[69] /* eXST1.imLeadLag.u variable */) - data->localData[0]->realVars[68] /* eXST1.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[134] /* eXST1.imLeadLag.TF.bb[2] PARAM */,"eXST1.imLeadLag.TF.a[2] * eXST1.imLeadLag.TF.d - eXST1.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.x_scaled[1] = eXST1.imLeadLag.TF.x[1] * eXST1.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[3] /* eXST1.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[67] /* eXST1.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_801(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_802(DATA *data, threadData_t *threadData);


/*
equation index: 113
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[108] /* pwLine.vs.im variable */, data->localData[0]->realVars[109] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(DATA *data, threadData_t *threadData);


/*
equation index: 115
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[120] /* pwLine1.vs.im variable */, data->localData[0]->realVars[121] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_837(DATA *data, threadData_t *threadData);


/*
equation index: 117
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[118] /* pwLine1.vr.im variable */, data->localData[0]->realVars[119] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_849(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_850(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_851(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_848(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_847(DATA *data, threadData_t *threadData);


/*
equation index: 123
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[130] /* pwLine3.vr.im variable */, data->localData[0]->realVars[131] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_846(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_845(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_836(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_835(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_844(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_843(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_842(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_841(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_839(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_840(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_833(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_834(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(DATA *data, threadData_t *threadData);


/*
equation index: 143
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[37] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[36] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[45] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[44] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[41] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[40] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[33] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[32] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(DATA *data, threadData_t *threadData);


/*
equation index: 153
type: ALGORITHM

  assert(eXST1.limiter.uMax >= eXST1.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXST1.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXST1.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */,data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.limiter.uMax >= eXST1.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_96(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_795(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_801(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_802(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_113(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_115(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_837(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_849(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_850(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_851(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_848(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_847(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_846(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_845(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_836(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_835(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_844(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_843(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_842(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_841(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_839(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_840(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_833(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_834(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
equation index: 526
type: SIMPLE_ASSIGN
gENROE.Xd = 1.84
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ = 1.84;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
gENROE.Xpd = 0.41
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ = 0.41;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
gENROE.Xppd = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[223] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
gENROE.S10 = 0.11
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */ = 0.11;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
gENROE.S12 = 0.39
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */ = 0.39;
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
gENROE.PSIpp0.re = 1.00266857371347
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[199] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
gENROE.PSIpp0.im = 0.1511271541770246
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[198] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[199] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[198] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[231] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[239] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[231] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
gENROE.PSIpp0_dq.re = 0.9126687000122171
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[201] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[201] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
gENROE.I_dq.im = 0.248896193836464
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[178] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[178] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xpd - gENROE.Xpp + gENROE.Xd - gENROE.Xpd)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[239] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[223] /* gENROE.Xpp PARAM */ + data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */);
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[174] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
eXST1.T_C = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[93] /* eXST1.T_C PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
eXST1.imLeadLag.T1 = eXST1.T_C
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[93] /* eXST1.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
eXST1.imLeadLag.par1.y = eXST1.imLeadLag.T1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[138] /* eXST1.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
eXST1.T_B = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[92] /* eXST1.T_B PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
eXST1.imLeadLag.T2 = eXST1.T_B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[92] /* eXST1.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
eXST1.imLeadLag.par2.y = eXST1.imLeadLag.T2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
eXST1.T_A = 0.05
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[91] /* eXST1.T_A PARAM */ = 0.05;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
eXST1.Vm1.T = eXST1.T_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */ = data->simulationInfo->realParameter[91] /* eXST1.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
eXST1.Vm1.const.y = eXST1.Vm1.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[112] /* eXST1.Vm1.const.y PARAM */ = data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
eXST1.T_R = 0.02
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[95] /* eXST1.T_R PARAM */ = 0.02;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.T = eXST1.T_R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[95] /* eXST1.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.const.y = eXST1.TransducerDelay.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[99] /* eXST1.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
gENROE.R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
gENROE.P_0 = 40000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[205] /* gENROE.P_0 PARAM */ = 40000000.0;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
gENROE.M_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[205] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
gENROE.I_dq.re = 0.3177807746702022
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[179] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[179] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[193] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[194] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
const.k = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[34] /* const.k PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
eXST1.Limiters.u2 = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[90] /* eXST1.Limiters.u2 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
eXST1.VOEL = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[101] /* eXST1.VOEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
eXST1.add3_2.u1 = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[119] /* eXST1.add3_2.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
eXST1.VOTHSG = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[102] /* eXST1.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
eXST1.Limiters.u1 = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[89] /* eXST1.Limiters.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
eXST1.VUEL = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[103] /* eXST1.VUEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
const.y = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
eXST1.Limiters.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[88] /* eXST1.Limiters.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
eXST1.Limiters.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[87] /* eXST1.Limiters.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
eXST1.add3_2.k3 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[118] /* eXST1.add3_2.k3 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
eXST1.add3_2.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[117] /* eXST1.add3_2.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
eXST1.add3_2.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[116] /* eXST1.add3_2.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.T_mod = if eXST1.TransducerDelay.T < 1e-15 then 1000.0 else eXST1.TransducerDelay.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[98] /* eXST1.TransducerDelay.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[96] /* eXST1.TransducerDelay.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.zeroGain = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->booleanParameter[45] /* eXST1.imDerivativeLag.zeroGain PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[123] /* eXST1.imDerivativeLag.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[122] /* eXST1.imDerivativeLag.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
eXST1.T_F = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[94] /* eXST1.T_F PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.T = eXST1.T_F
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */ = data->simulationInfo->realParameter[94] /* eXST1.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.k = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[121] /* eXST1.imDerivativeLag.k PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
eXST1.K_A = 80.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */ = 80.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
eXST1.K_a.k = eXST1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */ = data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
eXST1.Vm1.T_mod = if eXST1.Vm1.T < 1e-15 then 1000.0 else eXST1.Vm1.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */,1e-15);
  data->simulationInfo->realParameter[111] /* eXST1.Vm1.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
eXST1.Vm1.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[109] /* eXST1.Vm1.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
eXST1.limiter.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->booleanParameter[46] /* eXST1.limiter.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
eXST1.limiter.homotopyType = Modelica.Blocks.Types.LimiterHomotopy.Linear
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->integerParameter[6] /* eXST1.limiter.homotopyType PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
eXST1.limiter.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->booleanParameter[47] /* eXST1.limiter.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
eXST1.V_IMIN = -10.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[105] /* eXST1.V_IMIN PARAM */ = -10.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
eXST1.limiter.uMin = eXST1.V_IMIN
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */ = data->simulationInfo->realParameter[105] /* eXST1.V_IMIN PARAM */;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
eXST1.V_IMAX = 10.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[104] /* eXST1.V_IMAX PARAM */ = 10.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
eXST1.limiter.uMax = eXST1.V_IMAX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */ = data->simulationInfo->realParameter[104] /* eXST1.V_IMAX PARAM */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
eXST1.imLeadLag.T2_dummy = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then 1000.0 else eXST1.imLeadLag.T2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[127] /* eXST1.imLeadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.a[1] = eXST1.imLeadLag.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[127] /* eXST1.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.a_end = if eXST1.imLeadLag.TF.a[2] > 1e-13 * sqrt(eXST1.imLeadLag.TF.a[1] ^ 2.0 + eXST1.imLeadLag.TF.a[2] ^ 2.0) then eXST1.imLeadLag.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
eXST1.imLeadLag.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.b[1] = eXST1.imLeadLag.K * eXST1.imLeadLag.T1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[131] /* eXST1.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.bb[1] = eXST1.imLeadLag.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[133] /* eXST1.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[131] /* eXST1.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.d = eXST1.imLeadLag.TF.bb[1] / eXST1.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[133] /* eXST1.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.TF.a[1] PARAM */,"eXST1.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.b[2] = eXST1.imLeadLag.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[132] /* eXST1.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.bb[2] = eXST1.imLeadLag.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[134] /* eXST1.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[132] /* eXST1.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->integerParameter[5] /* eXST1.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->integerParameter[4] /* eXST1.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->integerParameter[3] /* eXST1.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
eXST1.K_F = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[85] /* eXST1.K_F PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
eXST1.K_C = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[84] /* eXST1.K_C PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
eXST1.V_RMIN = -3.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[108] /* eXST1.V_RMIN PARAM */ = -3.0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
eXST1.V_RMAX = 8.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[107] /* eXST1.V_RMAX PARAM */ = 8.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
eXST1.DiffV.k2 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[79] /* eXST1.DiffV.k2 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
eXST1.DiffV.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[78] /* eXST1.DiffV.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
gENROE.Xppq = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
gENROE.Xl = 0.12
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ = 0.12;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
gENROE.Xpq = 0.6
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ = 0.6;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[191] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[190] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[187] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENROE.Xq = 1.75
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ = 1.75;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[185] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[186] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[184] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENROE.PSIpp0_dq.im = -0.4418365415628956
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[200] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[200] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[204] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[195] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[197] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[191] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[190] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[175] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[197] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[176] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[250] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[249] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
gENROE.DQ_dq.im = -0.5650202843208616
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[172] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
gENROE.DQ_dq.re = 0.825077013560536
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[173] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[233] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[198] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[199] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
gENROE.It.re = 0.4028250107397031
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[183] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
gENROE.It.im = -0.02580594464131273
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[182] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[232] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[182] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[183] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[234] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[233] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[232] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[230] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[231] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[239] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[183] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[182] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[237] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[223] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[238] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[237] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[234] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[237] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[234] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[230] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[233] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENROE.Is.im = -5.013342868567351
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[180] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
gENROE.Is.re = 0.7556357708851228
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[181] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
gENROE.S.im = 0.05416582
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[208] /* gENROE.S.im PARAM */ = 0.05416582;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
gENROE.S.re = 0.4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[209] /* gENROE.S.re PARAM */ = 0.4;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
gENROE.VT.im = 0.07056215202908395
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[217] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
gENROE.VT.re = 0.9975073847852077
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[218] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
gENROE.Zs.im = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[228] /* gENROE.Zs.im PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
gENROE.Zs.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[229] /* gENROE.Zs.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
gENROE.Tpq0 = 0.9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[216] /* gENROE.Tpq0 PARAM */ = 0.9;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
gENROE.Q_0 = 5416582.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[206] /* gENROE.Q_0 PARAM */ = 5416582.0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[248] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[206] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
SysData.S_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
gENROE.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[251] /* gENROE.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
gENROE.angle_0 = 4.046276
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[235] /* gENROE.angle_0 PARAM */ = 4.046276;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[235] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[251] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[251] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */) * ((data->simulationInfo->realParameter[248] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */))),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[248] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
SysData.fn = 50.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[33] /* SysData.fn PARAM */ = 50.0;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[241] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[254] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[241] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
gENROE.D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[171] /* gENROE.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
gENROE.H = 4.28
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[177] /* gENROE.H PARAM */ = 4.28;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENROE.Tppq0 = 0.09
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->realParameter[215] /* gENROE.Tppq0 PARAM */ = 0.09;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
gENROE.Tppd0 = 0.07000000000000001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[214] /* gENROE.Tppd0 PARAM */ = 0.07000000000000001;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
gENROE.Tpd0 = 5.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[213] /* gENROE.Tpd0 PARAM */ = 5.0;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
gENROE.enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->booleanParameter[63] /* gENROE.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
gENROE.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->booleanParameter[57] /* gENROE.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
gENROE.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->booleanParameter[62] /* gENROE.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
gENROE.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->booleanParameter[65] /* gENROE.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
gENROE.enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->booleanParameter[59] /* gENROE.enableQ_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
gENROE.enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->booleanParameter[58] /* gENROE.enableP_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
gENROE.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->booleanParameter[64] /* gENROE.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
gENROE.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->booleanParameter[61] /* gENROE.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
gENROE.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->realParameter[219] /* gENROE.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
gENROE.enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->booleanParameter[60] /* gENROE.enableS_b PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
FAULT.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
FAULT.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->booleanParameter[6] /* FAULT.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
FAULT.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->booleanParameter[0] /* FAULT.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
FAULT.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->booleanParameter[5] /* FAULT.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
FAULT.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->booleanParameter[8] /* FAULT.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
FAULT.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
FAULT.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->booleanParameter[2] /* FAULT.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
FAULT.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->realParameter[1] /* FAULT.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
FAULT.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->booleanParameter[1] /* FAULT.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
FAULT.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[0] /* FAULT.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
FAULT.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->booleanParameter[7] /* FAULT.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
FAULT.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->booleanParameter[4] /* FAULT.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
FAULT.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[3] /* FAULT.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
FAULT.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->booleanParameter[3] /* FAULT.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
GEN2.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
GEN2.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->booleanParameter[24] /* GEN2.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
GEN2.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->booleanParameter[18] /* GEN2.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
GEN2.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->booleanParameter[23] /* GEN2.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
GEN2.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->booleanParameter[26] /* GEN2.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
GEN2.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->realParameter[23] /* GEN2.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
GEN2.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->booleanParameter[20] /* GEN2.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
GEN2.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->realParameter[17] /* GEN2.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
GEN2.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->booleanParameter[19] /* GEN2.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
GEN2.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->realParameter[16] /* GEN2.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
GEN2.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->booleanParameter[25] /* GEN2.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
GEN2.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->booleanParameter[22] /* GEN2.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
GEN2.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->realParameter[19] /* GEN2.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
GEN2.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->booleanParameter[21] /* GEN2.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
LOAD.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
LOAD.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->booleanParameter[33] /* LOAD.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
LOAD.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->booleanParameter[27] /* LOAD.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
LOAD.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->booleanParameter[32] /* LOAD.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
LOAD.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->booleanParameter[35] /* LOAD.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
LOAD.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
LOAD.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->booleanParameter[29] /* LOAD.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
LOAD.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->realParameter[25] /* LOAD.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
LOAD.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->booleanParameter[28] /* LOAD.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
LOAD.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[24] /* LOAD.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
LOAD.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->booleanParameter[34] /* LOAD.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
LOAD.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->booleanParameter[31] /* LOAD.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
LOAD.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->simulationInfo->realParameter[27] /* LOAD.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
LOAD.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->booleanParameter[30] /* LOAD.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
GEN1.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
GEN1.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->simulationInfo->booleanParameter[15] /* GEN1.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
GEN1.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->booleanParameter[9] /* GEN1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
GEN1.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->booleanParameter[14] /* GEN1.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
GEN1.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->booleanParameter[17] /* GEN1.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
GEN1.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
GEN1.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->booleanParameter[11] /* GEN1.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
GEN1.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[9] /* GEN1.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
GEN1.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->booleanParameter[10] /* GEN1.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
GEN1.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->realParameter[8] /* GEN1.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
GEN1.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->simulationInfo->booleanParameter[16] /* GEN1.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
GEN1.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->booleanParameter[13] /* GEN1.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
GEN1.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->realParameter[11] /* GEN1.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
GEN1.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->booleanParameter[12] /* GEN1.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
pwFault.R = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->realParameter[255] /* pwFault.R PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
pwFault.X = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->realParameter[256] /* pwFault.X PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[255] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[256] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
pwFault.t2 = 2.15
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */ = 2.15;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
pwFault.t1 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
constantLoad.v_0 = 0.9919935
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */ = 0.9919935;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
constantLoad.S_p.re = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->realParameter[50] /* constantLoad.S_p.re PARAM */ = 50000000.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
constantLoad.S_i.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[48] /* constantLoad.S_i.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
constantLoad.S_y.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[52] /* constantLoad.S_y.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[48] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[52] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[50] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
constantLoad.S_p.im = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[49] /* constantLoad.S_p.im PARAM */ = 10000000.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
constantLoad.S_i.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[47] /* constantLoad.S_i.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
constantLoad.S_y.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->realParameter[51] /* constantLoad.S_y.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[47] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[51] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[49] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
constantLoad.d_P = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->realParameter[36] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[36] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
constantLoad.d_t = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
constantLoad.t1 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
constantLoad.wp = 3.964
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */ = 3.964;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
constantLoad.b1 = 0.1389
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */ = 0.1389;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
constantLoad.a1 = -0.4999
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */ = -0.4999;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
constantLoad.a0 = 0.4881
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ = 0.4881;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
constantLoad.b2 = 1.769
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ = 1.769;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
constantLoad.a2 = 1.502
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */ = 1.502;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
constantLoad.S_Y.im = 0.1016207385868717
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
constantLoad.S_Y.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
constantLoad.S_I.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
constantLoad.S_I.re = 0.5040355607168797
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
constantLoad.S_P.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
constantLoad.S_P.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
constantLoad.angle_0 = -0.5762684
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[59] /* constantLoad.angle_0 PARAM */ = -0.5762684;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[59] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
constantLoad.characteristic = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
constantLoad.PQBRAK = 0.7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */ = 0.7;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
constantLoad.b.im = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->simulationInfo->realParameter[61] /* constantLoad.b.im PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
constantLoad.b.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->realParameter[62] /* constantLoad.b.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
constantLoad.a.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->realParameter[54] /* constantLoad.a.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
constantLoad.a.re = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->realParameter[55] /* constantLoad.a.re PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
constantLoad.enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->booleanParameter[42] /* constantLoad.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
constantLoad.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->booleanParameter[36] /* constantLoad.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
constantLoad.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->booleanParameter[41] /* constantLoad.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
constantLoad.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->booleanParameter[44] /* constantLoad.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
constantLoad.enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->booleanParameter[38] /* constantLoad.enableQ_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
constantLoad.Q_0 = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->simulationInfo->realParameter[39] /* constantLoad.Q_0 PARAM */ = 10000000.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
constantLoad.enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->booleanParameter[37] /* constantLoad.enableP_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
constantLoad.P_0 = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->realParameter[38] /* constantLoad.P_0 PARAM */ = 50000000.0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
constantLoad.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->booleanParameter[43] /* constantLoad.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->realParameter[68] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
constantLoad.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->booleanParameter[40] /* constantLoad.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
constantLoad.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->realParameter[53] /* constantLoad.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
constantLoad.enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->booleanParameter[39] /* constantLoad.enableS_b PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
gENCLS.R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
gENCLS.X_d = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENCLS.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[154] /* gENCLS.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[154] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
gENCLS.P_0 = 10017110.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->realParameter[148] /* gENCLS.P_0 PARAM */ = 10017110.0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
gENCLS.M_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->realParameter[162] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[148] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
gENCLS.Q_0 = 8006544.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[149] /* gENCLS.Q_0 PARAM */ = 8006544.0;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->realParameter[163] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[149] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[162] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[163] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[162] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[163] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->realParameter[168] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[166] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[168] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[165] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
gENCLS.D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[145] /* gENCLS.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
gENCLS.H = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[146] /* gENCLS.H PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
gENCLS.enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->booleanParameter[54] /* gENCLS.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
gENCLS.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->booleanParameter[48] /* gENCLS.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
gENCLS.enableangle_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->booleanParameter[53] /* gENCLS.enableangle_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
gENCLS.enablev_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->booleanParameter[56] /* gENCLS.enablev_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
gENCLS.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->simulationInfo->booleanParameter[50] /* gENCLS.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
gENCLS.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->booleanParameter[49] /* gENCLS.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
gENCLS.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->simulationInfo->booleanParameter[55] /* gENCLS.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[157] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
gENCLS.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->booleanParameter[52] /* gENCLS.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
gENCLS.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[152] /* gENCLS.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
gENCLS.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->booleanParameter[51] /* gENCLS.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
pwLine4.X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[296] /* pwLine4.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[296] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
pwLine4.R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[294] /* pwLine4.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[294] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
pwLine4.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[292] /* pwLine4.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[292] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
pwLine4.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[293] /* pwLine4.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[293] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
pwLine4.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->booleanParameter[70] /* pwLine4.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
pwLine4.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->integerParameter[10] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
pwLine4.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
pwLine4.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->realParameter[295] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine3.X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->realParameter[285] /* pwLine3.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[285] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
pwLine3.R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[283] /* pwLine3.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[283] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pwLine3.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[281] /* pwLine3.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[281] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
pwLine3.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[282] /* pwLine3.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[282] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pwLine3.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->booleanParameter[69] /* pwLine3.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwLine3.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->integerParameter[9] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
pwLine3.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
pwLine3.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[284] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
pwLine1.X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[274] /* pwLine1.X PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[274] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine1.R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[272] /* pwLine1.R PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[272] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
pwLine1.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[270] /* pwLine1.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[270] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
pwLine1.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[271] /* pwLine1.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[271] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
pwLine1.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->booleanParameter[68] /* pwLine1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
pwLine1.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->integerParameter[8] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
pwLine1.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
pwLine1.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->realParameter[273] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
pwLine.X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->realParameter[263] /* pwLine.X PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[263] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
pwLine.R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[261] /* pwLine.R PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[261] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
pwLine.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[259] /* pwLine.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[259] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
pwLine.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[260] /* pwLine.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[260] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
pwLine.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->booleanParameter[67] /* pwLine.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
pwLine.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->integerParameter[7] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
pwLine.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
pwLine.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[262] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_552(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_553(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_554(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_555(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_556(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_557(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_558(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_559(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_560(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_561(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_562(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_563(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_564(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_565(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_566(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_567(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_568(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_569(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_570(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_571(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_572(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_573(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_574(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_575(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_576(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_577(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_578(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_579(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_580(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_581(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_582(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_583(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_584(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_585(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_586(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_587(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_588(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_589(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_590(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_591(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_621(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_620(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_619(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_618(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_617(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_616(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_615(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_614(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_613(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_612(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_611(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_610(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_609(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_608(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_607(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_606(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_605(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_604(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_603(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_602(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_601(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_600(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_599(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_598(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_597(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_596(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_595(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_594(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_593(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_592(DATA*, threadData_t*);
/*
equation index: 622
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine1.is.re, pwLine.ir.im, pwLine1.is.im, pwLine3.ir.im, pwLine4.is.im, pwLine3.is.im, pwLine3.is.re, pwLine4.is.re, pwLine3.ir.re, pwLine4.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, gENROE.PSIkd, gENROE.Epd, gENROE.PSIppq, gENROE.PSIppd, gENROE.iq, gENROE.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, eXST1.XADIFD, eXST1.ECOMP, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.re}
eqns: {552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 621, 620, 619, 618, 617, 616, 615, 614, 613, 612, 611, 610, 609, 608, 607, 606, 605, 604, 603, 602, 601, 600, 599, 598, 597, 596, 595, 594, 593, 592}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 622 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[128] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[129] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[175] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,622};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 622 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[128] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[129] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[56] /* eXST1.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_796(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_795(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_801(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_802(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_113(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_115(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_837(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_117(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_849(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_850(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_851(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_848(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_847(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_123(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_846(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_845(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_836(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_835(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_844(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_843(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_842(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_841(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_839(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_840(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_833(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_834(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_441(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_440(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_439(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_438(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_437(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_436(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_428(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_237(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_236(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_235(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_234(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_215(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_214(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_213(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_212(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_210(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_208(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_207(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_206(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_205(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_203(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_199(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_197(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_195(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_194(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_192(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_166(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_164(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_163(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_162(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_161(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_160(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_159(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_158(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_157(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_156(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_155(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_622(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_796(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_795(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_103(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_105(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_106(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_803(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_801(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_802(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_113(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_784(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_837(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_849(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_850(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_851(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_848(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_847(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_846(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_845(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_789(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_788(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_791(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_790(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_836(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_835(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_844(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_843(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_842(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_841(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_839(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_840(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_833(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_834(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[76] /* gENCLS.omega variable */;
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

