/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[90] /* gENCLS.omega variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eXAC2.add3_1.u1 = const.k * (eXAC2.add3_2.k1 + eXAC2.add3_2.k2 + eXAC2.add3_2.k3)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[67] /* eXAC2.add3_1.u1 variable */ = (data->simulationInfo->realParameter[34] /* const.k PARAM */) * (data->simulationInfo->realParameter[132] /* eXAC2.add3_2.k1 PARAM */ + data->simulationInfo->realParameter[133] /* eXAC2.add3_2.k2 PARAM */ + data->simulationInfo->realParameter[134] /* eXAC2.add3_2.k3 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_359(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[216] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
eXAC2.Efd0 = eXAC2.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[86] /* eXAC2.Efd0 PARAM */ = data->localData[0]->realVars[63] /* eXAC2.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.y = eXAC2.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[72] /* eXAC2.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[144] /* eXAC2.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_366(DATA *data, threadData_t *threadData);


/*
equation index: 10
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[288] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_16(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_17(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_18(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_19(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_20(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_21(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_22(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_23(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_24(DATA*, threadData_t*);
/*
equation index: 25
indexNonlinear: 0
type: NONLINEAR

vars: {eXAC2.XADIFD}
eqns: {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 25 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,25};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 25 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
eXAC2.VFE0 = eXAC2.VE0 * (OpenIPSL.NonElectrical.Functions.SE(eXAC2.VE0, eXAC2.S_EE_1, eXAC2.S_EE_2, eXAC2.E_1, eXAC2.E_2) + eXAC2.K_E) + eXAC2.Ifd0 * eXAC2.K_D
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[111] /* eXAC2.VFE0 PARAM */ = (data->simulationInfo->realParameter[110] /* eXAC2.VE0 PARAM */) * (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[110] /* eXAC2.VE0 PARAM */, data->simulationInfo->realParameter[96] /* eXAC2.S_EE_1 PARAM */, data->simulationInfo->realParameter[97] /* eXAC2.S_EE_2 PARAM */, data->simulationInfo->realParameter[84] /* eXAC2.E_1 PARAM */, data->simulationInfo->realParameter[85] /* eXAC2.E_2 PARAM */) + data->simulationInfo->realParameter[92] /* eXAC2.K_E PARAM */) + (data->simulationInfo->realParameter[87] /* eXAC2.Ifd0 PARAM */) * (data->simulationInfo->realParameter[91] /* eXAC2.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
eXAC2.VR0 = eXAC2.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[114] /* eXAC2.VR0 PARAM */ = data->simulationInfo->realParameter[111] /* eXAC2.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
eXAC2.VA0 = eXAC2.VR0 / eXAC2.K_B + eXAC2.VFE0 * eXAC2.K_H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[109] /* eXAC2.VA0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[114] /* eXAC2.VR0 PARAM */,data->simulationInfo->realParameter[89] /* eXAC2.K_B PARAM */,"eXAC2.K_B",equationIndexes) + (data->simulationInfo->realParameter[111] /* eXAC2.VFE0 PARAM */) * (data->simulationInfo->realParameter[94] /* eXAC2.K_H PARAM */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
eXAC2.leadLag.y_start = eXAC2.VA0 / eXAC2.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[169] /* eXAC2.leadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eXAC2.VA0 PARAM */,data->simulationInfo->realParameter[88] /* eXAC2.K_A PARAM */,"eXAC2.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.y_start = eXAC2.leadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[165] /* eXAC2.leadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[169] /* eXAC2.leadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.y = eXAC2.leadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[75] /* eXAC2.leadLag.TF.y variable */ = data->simulationInfo->realParameter[165] /* eXAC2.leadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
eXAC2.leadLag.x_start = eXAC2.VA0 / eXAC2.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[168] /* eXAC2.leadLag.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eXAC2.VA0 PARAM */,data->simulationInfo->realParameter[88] /* eXAC2.K_A PARAM */,"eXAC2.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x_start[1] = eXAC2.leadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[164] /* eXAC2.leadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[168] /* eXAC2.leadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$START.eXAC2.leadLag.TF.x[1] = eXAC2.leadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->modelData->realVarsData[74].attribute /* eXAC2.leadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[164] /* eXAC2.leadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[74] /* eXAC2.leadLag.TF.x[1] variable */ = data->modelData->realVarsData[74].attribute /* eXAC2.leadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* eXAC2.leadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[74] /* eXAC2.leadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.y_start = eXAC2.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->simulationInfo->realParameter[151] /* eXAC2.imLimitedSimpleLag.y_start PARAM */ = data->simulationInfo->realParameter[109] /* eXAC2.VA0 PARAM */;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.state = eXAC2.imLimitedSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[2] /* eXAC2.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[151] /* eXAC2.imLimitedSimpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
$START.eXAC2.DiffV1.u1 = eXAC2.imLimitedSimpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->modelData->realVarsData[58].attribute /* eXAC2.DiffV1.u1 variable */.start = data->simulationInfo->realParameter[151] /* eXAC2.imLimitedSimpleLag.y_start PARAM */;
    data->localData[0]->realVars[58] /* eXAC2.DiffV1.u1 variable */ = data->modelData->realVarsData[58].attribute /* eXAC2.DiffV1.u1 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* eXAC2.DiffV1.u1 */.name, (modelica_real) data->localData[0]->realVars[58] /* eXAC2.DiffV1.u1 variable */);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.x_start = eXAC2.VFE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[143] /* eXAC2.imDerivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[111] /* eXAC2.VFE0 PARAM */;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
