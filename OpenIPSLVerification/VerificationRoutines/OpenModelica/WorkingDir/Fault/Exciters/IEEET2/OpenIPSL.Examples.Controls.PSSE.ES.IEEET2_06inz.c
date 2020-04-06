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
gENCLS._omega = $START.gENCLS.omega
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
iEEET2_1._Limiters._y = const.k * (iEEET2_1.Limiters.k1 + iEEET2_1.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[89] /* iEEET2_1.Limiters.y variable */ = (data->simulationInfo->realParameter[34]) * (data->simulationInfo->realParameter[195] + data->simulationInfo->realParameter[196]);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_161(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS._delta = $START.gENCLS.delta
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_4(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
iEEET2_1._Efd0 = iEEET2_1.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[190] = data->localData[0]->realVars[88] /* iEEET2_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._Efd0 = iEEET2_1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[227] = data->simulationInfo->realParameter[190];
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._sISO._y_start = iEEET2_1.rotatingExciter.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[236] = data->simulationInfo->realParameter[227];
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
iEEET2_1._SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(iEEET2_1.EFD0, iEEET2_1.S_EE_1, iEEET2_1.S_EE_2, iEEET2_1.E_1, iEEET2_1.E_2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->simulationInfo->realParameter[197] = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[88] /* iEEET2_1.EFD0 variable */, data->simulationInfo->realParameter[198], data->simulationInfo->realParameter[199], data->simulationInfo->realParameter[188], data->simulationInfo->realParameter[189]);
  TRACE_POP
}

/*
equation index: 10
type: ALGORITHM

  (iEEET2_1.V_RMAX0, iEEET2_1.V_RMIN0, iEEET2_1.K_E0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(iEEET2_1.V_RMAX, iEEET2_1.V_RMIN, iEEET2_1.K_E, iEEET2_1.E_2, iEEET2_1.S_EE_2, iEEET2_1.Efd0, iEEET2_1.SE_Efd0);
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->simulationInfo->realParameter[212] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[211], data->simulationInfo->realParameter[213], data->simulationInfo->realParameter[192], data->simulationInfo->realParameter[189], data->simulationInfo->realParameter[199], data->simulationInfo->realParameter[190], data->simulationInfo->realParameter[197] ,&data->simulationInfo->realParameter[214] ,&data->simulationInfo->realParameter[193]);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._K_E = iEEET2_1.K_E0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[228] = data->simulationInfo->realParameter[193];
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._gain._k = iEEET2_1.rotatingExciter.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[234] = data->simulationInfo->realParameter[228];
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._outMax = iEEET2_1.V_RMAX0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[248] = data->simulationInfo->realParameter[212];
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._outMin = iEEET2_1.V_RMIN0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->realParameter[249] = data->simulationInfo->realParameter[214];
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
iEEET2_1._VR0 = iEEET2_1.Efd0 * (iEEET2_1.K_E0 + iEEET2_1.SE_Efd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[209] = (data->simulationInfo->realParameter[190]) * (data->simulationInfo->realParameter[193] + data->simulationInfo->realParameter[197]);
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._y_start = iEEET2_1.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[250] = data->simulationInfo->realParameter[209];
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$START._iEEET2_1._derivativeLag._u = iEEET2_1.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->modelData->realVarsData[93].attribute /* iEEET2_1.derivativeLag.u variable */.start = data->simulationInfo->realParameter[250];
    data->localData[0]->realVars[93] /* iEEET2_1.derivativeLag.u variable */ = data->modelData->realVarsData[93].attribute /* iEEET2_1.derivativeLag.u variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* iEEET2_1.derivativeLag.u */.name, (modelica_real) data->localData[0]->realVars[93] /* iEEET2_1.derivativeLag.u variable */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._x_start = iEEET2_1.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[223] = data->simulationInfo->realParameter[209];
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$START._iEEET2_1._derivativeLag._x = iEEET2_1.derivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->modelData->realVarsData[9].attribute /* iEEET2_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[223];
    data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[9].attribute /* iEEET2_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* iEEET2_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._sISO._y = iEEET2_1.rotatingExciter.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[236];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._state = iEEET2_1.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[250];
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._y = iEEET2_1.derivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[94] /* iEEET2_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[224];
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
iEEET2_1._simpleLag._state = iEEET2_1.simpleLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[11] /* iEEET2_1.simpleLag.state STATE(1) */ = data->simulationInfo->realParameter[244];
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
iEEET2_1._add._u2 = if abs(iEEET2_1.simpleLag.T) <= 1e-15 then iEEET2_1.derivativeLag.y * iEEET2_1.simpleLag.K else iEEET2_1.simpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[242]),1e-15);
  data->localData[0]->realVars[91] /* iEEET2_1.add.u2 variable */ = (tmp0?(data->localData[0]->realVars[94] /* iEEET2_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[241]):data->localData[0]->realVars[11] /* iEEET2_1.simpleLag.state STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(DATA *data, threadData_t *threadData);


/*
equation index: 30
type: SIMPLE_ASSIGN
gENROE._w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[7] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
gENROE._delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[168];
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[18] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[17] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
der(gENROE._Epq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[16] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
gENROE._XADIFD = iEEET2_1.rotatingExciter.sISO.y - $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[77] /* gENROE.XADIFD variable */ = data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[16] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[143]));
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
der(gENROE._Epd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[15] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
gENROE._XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[78] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[15] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[146]);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_40(DATA*, threadData_t*);
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
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_65(DATA*, threadData_t*);
/*
equation index: 91
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine._ir._re, pwLine1._is._re, pwLine._ir._im, constantLoad._p._ii, constantLoad._p._ir, pwLine3._is._im, pwLine3._ir._im, pwLine4._is._im, pwLine3._ir._re, pwLine4._is._re, pwLine1._ir._im, pwLine1._ir._re, gENCLS._iq, gENCLS._id, gENROE._PSIkd, gENROE._PSIkq, gENROE._ud, gENROE._PSIppd, gENROE._iq, gENROE._id, pwLine1._vr._im, pwLine1._vr._re, pwLine1._vs._im, pwLine1._vs._re, pwLine3._vr._re, pwLine3._vr._im}
eqns: {39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 91 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[119] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[61] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[60] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[83] /* gENROE.ud variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[72] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[82] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[81] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,91};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 91 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[119] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[61] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[60] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[83] /* gENROE.ud variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[72] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[82] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[81] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[120] /* pwLine1.vr.im variable */, data->localData[0]->realVars[121] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_326(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_327(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_332(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_331(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_268(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[122] /* pwLine1.vs.im variable */, data->localData[0]->realVars[123] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_319(DATA *data, threadData_t *threadData);


/*
equation index: 101
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[132] /* pwLine3.vr.im variable */, data->localData[0]->realVars[133] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_270(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_269(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_275(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_330(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_329(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(DATA *data, threadData_t *threadData);


/*
equation index: 115
type: SIMPLE_ASSIGN
iEEET2_1._ECOMP0 = iEEET2_1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[187] = data->localData[0]->realVars[87] /* iEEET2_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
iEEET2_1._V_REF = iEEET2_1.VR0 / iEEET2_1.K_A + iEEET2_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[210] = DIVISION_SIM(data->simulationInfo->realParameter[209],data->simulationInfo->realParameter[191],"iEEET2_1.K_A",equationIndexes) + data->simulationInfo->realParameter[187];
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
iEEET2_1._VoltageReference._k = iEEET2_1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[215] = data->simulationInfo->realParameter[210];
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
iEEET2_1._TransducerDelay._y_start = iEEET2_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[208] = data->simulationInfo->realParameter[187];
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
$START._iEEET2_1._TransducerDelay._state = iEEET2_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->modelData->realVarsData[8].attribute /* iEEET2_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[208];
    data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[8].attribute /* iEEET2_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* iEEET2_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
iEEET2_1._TransducerDelay._state = iEEET2_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[208];
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
$START._iEEET2_1._DiffV._u2 = iEEET2_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->modelData->realVarsData[85].attribute /* iEEET2_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[208];
    data->localData[0]->realVars[85] /* iEEET2_1.DiffV.u2 variable */ = data->modelData->realVarsData[85].attribute /* iEEET2_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* iEEET2_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[85] /* iEEET2_1.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(DATA *data, threadData_t *threadData);


/*
equation index: 125
type: SIMPLE_ASSIGN
iEEET2_1._add._y = iEEET2_1.add.k1 * iEEET2_1.add.u1 + iEEET2_1.add.k2 * iEEET2_1.add.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */ = (data->simulationInfo->realParameter[216]) * (data->localData[0]->realVars[90] /* iEEET2_1.add.u1 variable */) + (data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[91] /* iEEET2_1.add.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_299(DATA *data, threadData_t *threadData);


/*
equation index: 128
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._u = if abs(iEEET2_1.simpleLagLim.T) <= 1e-15 then max(min(iEEET2_1.add.y * iEEET2_1.simpleLagLim.K, iEEET2_1.simpleLagLim.outMax), iEEET2_1.simpleLagLim.outMin) else max(min(iEEET2_1.simpleLagLim.state, iEEET2_1.simpleLagLim.outMax), iEEET2_1.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[246]),1e-15);
  data->localData[0]->realVars[93] /* iEEET2_1.derivativeLag.u variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) * (data->simulationInfo->realParameter[245]),data->simulationInfo->realParameter[248]),data->simulationInfo->realParameter[249]):fmax(fmin(data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[248]),data->simulationInfo->realParameter[249]));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(DATA *data, threadData_t *threadData);


/*
equation index: 131
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._x = (iEEET2_1.derivativeLag.u / iEEET2_1.derivativeLag.T * 0.06 - iEEET2_1.derivativeLag.y) * iEEET2_1.derivativeLag.T / 0.06
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[93] /* iEEET2_1.derivativeLag.u variable */,data->simulationInfo->realParameter[221],"iEEET2_1.derivativeLag.T",equationIndexes)) * (0.06) - data->localData[0]->realVars[94] /* iEEET2_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[221]),0.06,"0.06",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(DATA *data, threadData_t *threadData);


/*
equation index: 136
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[110] /* pwLine.vs.im variable */, data->localData[0]->realVars[111] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(DATA *data, threadData_t *threadData);


/*
equation index: 150
type: SIMPLE_ASSIGN
GEN1._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
GEN1._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
LOAD._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
LOAD._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
GEN2._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
GEN2._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
FAULT._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
FAULT._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_5(data, threadData);
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
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_26(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_91(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_92(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_331(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_101(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_270(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_269(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_115(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_128(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_153(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_155(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(data, threadData);
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

