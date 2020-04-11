/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 172
type: SIMPLE_ASSIGN
eXAC1.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[60] /* eXAC1.EFD0 variable */ = data->simulationInfo->realParameter[271] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[93] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[219] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[221] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[94] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[222] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[220] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[93] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[94] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[92] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[92] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[241] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[242] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[285] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.x[1] = eXAC1.leadLag.TF.x_scaled[1] / eXAC1.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[68] /* eXAC1.leadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eXAC1.leadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[141] /* eXAC1.leadLag.TF.a_end PARAM */,"eXAC1.leadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u2 = eXAC1.rotatingExciterWithDemagnetizationLimited.gain.k * eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[74] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u2 variable */ = (data->simulationInfo->realParameter[166] /* eXAC1.rotatingExciterWithDemagnetizationLimited.gain.k PARAM */) * (data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
eXAC1.rotatingExciterWithDemagnetizationLimited.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y, eXAC1.rotatingExciterWithDemagnetizationLimited.se1.SE1, eXAC1.rotatingExciterWithDemagnetizationLimited.se1.SE2, eXAC1.rotatingExciterWithDemagnetizationLimited.se1.E1, eXAC1.rotatingExciterWithDemagnetizationLimited.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[75] /* eXAC1.rotatingExciterWithDemagnetizationLimited.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[173] /* eXAC1.rotatingExciterWithDemagnetizationLimited.se1.SE1 PARAM */, data->simulationInfo->realParameter[174] /* eXAC1.rotatingExciterWithDemagnetizationLimited.se1.SE2 PARAM */, data->simulationInfo->realParameter[171] /* eXAC1.rotatingExciterWithDemagnetizationLimited.se1.E1 PARAM */, data->simulationInfo->realParameter[172] /* eXAC1.rotatingExciterWithDemagnetizationLimited.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u1 = eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y * eXAC1.rotatingExciterWithDemagnetizationLimited.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[73] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u1 variable */ = (data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[75] /* eXAC1.rotatingExciterWithDemagnetizationLimited.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_191(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_192(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_225(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_211(DATA*, threadData_t*);
/*
equation index: 278
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine3.ir.im, pwLine4.is.im, constantLoad.p.ir, pwLine3.is.re, pwLine1.is.im, pwLine3.is.im, pwLine.ir.re, pwLine.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine4.ir.im, pwLine4.ir.re, gENCLS.id, gENCLS.iq, pwLine1.vr.im, pwLine1.vr.re, gENROE.iq, gENROE.id, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.im, pwLine1.vs.re}
eqns: {188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 278 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[133] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[145] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[136] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[123] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[135] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[112] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[111] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[146] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[134] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[143] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[144] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[81] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[82] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[125] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[126] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[102] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[101] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[137] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[138] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[127] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[128] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,278};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 278 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[145] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[136] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[123] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[135] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[112] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[111] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[146] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[81] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[82] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[102] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[101] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[246] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[98] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[216] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[102] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[94] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[98] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[247] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
eXAC1.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[116] /* pwLine.vs.re variable */;
  tmp1 = data->localData[0]->realVars[115] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[58] /* eXAC1.ECOMP variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
$DER.eXAC1.TransducerDelay.state = (eXAC1.TransducerDelay.K * eXAC1.ECOMP - eXAC1.TransducerDelay.state) / eXAC1.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[13] /* der(eXAC1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[99] /* eXAC1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[58] /* eXAC1.ECOMP variable */) - data->localData[0]->realVars[0] /* eXAC1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[101] /* eXAC1.TransducerDelay.T_mod PARAM */,"eXAC1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
eXAC1.DiffV.u2 = if abs(eXAC1.TransducerDelay.T) <= 1e-15 then eXAC1.ECOMP * eXAC1.TransducerDelay.K else eXAC1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_boolean tmp2;
  tmp2 = LessEq(fabs(data->simulationInfo->realParameter[100] /* eXAC1.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eXAC1.DiffV.u2 variable */ = (tmp2?(data->localData[0]->realVars[58] /* eXAC1.ECOMP variable */) * (data->simulationInfo->realParameter[99] /* eXAC1.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eXAC1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
eXAC1.DiffV.y = eXAC1.DiffV.k1 * eXAC1.VoltageReference.k + eXAC1.DiffV.k2 * eXAC1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[57] /* eXAC1.DiffV.y variable */ = (data->simulationInfo->realParameter[78] /* eXAC1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[113] /* eXAC1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[79] /* eXAC1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eXAC1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
GEN1.V = eXAC1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[58] /* eXAC1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[100] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[115] /* pwLine.vs.im variable */, data->localData[0]->realVars[116] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[100] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[101] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[245] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
eXAC1.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->localData[0]->realVars[61] /* eXAC1.XADIFD variable */ = (data->simulationInfo->realParameter[215] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[101] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[101] /* gENROE.id variable */) * (data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[93] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
eXAC1.rectifierCommutationVoltageDrop.division.u1 = eXAC1.rectifierCommutationVoltageDrop.gain2.k * eXAC1.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[70] /* eXAC1.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[154] /* eXAC1.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eXAC1.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
eXAC1.rectifierCommutationVoltageDrop.division.y = eXAC1.rectifierCommutationVoltageDrop.division.u1 / eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[70] /* eXAC1.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
eXAC1.rectifierCommutationVoltageDrop.fEX.y = if eXAC1.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC1.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC1.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC1.rectifierCommutationVoltageDrop.division.y else if eXAC1.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC1.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC1.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC1.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC1.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC1.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp16 = (modelica_boolean)tmp3;
  if(tmp16)
  {
    tmp17 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp14 = (modelica_boolean)(tmp4 && tmp5);
    if(tmp14)
    {
      tmp15 = 1.0 + (-0.577) * (data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp12 = (modelica_boolean)(tmp6 && tmp7);
      if(tmp12)
      {
        tmp8 = data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */;
        tmp9 = 0.75 - ((tmp8 * tmp8));
        if(!(tmp9 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC1.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp9);
        }
        tmp13 = sqrt(tmp9);
      }
      else
      {
        RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp13 = ((tmp10 && tmp11)?(1.732) * (1.0 - data->localData[0]->realVars[71] /* eXAC1.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp15 = tmp13;
    }
    tmp17 = tmp15;
  }
  data->localData[0]->realVars[72] /* eXAC1.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp17;
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
eXAC1.EFD = eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y * eXAC1.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[59] /* eXAC1.EFD variable */ = (data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[72] /* eXAC1.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eXAC1.EFD - eXAC1.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[59] /* eXAC1.EFD variable */ - data->localData[0]->realVars[61] /* eXAC1.XADIFD variable */,data->simulationInfo->realParameter[244] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
eXAC1.imDerivativeLag.u = eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.k1 * eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u1 + eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.k2 * eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u2 + eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.k3 * eXAC1.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[64] /* eXAC1.imDerivativeLag.u variable */ = (data->simulationInfo->realParameter[162] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.k1 PARAM */) * (data->localData[0]->realVars[73] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u1 variable */) + (data->simulationInfo->realParameter[163] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.k2 PARAM */) * (data->localData[0]->realVars[74] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.u2 variable */) + (data->simulationInfo->realParameter[164] /* eXAC1.rotatingExciterWithDemagnetizationLimited.Sum.k3 PARAM */) * (data->localData[0]->realVars[61] /* eXAC1.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
$DER.eXAC1.imDerivativeLag.x = (eXAC1.imDerivativeLag.u - eXAC1.imDerivativeLag.x) / eXAC1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[14] /* der(eXAC1.imDerivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[64] /* eXAC1.imDerivativeLag.u variable */ - data->localData[0]->realVars[1] /* eXAC1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[124] /* eXAC1.imDerivativeLag.T PARAM */,"eXAC1.imDerivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
eXAC1.imDerivativeLag.y = 0.03 * (eXAC1.imDerivativeLag.u - eXAC1.imDerivativeLag.x) / eXAC1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[65] /* eXAC1.imDerivativeLag.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[64] /* eXAC1.imDerivativeLag.u variable */ - data->localData[0]->realVars[1] /* eXAC1.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[124] /* eXAC1.imDerivativeLag.T PARAM */,"eXAC1.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
eXAC1.add3_1.y = eXAC1.add3_1.k1 * eXAC1.add3_1.u1 + eXAC1.add3_1.k2 * eXAC1.DiffV.y + eXAC1.add3_1.k3 * eXAC1.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[63] /* eXAC1.add3_1.y variable */ = (data->simulationInfo->realParameter[115] /* eXAC1.add3_1.k1 PARAM */) * (data->localData[0]->realVars[62] /* eXAC1.add3_1.u1 variable */) + (data->simulationInfo->realParameter[116] /* eXAC1.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eXAC1.DiffV.y variable */) + (data->simulationInfo->realParameter[117] /* eXAC1.add3_1.k3 PARAM */) * (data->localData[0]->realVars[65] /* eXAC1.imDerivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
$DER.eXAC1.leadLag.TF.x_scaled[1] = (eXAC1.leadLag.TF.a_end * eXAC1.add3_1.y - eXAC1.leadLag.TF.a[2] * eXAC1.leadLag.TF.x_scaled[1]) / eXAC1.leadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[16] /* der(eXAC1.leadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[141] /* eXAC1.leadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[63] /* eXAC1.add3_1.y variable */) - ((data->simulationInfo->realParameter[140] /* eXAC1.leadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[3] /* eXAC1.leadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[139] /* eXAC1.leadLag.TF.a[1] PARAM */,"eXAC1.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
eXAC1.leadLag.TF.y = (eXAC1.leadLag.TF.bb[2] - eXAC1.leadLag.TF.a[2] * eXAC1.leadLag.TF.d) * eXAC1.leadLag.TF.x[1] + eXAC1.leadLag.TF.d * eXAC1.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[69] /* eXAC1.leadLag.TF.y variable */ = (data->simulationInfo->realParameter[145] /* eXAC1.leadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[140] /* eXAC1.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[146] /* eXAC1.leadLag.TF.d PARAM */))) * (data->localData[0]->realVars[68] /* eXAC1.leadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[146] /* eXAC1.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[63] /* eXAC1.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
eXAC1.imLimitedSimpleLag.u = if abs(eXAC1.leadLag.T1 - eXAC1.leadLag.T2) < 1e-15 then eXAC1.leadLag.K * eXAC1.add3_1.y else eXAC1.leadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  modelica_boolean tmp18;
  tmp18 = Less(fabs(data->simulationInfo->realParameter[136] /* eXAC1.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[137] /* eXAC1.leadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[66] /* eXAC1.imLimitedSimpleLag.u variable */ = (tmp18?(data->simulationInfo->realParameter[135] /* eXAC1.leadLag.K PARAM */) * (data->localData[0]->realVars[63] /* eXAC1.add3_1.y variable */):data->localData[0]->realVars[69] /* eXAC1.leadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
$DER.eXAC1.imLimitedSimpleLag.state = (eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state) / eXAC1.imLimitedSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[15] /* der(eXAC1.imLimitedSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[128] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[66] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[130] /* eXAC1.imLimitedSimpleLag.T_mod PARAM */,"eXAC1.imLimitedSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
eXAC1.imLimitedSimpleLag.y = if abs(eXAC1.imLimitedSimpleLag.T) <= 1e-15 then max(min(eXAC1.imLimitedSimpleLag.u * eXAC1.imLimitedSimpleLag.K, eXAC1.imLimitedSimpleLag.outMax), eXAC1.imLimitedSimpleLag.outMin) else max(min(eXAC1.imLimitedSimpleLag.state, eXAC1.imLimitedSimpleLag.outMax), eXAC1.imLimitedSimpleLag.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  modelica_boolean tmp19;
  tmp19 = LessEq(fabs(data->simulationInfo->realParameter[129] /* eXAC1.imLimitedSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[67] /* eXAC1.imLimitedSimpleLag.y variable */ = (tmp19?fmax(fmin((data->localData[0]->realVars[66] /* eXAC1.imLimitedSimpleLag.u variable */) * (data->simulationInfo->realParameter[128] /* eXAC1.imLimitedSimpleLag.K PARAM */),data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.outMax PARAM */),data->simulationInfo->realParameter[133] /* eXAC1.imLimitedSimpleLag.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.outMax PARAM */),data->simulationInfo->realParameter[133] /* eXAC1.imLimitedSimpleLag.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
$whenCondition2 = eXAC1.imLimitedSimpleLag.state > eXAC1.imLimitedSimpleLag.outMax and eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.outMax PARAM */, 25, Greater);
  RELATIONHYSTERESIS(tmp21, (data->simulationInfo->realParameter[128] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[66] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, 0.0, 26, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp20 && tmp21);
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
$whenCondition1 = eXAC1.imLimitedSimpleLag.state < eXAC1.imLimitedSimpleLag.outMin and eXAC1.imLimitedSimpleLag.K * eXAC1.imLimitedSimpleLag.u - eXAC1.imLimitedSimpleLag.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, data->simulationInfo->realParameter[133] /* eXAC1.imLimitedSimpleLag.outMin PARAM */, 27, Less);
  RELATIONHYSTERESIS(tmp23, (data->simulationInfo->realParameter[128] /* eXAC1.imLimitedSimpleLag.K PARAM */) * (data->localData[0]->realVars[66] /* eXAC1.imLimitedSimpleLag.u variable */) - data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */, 0.0, 28, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp22 && tmp23);
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y = eXAC1.imLimitedSimpleLag.y - eXAC1.imDerivativeLag.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[76] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */ = data->localData[0]->realVars[67] /* eXAC1.imLimitedSimpleLag.y variable */ - data->localData[0]->realVars[64] /* eXAC1.imDerivativeLag.u variable */;
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
$DER.eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y = if eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y < eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin and eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y < 0.0 or eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y > eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax and eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y > 0.0 then 0.0 else eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k * eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[169] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMin PARAM */, 21, Less);
  RELATIONHYSTERESIS(tmp25, (data->simulationInfo->realParameter[167] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[76] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, 22, Less);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->realVars[4] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[168] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.outMax PARAM */, 23, Greater);
  RELATIONHYSTERESIS(tmp27, (data->simulationInfo->realParameter[167] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[76] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */), 0.0, 24, Greater);
  data->localData[0]->realVars[17] /* der(eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.y) STATE_DER */ = (((tmp24 && tmp25) || (tmp26 && tmp27))?0.0:(data->simulationInfo->realParameter[167] /* eXAC1.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */) * (data->localData[0]->realVars[76] /* eXAC1.rotatingExciterWithDemagnetizationLimited.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[97] /* gENROE.Te variable */ = (data->localData[0]->realVars[91] /* gENROE.PSId variable */) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - ((data->localData[0]->realVars[95] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[101] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[202] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[97] /* gENROE.Te variable */,data->simulationInfo->realParameter[208] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = data->localData[0]->realVars[113] /* pwLine.is.im variable */;
  tmp29 = data->localData[0]->realVars[114] /* pwLine.is.re variable */;
  data->localData[0]->realVars[88] /* gENROE.I variable */ = sqrt((tmp28 * tmp28) + (tmp29 * tmp29));
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[99] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[113] /* pwLine.is.im variable */), (-data->localData[0]->realVars[114] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[89] /* gENROE.P variable */ = (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */) + (data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[90] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[89] /* gENROE.P variable */,data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[96] /* gENROE.Q variable */ = (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[109] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[293] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[107] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */) + (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[293] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[129] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[136] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[135] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[315] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[131] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[136] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[135] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[315] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[127] /* pwLine1.vs.im variable */, data->localData[0]->realVars[128] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[110] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[111] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[112] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[293] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[108] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[112] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[111] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[293] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[117] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[124] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[123] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[304] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[119] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[124] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[123] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[304] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  modelica_real tmp30;
  modelica_real tmp31;
  tmp30 = data->localData[0]->realVars[126] /* pwLine1.vr.re variable */;
  tmp31 = data->localData[0]->realVars[125] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp30 * tmp30) + (tmp31 * tmp31));
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[79] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[80] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[125] /* pwLine1.vr.im variable */, data->localData[0]->realVars[126] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[80] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[118] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[122] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[121] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[304] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[120] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[121] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[122] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[304] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[130] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[134] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[133] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[315] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[132] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[133] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[134] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[315] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[139] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[146] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[145] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[326] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[141] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[146] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[145] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[326] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  modelica_real tmp32;
  modelica_real tmp33;
  tmp32 = data->localData[0]->realVars[138] /* pwLine3.vr.re variable */;
  tmp33 = data->localData[0]->realVars[137] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp32 * tmp32) + (tmp33 * tmp33));
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[137] /* pwLine3.vr.im variable */, data->localData[0]->realVars[138] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[140] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[144] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[143] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[326] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[142] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[143] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[144] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[326] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->realVars[77] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[85] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[84] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 343
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[78] /* gENCLS.Q variable */ = (data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[84] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[85] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 344
type: WHEN

when {$whenCondition2} then
  reinit(eXAC1.imLimitedSimpleLag.state,  eXAC1.imLimitedSimpleLag.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[132] /* eXAC1.imLimitedSimpleLag.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eXAC1.imLimitedSimpleLag.state = %g", data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */ = data->simulationInfo->realParameter[133] /* eXAC1.imLimitedSimpleLag.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eXAC1.imLimitedSimpleLag.state = %g", data->localData[0]->realVars[2] /* eXAC1.imLimitedSimpleLag.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_344(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_284(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_285(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_304(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_309(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_173(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_174(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_175(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_176(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_177(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_178(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_179(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_180(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_181(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_182(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_183(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_184(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_185(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_280(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_281(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_282(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_283(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_284(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_285(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_289(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_290(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_291(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_292(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_293(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_294(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_295(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_296(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_297(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_298(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_299(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_300(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_301(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_302(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_303(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_304(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_307(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_308(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_309(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_310(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{32d662c6-b2d0-4799-a334-cd2c4df79f33}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 147;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 334;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 71;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 99;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 27;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 29;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 8;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 614;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 3;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_setupDataStruc(&data, threadData);
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


