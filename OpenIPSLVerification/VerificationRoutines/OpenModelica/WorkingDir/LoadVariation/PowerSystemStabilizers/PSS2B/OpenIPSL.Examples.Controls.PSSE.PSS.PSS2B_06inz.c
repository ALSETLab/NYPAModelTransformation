/* Initialization */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_11mix.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gENCLS.omega = $START.gENCLS.omega
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[109] /* gENCLS.omega variable */ = data->modelData->realVarsData[109].attribute /* gENCLS.omega variable */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eSST1A.Limiters.y = const.k * (eSST1A.Limiters.k1 + eSST1A.Limiters.k2)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[79] /* eSST1A.Limiters.y variable */ = (data->simulationInfo->realParameter[34] /* const.k PARAM */) * (data->simulationInfo->realParameter[93] /* eSST1A.Limiters.k1 PARAM */ + data->simulationInfo->realParameter[94] /* eSST1A.Limiters.k2 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1097(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
gENCLS.delta = gENCLS.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gENCLS.eq = gENCLS.vf0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->simulationInfo->realParameter[217] /* gENCLS.vf0 PARAM */;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.y = pSS2B.derivativeLag3.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[159] /* pSS2B.derivativeLag3.TF.y variable */ = data->simulationInfo->realParameter[462] /* pSS2B.derivativeLag3.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.y = pSS2B.derivativeLag2.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[155] /* pSS2B.derivativeLag2.TF.y variable */ = data->simulationInfo->realParameter[445] /* pSS2B.derivativeLag2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.y = pSS2B.derivativeLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[153] /* pSS2B.derivativeLag1.TF.y variable */ = data->simulationInfo->realParameter[428] /* pSS2B.derivativeLag1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.y = pSS2B.derivativeLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[149] /* pSS2B.derivativeLag.TF.y variable */ = data->simulationInfo->realParameter[411] /* pSS2B.derivativeLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.y = pSS2B.Leadlag3.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[138] /* pSS2B.Leadlag3.TF.y variable */ = data->simulationInfo->realParameter[358] /* pSS2B.Leadlag3.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.state = pSS2B.SimpleLag2.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[17] /* pSS2B.SimpleLag2.state STATE(1) */ = data->simulationInfo->realParameter[372] /* pSS2B.SimpleLag2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.state = pSS2B.SimpleLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[16] /* pSS2B.SimpleLag1.state STATE(1) */ = data->simulationInfo->realParameter[367] /* pSS2B.SimpleLag1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.y = pSS2B.Leadlag2.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[135] /* pSS2B.Leadlag2.TF.y variable */ = data->simulationInfo->realParameter[340] /* pSS2B.Leadlag2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.y = pSS2B.Leadlag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[131] /* pSS2B.Leadlag1.TF.y variable */ = data->simulationInfo->realParameter[322] /* pSS2B.Leadlag1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
eSST1A.Efd0 = eSST1A.EFD0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ = data->localData[0]->realVars[78] /* eSST1A.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.x_start = eSST1A.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$START.eSST1A.imDerivativeLag.x = eSST1A.imDerivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->modelData->realVarsData[1].attribute /* eSST1A.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[1].attribute /* eSST1A.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* eSST1A.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y = eSST1A.imDerivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */ = data->simulationInfo->realParameter[142] /* eSST1A.imDerivativeLag.y_start PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(DATA *data, threadData_t *threadData);


/*
equation index: 20
type: SIMPLE_ASSIGN
gENROE.w = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[12] /* gENROE.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1098(DATA *data, threadData_t *threadData);


/*
equation index: 22
type: SIMPLE_ASSIGN
pSS2B.V_S10 = pSS2B.V_S1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->simulationInfo->realParameter[387] /* pSS2B.V_S10 PARAM */ = data->localData[0]->realVars[144] /* pSS2B.V_S1 variable */;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.x_start = pSS2B.V_S10
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[414] /* pSS2B.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[387] /* pSS2B.V_S10 PARAM */;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.x_start[1] = pSS2B.derivativeLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->realParameter[410] /* pSS2B.derivativeLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[414] /* pSS2B.derivativeLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
$START.pSS2B.derivativeLag.TF.x[1] = pSS2B.derivativeLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->modelData->realVarsData[148].attribute /* pSS2B.derivativeLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[410] /* pSS2B.derivativeLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[148] /* pSS2B.derivativeLag.TF.x[1] variable */ = data->modelData->realVarsData[148].attribute /* pSS2B.derivativeLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[148].info /* pSS2B.derivativeLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[148] /* pSS2B.derivativeLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.u = homotopy(smooth(0, if gENROE.w > pSS2B.limiter1.uMax then pSS2B.limiter1.uMax else if gENROE.w < pSS2B.limiter1.uMin then pSS2B.limiter1.uMin else gENROE.w), gENROE.w)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */:data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  }
  data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */ = homotopy(tmp3, data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(DATA *data, threadData_t *threadData);


/*
equation index: 31
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.x[1] = (pSS2B.derivativeLag1.TF.d * pSS2B.derivativeLag.y - pSS2B.derivativeLag1.TF.y) / (pSS2B.derivativeLag1.TF.a[2] * pSS2B.derivativeLag1.TF.d - pSS2B.derivativeLag1.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[152] /* pSS2B.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[426] /* pSS2B.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[151] /* pSS2B.derivativeLag.y variable */) - data->localData[0]->realVars[153] /* pSS2B.derivativeLag1.TF.y variable */,(data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[426] /* pSS2B.derivativeLag1.TF.d PARAM */) - data->simulationInfo->realParameter[425] /* pSS2B.derivativeLag1.TF.bb[2] PARAM */,"pSS2B.derivativeLag1.TF.a[2] * pSS2B.derivativeLag1.TF.d - pSS2B.derivativeLag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.x_scaled[1] = pSS2B.derivativeLag1.TF.x[1] * pSS2B.derivativeLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[19] /* pSS2B.derivativeLag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[152] /* pSS2B.derivativeLag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[421] /* pSS2B.derivativeLag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.x[1] = (pSS2B.derivativeLag.TF.d * pSS2B.derivativeLag.u - pSS2B.derivativeLag.TF.y) / (pSS2B.derivativeLag.TF.a[2] * pSS2B.derivativeLag.TF.d - pSS2B.derivativeLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[148] /* pSS2B.derivativeLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[409] /* pSS2B.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */) - data->localData[0]->realVars[149] /* pSS2B.derivativeLag.TF.y variable */,(data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[409] /* pSS2B.derivativeLag.TF.d PARAM */) - data->simulationInfo->realParameter[408] /* pSS2B.derivativeLag.TF.bb[2] PARAM */,"pSS2B.derivativeLag.TF.a[2] * pSS2B.derivativeLag.TF.d - pSS2B.derivativeLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.x_scaled[1] = pSS2B.derivativeLag.TF.x[1] * pSS2B.derivativeLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[18] /* pSS2B.derivativeLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[148] /* pSS2B.derivativeLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[404] /* pSS2B.derivativeLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(DATA *data, threadData_t *threadData);


/*
equation index: 38
type: SIMPLE_ASSIGN
gENROE.delta = gENROE.delta0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->simulationInfo->realParameter[289] /* gENROE.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[32] /* der(gENROE.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[31] /* der(gENROE.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[30] /* der(gENROE.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[29] /* der(gENROE.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
gENROE.XaqIlq = (-$DER.gENROE.Epd) * gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[123] /* gENROE.XaqIlq variable */ = ((-data->localData[0]->realVars[29] /* der(gENROE.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[267] /* gENROE.Tpq0 PARAM */);
  TRACE_POP
}

