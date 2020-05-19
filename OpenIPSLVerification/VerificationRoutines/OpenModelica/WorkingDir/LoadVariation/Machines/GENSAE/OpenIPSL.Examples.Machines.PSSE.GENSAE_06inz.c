/* Initialization */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_11mix.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[50] /* gENCLS.omega variable */ = data->modelData->realVarsData[50].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[27] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[26] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[35] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[34] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[31] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[30] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[23] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[22] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gENSAE.w = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* gENSAE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
gENSAE.delta = gENSAE.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */ = data->simulationInfo->realParameter[162] /* gENSAE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$DER.gENSAE.PSIppq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[11] /* der(gENSAE.PSIppq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$DER.gENSAE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[10] /* der(gENSAE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$DER.gENSAE.Epq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[9] /* der(gENSAE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENSAE.ISORCE = gENSAE.efd0 - $DER.gENSAE.Epq * gENSAE.Tpd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[57] /* gENSAE.ISORCE variable */ = data->simulationInfo->realParameter[164] /* gENSAE.efd0 PARAM */ - ((data->localData[0]->realVars[9] /* der(gENSAE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[140] /* gENSAE.Tpd0 PARAM */));
  TRACE_POP
}

void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_44(DATA*, threadData_t*);
/*
equation index: 69
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.im, pwLine1.is.im, pwLine.ir.re, constantLoad.p.ir, constantLoad.p.ii, pwLine3.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine4.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENSAE.Epq, gENSAE.ud, gENSAE.PSIppd, gENSAE.iq, gENSAE.id, pwLine1.vr.re, pwLine1.vr.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.re, pwLine1.vs.im}
eqns: {19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44}
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 69 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[78] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[90] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[79] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[103] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[112] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[100] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[113] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[101] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[111] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[88] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[108] /* gENSAE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[173] /* gENSAE.ud0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[129] /* gENSAE.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[168] /* gENSAE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[166] /* gENSAE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,69};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 69 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[78] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[90] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[79] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[103] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[112] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[113] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[70] /* gENSAE.ud variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[69] /* gENSAE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[68] /* gENSAE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_215(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_214(DATA *data, threadData_t *threadData);


/*
equation index: 72
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[21] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[104] /* pwLine3.vr.im variable */, data->localData[0]->realVars[105] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_240(DATA *data, threadData_t *threadData);


/*
equation index: 74
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[29] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[92] /* pwLine1.vr.im variable */, data->localData[0]->realVars[93] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_254(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_244(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_243(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_212(DATA *data, threadData_t *threadData);


/*
equation index: 85
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[33] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[94] /* pwLine1.vs.im variable */, data->localData[0]->realVars[95] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_232(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_231(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_230(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_224(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_223(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_221(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_222(DATA *data, threadData_t *threadData);


/*
equation index: 97
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[25] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[82] /* pwLine.vs.im variable */, data->localData[0]->realVars[83] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_239(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_238(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_236(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_237(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_69(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_215(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_214(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_72(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_240(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_74(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_254(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_244(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_243(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_212(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_85(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_232(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_246(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_231(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_230(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_226(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_224(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_225(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_221(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_222(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_239(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_238(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_236(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_237(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_229(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