$START.eXAC2.imDerivativeLag.x = eXAC2.imDerivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->modelData->realVarsData[1].attribute /* eXAC2.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[143] /* eXAC2.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[1].attribute /* eXAC2.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eXAC2.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_368(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_476(DATA *data, threadData_t *threadData);


/*
equation index: 47
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.x = (eXAC2.add3.u1 / eXAC2.imDerivativeLag.T * 0.03 - eXAC2.imDerivativeLag.y) * eXAC2.imDerivativeLag.T / 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[1] /* eXAC2.imDerivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[65] /* eXAC2.add3.u1 variable */,data->simulationInfo->realParameter[141] /* eXAC2.imDerivativeLag.T PARAM */,"eXAC2.imDerivativeLag.T",equationIndexes)) * (0.03) - data->localData[0]->realVars[72] /* eXAC2.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[141] /* eXAC2.imDerivativeLag.T PARAM */),0.03,"0.03",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_474(DATA *data, threadData_t *threadData);


/*
equation index: 49
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[266] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_77(DATA*, threadData_t*);
/*
equation index: 103
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, constantLoad.p.ir, pwLine1.is.im, constantLoad.p.ii, pwLine3.is.re, pwLine3.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine3.ir.re, pwLine4.is.re, pwLine1.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.re, pwLine1.vr.im, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 103 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[111] /* gENROE.uq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,103};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 103 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(DATA *data, threadData_t *threadData);


/*
equation index: 105
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[134] /* pwLine1.vs.im variable */, data->localData[0]->realVars[135] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(DATA *data, threadData_t *threadData);


/*
equation index: 107
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[144] /* pwLine3.vr.im variable */, data->localData[0]->realVars[145] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_525(DATA *data, threadData_t *threadData);


/*
equation index: 109
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[132] /* pwLine1.vr.im variable */, data->localData[0]->realVars[133] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(DATA *data, threadData_t *threadData);


/*
equation index: 131
type: SIMPLE_ASSIGN
eXAC2.ECOMP0 = eXAC2.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[83] /* eXAC2.ECOMP0 PARAM */ = data->localData[0]->realVars[61] /* eXAC2.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
eXAC2.V_REF = eXAC2.VA0 / eXAC2.K_A + eXAC2.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[119] /* eXAC2.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eXAC2.VA0 PARAM */,data->simulationInfo->realParameter[88] /* eXAC2.K_A PARAM */,"eXAC2.K_A",equationIndexes) + data->simulationInfo->realParameter[83] /* eXAC2.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
eXAC2.VoltageReference.k = eXAC2.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[122] /* eXAC2.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[119] /* eXAC2.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
eXAC2.DiffV.u1 = eXAC2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[80] /* eXAC2.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[122] /* eXAC2.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
eXAC2.VoltageReference.y = eXAC2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[123] /* eXAC2.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[122] /* eXAC2.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.y_start = eXAC2.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[108] /* eXAC2.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[83] /* eXAC2.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
$START.eXAC2.TransducerDelay.state = eXAC2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->modelData->realVarsData[0].attribute /* eXAC2.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[108] /* eXAC2.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eXAC2.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eXAC2.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.state = eXAC2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[0] /* eXAC2.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[108] /* eXAC2.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
$START.eXAC2.DiffV.u2 = eXAC2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->modelData->realVarsData[56].attribute /* eXAC2.DiffV.u2 variable */.start = data->simulationInfo->realParameter[108] /* eXAC2.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[56] /* eXAC2.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eXAC2.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eXAC2.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eXAC2.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(DATA *data, threadData_t *threadData);


/*
equation index: 150
type: SIMPLE_ASSIGN
eXAC2.limiter.y = homotopy(smooth(0, if eXAC2.gain1.y > eXAC2.limiter.uMax then eXAC2.limiter.uMax else if eXAC2.gain1.y < eXAC2.limiter.uMin then eXAC2.limiter.uMin else eXAC2.gain1.y), eXAC2.gain1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[70] /* eXAC2.gain1.y variable */,data->simulationInfo->realParameter[170] /* eXAC2.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[170] /* eXAC2.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[70] /* eXAC2.gain1.y variable */,data->simulationInfo->realParameter[171] /* eXAC2.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[171] /* eXAC2.limiter.uMin PARAM */:data->localData[0]->realVars[70] /* eXAC2.gain1.y variable */);
  }
  data->localData[0]->realVars[76] /* eXAC2.limiter.y variable */ = homotopy(tmp3, data->localData[0]->realVars[70] /* eXAC2.gain1.y variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(DATA *data, threadData_t *threadData);


/*
equation index: 154
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x[1] = (eXAC2.leadLag.TF.d * eXAC2.add3_1.y - eXAC2.leadLag.TF.y) / (eXAC2.leadLag.TF.a[2] * eXAC2.leadLag.TF.d - eXAC2.leadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[74] /* eXAC2.leadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[163] /* eXAC2.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[68] /* eXAC2.add3_1.y variable */) - data->localData[0]->realVars[75] /* eXAC2.leadLag.TF.y variable */,(data->simulationInfo->realParameter[157] /* eXAC2.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[163] /* eXAC2.leadLag.TF.d PARAM */) - data->simulationInfo->realParameter[162] /* eXAC2.leadLag.TF.bb[2] PARAM */,"eXAC2.leadLag.TF.a[2] * eXAC2.leadLag.TF.d - eXAC2.leadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.x_scaled[1] = eXAC2.leadLag.TF.x[1] * eXAC2.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[3] /* eXAC2.leadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[74] /* eXAC2.leadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[158] /* eXAC2.leadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(DATA *data, threadData_t *threadData);


