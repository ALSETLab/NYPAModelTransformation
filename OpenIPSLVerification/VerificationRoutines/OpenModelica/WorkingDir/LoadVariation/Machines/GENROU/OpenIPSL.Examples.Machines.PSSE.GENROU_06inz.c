/* Initialization */
#include "OpenIPSL.Examples.Machines.PSSE.GENROU_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENROU_11mix.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENROU_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Machines_PSSE_GENROU_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[52] /* gENCLS.omega variable */ = data->modelData->realVarsData[52].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[29] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[28] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[37] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[36] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[33] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[32] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[25] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[24] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_10(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gENROU.w = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[7] /* gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_121(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
gENROU.delta = gENROU.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[171] /* gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[13] /* der(gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[12] /* der(gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[11] /* der(gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
gENROU.ISORCE = gENROU.efd0 - $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[59] /* gENROU.ISORCE variable */ = data->simulationInfo->realParameter[173] /* gENROU.efd0 PARAM */ - ((data->localData[0]->realVars[11] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[146] /* gENROU.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[10] /* der(gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
gENROU.XaqIlq = (-$DER.gENROU.Epd) * gENROU.Tpq0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[69] /* gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[10] /* der(gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[149] /* gENROU.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_47(DATA*, threadData_t*);
/*
equation index: 73
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.re, pwLine3.is.re, pwLine.ir.im, pwLine3.is.im, pwLine1.is.re, pwLine1.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.ir.im, pwLine4.is.im, pwLine1.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, gENROU.Epq, gENROU.Epd, gENROU.uq, gENROU.PSIppq, gENROU.iq, gENROU.id, pwLine1.vr.re, pwLine1.vr.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.im}
eqns: {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47}
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 73 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[83] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[107] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[82] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[106] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[95] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[94] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[117] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[105] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[104] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[116] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[92] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[93] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[109] /* gENROU.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[108] /* gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[183] /* gENROU.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[136] /* gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[177] /* gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[175] /* gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,73};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 73 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[83] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[107] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[82] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[106] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[95] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[94] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[117] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[105] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[104] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[116] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[92] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[93] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[50] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[51] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[75] /* gENROU.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[65] /* gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[73] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[72] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[97] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[96] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[99] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[108] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[109] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[98] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_217(DATA *data, threadData_t *threadData);


/*
equation index: 77
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[23] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[108] /* pwLine3.vr.im variable */, data->localData[0]->realVars[109] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_220(DATA *data, threadData_t *threadData);


/*
equation index: 79
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[31] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[96] /* pwLine1.vr.im variable */, data->localData[0]->realVars[97] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_254(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_255(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_256(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_224(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_223(DATA *data, threadData_t *threadData);


/*
equation index: 87
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[35] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[98] /* pwLine1.vs.im variable */, data->localData[0]->realVars[99] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_218(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_258(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_244(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_237(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_236(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_241(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_239(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_240(DATA *data, threadData_t *threadData);


/*
equation index: 105
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[27] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[86] /* pwLine.vs.im variable */, data->localData[0]->realVars[87] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_242(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_243(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_233(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_115(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_116(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENROU_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_73(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_229(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_217(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_77(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_220(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_79(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_254(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_255(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_224(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_87(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_246(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_219(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_218(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_258(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_244(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_237(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_236(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_241(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_239(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_240(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_242(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_243(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_233(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_115(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_116(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Machines_PSSE_GENROU_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENROU_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENROU_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[52] /* gENCLS.omega variable */;
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

