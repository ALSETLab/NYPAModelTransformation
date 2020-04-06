/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS._omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[56] /* gENCLS.omega variable */ = data->modelData->realVarsData[56].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
sCRX._DiffV1._y = const.k * (sCRX.DiffV1.k1 + sCRX.DiffV1.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[123] /* sCRX.DiffV1.y variable */ = (data->simulationInfo->realParameter[34]) * (data->simulationInfo->realParameter[236] + data->simulationInfo->realParameter[237]);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_145(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS._delta = $START.gENCLS.delta
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gENCLS._eq = $START.gENCLS.eq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
sCRX._Efd0 = sCRX.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[241] = data->localData[0]->realVars[125] /* sCRX.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
sCRX._negCurLogic._nstartvalue = sCRX.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[269] = data->simulationInfo->realParameter[241];
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
$START._sCRX._negCurLogic._Vd = sCRX.negCurLogic.nstartvalue
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->modelData->realVarsData[131].attribute /* sCRX.negCurLogic.Vd variable */.start = data->simulationInfo->realParameter[269];
    data->localData[0]->realVars[131] /* sCRX.negCurLogic.Vd variable */ = data->modelData->realVarsData[131].attribute /* sCRX.negCurLogic.Vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[131].info /* sCRX.negCurLogic.Vd */.name, (modelica_real) data->localData[0]->realVars[131] /* sCRX.negCurLogic.Vd variable */);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
$START._gENROE._EFD = sCRX.negCurLogic.nstartvalue
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->modelData->realVarsData[61].attribute /* gENROE.EFD variable */.start = data->simulationInfo->realParameter[269];
    data->localData[0]->realVars[61] /* gENROE.EFD variable */ = data->modelData->realVarsData[61].attribute /* gENROE.EFD variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* gENROE.EFD */.name, (modelica_real) data->localData[0]->realVars[61] /* gENROE.EFD variable */);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENROE._w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[7] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_152(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
gENROE._delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[169];
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[15] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[14] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
der(gENROE._Epq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[13] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
der(gENROE._Epd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[12] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
gENROE._XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[73] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[12] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[147]);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_58(DATA*, threadData_t*);
/*
equation index: 89
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine1._is._im, pwLine3._is._im, pwLine._ir._re, pwLine1._is._re, pwLine4._is._re, pwLine3._ir._re, pwLine3._ir._im, pwLine4._is._im, constantLoad._p._ir, constantLoad._p._ii, pwLine4._ir._im, pwLine1._ir._re, gENCLS._id, gENCLS._iq, gENROE._Epd, gENROE._PSIkd, gENROE._PSIppd, gENROE._PSIppq, gENROE._id, gENROE._iq, pwLine._vs._re, pwLine._vs._im, pwLine1._vr._re, pwLine1._vr._im, sCRX._ECOMP0, sCRX._simpleLagLim._y_start, gENROE._XADIFD, pwLine1._vs._re, pwLine1._vs._im, pwLine3._vr._re, pwLine3._vr._im}
eqns: {18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 89 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[98] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[99] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[47] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[118] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[97] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[54] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[55] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[67] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[68] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[76] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[77] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[91] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[90] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->simulationInfo->realParameter[238];
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->simulationInfo->realParameter[276];
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[72] /* gENROE.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[30] = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,89};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 89 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[98] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[67] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[68] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[76] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[77] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->simulationInfo->realParameter[238] = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->simulationInfo->realParameter[276] = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[72] /* gENROE.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[30];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_283(DATA *data, threadData_t *threadData);


/*
equation index: 91
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[31] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[90] /* pwLine.vs.im variable */, data->localData[0]->realVars[91] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_257(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_256(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_267(DATA *data, threadData_t *threadData);


/*
equation index: 97
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[35] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[100] /* pwLine1.vr.im variable */, data->localData[0]->realVars[101] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_304(DATA *data, threadData_t *threadData);


/*
equation index: 103
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[39] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[102] /* pwLine1.vs.im variable */, data->localData[0]->realVars[103] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_292(DATA *data, threadData_t *threadData);


/*
equation index: 106
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[27] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[112] /* pwLine3.vr.im variable */, data->localData[0]->realVars[113] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_282(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_278(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_275(DATA *data, threadData_t *threadData);


/*
equation index: 128
type: SIMPLE_ASSIGN
sCRX._imLeadLag._TF._x[1] = (sCRX.imLeadLag.TF.d * sCRX.V_erro.y - sCRX.imLeadLag.TF.y) / (sCRX.imLeadLag.TF.a[2] * sCRX.imLeadLag.TF.d - sCRX.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[127] /* sCRX.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[263]) * (data->localData[0]->realVars[126] /* sCRX.V_erro.y variable */) - data->localData[0]->realVars[128] /* sCRX.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[257]) * (data->simulationInfo->realParameter[263]) - data->simulationInfo->realParameter[262],"sCRX.imLeadLag.TF.a[2] * sCRX.imLeadLag.TF.d - sCRX.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
sCRX._imLeadLag._TF._x_scaled[1] = sCRX.imLeadLag.TF.x[1] * sCRX.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[8] /* sCRX.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[127] /* sCRX.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[258]);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_264(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_265(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
GEN1._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[33] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
GEN1._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[32] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
LOAD._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[41] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
LOAD._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[40] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
GEN2._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[37] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
GEN2._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[36] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
FAULT._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[29] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
FAULT._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[28] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
sCRX._booleanConstant._y = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->booleanVars[2] /* sCRX.booleanConstant.y DISCRETE */ = 0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_147(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_89(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_91(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_257(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_267(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_103(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_106(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_278(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_128(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_129(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_264(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_265(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_140(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_141(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_147(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[56] /* gENCLS.omega variable */;
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

