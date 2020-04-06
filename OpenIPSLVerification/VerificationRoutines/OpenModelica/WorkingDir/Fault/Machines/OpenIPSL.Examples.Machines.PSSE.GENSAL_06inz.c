/* Initialization */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_11mix.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Machines_PSSE_GENSAL_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS._omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[50] /* gENCLS.omega variable */ = data->modelData->realVarsData[50].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1._p._ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[27] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1._p._ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[26] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD._p._ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[35] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD._p._ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[34] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2._p._ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[31] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2._p._ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[30] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT._p._ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[23] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT._p._ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[22] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENCLS._delta = $START.gENCLS.delta
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
gENCLS._eq = $START.gENCLS.eq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gENSAL._w = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* gENSAL.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_113(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
gENSAL._delta = gENSAL.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */ = data->simulationInfo->realParameter[156];
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
der(gENSAL._PSIppq) = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[11] /* der(gENSAL.PSIppq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
der(gENSAL._PSIkd) = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[10] /* der(gENSAL.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
der(gENSAL._Epq) = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[9] /* der(gENSAL.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENSAL._ISORCE = gENSAL.efd0 - $DER.gENSAL.Epq * gENSAL.Tpd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[57] /* gENSAL.ISORCE variable */ = data->simulationInfo->realParameter[158] - ((data->localData[0]->realVars[9] /* der(gENSAL.Epq) STATE_DER */) * (data->simulationInfo->realParameter[138]));
  TRACE_POP
}

void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_44(DATA*, threadData_t*);
/*
equation index: 68
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine._ir._re, pwLine1._is._re, pwLine._ir._im, pwLine1._is._im, pwLine3._is._im, pwLine3._is._re, pwLine4._is._re, pwLine3._ir._re, pwLine4._is._im, pwLine3._ir._im, pwLine4._ir._re, pwLine1._ir._im, gENCLS._id, gENCLS._iq, pwLine1._vr._re, pwLine1._vr._im, gENSAL._Epq, gENSAL._uq, gENSAL._id, gENSAL._iq, pwLine1._vs._re, pwLine1._vs._im, pwLine3._vr._im, pwLine3._vr._re}
eqns: {19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44}
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 68 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[78] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[90] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[77] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[89] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[101] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[102] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[112] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[100] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[111] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[99] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[110] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[87] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[48] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[49] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[92] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[91] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[70] /* gENSAL.uq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[67] /* gENSAL.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[68] /* gENSAL.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[94] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[93] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[103] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[104] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,68};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 68 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[78] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[90] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[77] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[89] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[101] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[102] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[112] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[111] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[70] /* gENSAL.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[67] /* gENSAL.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[68] /* gENSAL.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_234(DATA *data, threadData_t *threadData);


/*
equation index: 70
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[33] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[93] /* pwLine1.vs.im variable */, data->localData[0]->realVars[94] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_235(DATA *data, threadData_t *threadData);


/*
equation index: 72
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[21] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[103] /* pwLine3.vr.im variable */, data->localData[0]->realVars[104] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_214(DATA *data, threadData_t *threadData);


/*
equation index: 74
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[29] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[91] /* pwLine1.vr.im variable */, data->localData[0]->realVars[92] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_213(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_212(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_211(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_210(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_240(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_239(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_244(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_243(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_242(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_241(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_218(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_217(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_230(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_227(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_226(DATA *data, threadData_t *threadData);


/*
equation index: 100
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[25] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[81] /* pwLine.vs.im variable */, data->localData[0]->realVars[82] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_237(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_238(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_232(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_233(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_223(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_224(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_110(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_111(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENSAL_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_113(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_68(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_70(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_72(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_214(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_74(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_246(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_213(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_212(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_211(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_210(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_240(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_239(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_244(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_243(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_242(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_241(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_218(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_217(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_230(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_229(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_227(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_225(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_226(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_100(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_237(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_238(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_232(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_233(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_224(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_110(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_111(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENSAL_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[50] /* gENCLS.omega variable */;
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

