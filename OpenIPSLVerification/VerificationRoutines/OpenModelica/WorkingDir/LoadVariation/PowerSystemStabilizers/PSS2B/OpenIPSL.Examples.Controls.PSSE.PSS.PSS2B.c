/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1097
type: SIMPLE_ASSIGN
eSST1A.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  data->localData[0]->realVars[78] /* eSST1A.EFD0 variable */ = data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1098
type: SIMPLE_ASSIGN
pSS2B.V_S1 = gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  data->localData[0]->realVars[144] /* pSS2B.V_S1 variable */ = data->localData[0]->realVars[12] /* gENROE.w STATE(1) */;
  TRACE_POP
}
/*
equation index: 1099
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  data->localData[0]->realVars[27] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 1100
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  data->localData[0]->realVars[28] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 1101
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 1102
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 1103
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[117] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1104
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  data->localData[0]->realVars[47] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[117] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 1105
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  data->localData[0]->realVars[33] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[305] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1106
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x[1] = eSST1A.imLeadLag.TF.x_scaled[1] / eSST1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  data->localData[0]->realVars[96] /* eSST1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a_end PARAM */,"eSST1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1107
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x[1] = eSST1A.imLeadLag1.TF.x_scaled[1] / eSST1A.imLeadLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  data->localData[0]->realVars[99] /* eSST1A.imLeadLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a_end PARAM */,"eSST1A.imLeadLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1108
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.x[1] = pSS2B.Leadlag1.TF.x_scaled[1] / pSS2B.Leadlag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  data->localData[0]->realVars[130] /* pSS2B.Leadlag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[13] /* pSS2B.Leadlag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[315] /* pSS2B.Leadlag1.TF.a_end PARAM */,"pSS2B.Leadlag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1109
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.x[1] = pSS2B.Leadlag2.TF.x_scaled[1] / pSS2B.Leadlag2.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  data->localData[0]->realVars[134] /* pSS2B.Leadlag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* pSS2B.Leadlag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[333] /* pSS2B.Leadlag2.TF.a_end PARAM */,"pSS2B.Leadlag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1110
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.x[1] = pSS2B.Leadlag3.TF.x_scaled[1] / pSS2B.Leadlag3.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  data->localData[0]->realVars[137] /* pSS2B.Leadlag3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[15] /* pSS2B.Leadlag3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[351] /* pSS2B.Leadlag3.TF.a_end PARAM */,"pSS2B.Leadlag3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1111
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.u = smooth(0, if gENROE.w > pSS2B.limiter1.uMax then pSS2B.limiter1.uMax else if gENROE.w < pSS2B.limiter1.uMin then pSS2B.limiter1.uMin else gENROE.w)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp2 = Greater(data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */);
  tmp4 = (modelica_boolean)tmp2;
  if(tmp4)
  {
    tmp5 = data->simulationInfo->realParameter[470] /* pSS2B.limiter1.uMax PARAM */;
  }
  else
  {
    tmp3 = Less(data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */);
    tmp5 = (tmp3?data->simulationInfo->realParameter[471] /* pSS2B.limiter1.uMin PARAM */:data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  }
  data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 1112
type: SIMPLE_ASSIGN
$DER.pSS2B.derivativeLag.TF.x_scaled[1] = (pSS2B.derivativeLag.TF.a_end * pSS2B.derivativeLag.u - pSS2B.derivativeLag.TF.a[2] * pSS2B.derivativeLag.TF.x_scaled[1]) / pSS2B.derivativeLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  data->localData[0]->realVars[40] /* der(pSS2B.derivativeLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[404] /* pSS2B.derivativeLag.TF.a_end PARAM */) * (data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */) - ((data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[18] /* pSS2B.derivativeLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[402] /* pSS2B.derivativeLag.TF.a[1] PARAM */,"pSS2B.derivativeLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1113
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.x[1] = pSS2B.derivativeLag.TF.x_scaled[1] / pSS2B.derivativeLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  data->localData[0]->realVars[148] /* pSS2B.derivativeLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* pSS2B.derivativeLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[404] /* pSS2B.derivativeLag.TF.a_end PARAM */,"pSS2B.derivativeLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1114
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.TF.y = (pSS2B.derivativeLag.TF.bb[2] - pSS2B.derivativeLag.TF.a[2] * pSS2B.derivativeLag.TF.d) * pSS2B.derivativeLag.TF.x[1] + pSS2B.derivativeLag.TF.d * pSS2B.derivativeLag.u
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  data->localData[0]->realVars[149] /* pSS2B.derivativeLag.TF.y variable */ = (data->simulationInfo->realParameter[408] /* pSS2B.derivativeLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[403] /* pSS2B.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[409] /* pSS2B.derivativeLag.TF.d PARAM */))) * (data->localData[0]->realVars[148] /* pSS2B.derivativeLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[409] /* pSS2B.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */);
  TRACE_POP
}
/*
equation index: 1115
type: SIMPLE_ASSIGN
pSS2B.derivativeLag.y = if abs(pSS2B.derivativeLag.T) < 1e-15 then pSS2B.derivativeLag.u else pSS2B.derivativeLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1115};
  modelica_boolean tmp6;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[401] /* pSS2B.derivativeLag.T PARAM */),1e-15);
  data->localData[0]->realVars[151] /* pSS2B.derivativeLag.y variable */ = (tmp6?data->localData[0]->realVars[150] /* pSS2B.derivativeLag.u variable */:data->localData[0]->realVars[149] /* pSS2B.derivativeLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1116
type: SIMPLE_ASSIGN
$DER.pSS2B.derivativeLag1.TF.x_scaled[1] = (pSS2B.derivativeLag1.TF.a_end * pSS2B.derivativeLag.y - pSS2B.derivativeLag1.TF.a[2] * pSS2B.derivativeLag1.TF.x_scaled[1]) / pSS2B.derivativeLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  data->localData[0]->realVars[41] /* der(pSS2B.derivativeLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[421] /* pSS2B.derivativeLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[151] /* pSS2B.derivativeLag.y variable */) - ((data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[19] /* pSS2B.derivativeLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[419] /* pSS2B.derivativeLag1.TF.a[1] PARAM */,"pSS2B.derivativeLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1117
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.x[1] = pSS2B.derivativeLag1.TF.x_scaled[1] / pSS2B.derivativeLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1117};
  data->localData[0]->realVars[152] /* pSS2B.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* pSS2B.derivativeLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[421] /* pSS2B.derivativeLag1.TF.a_end PARAM */,"pSS2B.derivativeLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1118
type: SIMPLE_ASSIGN
pSS2B.derivativeLag1.TF.y = (pSS2B.derivativeLag1.TF.bb[2] - pSS2B.derivativeLag1.TF.a[2] * pSS2B.derivativeLag1.TF.d) * pSS2B.derivativeLag1.TF.x[1] + pSS2B.derivativeLag1.TF.d * pSS2B.derivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1118};
  data->localData[0]->realVars[153] /* pSS2B.derivativeLag1.TF.y variable */ = (data->simulationInfo->realParameter[425] /* pSS2B.derivativeLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[420] /* pSS2B.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[426] /* pSS2B.derivativeLag1.TF.d PARAM */))) * (data->localData[0]->realVars[152] /* pSS2B.derivativeLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[426] /* pSS2B.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[151] /* pSS2B.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 1119
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.u = if abs(pSS2B.derivativeLag1.T) < 1e-15 then pSS2B.derivativeLag.y else pSS2B.derivativeLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1119};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[418] /* pSS2B.derivativeLag1.T PARAM */),1e-15);
  data->localData[0]->realVars[140] /* pSS2B.SimpleLag1.u variable */ = (tmp7?data->localData[0]->realVars[151] /* pSS2B.derivativeLag.y variable */:data->localData[0]->realVars[153] /* pSS2B.derivativeLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1120
type: SIMPLE_ASSIGN
pSS2B.SimpleLag1.y = if abs(pSS2B.SimpleLag1.T) <= 1e-15 then pSS2B.SimpleLag1.u * pSS2B.SimpleLag1.K else pSS2B.SimpleLag1.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1120};
  modelica_boolean tmp8;
  tmp8 = LessEq(fabs(data->simulationInfo->realParameter[364] /* pSS2B.SimpleLag1.T PARAM */),1e-15);
  data->localData[0]->realVars[141] /* pSS2B.SimpleLag1.y variable */ = (tmp8?(data->localData[0]->realVars[140] /* pSS2B.SimpleLag1.u variable */) * (data->simulationInfo->realParameter[363] /* pSS2B.SimpleLag1.K PARAM */):data->localData[0]->realVars[16] /* pSS2B.SimpleLag1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1121
type: SIMPLE_ASSIGN
$DER.pSS2B.SimpleLag1.state = (pSS2B.SimpleLag1.K * pSS2B.SimpleLag1.u - pSS2B.SimpleLag1.state) / pSS2B.SimpleLag1.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1121};
  data->localData[0]->realVars[38] /* der(pSS2B.SimpleLag1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[363] /* pSS2B.SimpleLag1.K PARAM */) * (data->localData[0]->realVars[140] /* pSS2B.SimpleLag1.u variable */) - data->localData[0]->realVars[16] /* pSS2B.SimpleLag1.state STATE(1) */,data->simulationInfo->realParameter[365] /* pSS2B.SimpleLag1.T_mod PARAM */,"pSS2B.SimpleLag1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1122
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.x[1] = pSS2B.derivativeLag2.TF.x_scaled[1] / pSS2B.derivativeLag2.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1122};
  data->localData[0]->realVars[154] /* pSS2B.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[20] /* pSS2B.derivativeLag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[438] /* pSS2B.derivativeLag2.TF.a_end PARAM */,"pSS2B.derivativeLag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1123
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.x[1] = pSS2B.derivativeLag3.TF.x_scaled[1] / pSS2B.derivativeLag3.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  data->localData[0]->realVars[158] /* pSS2B.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[21] /* pSS2B.derivativeLag3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[455] /* pSS2B.derivativeLag3.TF.a_end PARAM */,"pSS2B.derivativeLag3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1124
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  data->localData[0]->realVars[49] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 1125
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  data->localData[0]->realVars[48] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 1126
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  data->localData[0]->realVars[45] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 1127
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  data->localData[0]->realVars[44] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1128(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1129(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1130(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1131(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1132(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1133(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1134(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1135(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1136(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1137(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1138(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1139(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1140(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1141(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1142(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1143(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1144(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1145(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1146(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1147(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1148(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1149(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1150(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1172(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1171(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1170(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1169(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1168(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1167(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1166(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1165(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1164(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1163(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1162(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1161(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1160(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1159(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1158(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1157(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1156(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1155(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1154(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1153(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1152(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1151(DATA*, threadData_t*);
/*
equation index: 1218
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine1.is.im, pwLine.ir.im, pwLine1.is.re, pwLine.ir.re, pwLine3.ir.re, pwLine4.is.re, pwLine3.ir.im, pwLine4.is.im, pwLine3.is.im, pwLine3.is.re, pwLine4.ir.re, pwLine4.ir.im, gENCLS.iq, gENCLS.id, pwLine1.vr.re, pwLine1.vr.im, gENROE.iq, gENROE.id, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.im}
eqns: {1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1172, 1171, 1170, 1169, 1168, 1167, 1166, 1165, 1164, 1163, 1162, 1161, 1160, 1159, 1158, 1157, 1156, 1155, 1154, 1153, 1152, 1151}
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1218 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[178] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[166] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[179] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[167] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[189] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[188] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[190] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[191] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[199] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[198] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[108] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[107] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[127] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[126] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1218};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1218 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[178] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[166] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[179] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[167] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[201] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[200] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[190] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[191] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[108] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[107] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[127] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[126] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 1219
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  data->localData[0]->realVars[62] /* LOAD.V variable */ = data->localData[0]->realVars[73] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 1220
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  data->localData[0]->realVars[194] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[516] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1221
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  data->localData[0]->realVars[196] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[516] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1222
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[50] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1223
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  data->localData[0]->realVars[46] /* $cse4 variable */ = atan2(data->localData[0]->realVars[192] /* pwLine3.vr.im variable */, data->localData[0]->realVars[193] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1224
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  data->localData[0]->realVars[51] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[46] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 1225
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  data->localData[0]->realVars[185] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[505] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1226
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  data->localData[0]->realVars[187] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[505] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1227
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  data->localData[0]->realVars[184] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[505] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1228
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  data->localData[0]->realVars[186] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[505] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1229
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  data->localData[0]->realVars[68] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[182] /* pwLine1.vs.im variable */, data->localData[0]->realVars[183] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1230
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  data->localData[0]->realVars[63] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[68] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 1231
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  data->localData[0]->realVars[32] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1232
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  data->localData[0]->realVars[123] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[127] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[47] /* $cse5 variable */) * ((data->localData[0]->realVars[119] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1233
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  data->localData[0]->realVars[29] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[123] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[267] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1234
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[168] /* pwLine.is.im variable */;
  tmp3 = data->localData[0]->realVars[169] /* pwLine.is.re variable */;
  data->localData[0]->realVars[114] /* gENROE.I variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 1235
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  data->localData[0]->realVars[124] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[168] /* pwLine.is.im variable */), (-data->localData[0]->realVars[169] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 1236
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  data->localData[0]->realVars[31] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1237
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  data->localData[0]->realVars[122] /* gENROE.Te variable */ = (data->localData[0]->realVars[116] /* gENROE.PSId variable */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - ((data->localData[0]->realVars[120] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 1238
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  data->localData[0]->realVars[34] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[298] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[222] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[122] /* gENROE.Te variable */,data->simulationInfo->realParameter[228] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 1239
type: SIMPLE_ASSIGN
eSST1A.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ = (data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[126] /* gENROE.id variable */) * (data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[47] /* $cse5 variable */) * (data->localData[0]->realVars[118] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 1240
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  data->localData[0]->realVars[82] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[126] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[127] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 1241
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[143] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[82] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 1242
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp4 = Greater(data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */;
  }
  else
  {
    tmp5 = Less(data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */);
    tmp7 = (tmp5?data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */:data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[88] /* eSST1A.add3_2.u3 variable */ = tmp7;
  TRACE_POP
}
/*
equation index: 1243
type: SIMPLE_ASSIGN
eSST1A.add3.u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  data->localData[0]->realVars[83] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[146] /* eSST1A.imGain3.k PARAM */) * (data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
eSST1A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->localData[0]->realVars[171] /* pwLine.vs.re variable */;
  tmp9 = data->localData[0]->realVars[170] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */ = sqrt((tmp8 * tmp8) + (tmp9 * tmp9));
  TRACE_POP
}
/*
equation index: 1245
type: SIMPLE_ASSIGN
eSST1A.imGain1.y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[144] /* eSST1A.imGain1.k PARAM */) * (data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 1246
type: SIMPLE_ASSIGN
eSST1A.add3.u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  data->localData[0]->realVars[84] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[145] /* eSST1A.imGain2.k PARAM */) * (data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 1247
type: SIMPLE_ASSIGN
eSST1A.add3.y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  data->localData[0]->realVars[85] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[129] /* eSST1A.add3.k1 PARAM */) * (data->localData[0]->realVars[83] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[130] /* eSST1A.add3.k2 PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 1248
type: SIMPLE_ASSIGN
$DER.eSST1A.TransducerDelay.state = (eSST1A.TransducerDelay.K * eSST1A.ECOMP - eSST1A.TransducerDelay.state) / eSST1A.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  data->localData[0]->realVars[22] /* der(eSST1A.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */) - data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[106] /* eSST1A.TransducerDelay.T_mod PARAM */,"eSST1A.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1249
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  modelica_boolean tmp10;
  tmp10 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */ = (tmp10?(data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1250
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  data->localData[0]->realVars[75] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 1251
type: SIMPLE_ASSIGN
GEN1.V = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  data->localData[0]->realVars[54] /* GEN1.V variable */ = data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 1252
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  data->localData[0]->realVars[125] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[170] /* pwLine.vs.im variable */, data->localData[0]->realVars[171] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1253
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  data->localData[0]->realVars[55] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[125] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 1254
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  data->localData[0]->realVars[115] /* gENROE.P variable */ = (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */) + (data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 1255
type: SIMPLE_ASSIGN
pSS2B.V_S2 = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */ = DIVISION_SIM(data->localData[0]->realVars[115] /* gENROE.P variable */,data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 1256
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.u = smooth(0, if pSS2B.V_S2 > pSS2B.limiter2.uMax then pSS2B.limiter2.uMax else if pSS2B.V_S2 < pSS2B.limiter2.uMin then pSS2B.limiter2.uMin else pSS2B.V_S2)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp11 = Greater(data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */,data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */);
  tmp13 = (modelica_boolean)tmp11;
  if(tmp13)
  {
    tmp14 = data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */,data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */);
    tmp14 = (tmp12?data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */:data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */);
  }
  data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 1257
type: SIMPLE_ASSIGN
$DER.pSS2B.derivativeLag2.TF.x_scaled[1] = (pSS2B.derivativeLag2.TF.a_end * pSS2B.derivativeLag2.u - pSS2B.derivativeLag2.TF.a[2] * pSS2B.derivativeLag2.TF.x_scaled[1]) / pSS2B.derivativeLag2.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  data->localData[0]->realVars[42] /* der(pSS2B.derivativeLag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[438] /* pSS2B.derivativeLag2.TF.a_end PARAM */) * (data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */) - ((data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[20] /* pSS2B.derivativeLag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[436] /* pSS2B.derivativeLag2.TF.a[1] PARAM */,"pSS2B.derivativeLag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1258
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.TF.y = (pSS2B.derivativeLag2.TF.bb[2] - pSS2B.derivativeLag2.TF.a[2] * pSS2B.derivativeLag2.TF.d) * pSS2B.derivativeLag2.TF.x[1] + pSS2B.derivativeLag2.TF.d * pSS2B.derivativeLag2.u
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  data->localData[0]->realVars[155] /* pSS2B.derivativeLag2.TF.y variable */ = (data->simulationInfo->realParameter[442] /* pSS2B.derivativeLag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[437] /* pSS2B.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[443] /* pSS2B.derivativeLag2.TF.d PARAM */))) * (data->localData[0]->realVars[154] /* pSS2B.derivativeLag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[443] /* pSS2B.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */);
  TRACE_POP
}
/*
equation index: 1259
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.y = if abs(pSS2B.derivativeLag2.T) < 1e-15 then pSS2B.derivativeLag2.u else pSS2B.derivativeLag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  modelica_boolean tmp15;
  tmp15 = Less(fabs(data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */ = (tmp15?data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */:data->localData[0]->realVars[155] /* pSS2B.derivativeLag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1260
type: SIMPLE_ASSIGN
$DER.pSS2B.derivativeLag3.TF.x_scaled[1] = (pSS2B.derivativeLag3.TF.a_end * pSS2B.derivativeLag2.y - pSS2B.derivativeLag3.TF.a[2] * pSS2B.derivativeLag3.TF.x_scaled[1]) / pSS2B.derivativeLag3.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  data->localData[0]->realVars[43] /* der(pSS2B.derivativeLag3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[455] /* pSS2B.derivativeLag3.TF.a_end PARAM */) * (data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */) - ((data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */) * (data->localData[0]->realVars[21] /* pSS2B.derivativeLag3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[453] /* pSS2B.derivativeLag3.TF.a[1] PARAM */,"pSS2B.derivativeLag3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1261
type: SIMPLE_ASSIGN
pSS2B.derivativeLag3.TF.y = (pSS2B.derivativeLag3.TF.bb[2] - pSS2B.derivativeLag3.TF.a[2] * pSS2B.derivativeLag3.TF.d) * pSS2B.derivativeLag3.TF.x[1] + pSS2B.derivativeLag3.TF.d * pSS2B.derivativeLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  data->localData[0]->realVars[159] /* pSS2B.derivativeLag3.TF.y variable */ = (data->simulationInfo->realParameter[459] /* pSS2B.derivativeLag3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[454] /* pSS2B.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[460] /* pSS2B.derivativeLag3.TF.d PARAM */))) * (data->localData[0]->realVars[158] /* pSS2B.derivativeLag3.TF.x[1] variable */) + (data->simulationInfo->realParameter[460] /* pSS2B.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */);
  TRACE_POP
}
/*
equation index: 1262
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.u = if abs(pSS2B.derivativeLag3.T) < 1e-15 then pSS2B.derivativeLag2.y else pSS2B.derivativeLag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  modelica_boolean tmp16;
  tmp16 = Less(fabs(data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */),1e-15);
  data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */ = (tmp16?data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */:data->localData[0]->realVars[159] /* pSS2B.derivativeLag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1263
type: SIMPLE_ASSIGN
$DER.pSS2B.SimpleLag2.state = (pSS2B.SimpleLag2.K * pSS2B.SimpleLag2.u - pSS2B.SimpleLag2.state) / pSS2B.SimpleLag2.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  data->localData[0]->realVars[39] /* der(pSS2B.SimpleLag2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[368] /* pSS2B.SimpleLag2.K PARAM */) * (data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */) - data->localData[0]->realVars[17] /* pSS2B.SimpleLag2.state STATE(1) */,data->simulationInfo->realParameter[370] /* pSS2B.SimpleLag2.T_mod PARAM */,"pSS2B.SimpleLag2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1264
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.y = if abs(pSS2B.SimpleLag2.T) <= 1e-15 then pSS2B.SimpleLag2.u * pSS2B.SimpleLag2.K else pSS2B.SimpleLag2.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  modelica_boolean tmp17;
  tmp17 = LessEq(fabs(data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */ = (tmp17?(data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */) * (data->simulationInfo->realParameter[368] /* pSS2B.SimpleLag2.K PARAM */):data->localData[0]->realVars[17] /* pSS2B.SimpleLag2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1265
type: SIMPLE_ASSIGN
pSS2B.add1.u1 = pSS2B.add.k1 * pSS2B.SimpleLag1.y + pSS2B.add.k2 * pSS2B.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  data->localData[0]->realVars[146] /* pSS2B.add1.u1 variable */ = (data->simulationInfo->realParameter[395] /* pSS2B.add.k1 PARAM */) * (data->localData[0]->realVars[141] /* pSS2B.SimpleLag1.y variable */) + (data->simulationInfo->realParameter[396] /* pSS2B.add.k2 PARAM */) * (data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 1266
type: SIMPLE_ASSIGN
pSS2B.add1.y = pSS2B.add1.k1 * pSS2B.add1.u1 + pSS2B.add1.k2 * pSS2B.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  data->localData[0]->realVars[147] /* pSS2B.add1.y variable */ = (data->simulationInfo->realParameter[397] /* pSS2B.add1.k1 PARAM */) * (data->localData[0]->realVars[146] /* pSS2B.add1.u1 variable */) + (data->simulationInfo->realParameter[398] /* pSS2B.add1.k2 PARAM */) * (data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 1267
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.u = pSS2B.gain.k * pSS2B.add1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */ = (data->simulationInfo->realParameter[467] /* pSS2B.gain.k PARAM */) * (data->localData[0]->realVars[147] /* pSS2B.add1.y variable */);
  TRACE_POP
}
/*
equation index: 1268
type: SIMPLE_ASSIGN
$DER.pSS2B.Leadlag1.TF.x_scaled[1] = (pSS2B.Leadlag1.TF.a_end * pSS2B.Leadlag1.u - pSS2B.Leadlag1.TF.a[2] * pSS2B.Leadlag1.TF.x_scaled[1]) / pSS2B.Leadlag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  data->localData[0]->realVars[35] /* der(pSS2B.Leadlag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[315] /* pSS2B.Leadlag1.TF.a_end PARAM */) * (data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */) - ((data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[13] /* pSS2B.Leadlag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[313] /* pSS2B.Leadlag1.TF.a[1] PARAM */,"pSS2B.Leadlag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1269
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.TF.y = (pSS2B.Leadlag1.TF.bb[2] - pSS2B.Leadlag1.TF.a[2] * pSS2B.Leadlag1.TF.d) * pSS2B.Leadlag1.TF.x[1] + pSS2B.Leadlag1.TF.d * pSS2B.Leadlag1.u
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  data->localData[0]->realVars[131] /* pSS2B.Leadlag1.TF.y variable */ = (data->simulationInfo->realParameter[319] /* pSS2B.Leadlag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[314] /* pSS2B.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[320] /* pSS2B.Leadlag1.TF.d PARAM */))) * (data->localData[0]->realVars[130] /* pSS2B.Leadlag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[320] /* pSS2B.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */);
  TRACE_POP
}
/*
equation index: 1270
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.y = if abs(pSS2B.Leadlag1.T1 - pSS2B.Leadlag1.T2) < 1e-15 then pSS2B.Leadlag1.K * pSS2B.Leadlag1.u else pSS2B.Leadlag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  modelica_boolean tmp18;
  tmp18 = Less(fabs(data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */ = (tmp18?(data->simulationInfo->realParameter[309] /* pSS2B.Leadlag1.K PARAM */) * (data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */):data->localData[0]->realVars[131] /* pSS2B.Leadlag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1271
type: SIMPLE_ASSIGN
$DER.pSS2B.Leadlag2.TF.x_scaled[1] = (pSS2B.Leadlag2.TF.a_end * pSS2B.Leadlag1.y - pSS2B.Leadlag2.TF.a[2] * pSS2B.Leadlag2.TF.x_scaled[1]) / pSS2B.Leadlag2.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  data->localData[0]->realVars[36] /* der(pSS2B.Leadlag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[333] /* pSS2B.Leadlag2.TF.a_end PARAM */) * (data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */) - ((data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[14] /* pSS2B.Leadlag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[331] /* pSS2B.Leadlag2.TF.a[1] PARAM */,"pSS2B.Leadlag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1272
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.TF.y = (pSS2B.Leadlag2.TF.bb[2] - pSS2B.Leadlag2.TF.a[2] * pSS2B.Leadlag2.TF.d) * pSS2B.Leadlag2.TF.x[1] + pSS2B.Leadlag2.TF.d * pSS2B.Leadlag1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  data->localData[0]->realVars[135] /* pSS2B.Leadlag2.TF.y variable */ = (data->simulationInfo->realParameter[337] /* pSS2B.Leadlag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[332] /* pSS2B.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[338] /* pSS2B.Leadlag2.TF.d PARAM */))) * (data->localData[0]->realVars[134] /* pSS2B.Leadlag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[338] /* pSS2B.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */);
  TRACE_POP
}
/*
equation index: 1273
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.y = if abs(pSS2B.Leadlag2.T1 - pSS2B.Leadlag2.T2) < 1e-15 then pSS2B.Leadlag2.K * pSS2B.Leadlag1.y else pSS2B.Leadlag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  modelica_boolean tmp19;
  tmp19 = Less(fabs(data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */),1e-15);
  data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */ = (tmp19?(data->simulationInfo->realParameter[327] /* pSS2B.Leadlag2.K PARAM */) * (data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */):data->localData[0]->realVars[135] /* pSS2B.Leadlag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1274
type: SIMPLE_ASSIGN
$DER.pSS2B.Leadlag3.TF.x_scaled[1] = (pSS2B.Leadlag3.TF.a_end * pSS2B.Leadlag2.y - pSS2B.Leadlag3.TF.a[2] * pSS2B.Leadlag3.TF.x_scaled[1]) / pSS2B.Leadlag3.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  data->localData[0]->realVars[37] /* der(pSS2B.Leadlag3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[351] /* pSS2B.Leadlag3.TF.a_end PARAM */) * (data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */) - ((data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */) * (data->localData[0]->realVars[15] /* pSS2B.Leadlag3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[349] /* pSS2B.Leadlag3.TF.a[1] PARAM */,"pSS2B.Leadlag3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1275
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.TF.y = (pSS2B.Leadlag3.TF.bb[2] - pSS2B.Leadlag3.TF.a[2] * pSS2B.Leadlag3.TF.d) * pSS2B.Leadlag3.TF.x[1] + pSS2B.Leadlag3.TF.d * pSS2B.Leadlag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  data->localData[0]->realVars[138] /* pSS2B.Leadlag3.TF.y variable */ = (data->simulationInfo->realParameter[355] /* pSS2B.Leadlag3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[350] /* pSS2B.Leadlag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[356] /* pSS2B.Leadlag3.TF.d PARAM */))) * (data->localData[0]->realVars[137] /* pSS2B.Leadlag3.TF.x[1] variable */) + (data->simulationInfo->realParameter[356] /* pSS2B.Leadlag3.TF.d PARAM */) * (data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */);
  TRACE_POP
}
/*
equation index: 1276
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.y = if abs(pSS2B.Leadlag3.T1 - pSS2B.Leadlag3.T2) < 1e-15 then pSS2B.Leadlag3.K * pSS2B.Leadlag2.y else pSS2B.Leadlag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  modelica_boolean tmp20;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */ - data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */),1e-15);
  data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */ = (tmp20?(data->simulationInfo->realParameter[345] /* pSS2B.Leadlag3.K PARAM */) * (data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */):data->localData[0]->realVars[138] /* pSS2B.Leadlag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1277
type: SIMPLE_ASSIGN
eSST1A.VOTHSG2 = smooth(0, if pSS2B.Leadlag3.y > pSS2B.limiter.uMax then pSS2B.limiter.uMax else if pSS2B.Leadlag3.y < pSS2B.limiter.uMin then pSS2B.limiter.uMin else pSS2B.Leadlag3.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp21 = Greater(data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */,data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */;
  }
  else
  {
    tmp22 = Less(data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */,data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */);
    tmp24 = (tmp22?data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */:data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */);
  }
  data->localData[0]->realVars[80] /* eSST1A.VOTHSG2 variable */ = tmp24;
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1278(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1279(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1280(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1281(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1282(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1283(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1284(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1285(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1286(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1287(DATA*, threadData_t*);
/*
equation index: 1298
indexNonlinear: 3
type: NONLINEAR

vars: {eSST1A.add3_1.y}
eqns: {1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287}
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1298 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1298};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1298 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 1299
type: SIMPLE_ASSIGN
$DER.eSST1A.simpleLagLim.state = (eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state) / eSST1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  data->localData[0]->realVars[26] /* der(eSST1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.T_mod PARAM */,"eSST1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1300
type: SIMPLE_ASSIGN
$whenCondition2 = eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */, 15, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 16, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
$whenCondition1 = eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */, 17, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 18, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
$DER.eSST1A.imLeadLag1.TF.x_scaled[1] = (eSST1A.imLeadLag1.TF.a_end * eSST1A.imLeadLag.y - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.x_scaled[1]) / eSST1A.imLeadLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  data->localData[0]->realVars[25] /* der(eSST1A.imLeadLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */) - ((data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.TF.a[1] PARAM */,"eSST1A.imLeadLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
$DER.eSST1A.imLeadLag.TF.x_scaled[1] = (eSST1A.imLeadLag.TF.a_end * eSST1A.hV_GATE.p - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.x_scaled[1]) / eSST1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  data->localData[0]->realVars[24] /* der(eSST1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */) - ((data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.TF.a[1] PARAM */,"eSST1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
$DER.eSST1A.imDerivativeLag.x = eSST1A.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  data->localData[0]->realVars[23] /* der(eSST1A.imDerivativeLag.x) STATE_DER */ = data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 19, Less);
  data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */ = (tmp4?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, 20, Greater);
  data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */ = (tmp5?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
eSST1A.EFD = smooth(0, if eSST1A.lV_GATE.p > eSST1A.add3.y then eSST1A.add3.y else if eSST1A.lV_GATE.p < eSST1A.imGain1.y then eSST1A.imGain1.y else eSST1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp6 = Greater(data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[85] /* eSST1A.add3.y variable */);
  tmp8 = (modelica_boolean)tmp6;
  if(tmp8)
  {
    tmp9 = data->localData[0]->realVars[85] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */);
    tmp9 = (tmp7?data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[77] /* eSST1A.EFD variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eSST1A.EFD - eSST1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  data->localData[0]->realVars[30] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[77] /* eSST1A.EFD variable */ - data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[264] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  data->localData[0]->realVars[121] /* gENROE.Q variable */ = (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 1310
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  data->localData[0]->realVars[164] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[483] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1311
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  data->localData[0]->realVars[162] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */) + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[483] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1312
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  data->localData[0]->realVars[165] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[483] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1313
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  data->localData[0]->realVars[163] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[483] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1314
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  data->localData[0]->realVars[172] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[494] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  data->localData[0]->realVars[174] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[494] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1316
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  data->localData[0]->realVars[195] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[516] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1317
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  data->localData[0]->realVars[197] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[516] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1318
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  data->localData[0]->realVars[173] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[494] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1319
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  data->localData[0]->realVars[175] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[494] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1320
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  data->localData[0]->realVars[103] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[111] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[110] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 1321
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  data->localData[0]->realVars[104] /* gENCLS.Q variable */ = (data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[110] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[111] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 1322
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  tmp11 = data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[58] /* GEN2.V variable */ = sqrt((tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 1323
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  data->localData[0]->realVars[105] /* gENCLS.V variable */ = data->localData[0]->realVars[58] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 1324
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  data->localData[0]->realVars[106] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[180] /* pwLine1.vr.im variable */, data->localData[0]->realVars[181] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1325
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  data->localData[0]->realVars[59] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[106] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 1333
type: ALGORITHM

  assert(pSS2B.limiter2.uMax >= pSS2B.limiter2.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2B.limiter2.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2B.limiter2.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,11,") < uMin (=");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */,data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp15));
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp16);
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
/*
equation index: 1332
type: ALGORITHM

  assert(pSS2B.limiter1.uMax >= pSS2B.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2B.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2B.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
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
equation index: 1331
type: ALGORITHM

  assert(pSS2B.limiter.uMax >= pSS2B.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2B.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2B.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,11,") < uMin (=");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp24 = GreaterEq(data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */,data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp27));
      tmp28 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp28);
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
equation index: 1330
type: ALGORITHM

  assert(eSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,11,") < uMin (=");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp30 = GreaterEq(data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */);
    if(!tmp30)
    {
      tmp32 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp33));
      tmp34 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp34);
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
equation index: 1329
type: ALGORITHM

  assert(eSST1A.imLimited.uMax >= eSST1A.imLimited.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,11,") < uMin (=");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp36 = GreaterEq(data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */,data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp39));
      tmp40 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp40);
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
equation index: 1327
type: WHEN

when {$whenCondition2} then
  reinit(eSST1A.simpleLagLim.state,  eSST1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSST1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSST1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 1326
type: ALGORITHM

  assert(eSST1A.add3.y >= eSST1A.imGain1.y, "Input signals are not consistent: limit1 < limit2");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,49,"Input signals are not consistent: limit1 < limit2");
  static int tmp44 = 0;
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[85] /* eSST1A.add3.y variable */,data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */);
    if(!tmp42)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",116,5,116,82,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.add3.y >= eSST1A.imGain1.y", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp43)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1097(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1098(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1101(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1102(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1103(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1104(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1106(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1107(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1108(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1109(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1110(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1111(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1113(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1114(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1117(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1118(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1122(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1123(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1124(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1125(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1126(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1127(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1218(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1219(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1220(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1221(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1222(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1223(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1224(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1225(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1226(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1227(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1228(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1229(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1230(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1231(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1232(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1233(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1234(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1235(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1236(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1239(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1240(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1241(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1242(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1244(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1249(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1250(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1251(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1252(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1253(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1326(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1101(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1102(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1103(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1104(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1106(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1107(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1108(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1109(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1110(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1111(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1113(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1122(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1124(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1125(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1126(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1127(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1231(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1232(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1233(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1236(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1239(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1240(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1242(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1244(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1249(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1250(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1254(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1255(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1256(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1259(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1261(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1262(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1264(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1265(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1266(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1267(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1269(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1270(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1272(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1273(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1275(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1308(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1099(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1100(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1101(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1102(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1103(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1104(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1105(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1106(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1107(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1108(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1109(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1110(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1111(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1112(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1113(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1114(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1115(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1116(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1117(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1118(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1119(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1120(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1121(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1122(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1123(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1124(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1125(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1126(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1127(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1218(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1231(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1232(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1233(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1236(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1237(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1238(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1239(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1240(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1241(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1242(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1243(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1244(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1245(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1246(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1247(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1248(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1249(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1250(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1254(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1255(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1256(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1257(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1258(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1259(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1260(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1261(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1262(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1263(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1264(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1265(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1266(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1267(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1268(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1269(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1270(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1271(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1272(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1273(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1274(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1275(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1276(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1277(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1298(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1299(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1302(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1303(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1304(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1305(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1306(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1307(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1308(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionODE,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_input_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_data_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_output_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_setc_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_mayer,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_lagrange,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_setInputData,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,124,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/PSS";
  data->modelData->modelGUID = "{a42d8cf8-58df-44dd-9b6b-e0141a639e5f}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 22;
  data->modelData->nVariablesReal = 202;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 524;
  data->modelData->nParametersInteger = 46;
  data->modelData->nParametersBoolean = 81;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 126;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 27;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 23;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1782;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 4;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 7;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


