/* Initialization */
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_11mix.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[45] /* gENCLS.omega variable */ = data->modelData->realVarsData[45].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_2(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[21] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[30] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[29] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_6(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[25] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[18] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[17] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_10(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gENCLS2.delta = gENCLS2.delta0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */ = data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
gENCLS2.omega = $START.gENCLS2.omega
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[4] /* gENCLS2.omega STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENCLS2.omega STATE(1) */.start;
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_147(DATA *data, threadData_t *threadData);


/*
equation index: 15
type: SIMPLE_ASSIGN
gENCLS2.eq = gENCLS2.vf0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[3] /* gENCLS2.eq STATE(1) */ = data->simulationInfo->realParameter[124] /* gENCLS2.vf0 PARAM */;
  TRACE_POP
}

void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_16(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_17(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_24(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_25(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_26(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_27(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_28(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_29(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_30(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_31(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_32(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_33(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_34(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_35(DATA*, threadData_t*);
/*
equation index: 106
indexNonlinear: 0
type: NONLINEAR

vars: {constantLoad.p.ii, pwLine1.is.im, pwLine.ir.re, pwLine1.is.re, pwLine4.is.re, pwLine3.ir.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.im, pwLine3.is.re, gENCLS2.id, gENCLS2.iq, pwLine.vs.re, pwLine1.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, pwLine.vs.im, pwLine1.vr.re, pwLine1.vr.im, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im}
eqns: {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35}
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 106 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[76] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[65] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[77] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[99] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[87] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[98] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[86] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[88] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[89] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->simulationInfo->realParameter[116] /* gENCLS2.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->simulationInfo->realParameter[118] /* gENCLS2.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[75] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[74] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,106};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 106 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[36] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[76] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[65] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[77] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[99] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[98] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[88] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[89] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[54] /* gENCLS2.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[55] /* gENCLS2.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[69] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[44] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[43] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[68] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_247(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[28] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[80] /* pwLine1.vs.im variable */, data->localData[0]->realVars[81] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_257(DATA *data, threadData_t *threadData);


/*
equation index: 110
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[24] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[78] /* pwLine1.vr.im variable */, data->localData[0]->realVars[79] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_267(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_269(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_273(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[16] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[90] /* pwLine3.vr.im variable */, data->localData[0]->realVars[91] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_242(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_262(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_241(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_240(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_265(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_264(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_263(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_252(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[20] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[68] /* pwLine.vs.im variable */, data->localData[0]->realVars[69] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_255(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_256(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_148(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_106(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_108(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_257(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_110(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_267(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_269(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_273(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_242(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_262(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_246(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_241(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_240(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_265(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_264(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_263(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_255(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_148(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[45] /* gENCLS.omega variable */;
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

