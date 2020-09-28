/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 167
type: SIMPLE_ASSIGN
eSDC1A.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[60] /* eSDC1A.EFD0 variable */ = data->simulationInfo->realParameter[267] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[90] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[215] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[217] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[91] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[218] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[216] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[90] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[91] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[89] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[89] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[237] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[238] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[281] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
$DER.eSDC1A.imDerivativeLag.x = (eSDC1A.rotatingExciterLimited.sISO.y - eSDC1A.imDerivativeLag.x) / eSDC1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[14] /* der(eSDC1A.imDerivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ - data->localData[0]->realVars[1] /* eSDC1A.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */,"eSDC1A.imDerivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
eSDC1A.imDerivativeLag.y = 0.07000000000000001 * (eSDC1A.rotatingExciterLimited.sISO.y - eSDC1A.imDerivativeLag.x) / eSDC1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[65] /* eSDC1A.imDerivativeLag.y variable */ = (0.07000000000000001) * (DIVISION_SIM(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ - data->localData[0]->realVars[1] /* eSDC1A.imDerivativeLag.x STATE(1) */,data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */,"eSDC1A.imDerivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.x[1] = eSDC1A.imLeadLag.TF.x_scaled[1] / eSDC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[66] /* eSDC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* eSDC1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[134] /* eSDC1A.imLeadLag.TF.a_end PARAM */,"eSDC1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.Sum.u2 = eSDC1A.rotatingExciterLimited.gain.k * eSDC1A.rotatingExciterLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[70] /* eSDC1A.rotatingExciterLimited.Sum.u2 variable */ = (data->simulationInfo->realParameter[155] /* eSDC1A.rotatingExciterLimited.gain.k PARAM */) * (data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(eSDC1A.rotatingExciterLimited.sISO.y, eSDC1A.rotatingExciterLimited.se1.SE1, eSDC1A.rotatingExciterLimited.se1.SE2, eSDC1A.rotatingExciterLimited.se1.E1, eSDC1A.rotatingExciterLimited.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[72] /* eSDC1A.rotatingExciterLimited.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[162] /* eSDC1A.rotatingExciterLimited.se1.SE1 PARAM */, data->simulationInfo->realParameter[163] /* eSDC1A.rotatingExciterLimited.se1.SE2 PARAM */, data->simulationInfo->realParameter[160] /* eSDC1A.rotatingExciterLimited.se1.E1 PARAM */, data->simulationInfo->realParameter[161] /* eSDC1A.rotatingExciterLimited.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.Sum.u1 = eSDC1A.rotatingExciterLimited.sISO.y * eSDC1A.rotatingExciterLimited.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[69] /* eSDC1A.rotatingExciterLimited.Sum.u1 variable */ = (data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[72] /* eSDC1A.rotatingExciterLimited.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.Sum.y = eSDC1A.rotatingExciterLimited.Sum.k1 * eSDC1A.rotatingExciterLimited.Sum.u1 + eSDC1A.rotatingExciterLimited.Sum.k2 * eSDC1A.rotatingExciterLimited.Sum.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[71] /* eSDC1A.rotatingExciterLimited.Sum.y variable */ = (data->simulationInfo->realParameter[152] /* eSDC1A.rotatingExciterLimited.Sum.k1 PARAM */) * (data->localData[0]->realVars[69] /* eSDC1A.rotatingExciterLimited.Sum.u1 variable */) + (data->simulationInfo->realParameter[153] /* eSDC1A.rotatingExciterLimited.Sum.k2 PARAM */) * (data->localData[0]->realVars[70] /* eSDC1A.rotatingExciterLimited.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_186(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_187(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_188(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_189(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_190(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_191(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_192(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_200(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_225(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_223(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_211(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_209(DATA*, threadData_t*);
/*
equation index: 276
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine3.ir.im, pwLine4.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine1.is.im, pwLine.ir.im, pwLine1.is.re, pwLine.ir.re, constantLoad.p.ii, constantLoad.p.ir, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, pwLine1.vr.im, pwLine1.vr.re, gENROE.iq, gENROE.id, pwLine1.vs.im, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.re}
eqns: {186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 276 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[130] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[142] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[143] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[131] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[120] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[108] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[121] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[109] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[140] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[119] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[78] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[79] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[122] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[123] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[99] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[98] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[124] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[135] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[134] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[125] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,276};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 276 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[130] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[142] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[143] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[131] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[120] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[108] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[121] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[109] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[140] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[119] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[78] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[79] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[122] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[123] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[99] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[98] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[124] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[135] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[134] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[125] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[99] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[242] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[95] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[212] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[99] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[99] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[254] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[91] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[254] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[247] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[95] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[243] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[98] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[241] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[94] /* gENROE.Te variable */ = (data->localData[0]->realVars[88] /* gENROE.PSId variable */) * (data->localData[0]->realVars[99] /* gENROE.iq variable */) - ((data->localData[0]->realVars[92] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[98] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[274] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[198] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[94] /* gENROE.Te variable */,data->simulationInfo->realParameter[204] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
eSDC1A.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[61] /* eSDC1A.XADIFD variable */ = (data->simulationInfo->realParameter[211] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[98] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[98] /* gENROE.id variable */) * (data->simulationInfo->realParameter[247] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[90] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eSDC1A.rotatingExciterLimited.sISO.y - eSDC1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ - data->localData[0]->realVars[61] /* eSDC1A.XADIFD variable */,data->simulationInfo->realParameter[240] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[110] /* pwLine.is.im variable */;
  tmp1 = data->localData[0]->realVars[111] /* pwLine.is.re variable */;
  data->localData[0]->realVars[85] /* gENROE.I variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[96] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[110] /* pwLine.is.im variable */), (-data->localData[0]->realVars[111] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[86] /* gENROE.P variable */ = (data->localData[0]->realVars[112] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[110] /* pwLine.is.im variable */) + (data->localData[0]->realVars[113] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[111] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[87] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[86] /* gENROE.P variable */,data->simulationInfo->realParameter[197] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[93] /* gENROE.Q variable */ = (data->localData[0]->realVars[112] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[111] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[113] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[110] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
eSDC1A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[113] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[112] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
$DER.eSDC1A.TransducerDelay.state = (eSDC1A.TransducerDelay.K * eSDC1A.ECOMP - eSDC1A.TransducerDelay.state) / eSDC1A.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[13] /* der(eSDC1A.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[104] /* eSDC1A.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */) - data->localData[0]->realVars[0] /* eSDC1A.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[106] /* eSDC1A.TransducerDelay.T_mod PARAM */,"eSDC1A.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
eSDC1A.DiffV.u2 = if abs(eSDC1A.TransducerDelay.T) <= 1e-15 then eSDC1A.ECOMP * eSDC1A.TransducerDelay.K else eSDC1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  modelica_boolean tmp4;
  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSDC1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSDC1A.DiffV.u2 variable */ = (tmp4?(data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSDC1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSDC1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
eSDC1A.DiffV.y = eSDC1A.DiffV.k1 * eSDC1A.VoltageReference.k + eSDC1A.DiffV.k2 * eSDC1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[57] /* eSDC1A.DiffV.y variable */ = (data->simulationInfo->realParameter[80] /* eSDC1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[118] /* eSDC1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[81] /* eSDC1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSDC1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
eSDC1A.add3_1.y = eSDC1A.add3_1.k1 * eSDC1A.DiffV1.y + eSDC1A.add3_1.k2 * eSDC1A.DiffV.y + eSDC1A.add3_1.k3 * eSDC1A.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[62] /* eSDC1A.add3_1.y variable */ = (data->simulationInfo->realParameter[120] /* eSDC1A.add3_1.k1 PARAM */) * (data->localData[0]->realVars[58] /* eSDC1A.DiffV1.y variable */) + (data->simulationInfo->realParameter[121] /* eSDC1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSDC1A.DiffV.y variable */) + (data->simulationInfo->realParameter[122] /* eSDC1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[65] /* eSDC1A.imDerivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
$DER.eSDC1A.imLeadLag.TF.x_scaled[1] = (eSDC1A.imLeadLag.TF.a_end * eSDC1A.add3_1.y - eSDC1A.imLeadLag.TF.a[2] * eSDC1A.imLeadLag.TF.x_scaled[1]) / eSDC1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[15] /* der(eSDC1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[134] /* eSDC1A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[62] /* eSDC1A.add3_1.y variable */) - ((data->simulationInfo->realParameter[133] /* eSDC1A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[2] /* eSDC1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[132] /* eSDC1A.imLeadLag.TF.a[1] PARAM */,"eSDC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.y = (eSDC1A.imLeadLag.TF.bb[2] - eSDC1A.imLeadLag.TF.a[2] * eSDC1A.imLeadLag.TF.d) * eSDC1A.imLeadLag.TF.x[1] + eSDC1A.imLeadLag.TF.d * eSDC1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[67] /* eSDC1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[138] /* eSDC1A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[133] /* eSDC1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[139] /* eSDC1A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[66] /* eSDC1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[139] /* eSDC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[62] /* eSDC1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
eSDC1A.hV_GATE.n1 = if abs(eSDC1A.imLeadLag.T1 - eSDC1A.imLeadLag.T2) < 1e-15 then eSDC1A.imLeadLag.K * eSDC1A.add3_1.y else eSDC1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  modelica_boolean tmp5;
  tmp5 = Less(fabs(data->simulationInfo->realParameter[129] /* eSDC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[130] /* eSDC1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[63] /* eSDC1A.hV_GATE.n1 variable */ = (tmp5?(data->simulationInfo->realParameter[128] /* eSDC1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[62] /* eSDC1A.add3_1.y variable */):data->localData[0]->realVars[67] /* eSDC1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
eSDC1A.hV_GATE.p = if eSDC1A.hV_GATE.n1 < const1.k then const1.k else eSDC1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  modelica_boolean tmp6;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[63] /* eSDC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  data->localData[0]->realVars[64] /* eSDC1A.hV_GATE.p variable */ = (tmp6?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[63] /* eSDC1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
$DER.eSDC1A.simpleLagLim.state = (eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state) / eSDC1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[17] /* der(eSDC1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[164] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[64] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.T_mod PARAM */,"eSDC1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.I_C = if abs(eSDC1A.simpleLagLim.T) <= 1e-15 then max(min(eSDC1A.hV_GATE.p * eSDC1A.simpleLagLim.K, eSDC1A.simpleLagLim.outMax), eSDC1A.simpleLagLim.outMin) else max(min(eSDC1A.simpleLagLim.state, eSDC1A.simpleLagLim.outMax), eSDC1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  modelica_boolean tmp7;
  tmp7 = LessEq(fabs(data->simulationInfo->realParameter[165] /* eSDC1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[68] /* eSDC1A.rotatingExciterLimited.I_C variable */ = (tmp7?fmax(fmin((data->localData[0]->realVars[64] /* eSDC1A.hV_GATE.p variable */) * (data->simulationInfo->realParameter[164] /* eSDC1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[168] /* eSDC1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[169] /* eSDC1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[168] /* eSDC1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[169] /* eSDC1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.feedback.y = eSDC1A.rotatingExciterLimited.I_C - eSDC1A.rotatingExciterLimited.Sum.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[73] /* eSDC1A.rotatingExciterLimited.feedback.y variable */ = data->localData[0]->realVars[68] /* eSDC1A.rotatingExciterLimited.I_C variable */ - data->localData[0]->realVars[71] /* eSDC1A.rotatingExciterLimited.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
$DER.eSDC1A.rotatingExciterLimited.sISO.y = if eSDC1A.rotatingExciterLimited.sISO.y < eSDC1A.rotatingExciterLimited.sISO.outMin and eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y < 0.0 or eSDC1A.rotatingExciterLimited.sISO.y > eSDC1A.rotatingExciterLimited.sISO.outMax and eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y > 0.0 then 0.0 else eSDC1A.rotatingExciterLimited.sISO.k * eSDC1A.rotatingExciterLimited.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[158] /* eSDC1A.rotatingExciterLimited.sISO.outMin PARAM */, 15, Less);
  RELATIONHYSTERESIS(tmp9, (data->simulationInfo->realParameter[156] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[73] /* eSDC1A.rotatingExciterLimited.feedback.y variable */), 0.0, 16, Less);
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */, data->simulationInfo->realParameter[157] /* eSDC1A.rotatingExciterLimited.sISO.outMax PARAM */, 17, Greater);
  RELATIONHYSTERESIS(tmp11, (data->simulationInfo->realParameter[156] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[73] /* eSDC1A.rotatingExciterLimited.feedback.y variable */), 0.0, 18, Greater);
  data->localData[0]->realVars[16] /* der(eSDC1A.rotatingExciterLimited.sISO.y) STATE_DER */ = (((tmp8 && tmp9) || (tmp10 && tmp11))?0.0:(data->simulationInfo->realParameter[156] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */) * (data->localData[0]->realVars[73] /* eSDC1A.rotatingExciterLimited.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
$whenCondition2 = eSDC1A.simpleLagLim.state > eSDC1A.simpleLagLim.outMax and eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[168] /* eSDC1A.simpleLagLim.outMax PARAM */, 19, Greater);
  RELATIONHYSTERESIS(tmp13, (data->simulationInfo->realParameter[164] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[64] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, 0.0, 20, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp12 && tmp13);
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
$whenCondition1 = eSDC1A.simpleLagLim.state < eSDC1A.simpleLagLim.outMin and eSDC1A.simpleLagLim.K * eSDC1A.hV_GATE.p - eSDC1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[169] /* eSDC1A.simpleLagLim.outMin PARAM */, 21, Less);
  RELATIONHYSTERESIS(tmp15, (data->simulationInfo->realParameter[164] /* eSDC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[64] /* eSDC1A.hV_GATE.p variable */) - data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */, 0.0, 22, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp14 && tmp15);
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
GEN1.V = eSDC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[97] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[112] /* pwLine.vs.im variable */, data->localData[0]->realVars[113] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[97] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[106] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[112] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[111] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[113] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[110] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[289] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[104] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[113] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[111] /* pwLine.is.re variable */) + (data->localData[0]->realVars[112] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[110] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[136] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[143] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[142] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[322] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[138] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[143] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[142] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[322] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->localData[0]->realVars[135] /* pwLine3.vr.re variable */;
  tmp17 = data->localData[0]->realVars[134] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp16 * tmp16) + (tmp17 * tmp17));
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[134] /* pwLine3.vr.im variable */, data->localData[0]->realVars[135] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[127] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[135] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[131] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[130] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[311] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[129] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[135] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[130] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[134] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[131] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[311] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[124] /* pwLine1.vs.im variable */, data->localData[0]->realVars[125] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[107] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[108] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[109] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[289] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[105] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[125] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[109] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[108] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[289] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[126] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[133] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[132] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[311] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[128] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[133] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[132] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[311] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[114] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[116] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[300] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[137] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[123] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[141] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[140] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[322] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[139] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[123] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[140] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[141] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[322] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->localData[0]->realVars[123] /* pwLine1.vr.re variable */;
  tmp19 = data->localData[0]->realVars[122] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp18 * tmp18) + (tmp19 * tmp19));
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[76] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[77] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[122] /* pwLine1.vr.im variable */, data->localData[0]->realVars[123] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[77] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[115] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[123] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[119] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[118] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[300] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[117] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[123] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[118] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[119] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[300] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[74] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[123] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[82] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[81] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[75] /* gENCLS.Q variable */ = (data->localData[0]->realVars[123] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[81] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[82] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 336
type: WHEN

when {$whenCondition2} then
  reinit(eSDC1A.simpleLagLim.state,  eSDC1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[168] /* eSDC1A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSDC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[169] /* eSDC1A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSDC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSDC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_177(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_182(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_183(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_184(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_185(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_336(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_168(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_177(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_182(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_183(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_184(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_185(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_284(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_296(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_299(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_300(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_302(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_168(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_169(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_170(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_171(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_172(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_173(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_174(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_175(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_176(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_177(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_178(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_179(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_180(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_181(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_182(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_183(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_184(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_185(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_276(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_277(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_278(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_279(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_280(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_281(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_282(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_283(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_284(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_290(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_291(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_292(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_293(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_294(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_295(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_296(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_297(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_298(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_299(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_300(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_301(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_302(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{95b63289-754e-469a-aed8-0e5727da45f4}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 144;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 330;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 71;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 88;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 24;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 23;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 8;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 601;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 2;
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
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_setupDataStruc(&data, threadData);
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