void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_44(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_45(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_46(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_47(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_48(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_49(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_50(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_51(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_52(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_53(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_54(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_55(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_56(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_57(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_58(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_59(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_60(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_61(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_62(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_63(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_64(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_65(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_66(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_67(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_68(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_69(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_70(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_71(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_72(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_73(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_74(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_75(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_76(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_77(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_78(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_79(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_80(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_81(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_82(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_83(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_84(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_85(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_86(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_87(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_88(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_89(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_90(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_91(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_92(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_93(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_94(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_95(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_96(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_97(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_98(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_99(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_100(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_101(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_102(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_103(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_104(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_105(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_106(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_107(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_108(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_109(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_110(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_111(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_112(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_113(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_114(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_115(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_116(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_147(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_146(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_145(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_144(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_143(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_142(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_141(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_140(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_139(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_138(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_137(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_136(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_135(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_134(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_133(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_132(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_131(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_130(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_129(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_128(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_127(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_126(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_125(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_124(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_123(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_122(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_121(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_120(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_119(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_118(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_117(DATA*, threadData_t*);
/*
equation index: 148
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine.ir.im, pwLine3.is.im, pwLine1.is.re, pwLine3.is.re, pwLine4.is.re, pwLine3.ir.re, pwLine3.ir.im, pwLine4.is.im, constantLoad.p.ir, constantLoad.p.ii, pwLine4.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, gENROE.Epd, gENROE.Epq, gENROE.PSIppd, gENROE.PSIppq, gENROE.id, gENROE.iq, pwLine.vs.im, pwLine.vs.re, pwLine1.vr.re, pwLine1.vr.im, pSS2B.V_S2, eSST1A.ECOMP, eSST1A.XADIFD, pwLine1.vs.re, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re}
eqns: {44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117}
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 148 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[166] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[190] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[179] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[191] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[189] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[188] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[72] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[71] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[198] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[177] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[108] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[107] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[126] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[127] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[170] /* pwLine.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[171] /* pwLine.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[30] = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,148};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 148 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[166] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[190] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[179] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[191] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[201] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[200] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[72] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[71] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[108] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[107] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[126] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[127] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[170] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[171] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[30];
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.x_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->simulationInfo->realParameter[181] /* eSST1A.imLeadLag1.x_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x_start[1] = eSST1A.imLeadLag1.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->simulationInfo->realParameter[177] /* eSST1A.imLeadLag1.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[181] /* eSST1A.imLeadLag1.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
$START.eSST1A.imLeadLag1.TF.x[1] = eSST1A.imLeadLag1.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->modelData->realVarsData[99].attribute /* eSST1A.imLeadLag1.TF.x[1] variable */.start = data->simulationInfo->realParameter[177] /* eSST1A.imLeadLag1.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[99] /* eSST1A.imLeadLag1.TF.x[1] variable */ = data->modelData->realVarsData[99].attribute /* eSST1A.imLeadLag1.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* eSST1A.imLeadLag1.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[99] /* eSST1A.imLeadLag1.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
eSST1A.DiffV.u1 = eSST1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[84] /* eSST1A.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
eSST1A.VoltageReference.y = eSST1A.VoltageReference.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.x_start = eSST1A.V_REF - eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[163] /* eSST1A.imLeadLag.x_start PARAM */ = data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */ - data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x_start[1] = eSST1A.imLeadLag.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->realParameter[159] /* eSST1A.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[163] /* eSST1A.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
$START.eSST1A.imLeadLag.TF.x[1] = eSST1A.imLeadLag.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->modelData->realVarsData[96].attribute /* eSST1A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[159] /* eSST1A.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[96] /* eSST1A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[96].attribute /* eSST1A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* eSST1A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[96] /* eSST1A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(DATA *data, threadData_t *threadData);


/*
equation index: 160
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x[1] = (eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y - eSST1A.imLeadLag1.TF.y) / (eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d - eSST1A.imLeadLag1.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[99] /* eSST1A.imLeadLag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */) - data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */,(data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */) - data->simulationInfo->realParameter[175] /* eSST1A.imLeadLag1.TF.bb[2] PARAM */,"eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d - eSST1A.imLeadLag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x_scaled[1] = eSST1A.imLeadLag1.TF.x[1] * eSST1A.imLeadLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[99] /* eSST1A.imLeadLag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(DATA *data, threadData_t *threadData);


/*
equation index: 163
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x[1] = (eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p - eSST1A.imLeadLag.TF.y) / (eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d - eSST1A.imLeadLag.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[96] /* eSST1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */) - data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[157] /* eSST1A.imLeadLag.TF.bb[2] PARAM */,"eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d - eSST1A.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x_scaled[1] = eSST1A.imLeadLag.TF.x[1] * eSST1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[96] /* eSST1A.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1252(DATA *data, threadData_t *threadData);


/*
equation index: 168
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[55] /* GEN1.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[170] /* pwLine.vs.im variable */, data->localData[0]->realVars[171] /* pwLine.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1309(DATA *data, threadData_t *threadData);


/*
equation index: 172
type: SIMPLE_ASSIGN
pSS2B.V_S20 = pSS2B.V_S2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[390] /* pSS2B.V_S20 PARAM */ = data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.x_start = pSS2B.V_S20
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[448] /* pSS2B.derivativeLag2.x_start PARAM */ = data->simulationInfo->realParameter[390] /* pSS2B.V_S20 PARAM */;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.x_start[1] = pSS2B.derivativeLag2.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[444] /* pSS2B.derivativeLag2.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[448] /* pSS2B.derivativeLag2.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
$START.pSS2B.derivativeLag2.TF.x[1] = pSS2B.derivativeLag2.TF.x_start[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->modelData->realVarsData[154].attribute /* pSS2B.derivativeLag2.TF.x[1] variable */.start = data->simulationInfo->realParameter[444] /* pSS2B.derivativeLag2.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[154] /* pSS2B.derivativeLag2.TF.x[1] variable */ = data->modelData->realVarsData[154].attribute /* pSS2B.derivativeLag2.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[154].info /* pSS2B.derivativeLag2.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[154] /* pSS2B.derivativeLag2.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.x = eSST1A.add3_2.y - eSST1A.imDerivativeLag.y * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */ = data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */ - ((data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */));
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.x[1] = (pSS2B.Leadlag3.TF.d * pSS2B.Leadlag2.y - pSS2B.Leadlag3.TF.y) / (pSS2B.Leadlag3.TF.a[2] * pSS2B.Leadlag3.TF.d - pSS2B.Leadlag3.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[137] /* pSS2B.Leadlag3.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[356] /* pSS2B.Leadlag3.TF.d PARAM */) * (data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */) - data->localData[0]->realVars[138] /* pSS2B.Leadlag3.TF.y variable */,(data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[356] /* pSS2B.Leadlag3.TF.d PARAM */) - data->simulationInfo->realParameter[355] /* pSS2B.Leadlag3.TF.bb[2] PARAM */,"pSS2B.Leadlag3.TF.a[2] * pSS2B.Leadlag3.TF.d - pSS2B.Leadlag3.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.x_scaled[1] = pSS2B.Leadlag3.TF.x[1] * pSS2B.Leadlag3.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[15] /* pSS2B.Leadlag3.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[137] /* pSS2B.Leadlag3.TF.x[1] variable */) * (data->simulationInfo->realParameter[351] /* pSS2B.Leadlag3.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(DATA *data, threadData_t *threadData);


/*
equation index: 180
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.x[1] = (pSS2B.Leadlag2.TF.d * pSS2B.Leadlag1.y - pSS2B.Leadlag2.TF.y) / (pSS2B.Leadlag2.TF.a[2] * pSS2B.Leadlag2.TF.d - pSS2B.Leadlag2.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[134] /* pSS2B.Leadlag2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[338] /* pSS2B.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */) - data->localData[0]->realVars[135] /* pSS2B.Leadlag2.TF.y variable */,(data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[338] /* pSS2B.Leadlag2.TF.d PARAM */) - data->simulationInfo->realParameter[337] /* pSS2B.Leadlag2.TF.bb[2] PARAM */,"pSS2B.Leadlag2.TF.a[2] * pSS2B.Leadlag2.TF.d - pSS2B.Leadlag2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.x_scaled[1] = pSS2B.Leadlag2.TF.x[1] * pSS2B.Leadlag2.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[14] /* pSS2B.Leadlag2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[134] /* pSS2B.Leadlag2.TF.x[1] variable */) * (data->simulationInfo->realParameter[333] /* pSS2B.Leadlag2.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(DATA *data, threadData_t *threadData);


/*
equation index: 183
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.x[1] = (pSS2B.Leadlag1.TF.d * pSS2B.Leadlag1.u - pSS2B.Leadlag1.TF.y) / (pSS2B.Leadlag1.TF.a[2] * pSS2B.Leadlag1.TF.d - pSS2B.Leadlag1.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[130] /* pSS2B.Leadlag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[320] /* pSS2B.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */) - data->localData[0]->realVars[131] /* pSS2B.Leadlag1.TF.y variable */,(data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[320] /* pSS2B.Leadlag1.TF.d PARAM */) - data->simulationInfo->realParameter[319] /* pSS2B.Leadlag1.TF.bb[2] PARAM */,"pSS2B.Leadlag1.TF.a[2] * pSS2B.Leadlag1.TF.d - pSS2B.Leadlag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.x_scaled[1] = pSS2B.Leadlag1.TF.x[1] * pSS2B.Leadlag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[13] /* pSS2B.Leadlag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[130] /* pSS2B.Leadlag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[315] /* pSS2B.Leadlag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(DATA *data, threadData_t *threadData);


/*
equation index: 187
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.x[1] = (pSS2B.derivativeLag3.TF.d * pSS2B.derivativeLag2.y - pSS2B.derivativeLag3.TF.y) / (pSS2B.derivativeLag3.TF.a[2] * pSS2B.derivativeLag3.TF.d - pSS2B.derivativeLag3.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[158] /* pSS2B.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[460] /* pSS2B.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */) - data->localData[0]->realVars[159] /* pSS2B.derivativeLag3.TF.y variable */,(data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[460] /* pSS2B.derivativeLag3.TF.d PARAM */) - data->simulationInfo->realParameter[459] /* pSS2B.derivativeLag3.TF.bb[2] PARAM */,"pSS2B.derivativeLag3.TF.a[2] * pSS2B.derivativeLag3.TF.d - pSS2B.derivativeLag3.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.x_scaled[1] = pSS2B.derivativeLag3.TF.x[1] * pSS2B.derivativeLag3.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[21] /* pSS2B.derivativeLag3.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[158] /* pSS2B.derivativeLag3.TF.x[1] variable */) * (data->simulationInfo->realParameter[455] /* pSS2B.derivativeLag3.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(DATA *data, threadData_t *threadData);


/*
equation index: 190
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.x[1] = (pSS2B.derivativeLag2.TF.d * pSS2B.derivativeLag2.u - pSS2B.derivativeLag2.TF.y) / (pSS2B.derivativeLag2.TF.a[2] * pSS2B.derivativeLag2.TF.d - pSS2B.derivativeLag2.TF.bb[2])
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[154] /* pSS2B.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[443] /* pSS2B.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */) - data->localData[0]->realVars[155] /* pSS2B.derivativeLag2.TF.y variable */,(data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[443] /* pSS2B.derivativeLag2.TF.d PARAM */) - data->simulationInfo->realParameter[442] /* pSS2B.derivativeLag2.TF.bb[2] PARAM */,"pSS2B.derivativeLag2.TF.a[2] * pSS2B.derivativeLag2.TF.d - pSS2B.derivativeLag2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.x_scaled[1] = pSS2B.derivativeLag2.TF.x[1] * pSS2B.derivativeLag2.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[20] /* pSS2B.derivativeLag2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[154] /* pSS2B.derivativeLag2.TF.x[1] variable */) * (data->simulationInfo->realParameter[438] /* pSS2B.derivativeLag2.TF.a_end PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(DATA *data, threadData_t *threadData);


/*
equation index: 193
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[63] /* LOAD.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[182] /* pwLine1.vs.im variable */, data->localData[0]->realVars[183] /* pwLine1.vs.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1229(DATA *data, threadData_t *threadData);


/*
equation index: 196
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[59] /* GEN2.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[180] /* pwLine1.vr.im variable */, data->localData[0]->realVars[181] /* pwLine1.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1320(DATA *data, threadData_t *threadData);


/*
equation index: 202
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[51] /* FAULT.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[192] /* pwLine3.vr.im variable */, data->localData[0]->realVars[193] /* pwLine3.vr.re variable */));
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(DATA *data, threadData_t *threadData);


/*
equation index: 223
type: SIMPLE_ASSIGN
GEN1.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[57] /* GEN1.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
GEN1.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[56] /* GEN1.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
LOAD.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[65] /* LOAD.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
LOAD.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[64] /* LOAD.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
GEN2.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[61] /* GEN2.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
GEN2.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[60] /* GEN2.p.ii variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
FAULT.p.ir = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[53] /* FAULT.p.ir variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
FAULT.p.ii = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[52] /* FAULT.p.ii variable */ = 0.0;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(DATA *data, threadData_t *threadData);


/*
equation index: 237
type: ALGORITHM

  assert(eSST1A.imLimited.uMax >= eSST1A.imLimited.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,11,") < uMin (=");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */,data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp3));
      tmp4 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp4);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLimited.uMax >= eSST1A.imLimited.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 236
type: ALGORITHM

  assert(eSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,11,") < uMin (=");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp6 = GreaterEq(data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp9));
      tmp10 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp10);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 235
type: ALGORITHM

  assert(pSS2B.limiter.uMax >= pSS2B.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2B.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2B.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,11,") < uMin (=");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */,data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp15));
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp16);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2B.limiter.uMax >= pSS2B.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 234
type: ALGORITHM

  assert(pSS2B.limiter1.uMax >= pSS2B.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2B.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2B.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,11,") < uMin (=");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp18 = GreaterEq(data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */,data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */);
    if(!tmp18)
    {
      tmp20 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp21));
      tmp22 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp22);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2B.limiter1.uMax >= pSS2B.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 233
type: ALGORITHM

  assert(pSS2B.limiter2.uMax >= pSS2B.limiter2.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2B.limiter2.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2B.limiter2.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,11,") < uMin (=");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp24 = GreaterEq(data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */,data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp27));
      tmp28 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp28);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2B.limiter2.uMax >= pSS2B.limiter2.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1097(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_14(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_15(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_16(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_17(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_18(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_20(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1098(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_22(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_23(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_24(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_25(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_26(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_31(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_32(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_34(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_35(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_38(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_39(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_40(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_41(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_42(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_43(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_153(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_155(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_160(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_164(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1252(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1235(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1234(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_177(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_181(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_183(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_184(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_187(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_188(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_190(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_191(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_193(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1219(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1229(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_196(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1324(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_202(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1222(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1221(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1220(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1226(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1225(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1228(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1227(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1310(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1251(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_224(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_225(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_226(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_227(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_229(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_230(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_237(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_236(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_233(data, threadData);
  TRACE_POP
}


int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
equation index: 863
type: SIMPLE_ASSIGN
gENROE.Xd = 1.84
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ = 1.84;
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
gENROE.Xpd = 0.41
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ = 0.41;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
gENROE.Xppd = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  data->simulationInfo->realParameter[274] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
gENROE.S10 = 0.11
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */ = 0.11;
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
gENROE.S12 = 0.39
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */ = 0.39;
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
gENROE.PSIpp0.re = 1.00266857371347
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->simulationInfo->realParameter[250] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
gENROE.PSIpp0.im = 0.1511271541770246
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->simulationInfo->realParameter[249] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[250] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[249] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[282] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->simulationInfo->realParameter[290] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[282] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
gENROE.PSIpp0_dq.re = 0.9126687000122171
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->simulationInfo->realParameter[252] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[252] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
gENROE.I_dq.im = 0.248896193836464
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->simulationInfo->realParameter[229] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[229] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xpd - gENROE.Xpp + gENROE.Xd - gENROE.Xpd)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[290] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xpp PARAM */ + data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */);
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->simulationInfo->realParameter[225] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
eSST1A.T_C = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->simulationInfo->realParameter[100] /* eSST1A.T_C PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.T1 = eSST1A.T_C
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[100] /* eSST1A.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.par1.y = eSST1A.imLeadLag.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  data->simulationInfo->realParameter[161] /* eSST1A.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
eSST1A.T_B = 10.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  data->simulationInfo->realParameter[98] /* eSST1A.T_B PARAM */ = 10.0;
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.T2 = eSST1A.T_B
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[98] /* eSST1A.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.par2.y = eSST1A.imLeadLag.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  data->simulationInfo->realParameter[162] /* eSST1A.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
eSST1A.T_C1 = 0.08
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  data->simulationInfo->realParameter[101] /* eSST1A.T_C1 PARAM */ = 0.08;
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.T1 = eSST1A.T_C1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ = data->simulationInfo->realParameter[101] /* eSST1A.T_C1 PARAM */;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.par1.y = eSST1A.imLeadLag1.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  data->simulationInfo->realParameter[179] /* eSST1A.imLeadLag1.par1.y PARAM */ = data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
eSST1A.T_B1 = 0.083
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  data->simulationInfo->realParameter[99] /* eSST1A.T_B1 PARAM */ = 0.083;
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.T2 = eSST1A.T_B1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */ = data->simulationInfo->realParameter[99] /* eSST1A.T_B1 PARAM */;
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.par2.y = eSST1A.imLeadLag1.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  data->simulationInfo->realParameter[180] /* eSST1A.imLeadLag1.par2.y PARAM */ = data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
eSST1A.T_A = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  data->simulationInfo->realParameter[97] /* eSST1A.T_A PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.T = eSST1A.T_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[97] /* eSST1A.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.const.y = eSST1A.simpleLagLim.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  data->simulationInfo->realParameter[191] /* eSST1A.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
eSST1A.T_R = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  data->simulationInfo->realParameter[103] /* eSST1A.T_R PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.T = eSST1A.T_R
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[103] /* eSST1A.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.const.y = eSST1A.TransducerDelay.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  data->simulationInfo->realParameter[107] /* eSST1A.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
pSS2B.T_1 = 0.25
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  data->simulationInfo->realParameter[373] /* pSS2B.T_1 PARAM */ = 0.25;
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.T1 = pSS2B.T_1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */ = data->simulationInfo->realParameter[373] /* pSS2B.T_1 PARAM */;
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.par1.y = pSS2B.Leadlag1.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  data->simulationInfo->realParameter[323] /* pSS2B.Leadlag1.par1.y PARAM */ = data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
pSS2B.T_2 = 0.03
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  data->simulationInfo->realParameter[376] /* pSS2B.T_2 PARAM */ = 0.03;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.T2 = pSS2B.T_2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */ = data->simulationInfo->realParameter[376] /* pSS2B.T_2 PARAM */;
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.par2.y = pSS2B.Leadlag1.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->simulationInfo->realParameter[324] /* pSS2B.Leadlag1.par2.y PARAM */ = data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
pSS2B.T_3 = 0.15
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  data->simulationInfo->realParameter[377] /* pSS2B.T_3 PARAM */ = 0.15;
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.T1 = pSS2B.T_3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */ = data->simulationInfo->realParameter[377] /* pSS2B.T_3 PARAM */;
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.par1.y = pSS2B.Leadlag2.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->simulationInfo->realParameter[341] /* pSS2B.Leadlag2.par1.y PARAM */ = data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
pSS2B.T_4 = 0.015
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->simulationInfo->realParameter[378] /* pSS2B.T_4 PARAM */ = 0.015;
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.T2 = pSS2B.T_4
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */ = data->simulationInfo->realParameter[378] /* pSS2B.T_4 PARAM */;
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.par2.y = pSS2B.Leadlag2.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->simulationInfo->realParameter[342] /* pSS2B.Leadlag2.par2.y PARAM */ = data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
pSS2B.T_6 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->simulationInfo->realParameter[379] /* pSS2B.T_6 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.T = pSS2B.T_6
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  data->simulationInfo->realParameter[364] /* pSS2B.SimpleLag1.T PARAM */ = data->simulationInfo->realParameter[379] /* pSS2B.T_6 PARAM */;
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.const.y = pSS2B.SimpleLag1.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->simulationInfo->realParameter[366] /* pSS2B.SimpleLag1.const.y PARAM */ = data->simulationInfo->realParameter[364] /* pSS2B.SimpleLag1.T PARAM */;
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
pSS2B.T_7 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->simulationInfo->realParameter[380] /* pSS2B.T_7 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.T = pSS2B.T_7
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */ = data->simulationInfo->realParameter[380] /* pSS2B.T_7 PARAM */;
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.const.y = pSS2B.SimpleLag2.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->simulationInfo->realParameter[371] /* pSS2B.SimpleLag2.const.y PARAM */ = data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */;
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
pSS2B.T_10 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->simulationInfo->realParameter[374] /* pSS2B.T_10 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.T1 = pSS2B.T_10
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */ = data->simulationInfo->realParameter[374] /* pSS2B.T_10 PARAM */;
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.par1.y = pSS2B.Leadlag3.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->simulationInfo->realParameter[359] /* pSS2B.Leadlag3.par1.y PARAM */ = data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
pSS2B.T_11 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->simulationInfo->realParameter[375] /* pSS2B.T_11 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.T2 = pSS2B.T_11
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */ = data->simulationInfo->realParameter[375] /* pSS2B.T_11 PARAM */;
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.par2.y = pSS2B.Leadlag3.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->simulationInfo->realParameter[360] /* pSS2B.Leadlag3.par2.y PARAM */ = data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
pSS2B.T_w1 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->simulationInfo->realParameter[383] /* pSS2B.T_w1 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.T = pSS2B.T_w1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->simulationInfo->realParameter[401] /* pSS2B.derivativeLag.T PARAM */ = data->simulationInfo->realParameter[383] /* pSS2B.T_w1 PARAM */;
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.par1.y = pSS2B.derivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->simulationInfo->realParameter[413] /* pSS2B.derivativeLag.par1.y PARAM */ = data->simulationInfo->realParameter[401] /* pSS2B.derivativeLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
pSS2B.T_w2 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->simulationInfo->realParameter[384] /* pSS2B.T_w2 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.T = pSS2B.T_w2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->simulationInfo->realParameter[418] /* pSS2B.derivativeLag1.T PARAM */ = data->simulationInfo->realParameter[384] /* pSS2B.T_w2 PARAM */;
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.par1.y = pSS2B.derivativeLag1.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->simulationInfo->realParameter[430] /* pSS2B.derivativeLag1.par1.y PARAM */ = data->simulationInfo->realParameter[418] /* pSS2B.derivativeLag1.T PARAM */;
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
pSS2B.T_w3 = 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->simulationInfo->realParameter[385] /* pSS2B.T_w3 PARAM */ = 2.0;
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.T = pSS2B.T_w3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */ = data->simulationInfo->realParameter[385] /* pSS2B.T_w3 PARAM */;
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.par1.y = pSS2B.derivativeLag2.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->simulationInfo->realParameter[447] /* pSS2B.derivativeLag2.par1.y PARAM */ = data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */;
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
pSS2B.T_w4 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->simulationInfo->realParameter[386] /* pSS2B.T_w4 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.T = pSS2B.T_w4
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */ = data->simulationInfo->realParameter[386] /* pSS2B.T_w4 PARAM */;
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.par1.y = pSS2B.derivativeLag3.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->simulationInfo->realParameter[464] /* pSS2B.derivativeLag3.par1.y PARAM */ = data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */;
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
eSST1A.I_LR = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
eSST1A.Vref1.k = eSST1A.I_LR
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */ = data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */;
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
eSST1A.add2.u1 = eSST1A.Vref1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->simulationInfo->realParameter[128] /* eSST1A.add2.u1 PARAM */ = data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */;
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
eSST1A.Vref1.y = eSST1A.Vref1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->simulationInfo->realParameter[125] /* eSST1A.Vref1.y PARAM */ = data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */;
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
gENROE.R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
gENROE.P_0 = 40000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->simulationInfo->realParameter[256] /* gENROE.P_0 PARAM */ = 40000000.0;
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
gENROE.M_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->simulationInfo->realParameter[243] /* gENROE.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->simulationInfo->realParameter[297] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[256] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[243] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
gENROE.I_dq.re = 0.3177807746702022
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->simulationInfo->realParameter[230] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[230] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[298] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[297] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[244] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[298] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[245] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[298] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
const1.k = -9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[36] /* const1.k PARAM */ = -9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n2 = const1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->simulationInfo->realParameter[137] /* eSST1A.hV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
eSST1A.VUEL2 = const1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->simulationInfo->realParameter[113] /* eSST1A.VUEL2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.n2 = const1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->simulationInfo->realParameter[138] /* eSST1A.hV_GATE1.n2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
eSST1A.VUEL3 = const1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->simulationInfo->realParameter[114] /* eSST1A.VUEL3 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
const1.y = const1.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->simulationInfo->realParameter[37] /* const1.y PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
const.k = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->simulationInfo->realParameter[34] /* const.k PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
eSST1A.Limiters.u1 = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->simulationInfo->realParameter[95] /* eSST1A.Limiters.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
eSST1A.VOTHSG = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->simulationInfo->realParameter[111] /* eSST1A.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
eSST1A.Limiters.u2 = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->simulationInfo->realParameter[96] /* eSST1A.Limiters.u2 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
eSST1A.VUEL = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->simulationInfo->realParameter[112] /* eSST1A.VUEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
const.y = const.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
const2.k = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->simulationInfo->realParameter[38] /* const2.k PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.n2 = const2.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->simulationInfo->realParameter[187] /* eSST1A.lV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
eSST1A.VOEL = const2.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->simulationInfo->realParameter[110] /* eSST1A.VOEL PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
const2.y = const2.k
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->simulationInfo->realParameter[39] /* const2.y PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
pSS2B.N = 0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->simulationInfo->integerParameter[23] /* pSS2B.N PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
pSS2B.rampTrackingFilter.N = pSS2B.N
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->integerParameter[41] /* pSS2B.rampTrackingFilter.N PARAM */ = data->simulationInfo->integerParameter[23] /* pSS2B.N PARAM */;
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
pSS2B.rampTrackingFilter.M = 0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->simulationInfo->integerParameter[40] /* pSS2B.rampTrackingFilter.M PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
pSS2B.T_9 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->simulationInfo->realParameter[382] /* pSS2B.T_9 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
pSS2B.rampTrackingFilter.T_2 = pSS2B.T_9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->simulationInfo->realParameter[475] /* pSS2B.rampTrackingFilter.T_2 PARAM */ = data->simulationInfo->realParameter[382] /* pSS2B.T_9 PARAM */;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
pSS2B.T_8 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[381] /* pSS2B.T_8 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
pSS2B.rampTrackingFilter.T_1 = pSS2B.T_8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[474] /* pSS2B.rampTrackingFilter.T_1 PARAM */ = data->simulationInfo->realParameter[381] /* pSS2B.T_8 PARAM */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.K = pSS2B.T_w4
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[450] /* pSS2B.derivativeLag3.K PARAM */ = data->simulationInfo->realParameter[386] /* pSS2B.T_w4 PARAM */;
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.K_dummy = if abs(pSS2B.derivativeLag3.K) < 1e-15 then 1.0 else pSS2B.derivativeLag3.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  modelica_boolean tmp5;
  tmp5 = Less(fabs(data->simulationInfo->realParameter[450] /* pSS2B.derivativeLag3.K PARAM */),1e-15);
  data->simulationInfo->realParameter[451] /* pSS2B.derivativeLag3.K_dummy PARAM */ = (tmp5?1.0:data->simulationInfo->realParameter[450] /* pSS2B.derivativeLag3.K PARAM */);
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.T_dummy = if abs(pSS2B.derivativeLag3.T) < 1e-15 then 1000.0 else pSS2B.derivativeLag3.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  modelica_boolean tmp6;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */),1e-15);
  data->simulationInfo->realParameter[463] /* pSS2B.derivativeLag3.T_dummy PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */);
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.a[1] = pSS2B.derivativeLag3.T_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[453] /* pSS2B.derivativeLag3.TF.a[1] PARAM */ = data->simulationInfo->realParameter[463] /* pSS2B.derivativeLag3.T_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.a_end = if pSS2B.derivativeLag3.TF.a[2] > 1e-13 * sqrt(pSS2B.derivativeLag3.TF.a[1] ^ 2.0 + pSS2B.derivativeLag3.TF.a[2] ^ 2.0) then pSS2B.derivativeLag3.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  tmp7 = data->simulationInfo->realParameter[453] /* pSS2B.derivativeLag3.TF.a[1] PARAM */;
  tmp8 = data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */;
  tmp9 = Greater(data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp7 * tmp7) + (tmp8 * tmp8))));
  data->simulationInfo->realParameter[455] /* pSS2B.derivativeLag3.TF.a_end PARAM */ = (tmp9?data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.b[1] = pSS2B.derivativeLag3.K_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[456] /* pSS2B.derivativeLag3.TF.b[1] PARAM */ = data->simulationInfo->realParameter[451] /* pSS2B.derivativeLag3.K_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.bb[1] = pSS2B.derivativeLag3.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->simulationInfo->realParameter[458] /* pSS2B.derivativeLag3.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[456] /* pSS2B.derivativeLag3.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.d = pSS2B.derivativeLag3.TF.bb[1] / pSS2B.derivativeLag3.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->simulationInfo->realParameter[460] /* pSS2B.derivativeLag3.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[458] /* pSS2B.derivativeLag3.TF.bb[1] PARAM */,data->simulationInfo->realParameter[453] /* pSS2B.derivativeLag3.TF.a[1] PARAM */,"pSS2B.derivativeLag3.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.b[2] = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->simulationInfo->realParameter[457] /* pSS2B.derivativeLag3.TF.b[2] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.bb[2] = pSS2B.derivativeLag3.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[459] /* pSS2B.derivativeLag3.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[457] /* pSS2B.derivativeLag3.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->integerParameter[39] /* pSS2B.derivativeLag3.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->integerParameter[38] /* pSS2B.derivativeLag3.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->integerParameter[37] /* pSS2B.derivativeLag3.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[466] /* pSS2B.derivativeLag3.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.y_start = pSS2B.derivativeLag3.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[462] /* pSS2B.derivativeLag3.TF.y_start PARAM */ = data->simulationInfo->realParameter[466] /* pSS2B.derivativeLag3.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->simulationInfo->realParameter[465] /* pSS2B.derivativeLag3.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.x_start[1] = pSS2B.derivativeLag3.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->simulationInfo->realParameter[461] /* pSS2B.derivativeLag3.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[465] /* pSS2B.derivativeLag3.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->simulationInfo->integerParameter[36] /* pSS2B.derivativeLag3.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.K = pSS2B.T_w3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->simulationInfo->realParameter[433] /* pSS2B.derivativeLag2.K PARAM */ = data->simulationInfo->realParameter[385] /* pSS2B.T_w3 PARAM */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.K_dummy = if abs(pSS2B.derivativeLag2.K) < 1e-15 then 1.0 else pSS2B.derivativeLag2.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  modelica_boolean tmp10;
  tmp10 = Less(fabs(data->simulationInfo->realParameter[433] /* pSS2B.derivativeLag2.K PARAM */),1e-15);
  data->simulationInfo->realParameter[434] /* pSS2B.derivativeLag2.K_dummy PARAM */ = (tmp10?1.0:data->simulationInfo->realParameter[433] /* pSS2B.derivativeLag2.K PARAM */);
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.T_dummy = if abs(pSS2B.derivativeLag2.T) < 1e-15 then 1000.0 else pSS2B.derivativeLag2.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  modelica_boolean tmp11;
  tmp11 = Less(fabs(data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */),1e-15);
  data->simulationInfo->realParameter[446] /* pSS2B.derivativeLag2.T_dummy PARAM */ = (tmp11?1000.0:data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */);
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.a[1] = pSS2B.derivativeLag2.T_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[436] /* pSS2B.derivativeLag2.TF.a[1] PARAM */ = data->simulationInfo->realParameter[446] /* pSS2B.derivativeLag2.T_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.a_end = if pSS2B.derivativeLag2.TF.a[2] > 1e-13 * sqrt(pSS2B.derivativeLag2.TF.a[1] ^ 2.0 + pSS2B.derivativeLag2.TF.a[2] ^ 2.0) then pSS2B.derivativeLag2.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  tmp12 = data->simulationInfo->realParameter[436] /* pSS2B.derivativeLag2.TF.a[1] PARAM */;
  tmp13 = data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */;
  tmp14 = Greater(data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp12 * tmp12) + (tmp13 * tmp13))));
  data->simulationInfo->realParameter[438] /* pSS2B.derivativeLag2.TF.a_end PARAM */ = (tmp14?data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.b[1] = pSS2B.derivativeLag2.K_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->simulationInfo->realParameter[439] /* pSS2B.derivativeLag2.TF.b[1] PARAM */ = data->simulationInfo->realParameter[434] /* pSS2B.derivativeLag2.K_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.bb[1] = pSS2B.derivativeLag2.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[441] /* pSS2B.derivativeLag2.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[439] /* pSS2B.derivativeLag2.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.d = pSS2B.derivativeLag2.TF.bb[1] / pSS2B.derivativeLag2.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[443] /* pSS2B.derivativeLag2.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[441] /* pSS2B.derivativeLag2.TF.bb[1] PARAM */,data->simulationInfo->realParameter[436] /* pSS2B.derivativeLag2.TF.a[1] PARAM */,"pSS2B.derivativeLag2.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.b[2] = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->simulationInfo->realParameter[440] /* pSS2B.derivativeLag2.TF.b[2] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.bb[2] = pSS2B.derivativeLag2.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->simulationInfo->realParameter[442] /* pSS2B.derivativeLag2.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[440] /* pSS2B.derivativeLag2.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->simulationInfo->integerParameter[35] /* pSS2B.derivativeLag2.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->simulationInfo->integerParameter[34] /* pSS2B.derivativeLag2.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->simulationInfo->integerParameter[33] /* pSS2B.derivativeLag2.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->simulationInfo->realParameter[449] /* pSS2B.derivativeLag2.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.y_start = pSS2B.derivativeLag2.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->simulationInfo->realParameter[445] /* pSS2B.derivativeLag2.TF.y_start PARAM */ = data->simulationInfo->realParameter[449] /* pSS2B.derivativeLag2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->integerParameter[32] /* pSS2B.derivativeLag2.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.K = pSS2B.T_w2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->realParameter[416] /* pSS2B.derivativeLag1.K PARAM */ = data->simulationInfo->realParameter[384] /* pSS2B.T_w2 PARAM */;
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.K_dummy = if abs(pSS2B.derivativeLag1.K) < 1e-15 then 1.0 else pSS2B.derivativeLag1.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  modelica_boolean tmp15;
  tmp15 = Less(fabs(data->simulationInfo->realParameter[416] /* pSS2B.derivativeLag1.K PARAM */),1e-15);
  data->simulationInfo->realParameter[417] /* pSS2B.derivativeLag1.K_dummy PARAM */ = (tmp15?1.0:data->simulationInfo->realParameter[416] /* pSS2B.derivativeLag1.K PARAM */);
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.T_dummy = if abs(pSS2B.derivativeLag1.T) < 1e-15 then 1000.0 else pSS2B.derivativeLag1.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  modelica_boolean tmp16;
  tmp16 = Less(fabs(data->simulationInfo->realParameter[418] /* pSS2B.derivativeLag1.T PARAM */),1e-15);
  data->simulationInfo->realParameter[429] /* pSS2B.derivativeLag1.T_dummy PARAM */ = (tmp16?1000.0:data->simulationInfo->realParameter[418] /* pSS2B.derivativeLag1.T PARAM */);
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.a[1] = pSS2B.derivativeLag1.T_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[419] /* pSS2B.derivativeLag1.TF.a[1] PARAM */ = data->simulationInfo->realParameter[429] /* pSS2B.derivativeLag1.T_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.a_end = if pSS2B.derivativeLag1.TF.a[2] > 1e-13 * sqrt(pSS2B.derivativeLag1.TF.a[1] ^ 2.0 + pSS2B.derivativeLag1.TF.a[2] ^ 2.0) then pSS2B.derivativeLag1.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  tmp17 = data->simulationInfo->realParameter[419] /* pSS2B.derivativeLag1.TF.a[1] PARAM */;
  tmp18 = data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */;
  tmp19 = Greater(data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp17 * tmp17) + (tmp18 * tmp18))));
  data->simulationInfo->realParameter[421] /* pSS2B.derivativeLag1.TF.a_end PARAM */ = (tmp19?data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.b[1] = pSS2B.derivativeLag1.K_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[422] /* pSS2B.derivativeLag1.TF.b[1] PARAM */ = data->simulationInfo->realParameter[417] /* pSS2B.derivativeLag1.K_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.bb[1] = pSS2B.derivativeLag1.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[424] /* pSS2B.derivativeLag1.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[422] /* pSS2B.derivativeLag1.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.d = pSS2B.derivativeLag1.TF.bb[1] / pSS2B.derivativeLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->simulationInfo->realParameter[426] /* pSS2B.derivativeLag1.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[424] /* pSS2B.derivativeLag1.TF.bb[1] PARAM */,data->simulationInfo->realParameter[419] /* pSS2B.derivativeLag1.TF.a[1] PARAM */,"pSS2B.derivativeLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.b[2] = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[423] /* pSS2B.derivativeLag1.TF.b[2] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.bb[2] = pSS2B.derivativeLag1.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->simulationInfo->realParameter[425] /* pSS2B.derivativeLag1.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[423] /* pSS2B.derivativeLag1.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->simulationInfo->integerParameter[31] /* pSS2B.derivativeLag1.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->simulationInfo->integerParameter[30] /* pSS2B.derivativeLag1.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->integerParameter[29] /* pSS2B.derivativeLag1.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[432] /* pSS2B.derivativeLag1.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.y_start = pSS2B.derivativeLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[428] /* pSS2B.derivativeLag1.TF.y_start PARAM */ = data->simulationInfo->realParameter[432] /* pSS2B.derivativeLag1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->simulationInfo->realParameter[431] /* pSS2B.derivativeLag1.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.x_start[1] = pSS2B.derivativeLag1.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->simulationInfo->realParameter[427] /* pSS2B.derivativeLag1.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[431] /* pSS2B.derivativeLag1.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->simulationInfo->integerParameter[28] /* pSS2B.derivativeLag1.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.K = pSS2B.T_w1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->simulationInfo->realParameter[399] /* pSS2B.derivativeLag.K PARAM */ = data->simulationInfo->realParameter[383] /* pSS2B.T_w1 PARAM */;
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.K_dummy = if abs(pSS2B.derivativeLag.K) < 1e-15 then 1.0 else pSS2B.derivativeLag.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  modelica_boolean tmp20;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[399] /* pSS2B.derivativeLag.K PARAM */),1e-15);
  data->simulationInfo->realParameter[400] /* pSS2B.derivativeLag.K_dummy PARAM */ = (tmp20?1.0:data->simulationInfo->realParameter[399] /* pSS2B.derivativeLag.K PARAM */);
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.T_dummy = if abs(pSS2B.derivativeLag.T) < 1e-15 then 1000.0 else pSS2B.derivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  modelica_boolean tmp21;
  tmp21 = Less(fabs(data->simulationInfo->realParameter[401] /* pSS2B.derivativeLag.T PARAM */),1e-15);
  data->simulationInfo->realParameter[412] /* pSS2B.derivativeLag.T_dummy PARAM */ = (tmp21?1000.0:data->simulationInfo->realParameter[401] /* pSS2B.derivativeLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.a[1] = pSS2B.derivativeLag.T_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[402] /* pSS2B.derivativeLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[412] /* pSS2B.derivativeLag.T_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.a_end = if pSS2B.derivativeLag.TF.a[2] > 1e-13 * sqrt(pSS2B.derivativeLag.TF.a[1] ^ 2.0 + pSS2B.derivativeLag.TF.a[2] ^ 2.0) then pSS2B.derivativeLag.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  tmp22 = data->simulationInfo->realParameter[402] /* pSS2B.derivativeLag.TF.a[1] PARAM */;
  tmp23 = data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */;
  tmp24 = Greater(data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp22 * tmp22) + (tmp23 * tmp23))));
  data->simulationInfo->realParameter[404] /* pSS2B.derivativeLag.TF.a_end PARAM */ = (tmp24?data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.b[1] = pSS2B.derivativeLag.K_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[405] /* pSS2B.derivativeLag.TF.b[1] PARAM */ = data->simulationInfo->realParameter[400] /* pSS2B.derivativeLag.K_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.bb[1] = pSS2B.derivativeLag.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[407] /* pSS2B.derivativeLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[405] /* pSS2B.derivativeLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.d = pSS2B.derivativeLag.TF.bb[1] / pSS2B.derivativeLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[409] /* pSS2B.derivativeLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[407] /* pSS2B.derivativeLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[402] /* pSS2B.derivativeLag.TF.a[1] PARAM */,"pSS2B.derivativeLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.b[2] = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->simulationInfo->realParameter[406] /* pSS2B.derivativeLag.TF.b[2] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.bb[2] = pSS2B.derivativeLag.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->simulationInfo->realParameter[408] /* pSS2B.derivativeLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[406] /* pSS2B.derivativeLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->integerParameter[27] /* pSS2B.derivativeLag.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->integerParameter[26] /* pSS2B.derivativeLag.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->simulationInfo->integerParameter[25] /* pSS2B.derivativeLag.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->simulationInfo->realParameter[415] /* pSS2B.derivativeLag.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.y_start = pSS2B.derivativeLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[411] /* pSS2B.derivativeLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[415] /* pSS2B.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->integerParameter[24] /* pSS2B.derivativeLag.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
pSS2B.K_S1 = 10.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[306] /* pSS2B.K_S1 PARAM */ = 10.0;
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
pSS2B.gain.k = pSS2B.K_S1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->realParameter[467] /* pSS2B.gain.k PARAM */ = data->simulationInfo->realParameter[306] /* pSS2B.K_S1 PARAM */;
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
pSS2B.add1.k2 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->simulationInfo->realParameter[398] /* pSS2B.add1.k2 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
pSS2B.add1.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[397] /* pSS2B.add1.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
pSS2B.K_S3 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[308] /* pSS2B.K_S3 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
pSS2B.add.k2 = pSS2B.K_S3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->realParameter[396] /* pSS2B.add.k2 PARAM */ = data->simulationInfo->realParameter[308] /* pSS2B.K_S3 PARAM */;
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
pSS2B.add.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[395] /* pSS2B.add.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
pSS2B.limiter2.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->booleanParameter[74] /* pSS2B.limiter2.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
pSS2B.limiter2.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->booleanParameter[75] /* pSS2B.limiter2.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
pSS2B.V_S2MIN = -999.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[392] /* pSS2B.V_S2MIN PARAM */ = -999.0;
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
pSS2B.limiter2.uMin = pSS2B.V_S2MIN
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */ = data->simulationInfo->realParameter[392] /* pSS2B.V_S2MIN PARAM */;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
pSS2B.V_S2MAX = 999.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[391] /* pSS2B.V_S2MAX PARAM */ = 999.0;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
pSS2B.limiter2.uMax = pSS2B.V_S2MAX
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */ = data->simulationInfo->realParameter[391] /* pSS2B.V_S2MAX PARAM */;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
pSS2B.limiter1.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->booleanParameter[72] /* pSS2B.limiter1.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
pSS2B.limiter1.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->booleanParameter[73] /* pSS2B.limiter1.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
pSS2B.V_S1MIN = -999.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[389] /* pSS2B.V_S1MIN PARAM */ = -999.0;
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
pSS2B.limiter1.uMin = pSS2B.V_S1MIN
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */ = data->simulationInfo->realParameter[389] /* pSS2B.V_S1MIN PARAM */;
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
pSS2B.V_S1MAX = 999.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[388] /* pSS2B.V_S1MAX PARAM */ = 999.0;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
pSS2B.limiter1.uMax = pSS2B.V_S1MAX
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[388] /* pSS2B.V_S1MAX PARAM */;
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
pSS2B.limiter.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->booleanParameter[70] /* pSS2B.limiter.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
pSS2B.limiter.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->booleanParameter[71] /* pSS2B.limiter.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
pSS2B.V_STMIN = -0.1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[394] /* pSS2B.V_STMIN PARAM */ = -0.1;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
pSS2B.limiter.uMin = pSS2B.V_STMIN
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */ = data->simulationInfo->realParameter[394] /* pSS2B.V_STMIN PARAM */;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
pSS2B.V_STMAX = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[393] /* pSS2B.V_STMAX PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
pSS2B.limiter.uMax = pSS2B.V_STMAX
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */ = data->simulationInfo->realParameter[393] /* pSS2B.V_STMAX PARAM */;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.T2_dummy = if abs(pSS2B.Leadlag3.T1 - pSS2B.Leadlag3.T2) < 1e-15 then 1000.0 else pSS2B.Leadlag3.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  modelica_boolean tmp25;
  tmp25 = Less(fabs(data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */ - data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[348] /* pSS2B.Leadlag3.T2_dummy PARAM */ = (tmp25?1000.0:data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.a[1] = pSS2B.Leadlag3.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[349] /* pSS2B.Leadlag3.TF.a[1] PARAM */ = data->simulationInfo->realParameter[348] /* pSS2B.Leadlag3.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.a_end = if pSS2B.Leadlag3.TF.a[2] > 1e-13 * sqrt(pSS2B.Leadlag3.TF.a[1] ^ 2.0 + pSS2B.Leadlag3.TF.a[2] ^ 2.0) then pSS2B.Leadlag3.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  tmp26 = data->simulationInfo->realParameter[349] /* pSS2B.Leadlag3.TF.a[1] PARAM */;
  tmp27 = data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */;
  tmp28 = Greater(data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp26 * tmp26) + (tmp27 * tmp27))));
  data->simulationInfo->realParameter[351] /* pSS2B.Leadlag3.TF.a_end PARAM */ = (tmp28?data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[345] /* pSS2B.Leadlag3.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.b[1] = pSS2B.Leadlag3.K * pSS2B.Leadlag3.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[352] /* pSS2B.Leadlag3.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[345] /* pSS2B.Leadlag3.K PARAM */) * (data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.bb[1] = pSS2B.Leadlag3.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[354] /* pSS2B.Leadlag3.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[352] /* pSS2B.Leadlag3.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.d = pSS2B.Leadlag3.TF.bb[1] / pSS2B.Leadlag3.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[356] /* pSS2B.Leadlag3.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[354] /* pSS2B.Leadlag3.TF.bb[1] PARAM */,data->simulationInfo->realParameter[349] /* pSS2B.Leadlag3.TF.a[1] PARAM */,"pSS2B.Leadlag3.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.b[2] = pSS2B.Leadlag3.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[353] /* pSS2B.Leadlag3.TF.b[2] PARAM */ = data->simulationInfo->realParameter[345] /* pSS2B.Leadlag3.K PARAM */;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.bb[2] = pSS2B.Leadlag3.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[355] /* pSS2B.Leadlag3.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[353] /* pSS2B.Leadlag3.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->integerParameter[21] /* pSS2B.Leadlag3.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->integerParameter[20] /* pSS2B.Leadlag3.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->integerParameter[19] /* pSS2B.Leadlag3.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[362] /* pSS2B.Leadlag3.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.y_start = pSS2B.Leadlag3.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[358] /* pSS2B.Leadlag3.TF.y_start PARAM */ = data->simulationInfo->realParameter[362] /* pSS2B.Leadlag3.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[361] /* pSS2B.Leadlag3.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.x_start[1] = pSS2B.Leadlag3.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[357] /* pSS2B.Leadlag3.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[361] /* pSS2B.Leadlag3.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->integerParameter[18] /* pSS2B.Leadlag3.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.T_mod = if pSS2B.SimpleLag2.T < 1e-15 then 1000.0 else pSS2B.SimpleLag2.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  modelica_boolean tmp29;
  tmp29 = Less(data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */,1e-15);
  data->simulationInfo->realParameter[370] /* pSS2B.SimpleLag2.T_mod PARAM */ = (tmp29?1000.0:data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[372] /* pSS2B.SimpleLag2.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
pSS2B.K_S2 = 0.1564
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[307] /* pSS2B.K_S2 PARAM */ = 0.1564;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.K = pSS2B.K_S2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[368] /* pSS2B.SimpleLag2.K PARAM */ = data->simulationInfo->realParameter[307] /* pSS2B.K_S2 PARAM */;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.T_mod = if pSS2B.SimpleLag1.T < 1e-15 then 1000.0 else pSS2B.SimpleLag1.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  modelica_boolean tmp30;
  tmp30 = Less(data->simulationInfo->realParameter[364] /* pSS2B.SimpleLag1.T PARAM */,1e-15);
  data->simulationInfo->realParameter[365] /* pSS2B.SimpleLag1.T_mod PARAM */ = (tmp30?1000.0:data->simulationInfo->realParameter[364] /* pSS2B.SimpleLag1.T PARAM */);
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[367] /* pSS2B.SimpleLag1.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[363] /* pSS2B.SimpleLag1.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.T2_dummy = if abs(pSS2B.Leadlag2.T1 - pSS2B.Leadlag2.T2) < 1e-15 then 1000.0 else pSS2B.Leadlag2.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  modelica_boolean tmp31;
  tmp31 = Less(fabs(data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[330] /* pSS2B.Leadlag2.T2_dummy PARAM */ = (tmp31?1000.0:data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.a[1] = pSS2B.Leadlag2.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[331] /* pSS2B.Leadlag2.TF.a[1] PARAM */ = data->simulationInfo->realParameter[330] /* pSS2B.Leadlag2.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.a_end = if pSS2B.Leadlag2.TF.a[2] > 1e-13 * sqrt(pSS2B.Leadlag2.TF.a[1] ^ 2.0 + pSS2B.Leadlag2.TF.a[2] ^ 2.0) then pSS2B.Leadlag2.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  tmp32 = data->simulationInfo->realParameter[331] /* pSS2B.Leadlag2.TF.a[1] PARAM */;
  tmp33 = data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */;
  tmp34 = Greater(data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp32 * tmp32) + (tmp33 * tmp33))));
  data->simulationInfo->realParameter[333] /* pSS2B.Leadlag2.TF.a_end PARAM */ = (tmp34?data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[327] /* pSS2B.Leadlag2.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.b[1] = pSS2B.Leadlag2.K * pSS2B.Leadlag2.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[334] /* pSS2B.Leadlag2.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[327] /* pSS2B.Leadlag2.K PARAM */) * (data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.bb[1] = pSS2B.Leadlag2.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[336] /* pSS2B.Leadlag2.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[334] /* pSS2B.Leadlag2.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.d = pSS2B.Leadlag2.TF.bb[1] / pSS2B.Leadlag2.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[338] /* pSS2B.Leadlag2.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[336] /* pSS2B.Leadlag2.TF.bb[1] PARAM */,data->simulationInfo->realParameter[331] /* pSS2B.Leadlag2.TF.a[1] PARAM */,"pSS2B.Leadlag2.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.b[2] = pSS2B.Leadlag2.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[335] /* pSS2B.Leadlag2.TF.b[2] PARAM */ = data->simulationInfo->realParameter[327] /* pSS2B.Leadlag2.K PARAM */;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.bb[2] = pSS2B.Leadlag2.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[337] /* pSS2B.Leadlag2.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[335] /* pSS2B.Leadlag2.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->integerParameter[17] /* pSS2B.Leadlag2.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->integerParameter[16] /* pSS2B.Leadlag2.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->integerParameter[15] /* pSS2B.Leadlag2.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[344] /* pSS2B.Leadlag2.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.y_start = pSS2B.Leadlag2.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[340] /* pSS2B.Leadlag2.TF.y_start PARAM */ = data->simulationInfo->realParameter[344] /* pSS2B.Leadlag2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[343] /* pSS2B.Leadlag2.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.x_start[1] = pSS2B.Leadlag2.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[339] /* pSS2B.Leadlag2.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[343] /* pSS2B.Leadlag2.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->integerParameter[14] /* pSS2B.Leadlag2.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.T2_dummy = if abs(pSS2B.Leadlag1.T1 - pSS2B.Leadlag1.T2) < 1e-15 then 1000.0 else pSS2B.Leadlag1.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  modelica_boolean tmp35;
  tmp35 = Less(fabs(data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[312] /* pSS2B.Leadlag1.T2_dummy PARAM */ = (tmp35?1000.0:data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.a[1] = pSS2B.Leadlag1.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[313] /* pSS2B.Leadlag1.TF.a[1] PARAM */ = data->simulationInfo->realParameter[312] /* pSS2B.Leadlag1.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.a_end = if pSS2B.Leadlag1.TF.a[2] > 1e-13 * sqrt(pSS2B.Leadlag1.TF.a[1] ^ 2.0 + pSS2B.Leadlag1.TF.a[2] ^ 2.0) then pSS2B.Leadlag1.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  tmp36 = data->simulationInfo->realParameter[313] /* pSS2B.Leadlag1.TF.a[1] PARAM */;
  tmp37 = data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */;
  tmp38 = Greater(data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp36 * tmp36) + (tmp37 * tmp37))));
  data->simulationInfo->realParameter[315] /* pSS2B.Leadlag1.TF.a_end PARAM */ = (tmp38?data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[309] /* pSS2B.Leadlag1.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.b[1] = pSS2B.Leadlag1.K * pSS2B.Leadlag1.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[316] /* pSS2B.Leadlag1.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[309] /* pSS2B.Leadlag1.K PARAM */) * (data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.bb[1] = pSS2B.Leadlag1.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[318] /* pSS2B.Leadlag1.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[316] /* pSS2B.Leadlag1.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.d = pSS2B.Leadlag1.TF.bb[1] / pSS2B.Leadlag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[320] /* pSS2B.Leadlag1.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[318] /* pSS2B.Leadlag1.TF.bb[1] PARAM */,data->simulationInfo->realParameter[313] /* pSS2B.Leadlag1.TF.a[1] PARAM */,"pSS2B.Leadlag1.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.b[2] = pSS2B.Leadlag1.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[317] /* pSS2B.Leadlag1.TF.b[2] PARAM */ = data->simulationInfo->realParameter[309] /* pSS2B.Leadlag1.K PARAM */;
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.bb[2] = pSS2B.Leadlag1.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[319] /* pSS2B.Leadlag1.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[317] /* pSS2B.Leadlag1.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->integerParameter[13] /* pSS2B.Leadlag1.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->integerParameter[12] /* pSS2B.Leadlag1.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->integerParameter[11] /* pSS2B.Leadlag1.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->realParameter[326] /* pSS2B.Leadlag1.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.y_start = pSS2B.Leadlag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->simulationInfo->realParameter[322] /* pSS2B.Leadlag1.TF.y_start PARAM */ = data->simulationInfo->realParameter[326] /* pSS2B.Leadlag1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.x_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->simulationInfo->realParameter[325] /* pSS2B.Leadlag1.x_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.x_start[1] = pSS2B.Leadlag1.x_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[321] /* pSS2B.Leadlag1.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[325] /* pSS2B.Leadlag1.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->simulationInfo->integerParameter[10] /* pSS2B.Leadlag1.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
pSS2B.M = 0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->integerParameter[22] /* pSS2B.M PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
eSST1A.Limiters.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[94] /* eSST1A.Limiters.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
eSST1A.Limiters.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[93] /* eSST1A.Limiters.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.T_mod = if eSST1A.TransducerDelay.T < 1e-15 then 1000.0 else eSST1A.TransducerDelay.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  modelica_boolean tmp39;
  tmp39 = Less(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[106] /* eSST1A.TransducerDelay.T_mod PARAM */ = (tmp39?1000.0:data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
eSST1A.variableLimiter.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->simulationInfo->booleanParameter[50] /* eSST1A.variableLimiter.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
eSST1A.variableLimiter.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->simulationInfo->booleanParameter[51] /* eSST1A.variableLimiter.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
eSST1A.K_C = 0.38
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[90] /* eSST1A.K_C PARAM */ = 0.38;
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
eSST1A.imGain3.k = eSST1A.K_C
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[146] /* eSST1A.imGain3.k PARAM */ = data->simulationInfo->realParameter[90] /* eSST1A.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
eSST1A.add3.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[130] /* eSST1A.add3.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
eSST1A.add3.k1 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->realParameter[129] /* eSST1A.add3.k1 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
eSST1A.V_RMAX = 5.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[120] /* eSST1A.V_RMAX PARAM */ = 5.2;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
eSST1A.imGain2.k = eSST1A.V_RMAX
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[145] /* eSST1A.imGain2.k PARAM */ = data->simulationInfo->realParameter[120] /* eSST1A.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
eSST1A.V_RMIN = -5.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[121] /* eSST1A.V_RMIN PARAM */ = -5.2;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
eSST1A.imGain1.k = eSST1A.V_RMIN
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[144] /* eSST1A.imGain1.k PARAM */ = data->simulationInfo->realParameter[121] /* eSST1A.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
eSST1A.add3_2.k3 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k3 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
eSST1A.add3_2.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
eSST1A.add3_2.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[134] /* eSST1A.add3_2.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
eSST1A.imLimited1.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->booleanParameter[48] /* eSST1A.imLimited1.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
eSST1A.imLimited1.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->simulationInfo->booleanParameter[49] /* eSST1A.imLimited1.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
eSST1A.imLimited1.uMin = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
eSST1A.imLimited1.uMax = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
eSST1A.add2.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->simulationInfo->realParameter[127] /* eSST1A.add2.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
eSST1A.add2.k1 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->simulationInfo->realParameter[126] /* eSST1A.add2.k1 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.T_mod = if eSST1A.simpleLagLim.T < 1e-15 then 1000.0 else eSST1A.simpleLagLim.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  modelica_boolean tmp40;
  tmp40 = Less(data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.T_mod PARAM */ = (tmp40?1000.0:data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
eSST1A.V_AMIN = -7.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->realParameter[116] /* eSST1A.V_AMIN PARAM */ = -7.0;
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.outMin = eSST1A.V_AMIN
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[116] /* eSST1A.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
eSST1A.V_AMAX = 7.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->simulationInfo->realParameter[115] /* eSST1A.V_AMAX PARAM */ = 7.0;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.outMax = eSST1A.V_AMAX
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[115] /* eSST1A.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
eSST1A.K_A = 300.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */ = 300.0;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.K = eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
eSST1A.add3_1.k3 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k3 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
eSST1A.add3_1.k2 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k2 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
eSST1A.add3_1.k1 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.T2_dummy = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then 1000.0 else eSST1A.imLeadLag1.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  modelica_boolean tmp41;
  tmp41 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T2_dummy PARAM */ = (tmp41?1000.0:data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.a[1] = eSST1A.imLeadLag1.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.TF.a[1] PARAM */ = data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.a_end = if eSST1A.imLeadLag1.TF.a[2] > 1e-13 * sqrt(eSST1A.imLeadLag1.TF.a[1] ^ 2.0 + eSST1A.imLeadLag1.TF.a[2] ^ 2.0) then eSST1A.imLeadLag1.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  tmp42 = data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.TF.a[1] PARAM */;
  tmp43 = data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */;
  tmp44 = Greater(data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp42 * tmp42) + (tmp43 * tmp43))));
  data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a_end PARAM */ = (tmp44?data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.b[1] = eSST1A.imLeadLag1.K * eSST1A.imLeadLag1.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[172] /* eSST1A.imLeadLag1.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.bb[1] = eSST1A.imLeadLag1.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[174] /* eSST1A.imLeadLag1.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[172] /* eSST1A.imLeadLag1.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.d = eSST1A.imLeadLag1.TF.bb[1] / eSST1A.imLeadLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[174] /* eSST1A.imLeadLag1.TF.bb[1] PARAM */,data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.TF.a[1] PARAM */,"eSST1A.imLeadLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.b[2] = eSST1A.imLeadLag1.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[173] /* eSST1A.imLeadLag1.TF.b[2] PARAM */ = data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.bb[2] = eSST1A.imLeadLag1.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[175] /* eSST1A.imLeadLag1.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[173] /* eSST1A.imLeadLag1.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->integerParameter[9] /* eSST1A.imLeadLag1.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->integerParameter[8] /* eSST1A.imLeadLag1.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->integerParameter[7] /* eSST1A.imLeadLag1.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.T2_dummy = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then 1000.0 else eSST1A.imLeadLag.T2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp45;
  tmp45 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T2_dummy PARAM */ = (tmp45?1000.0:data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.a[1] = eSST1A.imLeadLag.T2_dummy
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.a[2] = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.a_end = if eSST1A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSST1A.imLeadLag.TF.a[1] ^ 2.0 + eSST1A.imLeadLag.TF.a[2] ^ 2.0) then eSST1A.imLeadLag.TF.a[2] else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  tmp46 = data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.TF.a[1] PARAM */;
  tmp47 = data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */;
  tmp48 = Greater(data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp46 * tmp46) + (tmp47 * tmp47))));
  data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a_end PARAM */ = (tmp48?data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.K = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.b[1] = eSST1A.imLeadLag.K * eSST1A.imLeadLag.T1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[154] /* eSST1A.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.bb[1] = eSST1A.imLeadLag.TF.b[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[156] /* eSST1A.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[154] /* eSST1A.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.d = eSST1A.imLeadLag.TF.bb[1] / eSST1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[156] /* eSST1A.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.TF.a[1] PARAM */,"eSST1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.b[2] = eSST1A.imLeadLag.K
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->realParameter[155] /* eSST1A.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.bb[2] = eSST1A.imLeadLag.TF.b[2]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[157] /* eSST1A.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[155] /* eSST1A.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.nx = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->simulationInfo->integerParameter[5] /* eSST1A.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.nb = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->integerParameter[4] /* eSST1A.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.na = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->integerParameter[3] /* eSST1A.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
eSST1A.K_LR = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
eSST1A.imGain.k = eSST1A.K_LR
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[143] /* eSST1A.imGain.k PARAM */ = data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */;
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
eSST1A.imLimited.limitsAtInit = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->simulationInfo->booleanParameter[46] /* eSST1A.imLimited.limitsAtInit PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
eSST1A.imLimited.strict = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->simulationInfo->booleanParameter[47] /* eSST1A.imLimited.strict PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
eSST1A.V_IMIN = -0.3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->simulationInfo->realParameter[118] /* eSST1A.V_IMIN PARAM */ = -0.3;
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
eSST1A.imLimited.uMin = eSST1A.V_IMIN
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */ = data->simulationInfo->realParameter[118] /* eSST1A.V_IMIN PARAM */;
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
eSST1A.V_IMAX = 0.3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->simulationInfo->realParameter[117] /* eSST1A.V_IMAX PARAM */ = 0.3;
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
eSST1A.imLimited.uMax = eSST1A.V_IMAX
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */ = data->simulationInfo->realParameter[117] /* eSST1A.V_IMAX PARAM */;
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.zeroGain = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->booleanParameter[45] /* eSST1A.imDerivativeLag.zeroGain PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y_start = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->realParameter[142] /* eSST1A.imDerivativeLag.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.initType = Modelica.Blocks.Types.Init.InitialOutput
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
eSST1A.T_F = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[102] /* eSST1A.T_F PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.T = eSST1A.T_F
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */ = data->simulationInfo->realParameter[102] /* eSST1A.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.k = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[140] /* eSST1A.imDerivativeLag.k PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
eSST1A.K_F = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[91] /* eSST1A.K_F PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
eSST1A.DiffV.k2 = -1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */ = -1.0;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
eSST1A.DiffV.k1 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
gENROE.Xppq = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
gENROE.Xl = 0.12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ = 0.12;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
gENROE.Xpq = 0.6
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ = 0.6;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[238] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
gENROE.Xq = 1.75
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ = 1.75;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_real tmp49;
  tmp49 = data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */,(tmp49 * tmp49),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[237] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  modelica_real tmp50;
  tmp50 = data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */,(tmp50 * tmp50),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
gENROE.PSIpp0_dq.im = -0.4418365415628956
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[251] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[254] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[251] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[255] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[254] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[246] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[248] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[254] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[247] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[226] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[248] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[227] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[247] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[301] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[300] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[254] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
gENROE.DQ_dq.im = -0.5650202843208616
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[223] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
gENROE.DQ_dq.re = 0.825077013560536
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[224] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[284] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[249] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[250] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
gENROE.It.re = 0.4028250107397031
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[234] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
gENROE.It.im = -0.02580594464131273
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[233] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[283] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[233] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[234] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[285] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[284] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[283] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[281] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[282] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[290] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  tmp51 = data->simulationInfo->realParameter[234] /* gENROE.It.re PARAM */;
  tmp52 = data->simulationInfo->realParameter[233] /* gENROE.It.im PARAM */;
  tmp53 = (tmp51 * tmp51) + (tmp52 * tmp52);
  if(!(tmp53 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp53);
  }
  data->simulationInfo->realParameter[288] /* gENROE.b PARAM */ = (sqrt(tmp53)) * (data->simulationInfo->realParameter[274] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[289] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[288] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[285] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[288] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[285] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[281] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[284] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
gENROE.Is.im = -5.013342868567351
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[231] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
gENROE.Is.re = 0.7556357708851228
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[232] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
gENROE.S.im = 0.05416582
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[259] /* gENROE.S.im PARAM */ = 0.05416582;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
gENROE.S.re = 0.4
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[260] /* gENROE.S.re PARAM */ = 0.4;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
gENROE.VT.im = 0.07056215202908395
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[268] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
gENROE.VT.re = 0.9975073847852077
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[269] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
gENROE.Zs.im = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[279] /* gENROE.Zs.im PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
gENROE.Zs.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[280] /* gENROE.Zs.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
gENROE.Tpq0 = 0.9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[267] /* gENROE.Tpq0 PARAM */ = 0.9;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
gENROE.Q_0 = 5416582.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[257] /* gENROE.Q_0 PARAM */ = 5416582.0;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[299] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[257] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[243] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
SysData.S_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[263] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[243] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[263] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
gENROE.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[302] /* gENROE.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
gENROE.angle_0 = 4.046276
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[286] /* gENROE.angle_0 PARAM */ = 4.046276;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[287] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[286] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[302] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[287] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[302] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[287] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  modelica_real tmp54;
  modelica_real tmp55;
  tmp54 = data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */;
  tmp55 = data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[294] /* gENROE.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */) * ((data->simulationInfo->realParameter[299] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[297] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */))),(tmp54 * tmp54) + (tmp55 * tmp55),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  modelica_real tmp56;
  modelica_real tmp57;
  tmp56 = data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */;
  tmp57 = data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[296] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[297] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[299] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */),(tmp56 * tmp56) + (tmp57 * tmp57),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
SysData.fn = 50.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[33] /* SysData.fn PARAM */ = 50.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[292] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[305] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[292] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
gENROE.D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[222] /* gENROE.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
gENROE.H = 4.28
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[228] /* gENROE.H PARAM */ = 4.28;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
gENROE.Tppq0 = 0.09
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */ = 0.09;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
gENROE.Tppd0 = 0.07000000000000001
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */ = 0.07000000000000001;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
gENROE.Tpd0 = 5.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[264] /* gENROE.Tpd0 PARAM */ = 5.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
gENROE.enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->booleanParameter[67] /* gENROE.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
gENROE.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->booleanParameter[61] /* gENROE.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
gENROE.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->booleanParameter[66] /* gENROE.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
gENROE.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->booleanParameter[69] /* gENROE.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
gENROE.enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->booleanParameter[63] /* gENROE.enableQ_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
gENROE.enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->booleanParameter[62] /* gENROE.enableP_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
gENROE.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->booleanParameter[68] /* gENROE.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
gENROE.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->booleanParameter[65] /* gENROE.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
gENROE.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[270] /* gENROE.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
gENROE.enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->booleanParameter[64] /* gENROE.enableS_b PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
FAULT.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
FAULT.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->booleanParameter[6] /* FAULT.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
FAULT.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->booleanParameter[0] /* FAULT.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
FAULT.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->booleanParameter[5] /* FAULT.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
FAULT.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->booleanParameter[8] /* FAULT.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
FAULT.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
FAULT.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->booleanParameter[2] /* FAULT.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
FAULT.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[1] /* FAULT.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
FAULT.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->booleanParameter[1] /* FAULT.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
FAULT.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[0] /* FAULT.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
FAULT.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->booleanParameter[7] /* FAULT.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
FAULT.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->booleanParameter[4] /* FAULT.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
FAULT.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[3] /* FAULT.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
FAULT.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->booleanParameter[3] /* FAULT.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
GEN2.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
GEN2.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->booleanParameter[24] /* GEN2.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
GEN2.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->booleanParameter[18] /* GEN2.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
GEN2.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->booleanParameter[23] /* GEN2.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
GEN2.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->booleanParameter[26] /* GEN2.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
GEN2.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[23] /* GEN2.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
GEN2.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->booleanParameter[20] /* GEN2.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
GEN2.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[17] /* GEN2.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
GEN2.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->booleanParameter[19] /* GEN2.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
GEN2.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[16] /* GEN2.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
GEN2.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->booleanParameter[25] /* GEN2.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
GEN2.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->booleanParameter[22] /* GEN2.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
GEN2.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[19] /* GEN2.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
GEN2.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->booleanParameter[21] /* GEN2.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
LOAD.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
LOAD.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->booleanParameter[33] /* LOAD.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
LOAD.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->booleanParameter[27] /* LOAD.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
LOAD.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->booleanParameter[32] /* LOAD.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
LOAD.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->booleanParameter[35] /* LOAD.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
LOAD.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
LOAD.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->booleanParameter[29] /* LOAD.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
LOAD.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[25] /* LOAD.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
LOAD.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->booleanParameter[28] /* LOAD.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
LOAD.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[24] /* LOAD.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
LOAD.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->booleanParameter[34] /* LOAD.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
LOAD.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->booleanParameter[31] /* LOAD.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
LOAD.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[27] /* LOAD.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
LOAD.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->booleanParameter[30] /* LOAD.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
GEN1.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
GEN1.enabledisplayPF = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->booleanParameter[15] /* GEN1.enabledisplayPF PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
GEN1.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->booleanParameter[9] /* GEN1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
GEN1.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->booleanParameter[14] /* GEN1.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
GEN1.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->booleanParameter[17] /* GEN1.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
GEN1.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
GEN1.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->booleanParameter[11] /* GEN1.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
GEN1.Q_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[9] /* GEN1.Q_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
GEN1.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->booleanParameter[10] /* GEN1.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
GEN1.P_0 = 1000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[8] /* GEN1.P_0 PARAM */ = 1000000.0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
GEN1.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->booleanParameter[16] /* GEN1.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
GEN1.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->booleanParameter[13] /* GEN1.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
GEN1.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[11] /* GEN1.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
GEN1.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->booleanParameter[12] /* GEN1.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
pwFault.R = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[476] /* pwFault.R PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
pwFault.X = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[477] /* pwFault.X PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  tmp58 = Less(fabs(data->simulationInfo->realParameter[476] /* pwFault.R PARAM */),1e-15);
  tmp59 = Less(fabs(data->simulationInfo->realParameter[477] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */ = (tmp58 && tmp59);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
pwFault.t2 = 20.15
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */ = 20.15;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
pwFault.t1 = 20.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */ = 20.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
constantLoad.v_0 = 0.9919935
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */ = 0.9919935;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
constantLoad.S_p.re = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[54] /* constantLoad.S_p.re PARAM */ = 50000000.0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
constantLoad.S_i.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[52] /* constantLoad.S_i.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
constantLoad.S_y.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[56] /* constantLoad.S_y.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  modelica_real tmp60;
  tmp60 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[52] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[56] /* constantLoad.S_y.re PARAM */) * ((tmp60 * tmp60)) + data->simulationInfo->realParameter[54] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
constantLoad.S_p.im = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->realParameter[53] /* constantLoad.S_p.im PARAM */ = 10000000.0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
constantLoad.S_i.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->realParameter[51] /* constantLoad.S_i.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
constantLoad.S_y.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[55] /* constantLoad.S_y.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  modelica_real tmp61;
  tmp61 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[51] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[55] /* constantLoad.S_y.im PARAM */) * ((tmp61 * tmp61)) + data->simulationInfo->realParameter[53] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
constantLoad.d_P = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
constantLoad.d_t = 20.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */ = 20.0;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
constantLoad.t1 = 0.5
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
constantLoad.wp = 3.964
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */ = 3.964;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
constantLoad.b1 = 0.1389
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */ = 0.1389;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
constantLoad.a1 = -0.4999
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */ = -0.4999;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
constantLoad.a0 = 0.4881
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ = 0.4881;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
constantLoad.b2 = 1.769
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ = 1.769;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
constantLoad.a2 = 1.502
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */ = 1.502;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
constantLoad.S_Y.im = 0.1016207385868717
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
constantLoad.S_Y.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
constantLoad.S_I.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
constantLoad.S_I.re = 0.5040355607168797
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
constantLoad.S_P.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
constantLoad.S_P.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
constantLoad.angle_0 = -0.5762684
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[63] /* constantLoad.angle_0 PARAM */ = -0.5762684;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[63] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  modelica_real tmp63;
  modelica_real tmp64;
  tmp63 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp64 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */)),(tmp63 * tmp63) + (tmp64 * tmp64),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  modelica_real tmp65;
  modelica_real tmp66;
  tmp65 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp66 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */),(tmp65 * tmp65) + (tmp66 * tmp66),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
constantLoad.characteristic = 2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
constantLoad.PQBRAK = 0.7
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */ = 0.7;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
constantLoad.b.im = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->realParameter[65] /* constantLoad.b.im PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
constantLoad.b.re = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->realParameter[66] /* constantLoad.b.re PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
constantLoad.a.im = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->realParameter[58] /* constantLoad.a.im PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
constantLoad.a.re = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->realParameter[59] /* constantLoad.a.re PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
constantLoad.enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->booleanParameter[42] /* constantLoad.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
constantLoad.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->booleanParameter[36] /* constantLoad.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
constantLoad.enableangle_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->booleanParameter[41] /* constantLoad.enableangle_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
constantLoad.enablev_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->booleanParameter[44] /* constantLoad.enablev_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
constantLoad.enableQ_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->booleanParameter[38] /* constantLoad.enableQ_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
constantLoad.Q_0 = 10000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[43] /* constantLoad.Q_0 PARAM */ = 10000000.0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
constantLoad.enableP_0 = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->booleanParameter[37] /* constantLoad.enableP_0 PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
constantLoad.P_0 = 50000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[42] /* constantLoad.P_0 PARAM */ = 50000000.0;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
constantLoad.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->booleanParameter[43] /* constantLoad.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->realParameter[72] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
constantLoad.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->booleanParameter[40] /* constantLoad.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
constantLoad.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[57] /* constantLoad.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
constantLoad.enableS_b = true
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->booleanParameter[39] /* constantLoad.enableS_b PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
gENCLS.R_a = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
gENCLS.X_d = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
gENCLS.v_0 = 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[215] /* gENCLS.v_0 PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
gENCLS.angle_0 = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[205] /* gENCLS.angle_0 PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[206] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[205] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[215] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[206] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[215] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[206] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
gENCLS.P_0 = 10017110.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->simulationInfo->realParameter[199] /* gENCLS.P_0 PARAM */ = 10017110.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
gENCLS.M_b = 100000000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->realParameter[198] /* gENCLS.M_b PARAM */ = 100000000.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->realParameter[213] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[199] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[198] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
gENCLS.Q_0 = 8006544.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[200] /* gENCLS.Q_0 PARAM */ = 8006544.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->realParameter[214] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[200] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[198] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  modelica_real tmp67;
  modelica_real tmp68;
  tmp67 = data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */;
  tmp68 = data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[212] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[213] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[214] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */),(tmp67 * tmp67) + (tmp68 * tmp68),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  modelica_real tmp69;
  modelica_real tmp70;
  tmp69 = data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */;
  tmp70 = data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[210] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[213] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[214] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */)),(tmp69 * tmp69) + (tmp70 * tmp70),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[210] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[212] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[212] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[210] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->realParameter[219] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[209] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[212] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[210] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->realParameter[211] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[212] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[210] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[217] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[219] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[211] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[209] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->realParameter[216] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->realParameter[202] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[198] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[202] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
gENCLS.D = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->simulationInfo->realParameter[196] /* gENCLS.D PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
gENCLS.H = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->realParameter[197] /* gENCLS.H PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
gENCLS.enabledisplayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->booleanParameter[58] /* gENCLS.enabledisplayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
gENCLS.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->booleanParameter[52] /* gENCLS.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
gENCLS.enableangle_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->booleanParameter[57] /* gENCLS.enableangle_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
gENCLS.enablev_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->booleanParameter[60] /* gENCLS.enablev_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
gENCLS.enableQ_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->booleanParameter[54] /* gENCLS.enableQ_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
gENCLS.enableP_0 = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->booleanParameter[53] /* gENCLS.enableP_0 PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
gENCLS.enablefn = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->booleanParameter[59] /* gENCLS.enablefn PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[208] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
gENCLS.enableV_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->booleanParameter[56] /* gENCLS.enableV_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
gENCLS.V_b = 400000.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[203] /* gENCLS.V_b PARAM */ = 400000.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
gENCLS.enableS_b = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->booleanParameter[55] /* gENCLS.enableS_b PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
pwLine4.X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[517] /* pwLine4.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[517] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
pwLine4.R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[515] /* pwLine4.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[515] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
pwLine4.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[513] /* pwLine4.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[513] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
pwLine4.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->realParameter[514] /* pwLine4.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[514] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
pwLine4.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->booleanParameter[80] /* pwLine4.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
pwLine4.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->simulationInfo->integerParameter[45] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
pwLine4.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
pwLine4.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->realParameter[516] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
pwLine3.X = 0.1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[506] /* pwLine3.X PARAM */ = 0.1;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[506] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
pwLine3.R = 0.0005
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[504] /* pwLine3.R PARAM */ = 0.0005;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[504] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
pwLine3.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[502] /* pwLine3.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[502] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
pwLine3.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[503] /* pwLine3.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[503] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
pwLine3.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->booleanParameter[79] /* pwLine3.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
pwLine3.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->integerParameter[44] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
pwLine3.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
pwLine3.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[505] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
pwLine1.X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[495] /* pwLine1.X PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[495] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
pwLine1.R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->realParameter[493] /* pwLine1.R PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[493] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
pwLine1.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[491] /* pwLine1.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[491] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
pwLine1.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->simulationInfo->realParameter[492] /* pwLine1.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[492] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
pwLine1.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->booleanParameter[78] /* pwLine1.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
pwLine1.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->integerParameter[43] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
pwLine1.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
pwLine1.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->realParameter[494] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
pwLine.X = 0.2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->realParameter[484] /* pwLine.X PARAM */ = 0.2;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[484] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
pwLine.R = 0.001
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->simulationInfo->realParameter[482] /* pwLine.R PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[482] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine.B = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->realParameter[480] /* pwLine.B PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[480] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
pwLine.G = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->realParameter[481] /* pwLine.G PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[481] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
pwLine.displayPF = false
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->booleanParameter[77] /* pwLine.displayPF PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine.opening = 1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->integerParameter[42] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
pwLine.t2 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
pwLine.t1 = 9.999999999999999e+59
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */ = 9.999999999999999e+59;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[483] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_2(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1097(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_14(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_15(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_16(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_17(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_18(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_20(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1098(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_22(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_23(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_24(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_25(DATA *data, threadData_t *threadData);


/*
equation index: 889
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.u = gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */ = data->localData[0]->realVars[12] /* gENROE.w STATE(1) */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_31(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_32(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_34(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_35(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_38(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_39(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_40(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_41(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_42(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_43(DATA *data, threadData_t *threadData);


void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_907(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_908(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_909(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_910(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_911(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_912(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_913(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_914(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_915(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_916(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_917(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_918(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_919(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_920(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_921(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_922(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_923(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_924(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_925(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_926(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_927(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_928(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_929(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_930(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_931(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_932(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_933(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_934(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_935(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_936(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_937(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_938(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_939(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_940(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_941(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_942(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_943(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_944(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_945(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_946(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_947(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_948(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_949(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_950(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_951(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_952(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_953(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_954(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_955(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_956(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_957(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_958(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_959(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_960(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_961(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_962(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_963(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_964(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_965(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_966(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_967(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_968(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_969(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_970(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_971(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_972(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_973(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_974(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_975(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1006(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1005(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1004(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1003(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1002(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1001(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1000(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_999(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_998(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_997(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_996(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_995(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_994(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_993(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_992(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_991(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_990(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_989(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_988(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_987(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_986(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_985(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_984(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_983(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_982(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_981(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_980(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_979(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_978(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_977(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_976(DATA*, threadData_t*);
/*
equation index: 1007
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.im, pwLine1.is.im, pwLine3.ir.im, pwLine4.is.im, pwLine.ir.re, pwLine1.is.re, pwLine3.ir.re, pwLine4.is.re, constantLoad.p.ir, constantLoad.p.ii, pwLine4.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, gENROE.Epq, gENROE.PSIkq, gENROE.PSIppd, gENROE.PSIppq, gENROE.iq, gENROE.id, pwLine.vs.re, pwLine.vs.im, pwLine1.vr.im, pwLine1.vr.re, pSS2B.V_S2, eSST1A.ECOMP, eSST1A.XADIFD, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im}
eqns: {907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 1006, 1005, 1004, 1003, 1002, 1001, 1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976}
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1007 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[166] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[178] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[188] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[167] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[179] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[189] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[198] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[177] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->simulationInfo->realParameter[211] /* gENCLS.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->simulationInfo->realParameter[209] /* gENCLS.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->simulationInfo->realParameter[227] /* gENROE.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->simulationInfo->realParameter[248] /* gENROE.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->simulationInfo->realParameter[254] /* gENROE.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->simulationInfo->realParameter[297] /* gENROE.p0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[30] = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1007};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1007 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[166] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[178] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[200] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[167] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[179] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[201] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[72] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[71] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[108] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[107] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[127] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[126] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[171] /* pwLine.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[170] /* pwLine.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[30];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_196(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_193(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_202(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_153(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_154(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_155(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_156(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_149(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_160(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_161(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_163(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_164(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_177(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_181(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_183(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_184(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_187(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_188(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_190(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_191(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_168(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_223(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_224(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_227(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_230(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(DATA *data, threadData_t *threadData);


int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_853(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_852(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_851(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_850(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_849(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_848(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_847(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_846(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_845(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_844(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_843(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_842(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_841(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_840(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_839(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_838(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_837(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_836(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_835(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_834(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_833(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_832(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_831(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_830(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_829(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_828(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_827(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_826(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_825(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_824(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_823(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_822(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_821(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_820(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_819(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_818(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_817(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_816(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_815(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_814(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_813(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_812(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_811(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_810(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_809(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_808(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_807(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_806(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_805(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_804(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_803(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_802(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_801(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_800(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_799(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_798(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_797(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_796(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_795(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_794(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_793(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_792(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_791(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_790(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_789(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_788(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_787(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_786(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_785(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_784(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_783(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_782(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_781(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_780(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_779(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_778(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_777(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_776(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_775(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_774(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_773(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_772(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_771(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_770(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_769(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_768(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_767(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_766(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_765(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_764(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_763(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_762(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_761(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_760(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_759(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_758(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_757(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_756(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_755(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_754(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_753(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_752(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_751(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_750(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_749(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_748(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_747(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_746(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_745(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_744(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_743(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_742(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_741(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_740(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_739(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_738(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_737(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_736(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_735(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_734(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_733(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_732(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_731(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_730(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_729(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_728(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_727(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_726(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_725(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_724(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_723(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_722(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_721(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_720(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_719(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_718(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_717(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_716(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_715(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_714(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_713(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_712(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_711(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_710(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_709(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_708(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_707(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_706(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_705(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_704(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_703(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_702(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_701(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_700(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_699(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_698(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_697(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_696(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_695(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_694(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_693(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_692(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_691(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_690(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_689(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_688(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_687(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_686(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_685(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_684(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_683(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_682(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_681(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_680(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_679(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_678(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_677(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_676(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_675(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_674(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_673(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_672(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_671(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_670(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_669(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_668(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_667(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_666(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_665(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_664(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_663(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_662(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_661(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_660(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_659(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_658(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_657(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_656(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_655(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_654(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_653(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_652(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_651(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_650(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_649(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_648(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_647(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_646(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_645(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_644(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_643(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_642(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_641(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_640(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_639(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_638(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_637(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_636(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_635(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_634(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_633(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_632(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_631(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_630(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_629(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_628(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_627(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_626(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_625(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_624(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_623(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_622(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_621(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_620(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_619(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_618(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_617(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_616(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_615(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_614(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_613(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_612(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_611(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_610(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_609(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_608(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_607(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_606(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_605(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_604(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_603(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_602(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_601(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_600(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_599(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_598(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_597(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_596(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_595(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_594(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_593(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_592(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_591(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_590(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_589(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_588(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_587(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_586(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_585(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_584(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_583(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_582(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_581(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_580(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_450(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_449(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_448(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_447(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_444(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_443(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_442(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_441(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_440(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_439(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_438(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_437(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_436(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_435(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_434(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_433(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_432(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_431(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_430(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_429(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_428(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_426(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_425(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_424(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_423(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_422(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_421(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_420(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_419(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_418(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_417(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_416(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_415(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_414(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_413(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_412(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_411(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_410(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_409(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_408(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_407(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_406(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_405(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_404(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_403(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_402(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_401(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_400(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_399(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_398(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_2(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1097(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_4(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_5(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_6(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_7(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_8(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_9(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_10(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_11(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_12(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_13(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_14(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_15(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_16(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_17(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_18(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_20(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1098(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_22(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_23(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_24(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_25(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_31(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_32(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_34(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_35(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_38(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_39(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_40(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_41(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_42(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_43(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1007(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1235(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1234(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_196(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_193(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1219(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1229(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1222(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1221(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1220(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1226(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1225(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1252(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1251(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_155(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_156(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_160(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_161(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_163(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_164(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1228(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1227(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[109] /* gENCLS.omega variable */;
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

