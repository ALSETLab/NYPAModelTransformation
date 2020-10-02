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
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[22] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[21] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[18] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[17] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[26] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[25] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
gENCLS2_1.delta = gENCLS2_1.delta0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */ = data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
gENCLS2_1.eq = gENCLS2_1.vf0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ = data->simulationInfo->realParameter[48] /* gENCLS2_1.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
wT4G1.K2.state = wT4G1.K2.y_start
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */ = data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
wT4G1.K.y = wT4G1.K.y_start
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */ = data->simulationInfo->realParameter[103] /* wT4G1.K.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
wT4G1.K1.state = wT4G1.K1.y_start
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */ = data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_14(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_15(DATA*, threadData_t*);
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
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_31(DATA*, threadData_t*);
/*
equation index: 49
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine2.ir.im, pwLine1.is.im, pwLine2.ir.re, pwLine1.is.re, pwLine.is.re, pwLine.is.im, pwLine1.ir.im, pwLine.ir.re, gENCLS2_1.id, gENCLS2_1.iq, pwLine.vr.re, pwLine.vr.im, pwLine2.is.re, pwLine2.is.im, pwLine2.vs.im, pwLine1.vs.re, pwLine1.vs.im, pwLine2.vs.re}
eqns: {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31}
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 49 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
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
    const int indexes[2] = {1,49};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 49 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
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
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(DATA *data, threadData_t *threadData);


/*
equation index: 51
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine2.vs.im, pwLine2.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[20] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */, data->localData[0]->realVars[69] /* pwLine2.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(DATA *data, threadData_t *threadData);


/*
equation index: 56
type: SIMPLE_ASSIGN
wT4G1.K.u = homotopy(smooth(0, if wT4G1.Iperr.y > wT4G1.imLimited_max.uMax then wT4G1.imLimited_max.uMax else if wT4G1.Iperr.y < wT4G1.imLimited_max.uMin then wT4G1.imLimited_max.uMin else wT4G1.Iperr.y), wT4G1.Iperr.y)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
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
  data->localData[0]->realVars[77] /* wT4G1.K.u variable */ = homotopy(tmp3, data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(DATA *data, threadData_t *threadData);


/*
equation index: 58
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine.vr.im, pwLine.vr.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[24] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[48] /* pwLine.vr.im variable */, data->localData[0]->realVars[49] /* pwLine.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_305(DATA *data, threadData_t *threadData);


/*
equation index: 64
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[16] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[58] /* pwLine1.vs.im variable */, data->localData[0]->realVars[59] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_307(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA *data, threadData_t *threadData);


/*
equation index: 81
type: ALGORITHM

  assert(wT4G1.imLimited_max.uMax >= wT4G1.imLimited_max.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(wT4G1.imLimited_max.uMax, 6, 0, true) + ") < uMin (=" + String(wT4G1.imLimited_max.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
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
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
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
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_49(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_51(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_56(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_58(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_64(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_81(data, threadData);
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


/*
equation index: 93
type: SIMPLE_ASSIGN
wT4G1.Iperr.u2 = wT4G1.K.y
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */ = data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(DATA *data, threadData_t *threadData);


/*
equation index: 95
type: SIMPLE_ASSIGN
wT4G1.K.u = wT4G1.Iperr.y
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[77] /* wT4G1.K.u variable */ = data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_109(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_110(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_111(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_112(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_130(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_129(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_128(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_127(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_126(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_125(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_124(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_123(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_122(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_121(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_120(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_119(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_118(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_117(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_116(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_115(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_114(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_113(DATA*, threadData_t*);
/*
equation index: 166
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine2.ir.im, pwLine.is.im, pwLine.is.re, pwLine2.ir.re, pwLine1.is.im, pwLine1.is.re, pwLine1.ir.im, pwLine.ir.re, gENCLS2_1.id, gENCLS2_1.iq, pwLine.vr.re, pwLine.vr.im, pwLine2.is.re, pwLine2.is.im, pwLine2.vs.im, pwLine1.vs.im, pwLine1.vs.re, pwLine2.vs.re}
eqns: {99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113}
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 166 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
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
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,166};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 166 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
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
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_51(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(DATA *data, threadData_t *threadData);


/*
equation index: 171
type: SIMPLE_ASSIGN
wT4G1.K2.y = if abs(wT4G1.K2.T) <= 1e-15 then wT4G1.V * wT4G1.K2.K else wT4G1.K2.state
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */),1e-15);
  data->localData[0]->realVars[78] /* wT4G1.K2.y variable */ = (tmp0?(data->localData[0]->realVars[81] /* wT4G1.V variable */) * (data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */):data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
wT4G1.lVPL.LVPL = if wT4G1.K2.y < wT4G1.lVPL.VLVPL1 then 0.0 else if wT4G1.K2.y > wT4G1.lVPL.VLVPL2 then 1000000.0 else wT4G1.lVPL.K * (wT4G1.K2.y - wT4G1.lVPL.VLVPL1)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp1 = Less(data->localData[0]->realVars[78] /* wT4G1.K2.y variable */,data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */);
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp2 = Greater(data->localData[0]->realVars[78] /* wT4G1.K2.y variable */,data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */);
    tmp4 = (tmp2?1000000.0:(data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */) * (data->localData[0]->realVars[78] /* wT4G1.K2.y variable */ - data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */));
  }
  data->localData[0]->realVars[83] /* wT4G1.lVPL.LVPL variable */ = tmp4;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_64(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_58(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_307(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
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

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_93(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_95(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_166(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_51(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_64(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_58(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);
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