/*
equation index: 162
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[122] /* pwLine.vs.im variable */, data->localData[0]->realVars[123] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(DATA *data, threadData_t *threadData);


/*
equation index: 169
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_360(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_361(DATA *data, threadData_t *threadData);


/*
equation index: 179
type: ALGORITHM

  assert(eXAC2.limiter.uMax >= eXAC2.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eXAC2.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(eXAC2.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,11,") < uMin (=");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[170] /* eXAC2.limiter.uMax PARAM */,data->simulationInfo->realParameter[171] /* eXAC2.limiter.uMin PARAM */);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[170] /* eXAC2.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp7));
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[171] /* eXAC2.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.limiter.uMax >= eXAC2.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_359(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_26(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_47(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_50(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_103(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_107(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_155(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_162(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_360(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_179(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_359(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_366(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_203(DATA*, threadData_t*);
/*
equation index: 204
indexNonlinear: 2
type: NONLINEAR

vars: {eXAC2.XADIFD}
eqns: {193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 204 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[290] /* gENROE.efd0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,204};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 204 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_26(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_27(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_368(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_47(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_50(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_233(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_243(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_244(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_245(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_246(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_247(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_248(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_249(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_250(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_251(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_252(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_253(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_254(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_255(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_277(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_276(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_275(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_274(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_273(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_272(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_271(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_270(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_269(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_268(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_267(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_266(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_265(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_264(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_263(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_262(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_261(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_260(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_259(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_258(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_257(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_256(DATA*, threadData_t*);
/*
equation index: 282
indexNonlinear: 3
type: NONLINEAR

vars: {pwLine.ir.re, constantLoad.p.ir, pwLine1.is.im, constantLoad.p.ii, pwLine3.is.re, pwLine3.is.im, pwLine4.is.im, pwLine3.ir.im, pwLine3.ir.re, pwLine4.is.re, pwLine1.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.Epd, gENROE.uq, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine1.vr.re, pwLine1.vr.im, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 282 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->simulationInfo->realParameter[210] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->simulationInfo->realParameter[208] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->simulationInfo->realParameter[226] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->simulationInfo->realParameter[225] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->simulationInfo->realParameter[300] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->simulationInfo->realParameter[253] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,282};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 282 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_105(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_107(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_137(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_138(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(DATA *data, threadData_t *threadData);


/*
equation index: 329
type: SIMPLE_ASSIGN
eXAC2.limiter.y = eXAC2.gain1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[76] /* eXAC2.limiter.y variable */ = data->localData[0]->realVars[70] /* eXAC2.gain1.y variable */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_154(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_155(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_162(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_169(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_360(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_361(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_204(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_26(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_27(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_28(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_29(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_30(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_31(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_32(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_33(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_34(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_35(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_36(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_37(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_38(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_39(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_47(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_49(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_50(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_105(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_107(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_109(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_131(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_132(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_133(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_134(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_135(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_136(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_137(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_138(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_139(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_155(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_162(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_361(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[90] /* gENCLS.omega variable */;
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

