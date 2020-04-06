/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS._omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[60] /* gENCLS.omega variable */ = data->modelData->realVarsData[60].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
iEEET2_1._DiffV1._y = const.k * (iEEET2_1.DiffV1.k1 + iEEET2_1.DiffV1.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[85] /* iEEET2_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[34]) * (data->simulationInfo->realParameter[187] + data->simulationInfo->realParameter[188]);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_156(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS._delta = $START.gENCLS.delta
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_4(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_5(DATA *data, threadData_t *threadData)
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
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[192] = data->localData[0]->realVars[87] /* iEEET2_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._Efd0 = iEEET2_1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[221] = data->simulationInfo->realParameter[192];
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._sISO._y_start = iEEET2_1.rotatingExciter.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[230] = data->simulationInfo->realParameter[221];
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._x_start = iEEET2_1.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->simulationInfo->realParameter[217] = data->simulationInfo->realParameter[192];
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
$START._iEEET2_1._derivativeLag._x = iEEET2_1.derivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->modelData->realVarsData[9].attribute /* iEEET2_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[217];
    data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[9].attribute /* iEEET2_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* iEEET2_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
iEEET2_1._SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(iEEET2_1.Efd0, iEEET2_1.S_EE_1, iEEET2_1.S_EE_2, iEEET2_1.E_1, iEEET2_1.E_2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[197] = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[192], data->simulationInfo->realParameter[198], data->simulationInfo->realParameter[199], data->simulationInfo->realParameter[190], data->simulationInfo->realParameter[191]);
  TRACE_POP
}

/*
equation index: 12
type: ALGORITHM

  (iEEET2_1.VRMAX0, iEEET2_1.VRMIN0, iEEET2_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(iEEET2_1.V_RMAX, iEEET2_1.V_RMIN, iEEET2_1.K_E, iEEET2_1.E_2, iEEET2_1.S_EE_2, iEEET2_1.Efd0, iEEET2_1.SE_Efd0);
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[209] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[212], data->simulationInfo->realParameter[213], data->simulationInfo->realParameter[195], data->simulationInfo->realParameter[191], data->simulationInfo->realParameter[199], data->simulationInfo->realParameter[192], data->simulationInfo->realParameter[197] ,&data->simulationInfo->realParameter[210] ,&data->simulationInfo->realParameter[193]);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._K_E = iEEET2_1.KE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[222] = data->simulationInfo->realParameter[193];
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._gain._k = iEEET2_1.rotatingExciter.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->realParameter[228] = data->simulationInfo->realParameter[222];
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
iEEET2_1._VR0 = iEEET2_1.Efd0 * (iEEET2_1.KE0 + iEEET2_1.SE_Efd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[208] = (data->simulationInfo->realParameter[192]) * (data->simulationInfo->realParameter[193] + data->simulationInfo->realParameter[197]);
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._y_start = iEEET2_1.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[240] = data->simulationInfo->realParameter[208];
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$START._iEEET2_1._rotatingExciter._I_C = iEEET2_1.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->modelData->realVarsData[89].attribute /* iEEET2_1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[240];
    data->localData[0]->realVars[89] /* iEEET2_1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[89].attribute /* iEEET2_1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* iEEET2_1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[89] /* iEEET2_1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._sISO._y = iEEET2_1.rotatingExciter.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[230];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_167(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_168(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_166(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_169(DATA *data, threadData_t *threadData);


/*
equation index: 23
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._state = iEEET2_1.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[11] /* iEEET2_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[240];
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._y = iEEET2_1.derivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[88] /* iEEET2_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[218];
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._x = (iEEET2_1.rotatingExciter.sISO.y / iEEET2_1.derivativeLag.T * 0.06 - iEEET2_1.derivativeLag.y) * iEEET2_1.derivativeLag.T / 0.06
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[215],"iEEET2_1.derivativeLag.T",equationIndexes)) * (0.06) - data->localData[0]->realVars[88] /* iEEET2_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[215]),0.06,"0.06",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_164(DATA *data, threadData_t *threadData);


/*
equation index: 27
type: SIMPLE_ASSIGN
gENROE._w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[7] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_163(DATA *data, threadData_t *threadData);


/*
equation index: 29
type: SIMPLE_ASSIGN
gENROE._delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[168];
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[17] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[16] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
der(gENROE._Epq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[15] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
gENROE._XADIFD = iEEET2_1.rotatingExciter.sISO.y - $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[75] /* gENROE.XADIFD variable */ = data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[15] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[143]));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
der(gENROE._Epd) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[14] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
gENROE._XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[76] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[14] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[146]);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_36(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_37(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_38(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_39(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_40(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_62(DATA*, threadData_t*);
/*
equation index: 88
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine._ir._re, pwLine1._is._re, pwLine._ir._im, constantLoad._p._ii, pwLine3._is._re, pwLine3._is._im, pwLine4._is._re, pwLine3._ir._re, pwLine3._ir._im, pwLine4._is._im, pwLine4._ir._re, pwLine1._ir._im, gENCLS._id, gENCLS._iq, gENROE._Epq, gENROE._PSIkq, gENROE._uq, gENROE._PSIppq, gENROE._iq, gENROE._id, pwLine1._vr._re, pwLine1._vr._im, pwLine1._vs._im, pwLine1._vs._re, pwLine3._vr._re, pwLine3._vr._im}
eqns: {36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 88 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[104] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[116] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[103] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[51] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[128] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[127] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[138] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[126] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[125] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[137] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[136] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[113] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[58] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[59] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[82] /* gENROE.uq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[71] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[80] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[79] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[118] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[117] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[119] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[120] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[130] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[129] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,88};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 88 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[104] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[116] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[103] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[128] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[127] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[138] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[126] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[125] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[137] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[136] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[113] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[58] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[59] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[82] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[71] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[80] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[79] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[118] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[117] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[119] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[120] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[130] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[129] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[43] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[119] /* pwLine1.vs.im variable */, data->localData[0]->realVars[120] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_265(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_305(DATA *data, threadData_t *threadData);


/*
equation index: 92
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[39] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[117] /* pwLine1.vr.im variable */, data->localData[0]->realVars[118] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_315(DATA *data, threadData_t *threadData);


/*
equation index: 96
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[31] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[129] /* pwLine3.vr.im variable */, data->localData[0]->realVars[130] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_267(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_273(DATA *data, threadData_t *threadData);


/*
equation index: 114
type: SIMPLE_ASSIGN
iEEET2_1._ECOMP0 = iEEET2_1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->realParameter[189] = data->localData[0]->realVars[86] /* iEEET2_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
iEEET2_1._V_REF = iEEET2_1.VR0 / iEEET2_1.K_A + iEEET2_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[211] = DIVISION_SIM(data->simulationInfo->realParameter[208],data->simulationInfo->realParameter[194],"iEEET2_1.K_A",equationIndexes) + data->simulationInfo->realParameter[189];
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
iEEET2_1._VoltageReference._k = iEEET2_1.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[214] = data->simulationInfo->realParameter[211];
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
iEEET2_1._TransducerDelay._y_start = iEEET2_1.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[207] = data->simulationInfo->realParameter[189];
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
$START._iEEET2_1._TransducerDelay._state = iEEET2_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->modelData->realVarsData[8].attribute /* iEEET2_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[207];
    data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[8].attribute /* iEEET2_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* iEEET2_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
iEEET2_1._TransducerDelay._state = iEEET2_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[207];
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
$START._iEEET2_1._DiffV._u2 = iEEET2_1.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->modelData->realVarsData[83].attribute /* iEEET2_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[207];
    data->localData[0]->realVars[83] /* iEEET2_1.DiffV.u2 variable */ = data->modelData->realVarsData[83].attribute /* iEEET2_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* iEEET2_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[83] /* iEEET2_1.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_275(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_276(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_284(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_282(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_279(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_285(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[35] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[107] /* pwLine.vs.im variable */, data->localData[0]->realVars[108] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_307(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(DATA *data, threadData_t *threadData);


/*
equation index: 145
type: SIMPLE_ASSIGN
GEN1._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[37] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
GEN1._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[36] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
LOAD._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[45] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
LOAD._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[44] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
GEN2._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[41] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
GEN2._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[40] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
FAULT._p._ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[33] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
FAULT._p._ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[32] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_157(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_158(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_167(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_166(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_164(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_33(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_88(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_89(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_265(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_92(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_96(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_267(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_273(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_114(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_115(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_117(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_118(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_276(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_278(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_280(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_281(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_279(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_158(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[60] /* gENCLS.omega variable */;
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

