/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[62] /* gENCLS.omega variable */ = data->modelData->realVarsData[62].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.sISO.local_reset = false
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->booleanVars[2] /* iEEET2.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.sISO.local_set = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[100] /* iEEET2.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
iEEET2.Limiters.y = const.k * (iEEET2.Limiters.k1 + iEEET2.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[89] /* iEEET2.Limiters.y variable */ = (data->simulationInfo->realParameter[34] /* const.k PARAM */) * (data->simulationInfo->realParameter[200] /* iEEET2.Limiters.k1 PARAM */ + data->simulationInfo->realParameter[201] /* iEEET2.Limiters.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[90] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[100] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
iEEET2.Efd0 = iEEET2.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[195] /* iEEET2.Efd0 PARAM */ = data->localData[0]->realVars[88] /* iEEET2.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.Efd0 = iEEET2.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->simulationInfo->realParameter[240] /* iEEET2.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[195] /* iEEET2.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.sISO.y_start = iEEET2.rotatingExciter.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[249] /* iEEET2.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[240] /* iEEET2.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
iEEET2.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(iEEET2.EFD0, iEEET2.S_EE_1, iEEET2.S_EE_2, iEEET2.E_1, iEEET2.E_2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[204] /* iEEET2.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[88] /* iEEET2.EFD0 variable */, data->simulationInfo->realParameter[205] /* iEEET2.S_EE_1 PARAM */, data->simulationInfo->realParameter[206] /* iEEET2.S_EE_2 PARAM */, data->simulationInfo->realParameter[193] /* iEEET2.E_1 PARAM */, data->simulationInfo->realParameter[194] /* iEEET2.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 12
type: ALGORITHM

  (iEEET2.V_RMAX0, iEEET2.V_RMIN0, iEEET2.K_E0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(iEEET2.V_RMAX, iEEET2.V_RMIN, iEEET2.K_E, iEEET2.E_2, iEEET2.S_EE_2, iEEET2.Efd0, iEEET2.SE_Efd0);
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[223] /* iEEET2.V_RMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[222] /* iEEET2.V_RMAX PARAM */, data->simulationInfo->realParameter[224] /* iEEET2.V_RMIN PARAM */, data->simulationInfo->realParameter[197] /* iEEET2.K_E PARAM */, data->simulationInfo->realParameter[194] /* iEEET2.E_2 PARAM */, data->simulationInfo->realParameter[206] /* iEEET2.S_EE_2 PARAM */, data->simulationInfo->realParameter[195] /* iEEET2.Efd0 PARAM */, data->simulationInfo->realParameter[204] /* iEEET2.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[225] /* iEEET2.V_RMIN0 PARAM */ ,&data->simulationInfo->realParameter[198] /* iEEET2.K_E0 PARAM */);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.K_E = iEEET2.K_E0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[241] /* iEEET2.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[198] /* iEEET2.K_E0 PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.gain.k = iEEET2.rotatingExciter.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->realParameter[247] /* iEEET2.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[241] /* iEEET2.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
iEEET2.simpleLagLim.outMin = iEEET2.V_RMIN0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[264] /* iEEET2.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[225] /* iEEET2.V_RMIN0 PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
iEEET2.simpleLagLim.outMax = iEEET2.V_RMAX0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[223] /* iEEET2.V_RMAX0 PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
iEEET2.VR0 = iEEET2.Efd0 * (iEEET2.K_E0 + iEEET2.SE_Efd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[219] /* iEEET2.VR0 PARAM */ = (data->simulationInfo->realParameter[195] /* iEEET2.Efd0 PARAM */) * (data->simulationInfo->realParameter[198] /* iEEET2.K_E0 PARAM */ + data->simulationInfo->realParameter[204] /* iEEET2.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
iEEET2.simpleLagLim.y_start = iEEET2.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[265] /* iEEET2.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[219] /* iEEET2.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$START.iEEET2.derivativeLag.u = iEEET2.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->modelData->realVarsData[93].attribute /* iEEET2.derivativeLag.u variable */.start = data->simulationInfo->realParameter[265] /* iEEET2.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[93] /* iEEET2.derivativeLag.u variable */ = data->modelData->realVarsData[93].attribute /* iEEET2.derivativeLag.u variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* iEEET2.derivativeLag.u */.name, (modelica_real) data->localData[0]->realVars[93] /* iEEET2.derivativeLag.u variable */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
iEEET2.derivativeLag.x_start = iEEET2.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->simulationInfo->realParameter[236] /* iEEET2.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[219] /* iEEET2.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$START.iEEET2.derivativeLag.x = iEEET2.derivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->modelData->realVarsData[9].attribute /* iEEET2.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[236] /* iEEET2.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[9] /* iEEET2.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[9].attribute /* iEEET2.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* iEEET2.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[9] /* iEEET2.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
iEEET2.rotatingExciter.sISO.y = iEEET2.rotatingExciter.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[10] /* iEEET2.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[249] /* iEEET2.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(DATA *data, threadData_t *threadData);


/*
equation index: 27
type: SIMPLE_ASSIGN
iEEET2.simpleLagLim.state = iEEET2.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[265] /* iEEET2.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
iEEET2.derivativeLag.y = iEEET2.derivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */ = data->simulationInfo->realParameter[237] /* iEEET2.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
iEEET2.simpleLag.state = iEEET2.simpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[11] /* iEEET2.simpleLag.state STATE(1) */ = data->simulationInfo->realParameter[258] /* iEEET2.simpleLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
iEEET2.add.u2 = if abs(iEEET2.simpleLag.T) <= 1e-15 then iEEET2.derivativeLag.y * iEEET2.simpleLag.K else iEEET2.simpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[255] /* iEEET2.simpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[91] /* iEEET2.add.u2 variable */ = (tmp0?(data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */) * (data->simulationInfo->realParameter[254] /* iEEET2.simpleLag.K PARAM */):data->localData[0]->realVars[11] /* iEEET2.simpleLag.state STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[7] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[172] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[18] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[17] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[16] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
gENROE.XADIFD = iEEET2.rotatingExciter.sISO.y - $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[77] /* gENROE.XADIFD variable */ = data->localData[0]->realVars[10] /* iEEET2.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[16] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[147] /* gENROE.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[15] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[78] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[15] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[150] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_67(DATA*, threadData_t*);
/*
equation index: 93
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine3.ir.re, pwLine4.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine1.is.re, pwLine3.is.re, pwLine.ir.im, pwLine1.is.im, constantLoad.p.ii, constantLoad.p.ir, pwLine4.ir.re, pwLine1.ir.im, gENCLS.id, gENCLS.iq, gENROE.Epd, gENROE.Epq, gENROE.uq, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine1.vr.im, pwLine1.vr.re, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 93 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[130] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[142] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[141] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[129] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[120] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[132] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[107] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[119] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[140] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[117] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[92] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[94] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[109] /* gENROE.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[110] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[184] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[137] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[176] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[178] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[101] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[103] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,93};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 93 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[130] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[142] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[141] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[129] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[120] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[132] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[107] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[119] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[140] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[60] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[61] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[84] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[73] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[81] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[82] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[121] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[122] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[123] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[124] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[133] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[134] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(DATA *data, threadData_t *threadData);


/*
equation index: 96
type: SIMPLE_ASSIGN
iEEET2.ECOMP0 = iEEET2.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->simulationInfo->realParameter[192] /* iEEET2.ECOMP0 PARAM */ = data->localData[0]->realVars[87] /* iEEET2.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
iEEET2.V_REF = iEEET2.VR0 / iEEET2.K_A + iEEET2.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->simulationInfo->realParameter[221] /* iEEET2.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[219] /* iEEET2.VR0 PARAM */,data->simulationInfo->realParameter[196] /* iEEET2.K_A PARAM */,"iEEET2.K_A",equationIndexes) + data->simulationInfo->realParameter[192] /* iEEET2.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
iEEET2.VoltageReference.k = iEEET2.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->simulationInfo->realParameter[226] /* iEEET2.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[221] /* iEEET2.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
iEEET2.DiffV.u1 = iEEET2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->simulationInfo->realParameter[191] /* iEEET2.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[226] /* iEEET2.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
iEEET2.VoltageReference.y = iEEET2.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->simulationInfo->realParameter[227] /* iEEET2.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[226] /* iEEET2.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
iEEET2.TransducerDelay.y_start = iEEET2.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->simulationInfo->realParameter[216] /* iEEET2.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[192] /* iEEET2.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
$START.iEEET2.TransducerDelay.state = iEEET2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->modelData->realVarsData[8].attribute /* iEEET2.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[216] /* iEEET2.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[8] /* iEEET2.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[8].attribute /* iEEET2.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* iEEET2.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[8] /* iEEET2.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
iEEET2.TransducerDelay.state = iEEET2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[8] /* iEEET2.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[216] /* iEEET2.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
$START.iEEET2.DiffV.u2 = iEEET2.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->modelData->realVarsData[85].attribute /* iEEET2.DiffV.u2 variable */.start = data->simulationInfo->realParameter[216] /* iEEET2.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[85] /* iEEET2.DiffV.u2 variable */ = data->modelData->realVarsData[85].attribute /* iEEET2.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* iEEET2.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[85] /* iEEET2.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_292(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: SIMPLE_ASSIGN
iEEET2.add.y = iEEET2.add.k1 * iEEET2.add.u1 + iEEET2.add.k2 * iEEET2.add.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[92] /* iEEET2.add.y variable */ = (data->simulationInfo->realParameter[228] /* iEEET2.add.k1 PARAM */) * (data->localData[0]->realVars[90] /* iEEET2.add.u1 variable */) + (data->simulationInfo->realParameter[229] /* iEEET2.add.k2 PARAM */) * (data->localData[0]->realVars[91] /* iEEET2.add.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(DATA *data, threadData_t *threadData);


/*
equation index: 111
type: SIMPLE_ASSIGN
iEEET2.derivativeLag.u = if abs(iEEET2.simpleLagLim.T) <= 1e-15 then max(min(iEEET2.add.y * iEEET2.simpleLagLim.K, iEEET2.simpleLagLim.outMax), iEEET2.simpleLagLim.outMin) else max(min(iEEET2.simpleLagLim.state, iEEET2.simpleLagLim.outMax), iEEET2.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[260] /* iEEET2.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[93] /* iEEET2.derivativeLag.u variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[92] /* iEEET2.add.y variable */) * (data->simulationInfo->realParameter[259] /* iEEET2.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[264] /* iEEET2.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[12] /* iEEET2.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[264] /* iEEET2.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_307(DATA *data, threadData_t *threadData);


/*
equation index: 114
type: SIMPLE_ASSIGN
iEEET2.derivativeLag.x = (iEEET2.derivativeLag.u / iEEET2.derivativeLag.T * 0.06 - iEEET2.derivativeLag.y) * iEEET2.derivativeLag.T / 0.06
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[9] /* iEEET2.derivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[93] /* iEEET2.derivativeLag.u variable */,data->simulationInfo->realParameter[234] /* iEEET2.derivativeLag.T PARAM */,"iEEET2.derivativeLag.T",equationIndexes)) * (0.06) - data->localData[0]->realVars[94] /* iEEET2.derivativeLag.y variable */) * (data->simulationInfo->realParameter[234] /* iEEET2.derivativeLag.T PARAM */),0.06,"0.06",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_309(DATA *data, threadData_t *threadData);


/*
equation index: 119
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[111] /* pwLine.vs.im variable */, data->localData[0]->realVars[112] /* pwLine.vs.re variable */));
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[123] /* pwLine1.vs.im variable */, data->localData[0]->realVars[124] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(DATA *data, threadData_t *threadData);


/*
equation index: 123
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[121] /* pwLine1.vr.im variable */, data->localData[0]->realVars[122] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_329(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_330(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_331(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_336(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_335(DATA *data, threadData_t *threadData);


/*
equation index: 129
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[133] /* pwLine3.vr.im variable */, data->localData[0]->realVars[134] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_275(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_273(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_327(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_334(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_333(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_326(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(DATA *data, threadData_t *threadData);


/*
equation index: 154
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_93(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_96(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_98(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_100(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_101(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_102(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_103(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_104(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_108(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_111(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_114(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_331(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_336(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_335(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_129(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_273(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_334(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_333(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_155(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_158(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_159(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_160(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[62] /* gENCLS.omega variable */;
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

