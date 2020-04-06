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
gENCLS._omega = $START.gENCLS.omega
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
eXST1_1._Limiters._y = const.k * (eXST1_1.Limiters.k1 + eXST1_1.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[61] /* eXST1_1.Limiters.y variable */ = (data->simulationInfo->realParameter[34]) * (data->simulationInfo->realParameter[85] + data->simulationInfo->realParameter[86]);
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
gENCLS._delta = $START.gENCLS.delta
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS._eq = $START.gENCLS.eq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_660(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
eXST1_1._Efd0 = eXST1_1.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[80] = data->localData[0]->realVars[58] /* eXST1_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
eXST1_1._Vm1._y_start = eXST1_1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[104] = data->simulationInfo->realParameter[80];
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$START._eXST1_1._Vm1._state = eXST1_1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->modelData->realVarsData[1].attribute /* eXST1_1.Vm1.state STATE(1) */.start = data->simulationInfo->realParameter[104];
    data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */ = data->modelData->realVarsData[1].attribute /* eXST1_1.Vm1.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eXST1_1.Vm1.state */.name, (modelica_real) data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$START._eXST1_1._Vm1._y = eXST1_1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->modelData->realVarsData[62].attribute /* eXST1_1.Vm1.y variable */.start = data->simulationInfo->realParameter[104];
    data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */ = data->modelData->realVarsData[62].attribute /* eXST1_1.Vm1.y variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eXST1_1.Vm1.y */.name, (modelica_real) data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._y_start = eXST1_1.Efd0 / eXST1_1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[128] = DIVISION_SIM(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[81],"eXST1_1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._y_start = eXST1_1.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[126] = data->simulationInfo->realParameter[128];
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._x_start = eXST1_1.Efd0 / eXST1_1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[127] = DIVISION_SIM(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[81],"eXST1_1.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._x_start[1] = eXST1_1.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[125] = data->simulationInfo->realParameter[127];
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$START._eXST1_1._imLeadLag._TF._x[1] = eXST1_1.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->modelData->realVarsData[67].attribute /* eXST1_1.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[125];
    data->localData[0]->realVars[67] /* eXST1_1.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[67].attribute /* eXST1_1.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* eXST1_1.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[67] /* eXST1_1.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._y = eXST1_1.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[66] /* eXST1_1.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[112];
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
eXST1_1._Vm1._state = eXST1_1.Vm1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[1] /* eXST1_1.Vm1.state STATE(1) */ = data->simulationInfo->realParameter[104];
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._y = eXST1_1.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[68] /* eXST1_1.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[126];
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENROE._w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[11] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(DATA *data, threadData_t *threadData);


/*
equation index: 20
type: SIMPLE_ASSIGN
gENROE._delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[222];
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = 0.0
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
der(gENROE._PSIkd) = 0.0
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
der(gENROE._Epq) = 0.0
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
der(gENROE._Epd) = 0.0
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
gENROE._XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[91] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[18] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[200]);
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

vars: {pwLine3._ir._re, pwLine4._is._re, pwLine3._ir._im, pwLine4._is._im, pwLine._ir._re, pwLine1._is._re, pwLine._ir._im, pwLine1._is._im, constantLoad._p._ii, constantLoad._p._ir, pwLine4._ir._im, pwLine1._ir._re, gENCLS._iq, gENCLS._id, gENROE._Epq, gENROE._Epd, gENROE._PSIppq, gENROE._PSIppd, gENROE._iq, gENROE._id, pwLine._vs._im, pwLine._vs._re, pwLine1._vr._re, pwLine1._vr._im, eXST1_1._XADIFD, eXST1_1._TransducerDelay._y_start, pwLine3._vr._im, pwLine1._vs._im, pwLine1._vs._re, pwLine3._vr._re}
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
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->simulationInfo->realParameter[95];
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,96};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 96 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->simulationInfo->realParameter[95] = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._x = 10.0 * (eXST1_1.Vm1.y / eXST1_1.imDerivativeLag.T * 0.1 - eXST1_1.imDerivativeLag.y) * eXST1_1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[2] /* eXST1_1.imDerivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[62] /* eXST1_1.Vm1.y variable */,data->simulationInfo->realParameter[109],"eXST1_1.imDerivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[66] /* eXST1_1.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[109]));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[130] /* pwLine3.vr.im variable */, data->localData[0]->realVars[131] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(DATA *data, threadData_t *threadData);


/*
equation index: 101
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[120] /* pwLine1.vs.im variable */, data->localData[0]->realVars[121] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(DATA *data, threadData_t *threadData);


/*
equation index: 104
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[118] /* pwLine1.vr.im variable */, data->localData[0]->realVars[119] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_827(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_822(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_782(DATA *data, threadData_t *threadData);


/*
equation index: 120
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[108] /* pwLine.vs.im variable */, data->localData[0]->realVars[109] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_814(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA *data, threadData_t *threadData);


/*
equation index: 135
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._x[1] = (eXST1_1.imLeadLag.TF.d * eXST1_1.imLeadLag.u - eXST1_1.imLeadLag.TF.y) / (eXST1_1.imLeadLag.TF.a[2] * eXST1_1.imLeadLag.TF.d - eXST1_1.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[67] /* eXST1_1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[124]) * (data->localData[0]->realVars[69] /* eXST1_1.imLeadLag.u variable */) - data->localData[0]->realVars[68] /* eXST1_1.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[118]) * (data->simulationInfo->realParameter[124]) - data->simulationInfo->realParameter[123],"eXST1_1.imLeadLag.TF.a[2] * eXST1_1.imLeadLag.TF.d - eXST1_1.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._x_scaled[1] = eXST1_1.imLeadLag.TF.x[1] * eXST1_1.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[3] /* eXST1_1.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[67] /* eXST1_1.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[119]);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(DATA *data, threadData_t *threadData);


/*
equation index: 141
type: SIMPLE_ASSIGN
GEN1._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[37] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
GEN1._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[36] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
LOAD._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[45] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
LOAD._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[44] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
GEN2._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[41] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
GEN2._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[40] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
FAULT._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[33] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
FAULT._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[32] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(DATA *data, threadData_t *threadData);


/*
equation index: 151
type: ALGORITHM

  assert(eXST1_1.limiter.uMax >= eXST1_1.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXST1_1.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXST1_1.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[129],data->simulationInfo->realParameter[130]);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[129], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[130], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1_1.limiter.uMax >= eXST1_1.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_660(data, threadData);
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_96(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_101(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_827(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_822(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_814(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_142(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_151(data, threadData);
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
equation index: 508
type: SIMPLE_ASSIGN
eXST1_1._Limiters._k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[86] = 1.0;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
eXST1_1._Limiters._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[85] = 1.0;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
eXST1_1._add3_2._k3 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[108] = 1.0;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
eXST1_1._add3_2._k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[107] = 1.0;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
eXST1_1._add3_2._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[106] = 1.0;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
eXST1_1._T_R = 0.02
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[91] = 0.02;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
eXST1_1._TransducerDelay._T = eXST1_1.T_R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[93] = data->simulationInfo->realParameter[91];
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
eXST1_1._TransducerDelay._T_mod = if eXST1_1.TransducerDelay.T < 1e-15 then 1000.0 else eXST1_1.TransducerDelay.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  modelica_boolean tmp0;
  tmp0 = Less(data->simulationInfo->realParameter[93],1e-15);
  data->simulationInfo->realParameter[94] = (tmp0?1000.0:data->simulationInfo->realParameter[93]);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
eXST1_1._TransducerDelay._K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[92] = 1.0;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._zeroGain = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->booleanParameter[45] = 0;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[112] = 0.0;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[111] = 0.0;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->integerParameter[1] = 4;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
eXST1_1._T_F = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[90] = 1.0;
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._T = eXST1_1.T_F
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[109] = data->simulationInfo->realParameter[90];
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._k = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[110] = 0.1;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
eXST1_1._K_A = 80.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[81] = 80.0;
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
eXST1_1._K_a._k = eXST1_1.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[84] = data->simulationInfo->realParameter[81];
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
eXST1_1._T_A = 0.05
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[87] = 0.05;
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
eXST1_1._Vm1._T = eXST1_1.T_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[102] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
eXST1_1._Vm1._T_mod = if eXST1_1.Vm1.T < 1e-15 then 1000.0 else eXST1_1.Vm1.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  modelica_boolean tmp1;
  tmp1 = Less(data->simulationInfo->realParameter[102],1e-15);
  data->simulationInfo->realParameter[103] = (tmp1?1000.0:data->simulationInfo->realParameter[102]);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
eXST1_1._Vm1._K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[101] = 1.0;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
eXST1_1._limiter._limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->booleanParameter[46] = 1;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
eXST1_1._limiter._strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->booleanParameter[47] = 0;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
eXST1_1._V_IMIN = -10.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[97] = -10.0;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
eXST1_1._limiter._uMin = eXST1_1.V_IMIN
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[130] = data->simulationInfo->realParameter[97];
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
eXST1_1._V_IMAX = 10.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[96] = 10.0;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
eXST1_1._limiter._uMax = eXST1_1.V_IMAX
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[129] = data->simulationInfo->realParameter[96];
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
eXST1_1._T_C = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[89] = 0.1;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._T1 = eXST1_1.T_C
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[114] = data->simulationInfo->realParameter[89];
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
eXST1_1._T_B = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[88] = 1.0;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._T2 = eXST1_1.T_B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[115] = data->simulationInfo->realParameter[88];
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._T2_dummy = if abs(eXST1_1.imLeadLag.T1 - eXST1_1.imLeadLag.T2) < 1e-15 then 1000.0 else eXST1_1.imLeadLag.T2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  modelica_boolean tmp2;
  tmp2 = Less(fabs(data->simulationInfo->realParameter[114] - data->simulationInfo->realParameter[115]),1e-15);
  data->simulationInfo->realParameter[116] = (tmp2?1000.0:data->simulationInfo->realParameter[115]);
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._a[1] = eXST1_1.imLeadLag.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[117] = data->simulationInfo->realParameter[116];
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[118] = 1.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._a_end = if eXST1_1.imLeadLag.TF.a[2] > 1e-13 * sqrt(eXST1_1.imLeadLag.TF.a[1] ^ 2.0 + eXST1_1.imLeadLag.TF.a[2] ^ 2.0) then eXST1_1.imLeadLag.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  tmp3 = data->simulationInfo->realParameter[117];
  tmp4 = data->simulationInfo->realParameter[118];
  tmp5 = Greater(data->simulationInfo->realParameter[118],(1e-13) * (sqrt((tmp3 * tmp3) + (tmp4 * tmp4))));
  data->simulationInfo->realParameter[119] = (tmp5?data->simulationInfo->realParameter[118]:1.0);
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[113] = 1.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._b[1] = eXST1_1.imLeadLag.K * eXST1_1.imLeadLag.T1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[120] = (data->simulationInfo->realParameter[113]) * (data->simulationInfo->realParameter[114]);
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._bb[1] = eXST1_1.imLeadLag.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[122] = data->simulationInfo->realParameter[120];
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._d = eXST1_1.imLeadLag.TF.bb[1] / eXST1_1.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[124] = DIVISION_SIM(data->simulationInfo->realParameter[122],data->simulationInfo->realParameter[117],"eXST1_1.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._b[2] = eXST1_1.imLeadLag.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[121] = data->simulationInfo->realParameter[113];
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._bb[2] = eXST1_1.imLeadLag.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[123] = data->simulationInfo->realParameter[121];
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->integerParameter[5] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->integerParameter[4] = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->integerParameter[2] = 4;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
eXST1_1._K_F = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[83] = 0.1;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
eXST1_1._K_C = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[82] = 0.2;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
eXST1_1._V_RMIN = -3.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[100] = -3.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
eXST1_1._V_RMAX = 8.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[99] = 8.0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
eXST1_1._DiffV._k2 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[78] = -1.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
eXST1_1._DiffV._k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[77] = 1.0;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
const._k = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[34] = 0.0;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
gENROE._Xppq = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[209] = 0.2;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
gENROE._Xl = 0.12
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[205] = 0.12;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
gENROE._Xpq = 0.6
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[210] = 0.6;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
gENROE._K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[177] = DIVISION_SIM(data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[209],data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205],"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
gENROE._K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[175] = DIVISION_SIM(data->simulationInfo->realParameter[209] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205],"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
gENROE._Xpd = 0.41
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[206] = 0.41;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
gENROE._Xppd = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[208] = 0.2;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
gENROE._K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[176] = DIVISION_SIM(data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[208],data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[205],"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
gENROE._K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[174] = DIVISION_SIM(data->simulationInfo->realParameter[208] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[205],"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
gENROE._K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[173] = (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * (DIVISION_SIM(data->simulationInfo->realParameter[209] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[209],"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
gENROE._Xq = 1.75
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->realParameter[211] = 1.75;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
gENROE._K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205];
  data->simulationInfo->realParameter[171] = (data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[209]) * (DIVISION_SIM(data->simulationInfo->realParameter[211] - data->simulationInfo->realParameter[210],(tmp6 * tmp6),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
gENROE._K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[172] = (data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[205]) * (DIVISION_SIM(data->simulationInfo->realParameter[208] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[208],"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
gENROE._Xd = 1.84
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[204] = 1.84;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
gENROE._K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[205];
  data->simulationInfo->realParameter[170] = (data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[208]) * (DIVISION_SIM(data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[206],(tmp7 * tmp7),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
gENROE._PSIpp0_dq._im = -0.4418365415628956
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[184] = -0.4418365415628956;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
gENROE._PSIppq0 = gENROE.PSIpp0_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[187] = data->simulationInfo->realParameter[184];
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
gENROE._I_dq._re = 0.3177807746702022
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[165] = 0.3177807746702022;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
gENROE._iq0 = gENROE.I_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[228] = data->simulationInfo->realParameter[165];
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
gENROE._PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[188] = data->simulationInfo->realParameter[187] - ((data->simulationInfo->realParameter[209]) * (data->simulationInfo->realParameter[228]));
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
gENROE._PSIpp0_dq._re = 0.9126687000122171
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[185] = 0.9126687000122171;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
gENROE._PSIppd0 = gENROE.PSIpp0_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[186] = data->simulationInfo->realParameter[185];
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
gENROE._I_dq._im = 0.248896193836464
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[164] = 0.248896193836464;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
gENROE._id0 = gENROE.I_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[226] = data->simulationInfo->realParameter[164];
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
gENROE._PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[179] = data->simulationInfo->realParameter[186] - ((data->simulationInfo->realParameter[208]) * (data->simulationInfo->realParameter[226]));
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENROE._PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[181] = DIVISION_SIM((data->simulationInfo->realParameter[210] - data->simulationInfo->realParameter[205]) * ((data->simulationInfo->realParameter[175]) * (data->simulationInfo->realParameter[228])) - data->simulationInfo->realParameter[187],data->simulationInfo->realParameter[175] + data->simulationInfo->realParameter[177],"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENROE._PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[180] = DIVISION_SIM(data->simulationInfo->realParameter[186] + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[206]) * ((data->simulationInfo->realParameter[174]) * (data->simulationInfo->realParameter[226])),data->simulationInfo->realParameter[174] + data->simulationInfo->realParameter[176],"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENROE._Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[161] = data->simulationInfo->realParameter[181] + (data->simulationInfo->realParameter[205] - data->simulationInfo->realParameter[210]) * (data->simulationInfo->realParameter[228]);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
gENROE._Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[162] = data->simulationInfo->realParameter[180] + (data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[205]) * (data->simulationInfo->realParameter[226]);
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
gENROE._Xpp = gENROE.Xppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[207] = data->simulationInfo->realParameter[208];
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENROE._S10 = 0.11
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[194] = 0.11;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENROE._S12 = 0.39
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[195] = 0.39;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENROE._PSIpp0._re = 1.00266857371347
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[183] = 1.00266857371347;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
gENROE._PSIpp0._im = 0.1511271541770246
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[182] = 0.1511271541770246;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENROE._abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp8 = data->simulationInfo->realParameter[183];
  tmp9 = data->simulationInfo->realParameter[182];
  tmp10 = (tmp8 * tmp8) + (tmp9 * tmp9);
  if(!(tmp10 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp10);
  }
  data->simulationInfo->realParameter[215] = sqrt(tmp10);
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENROE._dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[223] = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[215], data->simulationInfo->realParameter[194], data->simulationInfo->realParameter[195], 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENROE._efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xpd - gENROE.Xpp + gENROE.Xd - gENROE.Xpd)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[224] = (data->simulationInfo->realParameter[186]) * (1.0 + data->simulationInfo->realParameter[223]) + (data->simulationInfo->realParameter[226]) * (data->simulationInfo->realParameter[206] - data->simulationInfo->realParameter[207] + data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[206]);
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENROE._R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[191] = 0.0;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENROE._P_0 = 40000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[189] = 40000000.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
gENROE._M_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[178] = 100000000.0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENROE._p0 = gENROE.P_0 / gENROE.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[230] = DIVISION_SIM(data->simulationInfo->realParameter[189],data->simulationInfo->realParameter[178],"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
gENROE._pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  modelica_real tmp11;
  modelica_real tmp12;
  tmp11 = data->simulationInfo->realParameter[228];
  tmp12 = data->simulationInfo->realParameter[226];
  data->simulationInfo->realParameter[231] = data->simulationInfo->realParameter[230] + (data->simulationInfo->realParameter[191]) * ((tmp11 * tmp11) + (tmp12 * tmp12));
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
gENROE._uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[234] = data->simulationInfo->realParameter[186] + ((-data->simulationInfo->realParameter[208])) * (data->simulationInfo->realParameter[226]) - ((data->simulationInfo->realParameter[191]) * (data->simulationInfo->realParameter[228]));
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
gENROE._ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[233] = (data->simulationInfo->realParameter[209]) * (data->simulationInfo->realParameter[228]) + (-data->simulationInfo->realParameter[187]) - ((data->simulationInfo->realParameter[191]) * (data->simulationInfo->realParameter[226]));
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
gENROE._DQ_dq._im = -0.5650202843208616
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[159] = -0.5650202843208616;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
gENROE._DQ_dq._re = 0.825077013560536
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[160] = 0.825077013560536;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
gENROE._ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[217] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[182], data->simulationInfo->realParameter[183], 0.0);
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
gENROE._It._re = 0.4028250107397031
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[169] = 0.4028250107397031;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
gENROE._It._im = -0.02580594464131273
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[168] = -0.02580594464131273;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
gENROE._ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[216] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[168], data->simulationInfo->realParameter[169], 0.0);
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
gENROE._ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[218] = data->simulationInfo->realParameter[217] - data->simulationInfo->realParameter[216];
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENROE._a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[214] = (data->simulationInfo->realParameter[215]) * (1.0 + (data->simulationInfo->realParameter[223]) * (DIVISION_SIM(data->simulationInfo->realParameter[211] - data->simulationInfo->realParameter[205],data->simulationInfo->realParameter[204] - data->simulationInfo->realParameter[205],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
gENROE._b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[169];
  tmp14 = data->simulationInfo->realParameter[168];
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[221] = (sqrt(tmp15)) * (data->simulationInfo->realParameter[207] - data->simulationInfo->realParameter[211]);
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
gENROE._delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[222] = atan((data->simulationInfo->realParameter[221]) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[218]),(data->simulationInfo->realParameter[221]) * (sin(data->simulationInfo->realParameter[218])) - data->simulationInfo->realParameter[214],"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[217];
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
gENROE._Is._im = -5.013342868567351
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[166] = -5.013342868567351;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
gENROE._Is._re = 0.7556357708851228
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[167] = 0.7556357708851228;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
gENROE._S._im = 0.05416582
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[192] = 0.05416582;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
gENROE._S._re = 0.4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[193] = 0.4;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
gENROE._VT._im = 0.07056215202908395
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[201] = 0.07056215202908395;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
gENROE._VT._re = 0.9975073847852077
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[202] = 0.9975073847852077;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
gENROE._Zs._im = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[212] = 0.2;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
gENROE._Zs._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[213] = 0.0;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
gENROE._Tpq0 = 0.9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[200] = 0.9;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
gENROE._Q_0 = 5416582.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[190] = 5416582.0;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
gENROE._q0 = gENROE.Q_0 / gENROE.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[232] = DIVISION_SIM(data->simulationInfo->realParameter[190],data->simulationInfo->realParameter[178],"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
SysData._S_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[32] = 100000000.0;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
gENROE._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[196] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
gENROE._CoB = gENROE.M_b / gENROE.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[157] = DIVISION_SIM(data->simulationInfo->realParameter[178],data->simulationInfo->realParameter[196],"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
gENROE._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[235] = 1.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
gENROE._angle_0 = 4.046276
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[219] = 4.046276;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
gENROE._angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[220] = (0.0174532925199433) * (data->simulationInfo->realParameter[219]);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
gENROE._vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[237] = (data->simulationInfo->realParameter[235]) * (cos(data->simulationInfo->realParameter[220]));
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
gENROE._vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[236] = (data->simulationInfo->realParameter[235]) * (sin(data->simulationInfo->realParameter[220]));
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
gENROE._ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[237];
  tmp17 = data->simulationInfo->realParameter[236];
  data->simulationInfo->realParameter[227] = DIVISION_SIM((data->simulationInfo->realParameter[157]) * ((data->simulationInfo->realParameter[232]) * (data->simulationInfo->realParameter[237]) - ((data->simulationInfo->realParameter[230]) * (data->simulationInfo->realParameter[236]))),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
gENROE._ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[237];
  tmp19 = data->simulationInfo->realParameter[236];
  data->simulationInfo->realParameter[229] = ((-data->simulationInfo->realParameter[157])) * (DIVISION_SIM((data->simulationInfo->realParameter[230]) * (data->simulationInfo->realParameter[237]) + (data->simulationInfo->realParameter[232]) * (data->simulationInfo->realParameter[236]),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
SysData._fn = 50.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[33] = 50.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
gENROE._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[225] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENROE._w_b = 6.283185307179586 * gENROE.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->realParameter[238] = (6.283185307179586) * (data->simulationInfo->realParameter[225]);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
gENROE._D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[158] = 0.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
gENROE._H = 4.28
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[163] = 4.28;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
gENROE._Tppq0 = 0.09
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[199] = 0.09;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
gENROE._Tppd0 = 0.07000000000000001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[198] = 0.07000000000000001;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
gENROE._Tpd0 = 5.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[197] = 5.0;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
gENROE._enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->booleanParameter[63] = 0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
gENROE._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->booleanParameter[57] = 0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
gENROE._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->booleanParameter[62] = 1;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
gENROE._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->booleanParameter[65] = 1;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
gENROE._enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->booleanParameter[59] = 1;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
gENROE._enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->booleanParameter[58] = 1;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
gENROE._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->booleanParameter[64] = 0;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
gENROE._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->booleanParameter[61] = 0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
gENROE._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[203] = 400000.0;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
gENROE._enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->booleanParameter[60] = 1;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
FAULT._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[4] = 0.0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
FAULT._angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->realParameter[5] = (0.0174532925199433) * (data->simulationInfo->realParameter[4]);
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
FAULT._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->booleanParameter[6] = 1;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
FAULT._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->booleanParameter[0] = 0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
FAULT._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->booleanParameter[5] = 1;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
FAULT._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->booleanParameter[8] = 1;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
FAULT._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[7] = 1.0;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
FAULT._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->booleanParameter[2] = 0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
FAULT._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->realParameter[1] = 0.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
FAULT._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->booleanParameter[1] = 0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
FAULT._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[0] = 1000000.0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
FAULT._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->booleanParameter[7] = 0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
FAULT._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
FAULT._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->booleanParameter[4] = 0;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
FAULT._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->realParameter[3] = 400000.0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
FAULT._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->booleanParameter[3] = 0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
FAULT._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
GEN2._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->realParameter[20] = 0.0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
GEN2._angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->realParameter[21] = (0.0174532925199433) * (data->simulationInfo->realParameter[20]);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
GEN2._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->booleanParameter[24] = 1;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
GEN2._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->booleanParameter[18] = 0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
GEN2._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->booleanParameter[23] = 1;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
GEN2._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->booleanParameter[26] = 1;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
GEN2._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->realParameter[23] = 1.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
GEN2._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->booleanParameter[20] = 0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
GEN2._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->realParameter[17] = 0.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
GEN2._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->booleanParameter[19] = 0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
GEN2._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->realParameter[16] = 1000000.0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
GEN2._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->booleanParameter[25] = 0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
GEN2._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
GEN2._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->booleanParameter[22] = 0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
GEN2._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[19] = 400000.0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
GEN2._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->booleanParameter[21] = 0;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
GEN2._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
LOAD._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->realParameter[28] = 0.0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
LOAD._angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->realParameter[29] = (0.0174532925199433) * (data->simulationInfo->realParameter[28]);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
LOAD._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->booleanParameter[33] = 1;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
LOAD._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->booleanParameter[27] = 0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
LOAD._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->booleanParameter[32] = 1;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
LOAD._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->booleanParameter[35] = 1;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
LOAD._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[31] = 1.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
LOAD._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->booleanParameter[29] = 0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
LOAD._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[25] = 0.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
LOAD._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->booleanParameter[28] = 0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
LOAD._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[24] = 1000000.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
LOAD._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->simulationInfo->booleanParameter[34] = 0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
LOAD._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
LOAD._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->booleanParameter[31] = 0;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
LOAD._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[27] = 400000.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
LOAD._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->booleanParameter[30] = 0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
LOAD._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
GEN1._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->realParameter[12] = 0.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
GEN1._angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->realParameter[13] = (0.0174532925199433) * (data->simulationInfo->realParameter[12]);
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
GEN1._enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->booleanParameter[15] = 1;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
GEN1._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->booleanParameter[9] = 0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
GEN1._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->booleanParameter[14] = 1;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
GEN1._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->booleanParameter[17] = 1;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
GEN1._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->realParameter[15] = 1.0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
GEN1._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->booleanParameter[11] = 0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
GEN1._Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->simulationInfo->realParameter[9] = 0.0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
GEN1._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->simulationInfo->booleanParameter[10] = 0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
GEN1._P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->realParameter[8] = 1000000.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
GEN1._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->booleanParameter[16] = 0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
GEN1._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->realParameter[14] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
GEN1._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->booleanParameter[13] = 0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
GEN1._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->realParameter[11] = 400000.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
GEN1._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->booleanParameter[12] = 0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
GEN1._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
pwFault._R = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->realParameter[239] = 0.0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
pwFault._X = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[240] = 0.0;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
pwFault._ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[239]),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[240]),1e-15);
  data->simulationInfo->booleanParameter[66] = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
pwFault._t2 = 2.15
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[242] = 2.15;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
pwFault._t1 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->realParameter[241] = 2.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
constantLoad._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[45] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
constantLoad._v_0 = 0.9919935
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[73] = 0.9919935;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
constantLoad._S_p._re = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[49] = 50000000.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
constantLoad._S_i._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[47] = 0.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
constantLoad._S_y._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[51] = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
constantLoad._p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[70] = DIVISION_SIM((data->simulationInfo->realParameter[47]) * (data->simulationInfo->realParameter[73]) + (data->simulationInfo->realParameter[51]) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[49],data->simulationInfo->realParameter[45],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
constantLoad._S_p._im = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->realParameter[48] = 10000000.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
constantLoad._S_i._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->realParameter[46] = 0.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
constantLoad._S_y._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->realParameter[50] = 0.0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
constantLoad._q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[71] = DIVISION_SIM((data->simulationInfo->realParameter[46]) * (data->simulationInfo->realParameter[73]) + (data->simulationInfo->realParameter[50]) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[48],data->simulationInfo->realParameter[45],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
constantLoad._d_P = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->realParameter[64] = 0.0;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
constantLoad._PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[35] = ((data->simulationInfo->realParameter[71] == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[70],data->simulationInfo->realParameter[71],"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
constantLoad._d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->realParameter[65] = DIVISION_SIM(data->simulationInfo->realParameter[70] + data->simulationInfo->realParameter[64],data->simulationInfo->realParameter[35],"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[71];
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
constantLoad._d_t = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[66] = 0.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
constantLoad._t1 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->realParameter[72] = 0.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
constantLoad._wp = 3.964
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[76] = 3.964;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
constantLoad._b1 = 0.1389
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->realParameter[62] = 0.1389;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
constantLoad._a1 = -0.4999
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[56] = -0.4999;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
constantLoad._a0 = 0.4881
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[55] = 0.4881;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
constantLoad._b2 = 1.769
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[63] = 1.769;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
constantLoad._a2 = 1.502
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[57] = 1.502;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
constantLoad._S_Y._im = 0.1016207385868717
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[43] = 0.1016207385868717;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
constantLoad._S_Y._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->realParameter[44] = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
constantLoad._S_I._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[39] = 0.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
constantLoad._S_I._re = 0.5040355607168797
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[40] = 0.5040355607168797;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
constantLoad._S_P._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[41] = 0.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
constantLoad._S_P._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[42] = 0.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
constantLoad._angle_0 = -0.5762684
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[58] = -0.5762684;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
constantLoad._angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->realParameter[59] = (0.0174532925199433) * (data->simulationInfo->realParameter[58]);
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
constantLoad._vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->realParameter[75] = (data->simulationInfo->realParameter[73]) * (cos(data->simulationInfo->realParameter[59]));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
constantLoad._vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[74] = (data->simulationInfo->realParameter[73]) * (sin(data->simulationInfo->realParameter[59]));
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
constantLoad._ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[75];
  tmp26 = data->simulationInfo->realParameter[74];
  data->simulationInfo->realParameter[68] = DIVISION_SIM((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[74]) - ((data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[75])),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
constantLoad._ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[75];
  tmp28 = data->simulationInfo->realParameter[74];
  data->simulationInfo->realParameter[69] = DIVISION_SIM((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[75]) + (data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[74]),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
constantLoad._characteristic = 2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
constantLoad._PQBRAK = 0.7
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->realParameter[36] = 0.7;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
constantLoad._b._im = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->realParameter[60] = 1.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
constantLoad._b._re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->realParameter[61] = 0.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
constantLoad._a._im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[53] = 0.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
constantLoad._a._re = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->realParameter[54] = 1.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
constantLoad._enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->booleanParameter[42] = 0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
constantLoad._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->booleanParameter[36] = 0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
constantLoad._enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->simulationInfo->booleanParameter[41] = 1;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
constantLoad._enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->booleanParameter[44] = 1;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
constantLoad._enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->booleanParameter[38] = 1;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
constantLoad._Q_0 = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->realParameter[38] = 10000000.0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
constantLoad._enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->booleanParameter[37] = 1;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
constantLoad._P_0 = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->realParameter[37] = 50000000.0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
constantLoad._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->booleanParameter[43] = 0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
constantLoad._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->realParameter[67] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
constantLoad._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->booleanParameter[40] = 0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
constantLoad._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[52] = 400000.0;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
constantLoad._enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->booleanParameter[39] = 1;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS._R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[137] = 0.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENCLS._X_d = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[140] = 0.2;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
gENCLS._v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->realParameter[151] = 1.0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gENCLS._angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[141] = 0.0;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
gENCLS._angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->realParameter[142] = (0.0174532925199433) * (data->simulationInfo->realParameter[141]);
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
gENCLS._vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[156] = (data->simulationInfo->realParameter[151]) * (cos(data->simulationInfo->realParameter[142]));
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
gENCLS._vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->realParameter[154] = (data->simulationInfo->realParameter[151]) * (sin(data->simulationInfo->realParameter[142]));
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
gENCLS._P_0 = 10017110.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[135] = 10017110.0;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
gENCLS._p0 = gENCLS.P_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->realParameter[149] = DIVISION_SIM(data->simulationInfo->realParameter[135],data->simulationInfo->realParameter[134],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
gENCLS._Q_0 = 8006544.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->realParameter[136] = 8006544.0;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
gENCLS._q0 = gENCLS.Q_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->realParameter[150] = DIVISION_SIM(data->simulationInfo->realParameter[136],data->simulationInfo->realParameter[134],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
gENCLS._ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[156];
  tmp30 = data->simulationInfo->realParameter[154];
  data->simulationInfo->realParameter[148] = DIVISION_SIM((data->simulationInfo->realParameter[149]) * (data->simulationInfo->realParameter[156]) + (data->simulationInfo->realParameter[150]) * (data->simulationInfo->realParameter[154]),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
gENCLS._ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[156];
  tmp32 = data->simulationInfo->realParameter[154];
  data->simulationInfo->realParameter[146] = DIVISION_SIM((data->simulationInfo->realParameter[149]) * (data->simulationInfo->realParameter[154]) - ((data->simulationInfo->realParameter[150]) * (data->simulationInfo->realParameter[156])),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
gENCLS._delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->realParameter[143] = atan2(data->simulationInfo->realParameter[154] + (data->simulationInfo->realParameter[137]) * (data->simulationInfo->realParameter[146]) + (data->simulationInfo->realParameter[140]) * (data->simulationInfo->realParameter[148]), data->simulationInfo->realParameter[156] + (data->simulationInfo->realParameter[137]) * (data->simulationInfo->realParameter[148]) - ((data->simulationInfo->realParameter[140]) * (data->simulationInfo->realParameter[146])));
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
gENCLS._vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[155] = (data->simulationInfo->realParameter[156]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[143])) + (data->simulationInfo->realParameter[154]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[143]));
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
gENCLS._id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[145] = (data->simulationInfo->realParameter[148]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[143])) - ((data->simulationInfo->realParameter[146]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[143])));
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
gENCLS._iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[147] = (data->simulationInfo->realParameter[148]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[143])) + (data->simulationInfo->realParameter[146]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[143]));
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
gENCLS._vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[153] = data->simulationInfo->realParameter[155] + (data->simulationInfo->realParameter[137]) * (data->simulationInfo->realParameter[147]) + (data->simulationInfo->realParameter[140]) * (data->simulationInfo->realParameter[145]);
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
gENCLS._vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[152] = (data->simulationInfo->realParameter[156]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[143])) - ((data->simulationInfo->realParameter[154]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[143])));
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
gENCLS._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[138] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
gENCLS._CoB = gENCLS.M_b / gENCLS.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[131] = DIVISION_SIM(data->simulationInfo->realParameter[134],data->simulationInfo->realParameter[138],"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
gENCLS._D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->realParameter[132] = 0.0;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
gENCLS._H = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[133] = 0.0;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
gENCLS._enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->booleanParameter[54] = 0;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
gENCLS._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->booleanParameter[48] = 0;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
gENCLS._enableangle_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->simulationInfo->booleanParameter[53] = 0;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
gENCLS._enablev_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->booleanParameter[56] = 0;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
gENCLS._enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->simulationInfo->booleanParameter[50] = 0;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
gENCLS._enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->booleanParameter[49] = 0;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
gENCLS._enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->booleanParameter[55] = 0;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
gENCLS._fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[144] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
gENCLS._enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->booleanParameter[52] = 0;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
gENCLS._V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[139] = 400000.0;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
gENCLS._enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->simulationInfo->booleanParameter[51] = 0;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
pwLine4._X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[280] = 0.1;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
pwLine4._Z._im = pwLine4.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[283] = data->simulationInfo->realParameter[280];
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
pwLine4._R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[278] = 0.0005;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
pwLine4._Z._re = pwLine4.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[284] = data->simulationInfo->realParameter[278];
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
pwLine4._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[276] = 0.0;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
pwLine4._Y._im = pwLine4.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[281] = data->simulationInfo->realParameter[276];
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
pwLine4._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->realParameter[277] = 0.0;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
pwLine4._Y._re = pwLine4.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[282] = data->simulationInfo->realParameter[277];
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
pwLine4._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->booleanParameter[70] = 0;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
pwLine4._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->integerParameter[9] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine4._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->realParameter[286] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine4._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->realParameter[285] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pwLine4._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[279] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
pwLine3._X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[269] = 0.1;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
pwLine3._Z._im = pwLine3.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[272] = data->simulationInfo->realParameter[269];
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pwLine3._R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[267] = 0.0005;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
pwLine3._Z._re = pwLine3.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[273] = data->simulationInfo->realParameter[267];
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
pwLine3._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[265] = 0.0;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
pwLine3._Y._im = pwLine3.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[270] = data->simulationInfo->realParameter[265];
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pwLine3._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->realParameter[266] = 0.0;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwLine3._Y._re = pwLine3.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[271] = data->simulationInfo->realParameter[266];
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
pwLine3._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->booleanParameter[69] = 0;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
pwLine3._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->integerParameter[8] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
pwLine3._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[275] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
pwLine3._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[274] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine3._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[268] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine1._X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[258] = 0.2;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
pwLine1._Z._im = pwLine1.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[261] = data->simulationInfo->realParameter[258];
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
pwLine1._R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[256] = 0.001;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
pwLine1._Z._re = pwLine1.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[262] = data->simulationInfo->realParameter[256];
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
pwLine1._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[254] = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
pwLine1._Y._im = pwLine1.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[259] = data->simulationInfo->realParameter[254];
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
pwLine1._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[255] = 0.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
pwLine1._Y._re = pwLine1.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->realParameter[260] = data->simulationInfo->realParameter[255];
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
pwLine1._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->booleanParameter[68] = 0;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
pwLine1._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->integerParameter[7] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
pwLine1._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->realParameter[264] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
pwLine1._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->realParameter[263] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
pwLine1._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[257] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
pwLine._X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[247] = 0.2;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
pwLine._Z._im = pwLine.X
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->realParameter[250] = data->simulationInfo->realParameter[247];
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
pwLine._R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[245] = 0.001;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
pwLine._Z._re = pwLine.R
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[251] = data->simulationInfo->realParameter[245];
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
pwLine._B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[243] = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
pwLine._Y._im = pwLine.B
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[248] = data->simulationInfo->realParameter[243];
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
pwLine._G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->realParameter[244] = 0.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
pwLine._Y._re = pwLine.G
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[249] = data->simulationInfo->realParameter[244];
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
pwLine._displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->booleanParameter[67] = 0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
pwLine._opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->integerParameter[6] = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
pwLine._t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[253] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
pwLine._t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[252] = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
pwLine._S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[246] = data->simulationInfo->realParameter[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_660(DATA *data, threadData_t *threadData);

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

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_534(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_535(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_536(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_537(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_538(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_539(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_540(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_541(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_542(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_543(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_544(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_545(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_546(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_547(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_548(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_549(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_550(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_551(DATA*, threadData_t*);
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
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_591(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_590(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_589(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_588(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_587(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_586(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_585(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_584(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_583(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_582(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_581(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_580(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_579(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_578(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_577(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_576(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_575(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_574(DATA*, threadData_t*);
/*
equation index: 604
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine3._ir._re, pwLine4._is._re, pwLine3._ir._im, pwLine4._is._im, pwLine._ir._re, pwLine1._is._re, pwLine._ir._im, pwLine1._is._im, constantLoad._p._ii, constantLoad._p._ir, pwLine4._ir._im, pwLine1._ir._re, gENCLS._iq, gENCLS._id, gENROE._Epq, gENROE._Epd, gENROE._PSIppq, gENROE._PSIppd, gENROE._iq, gENROE._id, pwLine._vs._im, pwLine._vs._re, pwLine1._vr._re, pwLine1._vr._im, eXST1_1._XADIFD, eXST1_1._TransducerDelay._y_start, pwLine3._vr._im, pwLine1._vs._im, pwLine1._vs._re, pwLine3._vr._re}
eqns: {534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 603, 602, 601, 600, 599, 598, 597, 596, 595, 594, 593, 592, 591, 590, 589, 588, 587, 586, 585, 584, 583, 582, 581, 580, 579, 578, 577, 576, 575, 574}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 604 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[127] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[139] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[126] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[138] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[105] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[117] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[104] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[116] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[52] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[136] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[115] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[75] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[74] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[87] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[86] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[95] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[94] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[108] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[109] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[119] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[118] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[95];
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->localData[0]->realVars[130] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = data->localData[0]->realVars[131] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,604};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 604 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[127] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[139] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[126] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[138] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[105] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[117] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[104] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[116] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[115] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[94] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[63] /* eXST1_1.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->simulationInfo->realParameter[95] = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_97(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_101(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_827(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_822(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_782(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_814(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_135(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_136(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_141(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_142(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
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

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_660(data, threadData);

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

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_667(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_21(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_23(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_24(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_25(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_604(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_97(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_804(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_99(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_101(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_104(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_829(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_830(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_831(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_828(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_827(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_826(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_825(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_822(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_811(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_783(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_782(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_824(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_823(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_813(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_814(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_810(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_135(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_136(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_806(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_805(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_141(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_142(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_661(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_662(data, threadData);
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

