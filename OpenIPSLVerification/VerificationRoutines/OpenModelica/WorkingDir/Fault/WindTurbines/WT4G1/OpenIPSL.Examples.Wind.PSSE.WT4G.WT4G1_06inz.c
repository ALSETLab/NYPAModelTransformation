/* Initialization */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_11mix.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS2_1.omega = $START.gENCLS2_1.omega
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[33] /* gENCLS2_1.omega variable */ = data->modelData->realVarsData[33].attribute /* gENCLS2_1.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
wT4G1.K.local_reset = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[0] /* wT4G1.K.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
wT4G1.K.local_set = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[77] /* wT4G1.K.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[22] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[21] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[18] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[17] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[26] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[25] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENCLS2_1.delta = gENCLS2_1.delta0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */ = data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
gENCLS2_1.eq = gENCLS2_1.vf0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ = data->simulationInfo->realParameter[48] /* gENCLS2_1.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
wT4G1.K2.state = wT4G1.K2.y_start
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */ = data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
wT4G1.K.y = wT4G1.K.y_start
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */ = data->simulationInfo->realParameter[103] /* wT4G1.K.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
wT4G1.K1.state = wT4G1.K1.y_start
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */ = data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_418(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_16(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_17(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_35(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_33(DATA*, threadData_t*);
/*
equation index: 51
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine2.ir.im, pwLine1.is.im, pwLine2.ir.re, pwLine1.is.re, pwLine.is.re, pwLine.is.im, pwLine1.ir.im, pwLine.ir.re, gENCLS2_1.id, gENCLS2_1.iq, pwLine.vr.re, pwLine.vr.im, pwLine2.is.re, pwLine2.is.im, pwLine2.vs.im, pwLine1.vs.re, pwLine1.vs.im, pwLine2.vs.re}
eqns: {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33}
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 51 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[56] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[57] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[47] /* pwLine.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[46] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[54] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[45] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[31] /* gENCLS2_1.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[48] /* pwLine.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[67] /* pwLine2.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[66] /* pwLine2.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,51};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 51 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[56] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[57] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[47] /* pwLine.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[46] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[45] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_501(DATA *data, threadData_t *threadData);


/*
equation index: 53
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine2.vs.im, pwLine2.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[20] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */, data->localData[0]->realVars[69] /* pwLine2.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_497(DATA *data, threadData_t *threadData);


/*
equation index: 58
type: SIMPLE_ASSIGN
wT4G1.K.u = homotopy(smooth(0, if wT4G1.Iperr.y > wT4G1.imLimited_max.uMax then wT4G1.imLimited_max.uMax else if wT4G1.Iperr.y < wT4G1.imLimited_max.uMin then wT4G1.imLimited_max.uMin else wT4G1.Iperr.y), wT4G1.Iperr.y)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */,data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */,data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */:data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */);
  }
  data->localData[0]->realVars[78] /* wT4G1.K.u variable */ = homotopy(tmp3, data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_499(DATA *data, threadData_t *threadData);


/*
equation index: 60
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine.vr.im, pwLine.vr.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[24] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[48] /* pwLine.vr.im variable */, data->localData[0]->realVars[49] /* pwLine.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_522(DATA *data, threadData_t *threadData);


/*
equation index: 66
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[16] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[58] /* pwLine1.vs.im variable */, data->localData[0]->realVars[59] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_417(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_415(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_416(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: ALGORITHM

  assert(wT4G1.imLimited_max.uMax >= wT4G1.imLimited_max.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(wT4G1.imLimited_max.uMax, 6, 0, true) + ") < uMin (=" + String(wT4G1.imLimited_max.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */,data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.imLimited_max.uMax >= wT4G1.imLimited_max.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_51(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_53(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_58(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_60(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_66(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_416(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_83(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
equation index: 296
type: SIMPLE_ASSIGN
wT4G1.T_IQCmd = 0.02
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->realParameter[121] /* wT4G1.T_IQCmd PARAM */ = 0.02;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
wT4G1.K1.T = wT4G1.T_IQCmd
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */ = data->simulationInfo->realParameter[121] /* wT4G1.T_IQCmd PARAM */;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
wT4G1.K1.const.y = wT4G1.K1.T
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->realParameter[107] /* wT4G1.K1.const.y PARAM */ = data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
wT4G1.T_LVPL = 0.02
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[122] /* wT4G1.T_LVPL PARAM */ = 0.02;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
wT4G1.K2.T = wT4G1.T_LVPL
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */ = data->simulationInfo->realParameter[122] /* wT4G1.T_LVPL PARAM */;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
wT4G1.K2.const.y = wT4G1.K2.T
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[113] /* wT4G1.K2.const.y PARAM */ = data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
wT4G1.const.k = -9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */ = -9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
wT4G1.variableLimiter.limit2 = wT4G1.const.k
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[148] /* wT4G1.variableLimiter.limit2 PARAM */ = data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
wT4G1.const.y = wT4G1.const.k
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[131] /* wT4G1.const.y PARAM */ = data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
wT4G1.angle_0 = 0.02574992
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[128] /* wT4G1.angle_0 PARAM */ = 0.02574992;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
wT4G1.angle0_rad = 0.0174532925199433 * wT4G1.angle_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[128] /* wT4G1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
wT4G1.P_0 = 1500000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[116] /* wT4G1.P_0 PARAM */ = 1500000.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
wT4G1.M_b = 100000000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
wT4G1.p0 = wT4G1.P_0 / wT4G1.M_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[116] /* wT4G1.P_0 PARAM */,data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */,"wT4G1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
wT4G1.Q_0 = -5665800.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->realParameter[117] /* wT4G1.Q_0 PARAM */ = -5665800.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
wT4G1.q0 = wT4G1.Q_0 / wT4G1.M_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[117] /* wT4G1.Q_0 PARAM */,data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */,"wT4G1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
wT4G1.v_0 = 0.9999999000000001
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */ = 0.9999999000000001;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
wT4G1.vr0 = wT4G1.v_0 * cos(wT4G1.angle0_rad)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */ = (data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */));
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
wT4G1.vi0 = wT4G1.v_0 * sin(wT4G1.angle0_rad)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */ = (data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */));
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
wT4G1.ir0 = (wT4G1.p0 * wT4G1.vr0 + wT4G1.q0 * wT4G1.vi0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[139] /* wT4G1.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */) + (data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */),(tmp0 * tmp0) + (tmp1 * tmp1),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
wT4G1.Isr0 = wT4G1.ir0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[99] /* wT4G1.Isr0 PARAM */ = data->simulationInfo->realParameter[139] /* wT4G1.ir0 PARAM */;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
wT4G1.ii0 = (wT4G1.p0 * wT4G1.vi0 - wT4G1.q0 * wT4G1.vr0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */;
  tmp3 = data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[135] /* wT4G1.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */) - ((data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */)),(tmp2 * tmp2) + (tmp3 * tmp3),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
wT4G1.Isi0 = wT4G1.ii0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[98] /* wT4G1.Isi0 PARAM */ = data->simulationInfo->realParameter[135] /* wT4G1.ii0 PARAM */;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
wT4G1.Iy0 = (-wT4G1.Isr0) * sin(-wT4G1.angle0_rad) - cos(-wT4G1.angle0_rad) * wT4G1.Isi0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */ = ((-data->simulationInfo->realParameter[99] /* wT4G1.Isr0 PARAM */)) * (sin((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))) - ((cos((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))) * (data->simulationInfo->realParameter[98] /* wT4G1.Isi0 PARAM */));
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
wT4G1.K1.u = wT4G1.Iy0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[108] /* wT4G1.K1.u PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
wT4G1.I_qcmd = wT4G1.Iy0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[94] /* wT4G1.I_qcmd PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
wT4G1.I_qcmd0 = wT4G1.Iy0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[95] /* wT4G1.I_qcmd0 PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
wT4G1.Ix0 = wT4G1.Isr0 * cos(-wT4G1.angle0_rad) - wT4G1.Isi0 * sin(-wT4G1.angle0_rad)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */ = (data->simulationInfo->realParameter[99] /* wT4G1.Isr0 PARAM */) * (cos((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))) - ((data->simulationInfo->realParameter[98] /* wT4G1.Isi0 PARAM */) * (sin((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
wT4G1.Iperr.u1 = wT4G1.Ix0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[97] /* wT4G1.Iperr.u1 PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
wT4G1.I_pcmd = wT4G1.Ix0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->realParameter[92] /* wT4G1.I_pcmd PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
wT4G1.I_pcmd0 = wT4G1.Ix0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[93] /* wT4G1.I_pcmd0 PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
GEN2.angle_0 = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
GEN2.enabledisplayPF = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->booleanParameter[24] /* GEN2.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
GEN2.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->booleanParameter[18] /* GEN2.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
GEN2.enableangle_0 = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->booleanParameter[23] /* GEN2.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
GEN2.enablev_0 = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->booleanParameter[26] /* GEN2.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
GEN2.v_0 = 1.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[23] /* GEN2.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
GEN2.enableQ_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->simulationInfo->booleanParameter[20] /* GEN2.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
GEN2.Q_0 = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->simulationInfo->realParameter[17] /* GEN2.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
GEN2.enableP_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->booleanParameter[19] /* GEN2.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
GEN2.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->realParameter[16] /* GEN2.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
GEN2.enablefn = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->booleanParameter[25] /* GEN2.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
SysData.fn = 50.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->realParameter[25] /* SysData.fn PARAM */ = 50.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
GEN2.enableV_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->booleanParameter[22] /* GEN2.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
GEN2.V_b = 400000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->realParameter[19] /* GEN2.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
GEN2.enableS_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->booleanParameter[21] /* GEN2.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
SysData.S_b = 100000000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
FAULT.angle_0 = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
FAULT.enabledisplayPF = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->booleanParameter[6] /* FAULT.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
FAULT.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->booleanParameter[0] /* FAULT.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
FAULT.enableangle_0 = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->booleanParameter[5] /* FAULT.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
FAULT.enablev_0 = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->booleanParameter[8] /* FAULT.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
FAULT.v_0 = 1.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
FAULT.enableQ_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->booleanParameter[2] /* FAULT.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
FAULT.Q_0 = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[1] /* FAULT.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
FAULT.enableP_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->booleanParameter[1] /* FAULT.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
FAULT.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[0] /* FAULT.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
FAULT.enablefn = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->booleanParameter[7] /* FAULT.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
FAULT.enableV_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->booleanParameter[4] /* FAULT.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
FAULT.V_b = 400000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[3] /* FAULT.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
FAULT.enableS_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->booleanParameter[3] /* FAULT.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
GEN1.angle_0 = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
GEN1.enabledisplayPF = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->booleanParameter[15] /* GEN1.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
GEN1.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->booleanParameter[9] /* GEN1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
GEN1.enableangle_0 = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->booleanParameter[14] /* GEN1.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
GEN1.enablev_0 = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->booleanParameter[17] /* GEN1.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
GEN1.v_0 = 1.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
GEN1.enableQ_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->booleanParameter[11] /* GEN1.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
GEN1.Q_0 = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[9] /* GEN1.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
GEN1.enableP_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->booleanParameter[10] /* GEN1.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
GEN1.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[8] /* GEN1.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
GEN1.enablefn = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->booleanParameter[16] /* GEN1.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
GEN1.enableV_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->booleanParameter[13] /* GEN1.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
GEN1.V_b = 400000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[11] /* GEN1.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
GEN1.enableS_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->booleanParameter[12] /* GEN1.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
pwFault.R = 0.5
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->simulationInfo->realParameter[52] /* pwFault.R PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
pwFault.X = 0.5
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->realParameter[53] /* pwFault.X PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = Less(fabs(data->simulationInfo->realParameter[52] /* pwFault.R PARAM */),1e-15);
  tmp5 = Less(fabs(data->simulationInfo->realParameter[53] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */ = (tmp4 && tmp5);
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
pwFault.t2 = 2.15
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */ = 2.15;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
pwFault.t1 = 2.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
wT4G1.Ipcmd0 = wT4G1.Ix0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[96] /* wT4G1.Ipcmd0 PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
wT4G1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[119] /* wT4G1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
wT4G1.CoB = wT4G1.M_b / wT4G1.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */,data->simulationInfo->realParameter[119] /* wT4G1.S_b PARAM */,"wT4G1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
wT4G1.ii1 = wT4G1.CoB * (wT4G1.q0 * wT4G1.vr0 - wT4G1.p0 * wT4G1.vi0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */;
  tmp7 = data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[136] /* wT4G1.ii1 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */) * ((data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */) - ((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */))),(tmp6 * tmp6) + (tmp7 * tmp7),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
wT4G1.ir1 = (-wT4G1.CoB) * (wT4G1.p0 * wT4G1.vr0 + wT4G1.q0 * wT4G1.vi0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */;
  tmp9 = data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[140] /* wT4G1.ir1 PARAM */ = ((-data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */) + (data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */),(tmp8 * tmp8) + (tmp9 * tmp9),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
wT4G1.K2.T_mod = if wT4G1.K2.T < 1e-15 then 1000.0 else wT4G1.K2.T
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp10;
  tmp10 = Less(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */,1e-15);
  data->simulationInfo->realParameter[112] /* wT4G1.K2.T_mod PARAM */ = (tmp10?1000.0:data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */);
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
wT4G1.K2.y_start = wT4G1.v_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */ = data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
wT4G1.K2.K = 1.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
wT4G1.variableLimiter.limitsAtInit = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->booleanParameter[53] /* wT4G1.variableLimiter.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
wT4G1.variableLimiter.ySimplified = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[149] /* wT4G1.variableLimiter.ySimplified PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
wT4G1.variableLimiter.homotopyType = Modelica.Blocks.Types.VariableLimiterHomotopy.Linear
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->integerParameter[5] /* wT4G1.variableLimiter.homotopyType PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
wT4G1.variableLimiter.strict = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->booleanParameter[54] /* wT4G1.variableLimiter.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
wT4G1.imLimited_max.limitsAtInit = true
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->booleanParameter[51] /* wT4G1.imLimited_max.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
wT4G1.imLimited_max.homotopyType = Modelica.Blocks.Types.LimiterHomotopy.Linear
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->integerParameter[4] /* wT4G1.imLimited_max.homotopyType PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
wT4G1.imLimited_max.strict = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->booleanParameter[52] /* wT4G1.imLimited_max.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
wT4G1.imLimited_max.uMin = -9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */ = -9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
wT4G1.RIp_LVPL = 2.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[118] /* wT4G1.RIp_LVPL PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
wT4G1.imLimited_max.uMax = wT4G1.RIp_LVPL
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */ = data->simulationInfo->realParameter[118] /* wT4G1.RIp_LVPL PARAM */;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
wT4G1.V_LVPL1 = 0.4
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[124] /* wT4G1.V_LVPL1 PARAM */ = 0.4;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
wT4G1.lVPL.VLVPL1 = wT4G1.V_LVPL1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */ = data->simulationInfo->realParameter[124] /* wT4G1.V_LVPL1 PARAM */;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
wT4G1.V_LVPL2 = 0.9
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[125] /* wT4G1.V_LVPL2 PARAM */ = 0.9;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
wT4G1.lVPL.VLVPL2 = wT4G1.V_LVPL2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */ = data->simulationInfo->realParameter[125] /* wT4G1.V_LVPL2 PARAM */;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
wT4G1.G_LVPL = 1.11
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[91] /* wT4G1.G_LVPL PARAM */ = 1.11;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
wT4G1.lVPL.GLVPL = wT4G1.G_LVPL
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->realParameter[141] /* wT4G1.lVPL.GLVPL PARAM */ = data->simulationInfo->realParameter[91] /* wT4G1.G_LVPL PARAM */;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
wT4G1.lVPL.K = wT4G1.lVPL.GLVPL / (wT4G1.lVPL.VLVPL2 - wT4G1.lVPL.VLVPL1)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[141] /* wT4G1.lVPL.GLVPL PARAM */,data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */ - data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */,"wT4G1.lVPL.VLVPL2 - wT4G1.lVPL.VLVPL1",equationIndexes);
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
wT4G1.CUR_HVRCR = 2.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[89] /* wT4G1.CUR_HVRCR PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
wT4G1.hVRCL.CurHVRCR = wT4G1.CUR_HVRCR
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[133] /* wT4G1.hVRCL.CurHVRCR PARAM */ = data->simulationInfo->realParameter[89] /* wT4G1.CUR_HVRCR PARAM */;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
wT4G1.V_HVRCR = 1.2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[123] /* wT4G1.V_HVRCR PARAM */ = 1.2;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
wT4G1.hVRCL.VHVRCR = wT4G1.V_HVRCR
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */ = data->simulationInfo->realParameter[123] /* wT4G1.V_HVRCR PARAM */;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
wT4G1.K.y_start = wT4G1.Ix0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[103] /* wT4G1.K.y_start PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
wT4G1.K.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
wT4G1.K.use_set = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->booleanParameter[41] /* wT4G1.K.use_set PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
wT4G1.K.use_reset = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->booleanParameter[40] /* wT4G1.K.use_reset PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
wT4G1.T_IPCmd = 0.02
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[120] /* wT4G1.T_IPCmd PARAM */ = 0.02;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
wT4G1.K.k = 1.0 / wT4G1.T_IPCmd
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[102] /* wT4G1.K.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[120] /* wT4G1.T_IPCmd PARAM */,"wT4G1.T_IPCmd",equationIndexes);
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
wT4G1.K1.T_mod = if wT4G1.K1.T < 1e-15 then 1000.0 else wT4G1.K1.T
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  modelica_boolean tmp11;
  tmp11 = Less(data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */,1e-15);
  data->simulationInfo->realParameter[106] /* wT4G1.K1.T_mod PARAM */ = (tmp11?1000.0:data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */);
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
wT4G1.K1.y_start = wT4G1.Iy0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
wT4G1.K1.K = 1.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->realParameter[104] /* wT4G1.K1.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
wT4G1.angle_0rad = 0.0174532925199433 * wT4G1.angle_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->realParameter[129] /* wT4G1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[128] /* wT4G1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
wT4G1.enabledisplayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->booleanParameter[48] /* wT4G1.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
wT4G1.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->booleanParameter[42] /* wT4G1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
wT4G1.enableangle_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->booleanParameter[47] /* wT4G1.enableangle_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
wT4G1.enablev_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->booleanParameter[50] /* wT4G1.enablev_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
wT4G1.enableQ_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->booleanParameter[44] /* wT4G1.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
wT4G1.enableP_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->booleanParameter[43] /* wT4G1.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
wT4G1.enablefn = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->booleanParameter[49] /* wT4G1.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
wT4G1.fn = SysData.fn
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[132] /* wT4G1.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
wT4G1.enableV_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->booleanParameter[46] /* wT4G1.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
wT4G1.V_b = 100000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[126] /* wT4G1.V_b PARAM */ = 100000.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
wT4G1.enableS_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->booleanParameter[45] /* wT4G1.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
pwLine2.X = 0.0025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[82] /* pwLine2.X PARAM */ = 0.0025;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
pwLine2.Z.im = pwLine2.X
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */ = data->simulationInfo->realParameter[82] /* pwLine2.X PARAM */;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
pwLine2.R = 0.0025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->realParameter[80] /* pwLine2.R PARAM */ = 0.0025;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
pwLine2.Z.re = pwLine2.R
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */ = data->simulationInfo->realParameter[80] /* pwLine2.R PARAM */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
pwLine2.B = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[78] /* pwLine2.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
pwLine2.Y.im = pwLine2.B
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */ = data->simulationInfo->realParameter[78] /* pwLine2.B PARAM */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
pwLine2.G = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->simulationInfo->realParameter[79] /* pwLine2.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
pwLine2.Y.re = pwLine2.G
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */ = data->simulationInfo->realParameter[79] /* pwLine2.G PARAM */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
pwLine2.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->simulationInfo->booleanParameter[39] /* pwLine2.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
pwLine2.opening = 1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->simulationInfo->integerParameter[2] /* pwLine2.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
pwLine2.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
pwLine2.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
pwLine2.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->simulationInfo->realParameter[81] /* pwLine2.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
gENCLS2_1.R_a = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
gENCLS2_1.X_d = 0.2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
gENCLS2_1.v_0 = 1.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
gENCLS2_1.angle_0 = -1.570655e-05
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->simulationInfo->realParameter[36] /* gENCLS2_1.angle_0 PARAM */ = -1.570655e-05;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
gENCLS2_1.angle_0rad = 0.0174532925199433 * gENCLS2_1.angle_0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[36] /* gENCLS2_1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
gENCLS2_1.vr0 = gENCLS2_1.v_0 * cos(gENCLS2_1.angle_0rad)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */ = (data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
gENCLS2_1.vi0 = gENCLS2_1.v_0 * sin(gENCLS2_1.angle_0rad)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */ = (data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
gENCLS2_1.P_0 = -1498800.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->simulationInfo->realParameter[30] /* gENCLS2_1.P_0 PARAM */ = -1498800.0;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
gENCLS2_1.M_b = 100000000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
gENCLS2_1.p0 = gENCLS2_1.P_0 / gENCLS2_1.M_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[44] /* gENCLS2_1.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[30] /* gENCLS2_1.P_0 PARAM */,data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */,"gENCLS2_1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
gENCLS2_1.Q_0 = -4334000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[31] /* gENCLS2_1.Q_0 PARAM */ = -4334000.0;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
gENCLS2_1.q0 = gENCLS2_1.Q_0 / gENCLS2_1.M_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[45] /* gENCLS2_1.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[31] /* gENCLS2_1.Q_0 PARAM */,data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */,"gENCLS2_1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
gENCLS2_1.ir0 = (gENCLS2_1.p0 * gENCLS2_1.vr0 + gENCLS2_1.q0 * gENCLS2_1.vi0) / (gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
  tmp13 = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
  data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[44] /* gENCLS2_1.p0 PARAM */) * (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */) + (data->simulationInfo->realParameter[45] /* gENCLS2_1.q0 PARAM */) * (data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */),(tmp12 * tmp12) + (tmp13 * tmp13),"gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
gENCLS2_1.ii0 = (gENCLS2_1.p0 * gENCLS2_1.vi0 - gENCLS2_1.q0 * gENCLS2_1.vr0) / (gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
  tmp15 = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
  data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[44] /* gENCLS2_1.p0 PARAM */) * (data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */) - ((data->simulationInfo->realParameter[45] /* gENCLS2_1.q0 PARAM */) * (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */)),(tmp14 * tmp14) + (tmp15 * tmp15),"gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
gENCLS2_1.delta0 = atan2(gENCLS2_1.vi0 + gENCLS2_1.R_a * gENCLS2_1.ii0 + gENCLS2_1.X_d * gENCLS2_1.ir0, gENCLS2_1.vr0 + gENCLS2_1.R_a * gENCLS2_1.ir0 - gENCLS2_1.X_d * gENCLS2_1.ii0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */ + (data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */) + (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */), data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */ + (data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
gENCLS2_1.vq0 = gENCLS2_1.vr0 * sin(1.570796326794897 - gENCLS2_1.delta0) + gENCLS2_1.vi0 * cos(1.570796326794897 - gENCLS2_1.delta0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[50] /* gENCLS2_1.vq0 PARAM */ = (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) + (data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
gENCLS2_1.id0 = gENCLS2_1.ir0 * cos(1.570796326794897 - gENCLS2_1.delta0) - gENCLS2_1.ii0 * sin(1.570796326794897 - gENCLS2_1.delta0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */ = (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) - ((data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
gENCLS2_1.iq0 = gENCLS2_1.ir0 * sin(1.570796326794897 - gENCLS2_1.delta0) + gENCLS2_1.ii0 * cos(1.570796326794897 - gENCLS2_1.delta0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */ = (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) + (data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
gENCLS2_1.vf0 = gENCLS2_1.vq0 + gENCLS2_1.R_a * gENCLS2_1.iq0 + gENCLS2_1.X_d * gENCLS2_1.id0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->realParameter[48] /* gENCLS2_1.vf0 PARAM */ = data->simulationInfo->realParameter[50] /* gENCLS2_1.vq0 PARAM */ + (data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */) + (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
gENCLS2_1.vd0 = gENCLS2_1.vr0 * cos(1.570796326794897 - gENCLS2_1.delta0) - gENCLS2_1.vi0 * sin(1.570796326794897 - gENCLS2_1.delta0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->realParameter[47] /* gENCLS2_1.vd0 PARAM */ = (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) - ((data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
gENCLS2_1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
gENCLS2_1.CoB = gENCLS2_1.M_b / gENCLS2_1.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */,data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */,"gENCLS2_1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
gENCLS2_1.D = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[27] /* gENCLS2_1.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
gENCLS2_1.H = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[28] /* gENCLS2_1.H PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
gENCLS2_1.enabledisplayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->booleanParameter[33] /* gENCLS2_1.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
gENCLS2_1.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->booleanParameter[27] /* gENCLS2_1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
gENCLS2_1.enableangle_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->booleanParameter[32] /* gENCLS2_1.enableangle_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
gENCLS2_1.enablev_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->booleanParameter[35] /* gENCLS2_1.enablev_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
gENCLS2_1.enableQ_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->booleanParameter[29] /* gENCLS2_1.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
gENCLS2_1.enableP_0 = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->booleanParameter[28] /* gENCLS2_1.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
gENCLS2_1.enablefn = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->booleanParameter[34] /* gENCLS2_1.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
gENCLS2_1.fn = SysData.fn
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[39] /* gENCLS2_1.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
gENCLS2_1.enableV_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->booleanParameter[31] /* gENCLS2_1.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
gENCLS2_1.V_b = 100000.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[34] /* gENCLS2_1.V_b PARAM */ = 100000.0;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
gENCLS2_1.enableS_b = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->simulationInfo->booleanParameter[30] /* gENCLS2_1.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
pwLine1.X = 0.025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->simulationInfo->realParameter[71] /* pwLine1.X PARAM */ = 0.025;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[71] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
pwLine1.R = 0.025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->simulationInfo->realParameter[69] /* pwLine1.R PARAM */ = 0.025;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[69] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
pwLine1.B = 0.025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->simulationInfo->realParameter[67] /* pwLine1.B PARAM */ = 0.025;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[67] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
pwLine1.G = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->simulationInfo->realParameter[68] /* pwLine1.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[68] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
pwLine1.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->simulationInfo->booleanParameter[38] /* pwLine1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
pwLine1.opening = 1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->simulationInfo->integerParameter[1] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
pwLine1.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
pwLine1.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->simulationInfo->realParameter[70] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
pwLine.X = 0.025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->simulationInfo->realParameter[60] /* pwLine.X PARAM */ = 0.025;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[60] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
pwLine.R = 0.025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->simulationInfo->realParameter[58] /* pwLine.R PARAM */ = 0.025;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[58] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
pwLine.B = 0.025
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->simulationInfo->realParameter[56] /* pwLine.B PARAM */ = 0.025;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[56] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
pwLine.G = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->simulationInfo->realParameter[57] /* pwLine.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[57] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
pwLine.displayPF = false
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->simulationInfo->booleanParameter[37] /* pwLine.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
pwLine.opening = 1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->simulationInfo->integerParameter[0] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
pwLine.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
pwLine.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->simulationInfo->realParameter[59] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_13(DATA *data, threadData_t *threadData);


/*
equation index: 310
type: SIMPLE_ASSIGN
wT4G1.Iperr.u2 = wT4G1.K.y
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */ = data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_497(DATA *data, threadData_t *threadData);


/*
equation index: 312
type: SIMPLE_ASSIGN
wT4G1.K.u = wT4G1.Iperr.y
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[78] /* wT4G1.K.u variable */ = data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_418(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_316(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_317(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_318(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_319(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_320(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_321(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_322(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_323(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_324(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_325(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_326(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_327(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_328(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_329(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_347(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_346(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_345(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_344(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_343(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_342(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_341(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_340(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_339(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_338(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_337(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_336(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_335(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_334(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_333(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_332(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_331(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_330(DATA*, threadData_t*);
/*
equation index: 383
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine2.ir.im, pwLine.is.im, pwLine.is.re, pwLine2.ir.re, pwLine1.is.im, pwLine1.is.re, pwLine1.ir.im, pwLine.ir.re, gENCLS2_1.id, gENCLS2_1.iq, pwLine.vr.re, pwLine.vr.im, pwLine2.is.re, pwLine2.is.im, pwLine2.vs.im, pwLine1.vs.im, pwLine1.vs.re, pwLine2.vs.re}
eqns: {316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338, 337, 336, 335, 334, 333, 332, 331, 330}
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 383 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[46] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[47] /* pwLine.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[56] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[57] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[54] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[45] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = (-data->simulationInfo->realParameter[140] /* wT4G1.ir1 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = (-data->simulationInfo->realParameter[136] /* wT4G1.ii1 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,383};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 383 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[46] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[47] /* pwLine.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[56] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[57] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[45] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_53(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_501(DATA *data, threadData_t *threadData);


/*
equation index: 388
type: SIMPLE_ASSIGN
wT4G1.K2.y = if abs(wT4G1.K2.T) <= 1e-15 then wT4G1.V * wT4G1.K2.K else wT4G1.K2.state
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */),1e-15);
  data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ = (tmp0?(data->localData[0]->realVars[82] /* wT4G1.V variable */) * (data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */):data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
wT4G1.lVPL.LVPL = if wT4G1.K2.y < wT4G1.lVPL.VLVPL1 then 0.0 else if wT4G1.K2.y > wT4G1.lVPL.VLVPL2 then 1000000.0 else wT4G1.lVPL.K * (wT4G1.K2.y - wT4G1.lVPL.VLVPL1)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp1 = Less(data->localData[0]->realVars[79] /* wT4G1.K2.y variable */,data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */);
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp2 = Greater(data->localData[0]->realVars[79] /* wT4G1.K2.y variable */,data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */);
    tmp4 = (tmp2?1000000.0:(data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */) * (data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ - data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */));
  }
  data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */ = tmp4;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_66(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_60(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_417(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_415(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_416(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_237(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_236(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_235(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_234(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_215(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_214(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_213(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_212(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_210(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_209(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_208(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_207(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_206(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_205(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_204(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_197(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_196(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_195(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_194(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_193(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_192(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_189(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_166(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_165(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_164(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_163(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_162(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_161(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_160(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_159(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_158(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_157(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_156(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_155(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_144(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_143(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_142(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_141(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_140(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_139(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_138(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_137(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_136(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_135(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_134(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_133(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_132(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_131(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_130(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_129(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_128(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_127(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_126(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_124(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_122(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_121(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_114(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_113(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_112(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_110(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_109(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_108(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_107(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_106(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_105(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_104(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_103(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_102(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_101(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_100(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_99(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_98(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_97(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_96(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_95(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_94(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_93(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_92(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_91(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_90(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_89(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_88(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_87(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_86(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_85(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_84(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_418(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_53(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_66(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_60(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_417(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_415(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_416(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[33] /* gENCLS2_1.omega variable */;
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = gENCLS2_1.omega", res);
    return 1;
  }
  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

