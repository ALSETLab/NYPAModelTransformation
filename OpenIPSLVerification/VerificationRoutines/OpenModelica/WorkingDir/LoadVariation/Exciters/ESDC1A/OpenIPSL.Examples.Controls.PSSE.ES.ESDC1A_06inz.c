/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[80] /* gENCLS.omega variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eSDC1A.DiffV1.y = const.k * (eSDC1A.DiffV1.k1 + eSDC1A.DiffV1.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[58] /* eSDC1A.DiffV1.y variable */ = (data->simulationInfo->realParameter[34] /* const.k PARAM */) * (data->simulationInfo->realParameter[83] /* eSDC1A.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[84] /* eSDC1A.DiffV1.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_167(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[193] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
eSDC1A.Efd0 = eSDC1A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->simulationInfo->realParameter[90] /* eSDC1A.Efd0 PARAM */ = data->localData[0]->realVars[60] /* eSDC1A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.Efd0 = eSDC1A.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->simulationInfo->realParameter[148] /* eSDC1A.rotatingExciterLimited.Efd0 PARAM */ = data->simulationInfo->realParameter[90] /* eSDC1A.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.sISO.y_start = eSDC1A.rotatingExciterLimited.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->simulationInfo->realParameter[159] /* eSDC1A.rotatingExciterLimited.sISO.y_start PARAM */ = data->simulationInfo->realParameter[148] /* eSDC1A.rotatingExciterLimited.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
eSDC1A.imDerivativeLag.x_start = eSDC1A.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->simulationInfo->realParameter[126] /* eSDC1A.imDerivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[90] /* eSDC1A.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
$START.eSDC1A.imDerivativeLag.x = eSDC1A.imDerivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->modelData->realVarsData[1].attribute /* eSDC1A.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[126] /* eSDC1A.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[1] /* eSDC1A.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[1].attribute /* eSDC1A.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eSDC1A.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[1] /* eSDC1A.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
eSDC1A.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(eSDC1A.Efd0, eSDC1A.S_EE_1, eSDC1A.S_EE_2, eSDC1A.E_1, eSDC1A.E_2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->simulationInfo->realParameter[95] /* eSDC1A.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[90] /* eSDC1A.Efd0 PARAM */, data->simulationInfo->realParameter[96] /* eSDC1A.S_EE_1 PARAM */, data->simulationInfo->realParameter[97] /* eSDC1A.S_EE_2 PARAM */, data->simulationInfo->realParameter[88] /* eSDC1A.E_1 PARAM */, data->simulationInfo->realParameter[89] /* eSDC1A.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 12
type: ALGORITHM

  (eSDC1A.V_RMAX0, eSDC1A.V_RMIN0, eSDC1A.K_E0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(eSDC1A.V_RMAX, eSDC1A.V_RMIN, eSDC1A.K_E, eSDC1A.E_2, eSDC1A.S_EE_2, eSDC1A.Efd0, eSDC1A.SE_Efd0);
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->simulationInfo->realParameter[115] /* eSDC1A.V_RMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[114] /* eSDC1A.V_RMAX PARAM */, data->simulationInfo->realParameter[116] /* eSDC1A.V_RMIN PARAM */, data->simulationInfo->realParameter[92] /* eSDC1A.K_E PARAM */, data->simulationInfo->realParameter[89] /* eSDC1A.E_2 PARAM */, data->simulationInfo->realParameter[97] /* eSDC1A.S_EE_2 PARAM */, data->simulationInfo->realParameter[90] /* eSDC1A.Efd0 PARAM */, data->simulationInfo->realParameter[95] /* eSDC1A.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[117] /* eSDC1A.V_RMIN0 PARAM */ ,&data->simulationInfo->realParameter[93] /* eSDC1A.K_E0 PARAM */);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.outMax = eSDC1A.V_RMAX0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->simulationInfo->realParameter[168] /* eSDC1A.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[115] /* eSDC1A.V_RMAX0 PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.K_E = eSDC1A.K_E0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->simulationInfo->realParameter[149] /* eSDC1A.rotatingExciterLimited.K_E PARAM */ = data->simulationInfo->realParameter[93] /* eSDC1A.K_E0 PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.gain.k = eSDC1A.rotatingExciterLimited.K_E
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[155] /* eSDC1A.rotatingExciterLimited.gain.k PARAM */ = data->simulationInfo->realParameter[149] /* eSDC1A.rotatingExciterLimited.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.outMin = eSDC1A.V_RMIN0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[169] /* eSDC1A.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[117] /* eSDC1A.V_RMIN0 PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
eSDC1A.V_R0 = eSDC1A.Efd0 * (eSDC1A.K_E0 + eSDC1A.SE_Efd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[112] /* eSDC1A.V_R0 PARAM */ = (data->simulationInfo->realParameter[90] /* eSDC1A.Efd0 PARAM */) * (data->simulationInfo->realParameter[93] /* eSDC1A.K_E0 PARAM */ + data->simulationInfo->realParameter[95] /* eSDC1A.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.y_start = eSDC1A.V_R0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[170] /* eSDC1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[112] /* eSDC1A.V_R0 PARAM */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$START.eSDC1A.rotatingExciterLimited.I_C = eSDC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->modelData->realVarsData[68].attribute /* eSDC1A.rotatingExciterLimited.I_C variable */.start = data->simulationInfo->realParameter[170] /* eSDC1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[68] /* eSDC1A.rotatingExciterLimited.I_C variable */ = data->modelData->realVarsData[68].attribute /* eSDC1A.rotatingExciterLimited.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSDC1A.rotatingExciterLimited.I_C */.name, (modelica_real) data->localData[0]->realVars[68] /* eSDC1A.rotatingExciterLimited.I_C variable */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.y_start = eSDC1A.V_R0 / eSDC1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->simulationInfo->realParameter[145] /* eSDC1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[112] /* eSDC1A.V_R0 PARAM */,data->simulationInfo->realParameter[91] /* eSDC1A.K_A PARAM */,"eSDC1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.y_start = eSDC1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->simulationInfo->realParameter[141] /* eSDC1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[145] /* eSDC1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.sISO.y = eSDC1A.rotatingExciterLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ = data->simulationInfo->realParameter[159] /* eSDC1A.rotatingExciterLimited.sISO.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(DATA *data, threadData_t *threadData);


/*
equation index: 27
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.state = eSDC1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[170] /* eSDC1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.y = eSDC1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[67] /* eSDC1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[141] /* eSDC1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
eSDC1A.imDerivativeLag.y = eSDC1A.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[65] /* eSDC1A.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[127] /* eSDC1A.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
eSDC1A.imDerivativeLag.x = (eSDC1A.rotatingExciterLimited.sISO.y / eSDC1A.imDerivativeLag.T * 0.07000000000000001 - eSDC1A.imDerivativeLag.y) * eSDC1A.imDerivativeLag.T / 0.07000000000000001
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[1] /* eSDC1A.imDerivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */,data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */,"eSDC1A.imDerivativeLag.T",equationIndexes)) * (0.07000000000000001) - data->localData[0]->realVars[65] /* eSDC1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */),0.07000000000000001,"0.07000000000000001",equationIndexes);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[265] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
eSDC1A.XADIFD = eSDC1A.rotatingExciterLimited.sISO.y - $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[61] /* eSDC1A.XADIFD variable */ = data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ - ((data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[240] /* gENROE.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[95] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[243] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_41(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_42(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_43(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_67(DATA*, threadData_t*);
/*
equation index: 93
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.re, constantLoad.p.ir, pwLine3.ir.re, pwLine4.is.re, pwLine1.is.im, pwLine3.is.im, pwLine3.is.re, pwLine.ir.im, pwLine3.ir.im, pwLine4.is.im, pwLine1.ir.re, pwLine1.ir.im, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.PSIkq, gENROE.uq, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine1.vr.re, pwLine1.vr.im, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_93(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[109] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->simulationInfo->realParameter[72] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[131] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[143] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[120] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[132] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[133] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[108] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[130] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[142] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[119] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[118] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->simulationInfo->realParameter[187] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->simulationInfo->realParameter[185] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->simulationInfo->realParameter[203] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->simulationInfo->realParameter[224] /* gENROE.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->simulationInfo->realParameter[277] /* gENROE.uq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->simulationInfo->realParameter[230] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,93};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 93 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[109] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[131] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[143] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[120] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[132] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[133] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[108] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[130] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[142] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[119] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[118] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[79] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[78] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[101] /* gENROE.uq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[91] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[98] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[99] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[123] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[122] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[124] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[125] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[134] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[135] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_310(DATA *data, threadData_t *threadData);


/*
equation index: 95
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[124] /* pwLine1.vs.im variable */, data->localData[0]->realVars[125] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_318(DATA *data, threadData_t *threadData);


/*
equation index: 97
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[134] /* pwLine3.vr.im variable */, data->localData[0]->realVars[135] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_313(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[122] /* pwLine1.vr.im variable */, data->localData[0]->realVars[123] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_329(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_330(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_335(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_334(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_327(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_326(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_333(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_332(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(DATA *data, threadData_t *threadData);


/*
equation index: 119
type: SIMPLE_ASSIGN
eSDC1A.ECOMP0 = eSDC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[87] /* eSDC1A.ECOMP0 PARAM */ = data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
eSDC1A.V_REF = eSDC1A.V_R0 / eSDC1A.K_A + eSDC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[113] /* eSDC1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[112] /* eSDC1A.V_R0 PARAM */,data->simulationInfo->realParameter[91] /* eSDC1A.K_A PARAM */,"eSDC1A.K_A",equationIndexes) + data->simulationInfo->realParameter[87] /* eSDC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
eSDC1A.VoltageReference.k = eSDC1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[118] /* eSDC1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[113] /* eSDC1A.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
eSDC1A.DiffV.u1 = eSDC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[82] /* eSDC1A.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[118] /* eSDC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
eSDC1A.VoltageReference.y = eSDC1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[119] /* eSDC1A.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[118] /* eSDC1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
eSDC1A.TransducerDelay.y_start = eSDC1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[108] /* eSDC1A.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[87] /* eSDC1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
$START.eSDC1A.TransducerDelay.state = eSDC1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->modelData->realVarsData[0].attribute /* eSDC1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[108] /* eSDC1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSDC1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSDC1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSDC1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSDC1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
eSDC1A.TransducerDelay.state = eSDC1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[0] /* eSDC1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[108] /* eSDC1A.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
$START.eSDC1A.DiffV.u2 = eSDC1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->modelData->realVarsData[56].attribute /* eSDC1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[108] /* eSDC1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[56] /* eSDC1A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSDC1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSDC1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSDC1A.DiffV.u2 variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_299(DATA *data, threadData_t *threadData);


/*
equation index: 139
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.x[1] = (eSDC1A.imLeadLag.TF.d * eSDC1A.add3_1.y - eSDC1A.imLeadLag.TF.y) / (eSDC1A.imLeadLag.TF.a[2] * eSDC1A.imLeadLag.TF.d - eSDC1A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[66] /* eSDC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[139] /* eSDC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[62] /* eSDC1A.add3_1.y variable */) - data->localData[0]->realVars[67] /* eSDC1A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[133] /* eSDC1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[139] /* eSDC1A.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[138] /* eSDC1A.imLeadLag.TF.bb[2] PARAM */,"eSDC1A.imLeadLag.TF.a[2] * eSDC1A.imLeadLag.TF.d - eSDC1A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.x_scaled[1] = eSDC1A.imLeadLag.TF.x[1] * eSDC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[2] /* eSDC1A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[66] /* eSDC1A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[134] /* eSDC1A.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_305(DATA *data, threadData_t *threadData);


/*
equation index: 144
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[112] /* pwLine.vs.im variable */, data->localData[0]->realVars[113] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_281(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_282(DATA *data, threadData_t *threadData);


/*
equation index: 156
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[39] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[38] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[47] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[46] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[43] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[42] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[35] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[34] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_168(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_169(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_167(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_19(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_21(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_27(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_28(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_29(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_30(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_36(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_37(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_93(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_95(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_99(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_335(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_334(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_333(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_122(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_124(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_126(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_140(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_281(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_282(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_158(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_159(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_160(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_162(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_169(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[80] /* gENCLS.omega variable */;
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

