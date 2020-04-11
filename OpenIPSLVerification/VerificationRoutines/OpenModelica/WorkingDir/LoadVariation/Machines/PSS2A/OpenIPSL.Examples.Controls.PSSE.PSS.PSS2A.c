/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1164
type: SIMPLE_ASSIGN
eSST1A.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  data->localData[0]->realVars[88] /* eSST1A.EFD0 variable */ = data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1165
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  data->localData[0]->realVars[32] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 1166
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  data->localData[0]->realVars[33] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 1167
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 1168
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  data->localData[0]->realVars[130] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 1169
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[128] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1170
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  data->localData[0]->realVars[57] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[128] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 1171
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  data->localData[0]->realVars[38] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[305] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1172
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x[1] = eSST1A.imLeadLag.TF.x_scaled[1] / eSST1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  data->localData[0]->realVars[106] /* eSST1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a_end PARAM */,"eSST1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1173
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x[1] = eSST1A.imLeadLag1.TF.x_scaled[1] / eSST1A.imLeadLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  data->localData[0]->realVars[109] /* eSST1A.imLeadLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a_end PARAM */,"eSST1A.imLeadLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1174
type: SIMPLE_ASSIGN
pSS2A.Leadlag1.TF.x[1] = pSS2A.Leadlag1.TF.x_scaled[1] / pSS2A.Leadlag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  data->localData[0]->realVars[141] /* pSS2A.Leadlag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[13] /* pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[315] /* pSS2A.Leadlag1.TF.a_end PARAM */,"pSS2A.Leadlag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1175
type: SIMPLE_ASSIGN
pSS2A.Leadlag2.TF.x[1] = pSS2A.Leadlag2.TF.x_scaled[1] / pSS2A.Leadlag2.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  data->localData[0]->realVars[145] /* pSS2A.Leadlag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[333] /* pSS2A.Leadlag2.TF.a_end PARAM */,"pSS2A.Leadlag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1176
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[1].x[1] = pSS2A.rampTrackingFilter.TF1[1].x_scaled[1] / pSS2A.rampTrackingFilter.TF1[1].a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  data->localData[0]->realVars[165] /* pSS2A.rampTrackingFilter.TF1[1].x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[21] /* pSS2A.rampTrackingFilter.TF1[1].x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[454] /* pSS2A.rampTrackingFilter.TF1[1].a_end PARAM */,"pSS2A.rampTrackingFilter.TF1[1].a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1177
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[2].x[1] = pSS2A.rampTrackingFilter.TF1[2].x_scaled[1] / pSS2A.rampTrackingFilter.TF1[2].a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  data->localData[0]->realVars[166] /* pSS2A.rampTrackingFilter.TF1[2].x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[22] /* pSS2A.rampTrackingFilter.TF1[2].x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[455] /* pSS2A.rampTrackingFilter.TF1[2].a_end PARAM */,"pSS2A.rampTrackingFilter.TF1[2].a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1178
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[3].x[1] = pSS2A.rampTrackingFilter.TF1[3].x_scaled[1] / pSS2A.rampTrackingFilter.TF1[3].a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  data->localData[0]->realVars[167] /* pSS2A.rampTrackingFilter.TF1[3].x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[23] /* pSS2A.rampTrackingFilter.TF1[3].x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[456] /* pSS2A.rampTrackingFilter.TF1[3].a_end PARAM */,"pSS2A.rampTrackingFilter.TF1[3].a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1179
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[4].x[1] = pSS2A.rampTrackingFilter.TF1[4].x_scaled[1] / pSS2A.rampTrackingFilter.TF1[4].a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  data->localData[0]->realVars[168] /* pSS2A.rampTrackingFilter.TF1[4].x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[24] /* pSS2A.rampTrackingFilter.TF1[4].x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[457] /* pSS2A.rampTrackingFilter.TF1[4].a_end PARAM */,"pSS2A.rampTrackingFilter.TF1[4].a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1180
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[5].x[1] = pSS2A.rampTrackingFilter.TF1[5].x_scaled[1] / pSS2A.rampTrackingFilter.TF1[5].a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  data->localData[0]->realVars[169] /* pSS2A.rampTrackingFilter.TF1[5].x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[25] /* pSS2A.rampTrackingFilter.TF1[5].x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[458] /* pSS2A.rampTrackingFilter.TF1[5].a_end PARAM */,"pSS2A.rampTrackingFilter.TF1[5].a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1181
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF2[1].x[1] = pSS2A.rampTrackingFilter.TF2[1].x_scaled[1] / pSS2A.rampTrackingFilter.TF2[1].a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  data->localData[0]->realVars[175] /* pSS2A.rampTrackingFilter.TF2[1].x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[26] /* pSS2A.rampTrackingFilter.TF2[1].x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[491] /* pSS2A.rampTrackingFilter.TF2[1].a_end PARAM */,"pSS2A.rampTrackingFilter.TF2[1].a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1182
type: SIMPLE_ASSIGN
$DER.pSS2A.derivativeLag.TF.x_scaled[1] = (pSS2A.derivativeLag.TF.a_end * gENROE.w - pSS2A.derivativeLag.TF.a[2] * pSS2A.derivativeLag.TF.x_scaled[1]) / pSS2A.derivativeLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  data->localData[0]->realVars[44] /* der(pSS2A.derivativeLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[378] /* pSS2A.derivativeLag.TF.a_end PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */) - ((data->simulationInfo->realParameter[377] /* pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[17] /* pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[376] /* pSS2A.derivativeLag.TF.a[1] PARAM */,"pSS2A.derivativeLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1183
type: SIMPLE_ASSIGN
pSS2A.derivativeLag.TF.x[1] = pSS2A.derivativeLag.TF.x_scaled[1] / pSS2A.derivativeLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  data->localData[0]->realVars[155] /* pSS2A.derivativeLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[17] /* pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[378] /* pSS2A.derivativeLag.TF.a_end PARAM */,"pSS2A.derivativeLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1184
type: SIMPLE_ASSIGN
pSS2A.derivativeLag.TF.y = (pSS2A.derivativeLag.TF.bb[2] - pSS2A.derivativeLag.TF.a[2] * pSS2A.derivativeLag.TF.d) * pSS2A.derivativeLag.TF.x[1] + pSS2A.derivativeLag.TF.d * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  data->localData[0]->realVars[156] /* pSS2A.derivativeLag.TF.y variable */ = (data->simulationInfo->realParameter[382] /* pSS2A.derivativeLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[377] /* pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[383] /* pSS2A.derivativeLag.TF.d PARAM */))) * (data->localData[0]->realVars[155] /* pSS2A.derivativeLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[383] /* pSS2A.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1185
type: SIMPLE_ASSIGN
pSS2A.derivativeLag.y = if abs(pSS2A.derivativeLag.T) < 1e-15 then gENROE.w else pSS2A.derivativeLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  modelica_boolean tmp2;
  tmp2 = Less(fabs(data->simulationInfo->realParameter[375] /* pSS2A.derivativeLag.T PARAM */),1e-15);
  data->localData[0]->realVars[157] /* pSS2A.derivativeLag.y variable */ = (tmp2?data->localData[0]->realVars[12] /* gENROE.w STATE(1) */:data->localData[0]->realVars[156] /* pSS2A.derivativeLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1186
type: SIMPLE_ASSIGN
$DER.pSS2A.derivativeLag1.TF.x_scaled[1] = (pSS2A.derivativeLag1.TF.a_end * pSS2A.derivativeLag.y - pSS2A.derivativeLag1.TF.a[2] * pSS2A.derivativeLag1.TF.x_scaled[1]) / pSS2A.derivativeLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  data->localData[0]->realVars[45] /* der(pSS2A.derivativeLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[395] /* pSS2A.derivativeLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[157] /* pSS2A.derivativeLag.y variable */) - ((data->simulationInfo->realParameter[394] /* pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[18] /* pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[393] /* pSS2A.derivativeLag1.TF.a[1] PARAM */,"pSS2A.derivativeLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1187
type: SIMPLE_ASSIGN
pSS2A.derivativeLag1.TF.x[1] = pSS2A.derivativeLag1.TF.x_scaled[1] / pSS2A.derivativeLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  data->localData[0]->realVars[158] /* pSS2A.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[395] /* pSS2A.derivativeLag1.TF.a_end PARAM */,"pSS2A.derivativeLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1188
type: SIMPLE_ASSIGN
pSS2A.derivativeLag1.TF.y = (pSS2A.derivativeLag1.TF.bb[2] - pSS2A.derivativeLag1.TF.a[2] * pSS2A.derivativeLag1.TF.d) * pSS2A.derivativeLag1.TF.x[1] + pSS2A.derivativeLag1.TF.d * pSS2A.derivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  data->localData[0]->realVars[159] /* pSS2A.derivativeLag1.TF.y variable */ = (data->simulationInfo->realParameter[399] /* pSS2A.derivativeLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[394] /* pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[400] /* pSS2A.derivativeLag1.TF.d PARAM */))) * (data->localData[0]->realVars[158] /* pSS2A.derivativeLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[400] /* pSS2A.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[157] /* pSS2A.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 1189
type: SIMPLE_ASSIGN
pSS2A.SimpleLag1.u = if abs(pSS2A.derivativeLag1.T) < 1e-15 then pSS2A.derivativeLag.y else pSS2A.derivativeLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  modelica_boolean tmp3;
  tmp3 = Less(fabs(data->simulationInfo->realParameter[392] /* pSS2A.derivativeLag1.T PARAM */),1e-15);
  data->localData[0]->realVars[148] /* pSS2A.SimpleLag1.u variable */ = (tmp3?data->localData[0]->realVars[157] /* pSS2A.derivativeLag.y variable */:data->localData[0]->realVars[159] /* pSS2A.derivativeLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1190
type: SIMPLE_ASSIGN
pSS2A.SimpleLag1.y = if abs(pSS2A.SimpleLag1.T) <= 1e-15 then pSS2A.SimpleLag1.u * pSS2A.SimpleLag1.K else pSS2A.SimpleLag1.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  modelica_boolean tmp4;
  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[346] /* pSS2A.SimpleLag1.T PARAM */),1e-15);
  data->localData[0]->realVars[149] /* pSS2A.SimpleLag1.y variable */ = (tmp4?(data->localData[0]->realVars[148] /* pSS2A.SimpleLag1.u variable */) * (data->simulationInfo->realParameter[345] /* pSS2A.SimpleLag1.K PARAM */):data->localData[0]->realVars[15] /* pSS2A.SimpleLag1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1191
type: SIMPLE_ASSIGN
$DER.pSS2A.SimpleLag1.state = (pSS2A.SimpleLag1.K * pSS2A.SimpleLag1.u - pSS2A.SimpleLag1.state) / pSS2A.SimpleLag1.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  data->localData[0]->realVars[42] /* der(pSS2A.SimpleLag1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[345] /* pSS2A.SimpleLag1.K PARAM */) * (data->localData[0]->realVars[148] /* pSS2A.SimpleLag1.u variable */) - data->localData[0]->realVars[15] /* pSS2A.SimpleLag1.state STATE(1) */,data->simulationInfo->realParameter[347] /* pSS2A.SimpleLag1.T_mod PARAM */,"pSS2A.SimpleLag1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1192
type: SIMPLE_ASSIGN
pSS2A.derivativeLag2.TF.x[1] = pSS2A.derivativeLag2.TF.x_scaled[1] / pSS2A.derivativeLag2.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  data->localData[0]->realVars[160] /* pSS2A.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[412] /* pSS2A.derivativeLag2.TF.a_end PARAM */,"pSS2A.derivativeLag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1193
type: SIMPLE_ASSIGN
pSS2A.derivativeLag3.TF.x[1] = pSS2A.derivativeLag3.TF.x_scaled[1] / pSS2A.derivativeLag3.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  data->localData[0]->realVars[163] /* pSS2A.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[20] /* pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[429] /* pSS2A.derivativeLag3.TF.a_end PARAM */,"pSS2A.derivativeLag3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1194
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  data->localData[0]->realVars[59] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 1195
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  data->localData[0]->realVars[58] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 1196
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  data->localData[0]->realVars[55] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 1197
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  data->localData[0]->realVars[54] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1211(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1242(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1241(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1240(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1239(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1238(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1237(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1236(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1235(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1234(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1233(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1225(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1221(DATA*, threadData_t*);
/*
equation index: 1288
indexNonlinear: 8
type: NONLINEAR

vars: {pwLine4.is.re, pwLine3.ir.re, pwLine.ir.im, pwLine1.is.im, constantLoad.p.ii, pwLine1.is.re, pwLine.ir.re, pwLine3.is.re, pwLine4.is.im, pwLine3.ir.im, pwLine1.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, pwLine1.vr.im, pwLine1.vr.re, gENROE.id, gENROE.iq, pwLine3.vr.re, pwLine1.vs.re, pwLine3.vr.im, pwLine1.vs.im}
eqns: {1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1242, 1241, 1240, 1239, 1238, 1237, 1236, 1235, 1234, 1233, 1232, 1231, 1230, 1229, 1228, 1227, 1226, 1225, 1224, 1223, 1222, 1221}
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1288 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[1] = data->localData[0]->realVars[205] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[2] = data->localData[0]->realVars[182] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[3] = data->localData[0]->realVars[194] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[4] = data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[5] = data->localData[0]->realVars[195] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[6] = data->localData[0]->realVars[183] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[7] = data->localData[0]->realVars[207] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[8] = data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[9] = data->localData[0]->realVars[204] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[10] = data->localData[0]->realVars[192] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[11] = data->localData[0]->realVars[193] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[12] = data->localData[0]->realVars[118] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[13] = data->localData[0]->realVars[117] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[14] = data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[15] = data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[16] = data->localData[0]->realVars[137] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[17] = data->localData[0]->realVars[138] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[18] = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[19] = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[20] = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[21] = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1288};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1288 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[217] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[1];
  data->localData[0]->realVars[182] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[2];
  data->localData[0]->realVars[194] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[3];
  data->localData[0]->realVars[81] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[4];
  data->localData[0]->realVars[195] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[5];
  data->localData[0]->realVars[183] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[6];
  data->localData[0]->realVars[207] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[7];
  data->localData[0]->realVars[216] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[8];
  data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[9];
  data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[10];
  data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[11];
  data->localData[0]->realVars[118] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[12];
  data->localData[0]->realVars[117] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[13];
  data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[14];
  data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[15];
  data->localData[0]->realVars[137] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[16];
  data->localData[0]->realVars[138] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[17];
  data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[18];
  data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[19];
  data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[20];
  data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[21];
  TRACE_POP
}
/*
equation index: 1289
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  data->localData[0]->realVars[36] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1290
type: SIMPLE_ASSIGN
eSST1A.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */ = (data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[137] /* gENROE.id variable */) * (data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[57] /* $cse5 variable */) * (data->localData[0]->realVars[129] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 1291
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  data->localData[0]->realVars[92] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[126] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[127] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 1292
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  data->localData[0]->realVars[104] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[143] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[92] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 1293
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[104] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[104] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */:data->localData[0]->realVars[104] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[98] /* eSST1A.add3_2.u3 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 1294
type: SIMPLE_ASSIGN
eSST1A.add3.u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  data->localData[0]->realVars[93] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[146] /* eSST1A.imGain3.k PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 1295
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  data->localData[0]->realVars[37] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1296
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  data->localData[0]->realVars[134] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[138] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[57] /* $cse5 variable */) * ((data->localData[0]->realVars[130] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1297
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  data->localData[0]->realVars[34] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[134] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[267] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1298
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  data->localData[0]->realVars[133] /* gENROE.Te variable */ = (data->localData[0]->realVars[127] /* gENROE.PSId variable */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - ((data->localData[0]->realVars[131] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 1299
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  data->localData[0]->realVars[39] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[298] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[222] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[133] /* gENROE.Te variable */,data->simulationInfo->realParameter[228] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 1300
type: SIMPLE_ASSIGN
eSST1A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[187] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[186] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
eSST1A.imGain1.y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  data->localData[0]->realVars[105] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[144] /* eSST1A.imGain1.k PARAM */) * (data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
eSST1A.add3.u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  data->localData[0]->realVars[94] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[145] /* eSST1A.imGain2.k PARAM */) * (data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
eSST1A.add3.y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  data->localData[0]->realVars[95] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[129] /* eSST1A.add3.k1 PARAM */) * (data->localData[0]->realVars[93] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[130] /* eSST1A.add3.k2 PARAM */) * (data->localData[0]->realVars[94] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
$DER.eSST1A.TransducerDelay.state = (eSST1A.TransducerDelay.K * eSST1A.ECOMP - eSST1A.TransducerDelay.state) / eSST1A.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  data->localData[0]->realVars[27] /* der(eSST1A.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */) - data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[106] /* eSST1A.TransducerDelay.T_mod PARAM */,"eSST1A.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  modelica_boolean tmp6;
  tmp6 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[84] /* eSST1A.DiffV.u2 variable */ = (tmp6?(data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  data->localData[0]->realVars[85] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
GEN1.V = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  data->localData[0]->realVars[64] /* GEN1.V variable */ = data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  data->localData[0]->realVars[136] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[186] /* pwLine.vs.im variable */, data->localData[0]->realVars[187] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  data->localData[0]->realVars[65] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[136] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 1310
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  data->localData[0]->realVars[125] /* gENROE.P variable */ = (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */) + (data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 1311
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  data->localData[0]->realVars[126] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[125] /* gENROE.P variable */,data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 1312
type: SIMPLE_ASSIGN
$DER.pSS2A.derivativeLag2.TF.x_scaled[1] = (pSS2A.derivativeLag2.TF.a_end * gENROE.PELEC - pSS2A.derivativeLag2.TF.a[2] * pSS2A.derivativeLag2.TF.x_scaled[1]) / pSS2A.derivativeLag2.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  data->localData[0]->realVars[46] /* der(pSS2A.derivativeLag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[412] /* pSS2A.derivativeLag2.TF.a_end PARAM */) * (data->localData[0]->realVars[126] /* gENROE.PELEC variable */) - ((data->simulationInfo->realParameter[411] /* pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[19] /* pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[410] /* pSS2A.derivativeLag2.TF.a[1] PARAM */,"pSS2A.derivativeLag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1313
type: SIMPLE_ASSIGN
pSS2A.derivativeLag2.TF.y = (pSS2A.derivativeLag2.TF.bb[2] - pSS2A.derivativeLag2.TF.a[2] * pSS2A.derivativeLag2.TF.d) * pSS2A.derivativeLag2.TF.x[1] + pSS2A.derivativeLag2.TF.d * gENROE.PELEC
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  data->localData[0]->realVars[161] /* pSS2A.derivativeLag2.TF.y variable */ = (data->simulationInfo->realParameter[416] /* pSS2A.derivativeLag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[411] /* pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[417] /* pSS2A.derivativeLag2.TF.d PARAM */))) * (data->localData[0]->realVars[160] /* pSS2A.derivativeLag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[417] /* pSS2A.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[126] /* gENROE.PELEC variable */);
  TRACE_POP
}
/*
equation index: 1314
type: SIMPLE_ASSIGN
pSS2A.derivativeLag2.y = if abs(pSS2A.derivativeLag2.T) < 1e-15 then gENROE.PELEC else pSS2A.derivativeLag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[409] /* pSS2A.derivativeLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[162] /* pSS2A.derivativeLag2.y variable */ = (tmp7?data->localData[0]->realVars[126] /* gENROE.PELEC variable */:data->localData[0]->realVars[161] /* pSS2A.derivativeLag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
$DER.pSS2A.derivativeLag3.TF.x_scaled[1] = (pSS2A.derivativeLag3.TF.a_end * pSS2A.derivativeLag2.y - pSS2A.derivativeLag3.TF.a[2] * pSS2A.derivativeLag3.TF.x_scaled[1]) / pSS2A.derivativeLag3.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  data->localData[0]->realVars[47] /* der(pSS2A.derivativeLag3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[429] /* pSS2A.derivativeLag3.TF.a_end PARAM */) * (data->localData[0]->realVars[162] /* pSS2A.derivativeLag2.y variable */) - ((data->simulationInfo->realParameter[428] /* pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->localData[0]->realVars[20] /* pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[427] /* pSS2A.derivativeLag3.TF.a[1] PARAM */,"pSS2A.derivativeLag3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1316
type: SIMPLE_ASSIGN
pSS2A.derivativeLag3.TF.y = (pSS2A.derivativeLag3.TF.bb[2] - pSS2A.derivativeLag3.TF.a[2] * pSS2A.derivativeLag3.TF.d) * pSS2A.derivativeLag3.TF.x[1] + pSS2A.derivativeLag3.TF.d * pSS2A.derivativeLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  data->localData[0]->realVars[164] /* pSS2A.derivativeLag3.TF.y variable */ = (data->simulationInfo->realParameter[433] /* pSS2A.derivativeLag3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[428] /* pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[434] /* pSS2A.derivativeLag3.TF.d PARAM */))) * (data->localData[0]->realVars[163] /* pSS2A.derivativeLag3.TF.x[1] variable */) + (data->simulationInfo->realParameter[434] /* pSS2A.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[162] /* pSS2A.derivativeLag2.y variable */);
  TRACE_POP
}
/*
equation index: 1317
type: SIMPLE_ASSIGN
pSS2A.SimpleLag2.u = if abs(pSS2A.derivativeLag3.T) < 1e-15 then pSS2A.derivativeLag2.y else pSS2A.derivativeLag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  modelica_boolean tmp8;
  tmp8 = Less(fabs(data->simulationInfo->realParameter[426] /* pSS2A.derivativeLag3.T PARAM */),1e-15);
  data->localData[0]->realVars[150] /* pSS2A.SimpleLag2.u variable */ = (tmp8?data->localData[0]->realVars[162] /* pSS2A.derivativeLag2.y variable */:data->localData[0]->realVars[164] /* pSS2A.derivativeLag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1318
type: SIMPLE_ASSIGN
$DER.pSS2A.SimpleLag2.state = (pSS2A.SimpleLag2.K * pSS2A.SimpleLag2.u - pSS2A.SimpleLag2.state) / pSS2A.SimpleLag2.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  data->localData[0]->realVars[43] /* der(pSS2A.SimpleLag2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[350] /* pSS2A.SimpleLag2.K PARAM */) * (data->localData[0]->realVars[150] /* pSS2A.SimpleLag2.u variable */) - data->localData[0]->realVars[16] /* pSS2A.SimpleLag2.state STATE(1) */,data->simulationInfo->realParameter[352] /* pSS2A.SimpleLag2.T_mod PARAM */,"pSS2A.SimpleLag2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1319
type: SIMPLE_ASSIGN
pSS2A.SimpleLag2.y = if abs(pSS2A.SimpleLag2.T) <= 1e-15 then pSS2A.SimpleLag2.u * pSS2A.SimpleLag2.K else pSS2A.SimpleLag2.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  modelica_boolean tmp9;
  tmp9 = LessEq(fabs(data->simulationInfo->realParameter[351] /* pSS2A.SimpleLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[151] /* pSS2A.SimpleLag2.y variable */ = (tmp9?(data->localData[0]->realVars[150] /* pSS2A.SimpleLag2.u variable */) * (data->simulationInfo->realParameter[350] /* pSS2A.SimpleLag2.K PARAM */):data->localData[0]->realVars[16] /* pSS2A.SimpleLag2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1320
type: SIMPLE_ASSIGN
pSS2A.add.y = pSS2A.add.k1 * pSS2A.SimpleLag1.y + pSS2A.add.k2 * pSS2A.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  data->localData[0]->realVars[152] /* pSS2A.add.y variable */ = (data->simulationInfo->realParameter[369] /* pSS2A.add.k1 PARAM */) * (data->localData[0]->realVars[149] /* pSS2A.SimpleLag1.y variable */) + (data->simulationInfo->realParameter[370] /* pSS2A.add.k2 PARAM */) * (data->localData[0]->realVars[151] /* pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 1321
type: SIMPLE_ASSIGN
$DER.pSS2A.rampTrackingFilter.TF1[1].x_scaled[1] = (pSS2A.rampTrackingFilter.TF1[1].a_end * pSS2A.add.y - pSS2A.rampTrackingFilter.TF1[1].a[2] * pSS2A.rampTrackingFilter.TF1[1].x_scaled[1]) / pSS2A.rampTrackingFilter.TF1[1].a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  data->localData[0]->realVars[48] /* der(pSS2A.rampTrackingFilter.TF1[1].x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[454] /* pSS2A.rampTrackingFilter.TF1[1].a_end PARAM */) * (data->localData[0]->realVars[152] /* pSS2A.add.y variable */) - ((data->simulationInfo->realParameter[445] /* pSS2A.rampTrackingFilter.TF1[1].a[2] PARAM */) * (data->localData[0]->realVars[21] /* pSS2A.rampTrackingFilter.TF1[1].x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[444] /* pSS2A.rampTrackingFilter.TF1[1].a[1] PARAM */,"pSS2A.rampTrackingFilter.TF1[1].a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1322
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[1].y = (pSS2A.rampTrackingFilter.TF1[1].bb[2] - pSS2A.rampTrackingFilter.TF1[1].a[2] * pSS2A.rampTrackingFilter.TF1[1].d) * pSS2A.rampTrackingFilter.TF1[1].x[1] + pSS2A.rampTrackingFilter.TF1[1].d * pSS2A.add.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  data->localData[0]->realVars[170] /* pSS2A.rampTrackingFilter.TF1[1].y variable */ = (data->simulationInfo->realParameter[465] /* pSS2A.rampTrackingFilter.TF1[1].bb[2] PARAM */ - ((data->simulationInfo->realParameter[445] /* pSS2A.rampTrackingFilter.TF1[1].a[2] PARAM */) * (data->simulationInfo->realParameter[474] /* pSS2A.rampTrackingFilter.TF1[1].d PARAM */))) * (data->localData[0]->realVars[165] /* pSS2A.rampTrackingFilter.TF1[1].x[1] variable */) + (data->simulationInfo->realParameter[474] /* pSS2A.rampTrackingFilter.TF1[1].d PARAM */) * (data->localData[0]->realVars[152] /* pSS2A.add.y variable */);
  TRACE_POP
}
/*
equation index: 1323
type: SIMPLE_ASSIGN
$DER.pSS2A.rampTrackingFilter.TF1[2].x_scaled[1] = (pSS2A.rampTrackingFilter.TF1[2].a_end * pSS2A.rampTrackingFilter.TF1[1].y - pSS2A.rampTrackingFilter.TF1[2].a[2] * pSS2A.rampTrackingFilter.TF1[2].x_scaled[1]) / pSS2A.rampTrackingFilter.TF1[2].a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  data->localData[0]->realVars[49] /* der(pSS2A.rampTrackingFilter.TF1[2].x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[455] /* pSS2A.rampTrackingFilter.TF1[2].a_end PARAM */) * (data->localData[0]->realVars[170] /* pSS2A.rampTrackingFilter.TF1[1].y variable */) - ((data->simulationInfo->realParameter[447] /* pSS2A.rampTrackingFilter.TF1[2].a[2] PARAM */) * (data->localData[0]->realVars[22] /* pSS2A.rampTrackingFilter.TF1[2].x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[446] /* pSS2A.rampTrackingFilter.TF1[2].a[1] PARAM */,"pSS2A.rampTrackingFilter.TF1[2].a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1324
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[2].y = (pSS2A.rampTrackingFilter.TF1[2].bb[2] - pSS2A.rampTrackingFilter.TF1[2].a[2] * pSS2A.rampTrackingFilter.TF1[2].d) * pSS2A.rampTrackingFilter.TF1[2].x[1] + pSS2A.rampTrackingFilter.TF1[2].d * pSS2A.rampTrackingFilter.TF1[1].y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  data->localData[0]->realVars[171] /* pSS2A.rampTrackingFilter.TF1[2].y variable */ = (data->simulationInfo->realParameter[467] /* pSS2A.rampTrackingFilter.TF1[2].bb[2] PARAM */ - ((data->simulationInfo->realParameter[447] /* pSS2A.rampTrackingFilter.TF1[2].a[2] PARAM */) * (data->simulationInfo->realParameter[475] /* pSS2A.rampTrackingFilter.TF1[2].d PARAM */))) * (data->localData[0]->realVars[166] /* pSS2A.rampTrackingFilter.TF1[2].x[1] variable */) + (data->simulationInfo->realParameter[475] /* pSS2A.rampTrackingFilter.TF1[2].d PARAM */) * (data->localData[0]->realVars[170] /* pSS2A.rampTrackingFilter.TF1[1].y variable */);
  TRACE_POP
}
/*
equation index: 1325
type: SIMPLE_ASSIGN
$DER.pSS2A.rampTrackingFilter.TF1[3].x_scaled[1] = (pSS2A.rampTrackingFilter.TF1[3].a_end * pSS2A.rampTrackingFilter.TF1[2].y - pSS2A.rampTrackingFilter.TF1[3].a[2] * pSS2A.rampTrackingFilter.TF1[3].x_scaled[1]) / pSS2A.rampTrackingFilter.TF1[3].a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  data->localData[0]->realVars[50] /* der(pSS2A.rampTrackingFilter.TF1[3].x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[456] /* pSS2A.rampTrackingFilter.TF1[3].a_end PARAM */) * (data->localData[0]->realVars[171] /* pSS2A.rampTrackingFilter.TF1[2].y variable */) - ((data->simulationInfo->realParameter[449] /* pSS2A.rampTrackingFilter.TF1[3].a[2] PARAM */) * (data->localData[0]->realVars[23] /* pSS2A.rampTrackingFilter.TF1[3].x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[448] /* pSS2A.rampTrackingFilter.TF1[3].a[1] PARAM */,"pSS2A.rampTrackingFilter.TF1[3].a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1326
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[3].y = (pSS2A.rampTrackingFilter.TF1[3].bb[2] - pSS2A.rampTrackingFilter.TF1[3].a[2] * pSS2A.rampTrackingFilter.TF1[3].d) * pSS2A.rampTrackingFilter.TF1[3].x[1] + pSS2A.rampTrackingFilter.TF1[3].d * pSS2A.rampTrackingFilter.TF1[2].y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  data->localData[0]->realVars[172] /* pSS2A.rampTrackingFilter.TF1[3].y variable */ = (data->simulationInfo->realParameter[469] /* pSS2A.rampTrackingFilter.TF1[3].bb[2] PARAM */ - ((data->simulationInfo->realParameter[449] /* pSS2A.rampTrackingFilter.TF1[3].a[2] PARAM */) * (data->simulationInfo->realParameter[476] /* pSS2A.rampTrackingFilter.TF1[3].d PARAM */))) * (data->localData[0]->realVars[167] /* pSS2A.rampTrackingFilter.TF1[3].x[1] variable */) + (data->simulationInfo->realParameter[476] /* pSS2A.rampTrackingFilter.TF1[3].d PARAM */) * (data->localData[0]->realVars[171] /* pSS2A.rampTrackingFilter.TF1[2].y variable */);
  TRACE_POP
}
/*
equation index: 1327
type: SIMPLE_ASSIGN
$DER.pSS2A.rampTrackingFilter.TF1[4].x_scaled[1] = (pSS2A.rampTrackingFilter.TF1[4].a_end * pSS2A.rampTrackingFilter.TF1[3].y - pSS2A.rampTrackingFilter.TF1[4].a[2] * pSS2A.rampTrackingFilter.TF1[4].x_scaled[1]) / pSS2A.rampTrackingFilter.TF1[4].a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  data->localData[0]->realVars[51] /* der(pSS2A.rampTrackingFilter.TF1[4].x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[457] /* pSS2A.rampTrackingFilter.TF1[4].a_end PARAM */) * (data->localData[0]->realVars[172] /* pSS2A.rampTrackingFilter.TF1[3].y variable */) - ((data->simulationInfo->realParameter[451] /* pSS2A.rampTrackingFilter.TF1[4].a[2] PARAM */) * (data->localData[0]->realVars[24] /* pSS2A.rampTrackingFilter.TF1[4].x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[450] /* pSS2A.rampTrackingFilter.TF1[4].a[1] PARAM */,"pSS2A.rampTrackingFilter.TF1[4].a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1328
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[4].y = (pSS2A.rampTrackingFilter.TF1[4].bb[2] - pSS2A.rampTrackingFilter.TF1[4].a[2] * pSS2A.rampTrackingFilter.TF1[4].d) * pSS2A.rampTrackingFilter.TF1[4].x[1] + pSS2A.rampTrackingFilter.TF1[4].d * pSS2A.rampTrackingFilter.TF1[3].y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  data->localData[0]->realVars[173] /* pSS2A.rampTrackingFilter.TF1[4].y variable */ = (data->simulationInfo->realParameter[471] /* pSS2A.rampTrackingFilter.TF1[4].bb[2] PARAM */ - ((data->simulationInfo->realParameter[451] /* pSS2A.rampTrackingFilter.TF1[4].a[2] PARAM */) * (data->simulationInfo->realParameter[477] /* pSS2A.rampTrackingFilter.TF1[4].d PARAM */))) * (data->localData[0]->realVars[168] /* pSS2A.rampTrackingFilter.TF1[4].x[1] variable */) + (data->simulationInfo->realParameter[477] /* pSS2A.rampTrackingFilter.TF1[4].d PARAM */) * (data->localData[0]->realVars[172] /* pSS2A.rampTrackingFilter.TF1[3].y variable */);
  TRACE_POP
}
/*
equation index: 1329
type: SIMPLE_ASSIGN
$DER.pSS2A.rampTrackingFilter.TF1[5].x_scaled[1] = (pSS2A.rampTrackingFilter.TF1[5].a_end * pSS2A.rampTrackingFilter.TF1[4].y - pSS2A.rampTrackingFilter.TF1[5].a[2] * pSS2A.rampTrackingFilter.TF1[5].x_scaled[1]) / pSS2A.rampTrackingFilter.TF1[5].a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  data->localData[0]->realVars[52] /* der(pSS2A.rampTrackingFilter.TF1[5].x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[458] /* pSS2A.rampTrackingFilter.TF1[5].a_end PARAM */) * (data->localData[0]->realVars[173] /* pSS2A.rampTrackingFilter.TF1[4].y variable */) - ((data->simulationInfo->realParameter[453] /* pSS2A.rampTrackingFilter.TF1[5].a[2] PARAM */) * (data->localData[0]->realVars[25] /* pSS2A.rampTrackingFilter.TF1[5].x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[452] /* pSS2A.rampTrackingFilter.TF1[5].a[1] PARAM */,"pSS2A.rampTrackingFilter.TF1[5].a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1330
type: SIMPLE_ASSIGN
pSS2A.rampTrackingFilter.TF1[5].y = (pSS2A.rampTrackingFilter.TF1[5].bb[2] - pSS2A.rampTrackingFilter.TF1[5].a[2] * pSS2A.rampTrackingFilter.TF1[5].d) * pSS2A.rampTrackingFilter.TF1[5].x[1] + pSS2A.rampTrackingFilter.TF1[5].d * pSS2A.rampTrackingFilter.TF1[4].y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  data->localData[0]->realVars[174] /* pSS2A.rampTrackingFilter.TF1[5].y variable */ = (data->simulationInfo->realParameter[473] /* pSS2A.rampTrackingFilter.TF1[5].bb[2] PARAM */ - ((data->simulationInfo->realParameter[453] /* pSS2A.rampTrackingFilter.TF1[5].a[2] PARAM */) * (data->simulationInfo->realParameter[478] /* pSS2A.rampTrackingFilter.TF1[5].d PARAM */))) * (data->localData[0]->realVars[169] /* pSS2A.rampTrackingFilter.TF1[5].x[1] variable */) + (data->simulationInfo->realParameter[478] /* pSS2A.rampTrackingFilter.TF1[5].d PARAM */) * (data->localData[0]->realVars[173] /* pSS2A.rampTrackingFilter.TF1[4].y variable */);
  TRACE_POP
}
/*
equation index: 1331
type: SIMPLE_ASSIGN
$DER.pSS2A.rampTrackingFilter.TF2[1].x_scaled[1] = (pSS2A.rampTrackingFilter.TF2[1].a_end * pSS2A.rampTrackingFilter.TF1[5].y - pSS2A.rampTrackingFilter.TF2[1].a[2] * pSS2A.rampTrackingFilter.TF2[1].x_scaled[1]) / pSS2A.rampTrackingFilter.TF2[1].a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  data->localData[0]->realVars[53] /* der(pSS2A.rampTrackingFilter.TF2[1].x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[491] /* pSS2A.rampTrackingFilter.TF2[1].a_end PARAM */) * (data->localData[0]->realVars[174] /* pSS2A.rampTrackingFilter.TF1[5].y variable */) - ((data->simulationInfo->realParameter[490] /* pSS2A.rampTrackingFilter.TF2[1].a[2] PARAM */) * (data->localData[0]->realVars[26] /* pSS2A.rampTrackingFilter.TF2[1].x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[489] /* pSS2A.rampTrackingFilter.TF2[1].a[1] PARAM */,"pSS2A.rampTrackingFilter.TF2[1].a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1332
type: SIMPLE_ASSIGN
pSS2A.add1.u1 = (pSS2A.rampTrackingFilter.TF2[1].bb[2] - pSS2A.rampTrackingFilter.TF2[1].a[2] * pSS2A.rampTrackingFilter.TF2[1].d) * pSS2A.rampTrackingFilter.TF2[1].x[1] + pSS2A.rampTrackingFilter.TF2[1].d * pSS2A.rampTrackingFilter.TF1[5].y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  data->localData[0]->realVars[153] /* pSS2A.add1.u1 variable */ = (data->simulationInfo->realParameter[495] /* pSS2A.rampTrackingFilter.TF2[1].bb[2] PARAM */ - ((data->simulationInfo->realParameter[490] /* pSS2A.rampTrackingFilter.TF2[1].a[2] PARAM */) * (data->simulationInfo->realParameter[496] /* pSS2A.rampTrackingFilter.TF2[1].d PARAM */))) * (data->localData[0]->realVars[175] /* pSS2A.rampTrackingFilter.TF2[1].x[1] variable */) + (data->simulationInfo->realParameter[496] /* pSS2A.rampTrackingFilter.TF2[1].d PARAM */) * (data->localData[0]->realVars[174] /* pSS2A.rampTrackingFilter.TF1[5].y variable */);
  TRACE_POP
}
/*
equation index: 1333
type: SIMPLE_ASSIGN
pSS2A.add1.y = pSS2A.add1.k1 * pSS2A.add1.u1 + pSS2A.add1.k2 * pSS2A.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  data->localData[0]->realVars[154] /* pSS2A.add1.y variable */ = (data->simulationInfo->realParameter[371] /* pSS2A.add1.k1 PARAM */) * (data->localData[0]->realVars[153] /* pSS2A.add1.u1 variable */) + (data->simulationInfo->realParameter[372] /* pSS2A.add1.k2 PARAM */) * (data->localData[0]->realVars[151] /* pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 1334
type: SIMPLE_ASSIGN
pSS2A.Leadlag1.u = pSS2A.gain.k * pSS2A.add1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  data->localData[0]->realVars[143] /* pSS2A.Leadlag1.u variable */ = (data->simulationInfo->realParameter[441] /* pSS2A.gain.k PARAM */) * (data->localData[0]->realVars[154] /* pSS2A.add1.y variable */);
  TRACE_POP
}
/*
equation index: 1335
type: SIMPLE_ASSIGN
$DER.pSS2A.Leadlag1.TF.x_scaled[1] = (pSS2A.Leadlag1.TF.a_end * pSS2A.Leadlag1.u - pSS2A.Leadlag1.TF.a[2] * pSS2A.Leadlag1.TF.x_scaled[1]) / pSS2A.Leadlag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  data->localData[0]->realVars[40] /* der(pSS2A.Leadlag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[315] /* pSS2A.Leadlag1.TF.a_end PARAM */) * (data->localData[0]->realVars[143] /* pSS2A.Leadlag1.u variable */) - ((data->simulationInfo->realParameter[314] /* pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[13] /* pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[313] /* pSS2A.Leadlag1.TF.a[1] PARAM */,"pSS2A.Leadlag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1336
type: SIMPLE_ASSIGN
pSS2A.Leadlag1.TF.y = (pSS2A.Leadlag1.TF.bb[2] - pSS2A.Leadlag1.TF.a[2] * pSS2A.Leadlag1.TF.d) * pSS2A.Leadlag1.TF.x[1] + pSS2A.Leadlag1.TF.d * pSS2A.Leadlag1.u
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  data->localData[0]->realVars[142] /* pSS2A.Leadlag1.TF.y variable */ = (data->simulationInfo->realParameter[319] /* pSS2A.Leadlag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[314] /* pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[320] /* pSS2A.Leadlag1.TF.d PARAM */))) * (data->localData[0]->realVars[141] /* pSS2A.Leadlag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[320] /* pSS2A.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[143] /* pSS2A.Leadlag1.u variable */);
  TRACE_POP
}
/*
equation index: 1337
type: SIMPLE_ASSIGN
pSS2A.Leadlag1.y = if abs(pSS2A.Leadlag1.T1 - pSS2A.Leadlag1.T2) < 1e-15 then pSS2A.Leadlag1.K * pSS2A.Leadlag1.u else pSS2A.Leadlag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  modelica_boolean tmp10;
  tmp10 = Less(fabs(data->simulationInfo->realParameter[310] /* pSS2A.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[311] /* pSS2A.Leadlag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[144] /* pSS2A.Leadlag1.y variable */ = (tmp10?(data->simulationInfo->realParameter[309] /* pSS2A.Leadlag1.K PARAM */) * (data->localData[0]->realVars[143] /* pSS2A.Leadlag1.u variable */):data->localData[0]->realVars[142] /* pSS2A.Leadlag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1338
type: SIMPLE_ASSIGN
$DER.pSS2A.Leadlag2.TF.x_scaled[1] = (pSS2A.Leadlag2.TF.a_end * pSS2A.Leadlag1.y - pSS2A.Leadlag2.TF.a[2] * pSS2A.Leadlag2.TF.x_scaled[1]) / pSS2A.Leadlag2.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  data->localData[0]->realVars[41] /* der(pSS2A.Leadlag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[333] /* pSS2A.Leadlag2.TF.a_end PARAM */) * (data->localData[0]->realVars[144] /* pSS2A.Leadlag1.y variable */) - ((data->simulationInfo->realParameter[332] /* pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[14] /* pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[331] /* pSS2A.Leadlag2.TF.a[1] PARAM */,"pSS2A.Leadlag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
pSS2A.Leadlag2.TF.y = (pSS2A.Leadlag2.TF.bb[2] - pSS2A.Leadlag2.TF.a[2] * pSS2A.Leadlag2.TF.d) * pSS2A.Leadlag2.TF.x[1] + pSS2A.Leadlag2.TF.d * pSS2A.Leadlag1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  data->localData[0]->realVars[146] /* pSS2A.Leadlag2.TF.y variable */ = (data->simulationInfo->realParameter[337] /* pSS2A.Leadlag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[332] /* pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[338] /* pSS2A.Leadlag2.TF.d PARAM */))) * (data->localData[0]->realVars[145] /* pSS2A.Leadlag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[338] /* pSS2A.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[144] /* pSS2A.Leadlag1.y variable */);
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
pSS2A.Leadlag2.y = if abs(pSS2A.Leadlag2.T1 - pSS2A.Leadlag2.T2) < 1e-15 then pSS2A.Leadlag2.K * pSS2A.Leadlag1.y else pSS2A.Leadlag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  modelica_boolean tmp11;
  tmp11 = Less(fabs(data->simulationInfo->realParameter[328] /* pSS2A.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[329] /* pSS2A.Leadlag2.T2 PARAM */),1e-15);
  data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */ = (tmp11?(data->simulationInfo->realParameter[327] /* pSS2A.Leadlag2.K PARAM */) * (data->localData[0]->realVars[144] /* pSS2A.Leadlag1.y variable */):data->localData[0]->realVars[146] /* pSS2A.Leadlag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1341
type: SIMPLE_ASSIGN
eSST1A.VOTHSG2 = smooth(0, if pSS2A.Leadlag2.y > pSS2A.limiter.uMax then pSS2A.limiter.uMax else if pSS2A.Leadlag2.y < pSS2A.limiter.uMin then pSS2A.limiter.uMin else pSS2A.Leadlag2.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  tmp12 = Greater(data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[442] /* pSS2A.limiter.uMax PARAM */);
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = data->simulationInfo->realParameter[442] /* pSS2A.limiter.uMax PARAM */;
  }
  else
  {
    tmp13 = Less(data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[443] /* pSS2A.limiter.uMin PARAM */);
    tmp15 = (tmp13?data->simulationInfo->realParameter[443] /* pSS2A.limiter.uMin PARAM */:data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */);
  }
  data->localData[0]->realVars[90] /* eSST1A.VOTHSG2 variable */ = tmp15;
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1342(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1343(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1344(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1345(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1346(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1347(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1348(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1349(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1350(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1351(DATA*, threadData_t*);
/*
equation index: 1362
indexNonlinear: 9
type: NONLINEAR

vars: {eSST1A.add3_1.y}
eqns: {1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351}
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1362 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1362};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1362 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  TRACE_POP
}
/*
equation index: 1363
type: SIMPLE_ASSIGN
$DER.eSST1A.simpleLagLim.state = (eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state) / eSST1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  data->localData[0]->realVars[31] /* der(eSST1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.T_mod PARAM */,"eSST1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1364
type: SIMPLE_ASSIGN
$whenCondition2 = eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */, 15, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 16, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 1365
type: SIMPLE_ASSIGN
$whenCondition1 = eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */, 17, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 18, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 1366
type: SIMPLE_ASSIGN
$DER.eSST1A.imLeadLag1.TF.x_scaled[1] = (eSST1A.imLeadLag1.TF.a_end * eSST1A.imLeadLag.y - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.x_scaled[1]) / eSST1A.imLeadLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  data->localData[0]->realVars[30] /* der(eSST1A.imLeadLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[108] /* eSST1A.imLeadLag.y variable */) - ((data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.TF.a[1] PARAM */,"eSST1A.imLeadLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1367
type: SIMPLE_ASSIGN
$DER.eSST1A.imLeadLag.TF.x_scaled[1] = (eSST1A.imLeadLag.TF.a_end * eSST1A.hV_GATE.p - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.x_scaled[1]) / eSST1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  data->localData[0]->realVars[29] /* der(eSST1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.hV_GATE.p variable */) - ((data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.TF.a[1] PARAM */,"eSST1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1368
type: SIMPLE_ASSIGN
$DER.eSST1A.imDerivativeLag.x = eSST1A.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  data->localData[0]->realVars[28] /* der(eSST1A.imDerivativeLag.x) STATE_DER */ = data->localData[0]->realVars[103] /* eSST1A.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 1369
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 19, Less);
  data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */ = (tmp4?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 1370
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, 20, Greater);
  data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */ = (tmp5?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 1371
type: SIMPLE_ASSIGN
eSST1A.EFD = smooth(0, if eSST1A.lV_GATE.p > eSST1A.add3.y then eSST1A.add3.y else if eSST1A.lV_GATE.p < eSST1A.imGain1.y then eSST1A.imGain1.y else eSST1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp6 = Greater(data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[95] /* eSST1A.add3.y variable */);
  tmp8 = (modelica_boolean)tmp6;
  if(tmp8)
  {
    tmp9 = data->localData[0]->realVars[95] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[105] /* eSST1A.imGain1.y variable */);
    tmp9 = (tmp7?data->localData[0]->realVars[105] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[87] /* eSST1A.EFD variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1372
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eSST1A.EFD - eSST1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  data->localData[0]->realVars[35] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[87] /* eSST1A.EFD variable */ - data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[264] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 1373
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  data->localData[0]->realVars[132] /* gENROE.Q variable */ = (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 1374
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[184] /* pwLine.is.im variable */;
  tmp11 = data->localData[0]->realVars[185] /* pwLine.is.re variable */;
  data->localData[0]->realVars[124] /* gENROE.I variable */ = sqrt((tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 1375
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  data->localData[0]->realVars[135] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[184] /* pwLine.is.im variable */), (-data->localData[0]->realVars[185] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 1376
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  data->localData[0]->realVars[180] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[508] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1377
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  data->localData[0]->realVars[178] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */) + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[508] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1378
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  data->localData[0]->realVars[72] /* LOAD.V variable */ = data->localData[0]->realVars[83] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 1379
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  data->localData[0]->realVars[188] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[519] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1380
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  data->localData[0]->realVars[190] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[519] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1381
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  data->localData[0]->realVars[200] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[530] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1382
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  data->localData[0]->realVars[202] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[530] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1383
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  data->localData[0]->realVars[78] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[198] /* pwLine1.vs.im variable */, data->localData[0]->realVars[199] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 1384
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  data->localData[0]->realVars[73] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[78] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 1385
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  data->localData[0]->realVars[181] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[508] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1386
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  data->localData[0]->realVars[179] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[508] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1387
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  data->localData[0]->realVars[201] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[530] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1388
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  data->localData[0]->realVars[203] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[530] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1389
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */;
  tmp13 = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[60] /* FAULT.V variable */ = sqrt((tmp12 * tmp12) + (tmp13 * tmp13));
  TRACE_POP
}
/*
equation index: 1390
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  data->localData[0]->realVars[56] /* $cse4 variable */ = atan2(data->localData[0]->realVars[208] /* pwLine3.vr.im variable */, data->localData[0]->realVars[209] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1391
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  data->localData[0]->realVars[61] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[56] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 1392
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  data->localData[0]->realVars[210] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[541] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1393
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  data->localData[0]->realVars[212] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[541] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1394
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  data->localData[0]->realVars[211] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[541] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1395
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  data->localData[0]->realVars[213] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[541] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1396
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;
  tmp15 = data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[68] /* GEN2.V variable */ = sqrt((tmp14 * tmp14) + (tmp15 * tmp15));
  TRACE_POP
}
/*
equation index: 1397
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  data->localData[0]->realVars[115] /* gENCLS.V variable */ = data->localData[0]->realVars[68] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 1398
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  data->localData[0]->realVars[116] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[196] /* pwLine1.vr.im variable */, data->localData[0]->realVars[197] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 1399
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  data->localData[0]->realVars[69] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[116] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 1400
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  data->localData[0]->realVars[189] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[519] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1401
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  data->localData[0]->realVars[191] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[519] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 1402
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  data->localData[0]->realVars[113] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[121] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[120] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 1403
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  data->localData[0]->realVars[114] /* gENCLS.Q variable */ = (data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[120] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[121] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 1409
type: ALGORITHM

  assert(pSS2A.limiter.uMax >= pSS2A.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(pSS2A.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(pSS2A.limiter.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,11,") < uMin (=");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp16 = GreaterEq(data->simulationInfo->realParameter[442] /* pSS2A.limiter.uMax PARAM */,data->simulationInfo->realParameter[443] /* pSS2A.limiter.uMin PARAM */);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[442] /* pSS2A.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp19));
      tmp20 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[443] /* pSS2A.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp20);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.limiter.uMax >= pSS2A.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1408
type: ALGORITHM

  assert(eSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,11,") < uMin (=");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp22 = GreaterEq(data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp25));
      tmp26 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp26);
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
equation index: 1407
type: ALGORITHM

  assert(eSST1A.imLimited.uMax >= eSST1A.imLimited.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,11,") < uMin (=");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp28 = GreaterEq(data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */,data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp31));
      tmp32 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp32);
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
equation index: 1405
type: WHEN

when {$whenCondition2} then
  reinit(eSST1A.simpleLagLim.state,  eSST1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
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
equation index: 1404
type: ALGORITHM

  assert(eSST1A.add3.y >= eSST1A.imGain1.y, "Input signals are not consistent: limit1 < limit2");
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,49,"Input signals are not consistent: limit1 < limit2");
  static int tmp36 = 0;
  {
    tmp34 = GreaterEq(data->localData[0]->realVars[95] /* eSST1A.add3.y variable */,data->localData[0]->realVars[105] /* eSST1A.imGain1.y variable */);
    if(!tmp34)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",116,5,116,82,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.add3.y >= eSST1A.imGain1.y", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp35)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1164(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1166(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1188(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1189(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1190(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1191(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1192(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1193(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1194(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1195(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1196(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1197(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1398(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1399(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1400(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1401(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1402(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1403(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1409(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1408(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1407(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1405(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1404(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1165(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1166(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1167(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1168(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1189(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1190(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1196(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1197(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1289(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1300(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1305(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1306(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1310(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1311(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1312(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1313(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1314(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1315(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1316(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1317(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1318(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1319(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1320(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1321(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1322(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1323(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1324(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1325(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1326(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1327(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1328(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1329(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1330(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1331(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1332(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1333(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1334(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1335(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1336(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1337(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1338(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1339(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1340(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1341(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1362(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1363(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1366(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1367(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1368(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1369(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1370(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1371(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1372(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1165(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1166(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1167(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1168(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1169(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1170(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1171(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1172(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1173(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1174(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1175(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1176(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1177(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1178(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1179(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1180(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1181(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1182(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1183(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1184(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1185(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1186(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1187(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1188(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1189(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1190(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1191(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1192(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1193(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1194(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1195(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1196(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1197(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1288(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1289(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1290(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1291(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1292(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1293(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1294(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1295(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1296(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1297(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1298(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1299(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1300(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1301(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1302(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1303(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1304(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1305(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1306(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1310(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1311(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1312(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1313(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1314(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1315(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1316(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1317(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1318(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1319(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1320(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1321(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1322(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1323(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1324(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1325(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1326(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1327(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1328(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1329(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1330(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1331(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1332(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1333(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1334(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1335(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1336(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1337(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1338(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1339(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1340(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1341(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1362(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1363(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1366(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1367(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1368(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1369(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1370(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1371(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1372(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_input_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_data_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_output_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_setc_function,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_mayer,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/PSS";
  data->modelData->modelGUID = "{807f8d91-7d04-48fc-b9b7-8305f799eb62}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 27;
  data->modelData->nVariablesReal = 218;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 549;
  data->modelData->nParametersInteger = 66;
  data->modelData->nParametersBoolean = 77;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 129;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 27;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 23;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1903;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 10;
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
  
    OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_setupDataStruc(&data, threadData);
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


