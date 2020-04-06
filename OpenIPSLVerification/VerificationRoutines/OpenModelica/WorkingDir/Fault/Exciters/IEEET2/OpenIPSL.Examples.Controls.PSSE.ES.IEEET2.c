/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 161
type: SIMPLE_ASSIGN
iEEET2_1._EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[88] /* iEEET2_1.EFD0 variable */ = data->simulationInfo->realParameter[170];
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
der(gENCLS._delta) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[13] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
der(gENCLS._eq) = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[14] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[72] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[120]) + (data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[122]);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
gENROE._PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[73] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[123]) + (data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[121]);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[72] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[73] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[71] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[71] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[140], data->simulationInfo->realParameter[141], 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
der(gENROE._delta) = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[19] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[7] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._Sum._u2 = iEEET2_1.rotatingExciter.gain.k * iEEET2_1.rotatingExciter.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[96] /* iEEET2_1.rotatingExciter.Sum.u2 variable */ = (data->simulationInfo->realParameter[234]) * (data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._VE._u2 = OpenIPSL.NonElectrical.Functions.SE(iEEET2_1.rotatingExciter.sISO.y, iEEET2_1.rotatingExciter.se1.SE1, iEEET2_1.rotatingExciter.se1.SE2, iEEET2_1.rotatingExciter.se1.E1, iEEET2_1.rotatingExciter.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[98] /* iEEET2_1.rotatingExciter.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */, data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], data->simulationInfo->realParameter[237], data->simulationInfo->realParameter[238]);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._Sum._u1 = iEEET2_1.rotatingExciter.sISO.y * iEEET2_1.rotatingExciter.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[95] /* iEEET2_1.rotatingExciter.Sum.u1 variable */ = (data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */) * (data->localData[0]->realVars[98] /* iEEET2_1.rotatingExciter.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._Sum._y = iEEET2_1.rotatingExciter.Sum.k1 * iEEET2_1.rotatingExciter.Sum.u1 + iEEET2_1.rotatingExciter.Sum.k2 * iEEET2_1.rotatingExciter.Sum.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[97] /* iEEET2_1.rotatingExciter.Sum.y variable */ = (data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[95] /* iEEET2_1.rotatingExciter.Sum.u1 variable */) + (data->simulationInfo->realParameter[232]) * (data->localData[0]->realVars[96] /* iEEET2_1.rotatingExciter.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_177(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_178(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_179(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_180(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_181(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_182(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_183(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_184(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_185(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_186(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_187(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_188(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_189(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_190(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_191(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_192(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_211(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_203(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_202(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_201(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_200(DATA*, threadData_t*);
/*
equation index: 267
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine3._ir._re, pwLine4._is._re, pwLine3._ir._im, pwLine4._is._im, pwLine._ir._im, pwLine3._is._im, pwLine._ir._re, pwLine3._is._re, constantLoad._p._ir, constantLoad._p._ii, pwLine1._ir._re, pwLine1._ir._im, gENCLS._id, gENCLS._iq, pwLine1._vr._re, pwLine1._vr._im, gENROE._id, gENROE._iq, pwLine1._vs._re, pwLine1._vs._im, pwLine3._vr._im, pwLine3._vr._re}
eqns: {177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 267 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[129] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[141] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[128] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[140] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[106] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[130] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[107] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[131] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[117] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[116] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[60] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[61] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[81] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[82] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,267};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 267 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[129] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[141] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[128] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[140] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[106] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[130] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[107] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[131] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[117] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[116] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[60] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[61] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[121] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[120] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[81] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[82] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[123] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[122] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[132] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[133] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
LOAD._V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
pwLine4._P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[134] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
pwLine4._Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[136] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[141] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[140] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
FAULT._V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[133] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[132] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[132] /* pwLine3.vr.im variable */, data->localData[0]->realVars[133] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
FAULT._angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
pwLine3._P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[125] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
pwLine3._Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[127] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[128] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[129] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
der(gENROE._PSIkd) = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[17] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[151] - data->simulationInfo->realParameter[152]) * (data->localData[0]->realVars[81] /* gENROE.id variable */) - data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[144],"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
gENROE._XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[77] /* gENROE.XADIFD variable */ = (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[151] - data->simulationInfo->realParameter[152]) * (data->localData[0]->realVars[81] /* gENROE.id variable */) - data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[81] /* gENROE.id variable */) * (data->simulationInfo->realParameter[150] - data->simulationInfo->realParameter[152]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[72] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
der(gENROE._Epq) = (iEEET2_1.rotatingExciter.sISO.y - gENROE.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[16] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[77] /* gENROE.XADIFD variable */,data->simulationInfo->realParameter[143],"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
der(gENROE._PSIkq) = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[18] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[145],"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
gENROE._XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[78] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151]) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[82] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[157]) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[73] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[157] - data->simulationInfo->realParameter[151],data->simulationInfo->realParameter[150] - data->simulationInfo->realParameter[151],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
der(gENROE._Epd) = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[15] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[78] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[146],"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
gENROE._Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[76] /* gENROE.Te variable */ = (data->localData[0]->realVars[70] /* gENROE.PSId variable */) * (data->localData[0]->realVars[82] /* gENROE.iq variable */) - ((data->localData[0]->realVars[74] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[81] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
der(gENROE._w) = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[20] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[177] - ((data->simulationInfo->realParameter[104]) * (data->localData[0]->realVars[7] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[7] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[76] /* gENROE.Te variable */,data->simulationInfo->realParameter[109],"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
iEEET2_1._ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[111] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[110] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[87] /* iEEET2_1.ECOMP variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
der(iEEET2_1._TransducerDelay._state) = (iEEET2_1.TransducerDelay.K * iEEET2_1.ECOMP - iEEET2_1.TransducerDelay.state) / iEEET2_1.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[21] /* der(iEEET2_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[205]) * (data->localData[0]->realVars[87] /* iEEET2_1.ECOMP variable */) - data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[207],"iEEET2_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
iEEET2_1._DiffV._u2 = if abs(iEEET2_1.TransducerDelay.T) <= 1e-15 then iEEET2_1.ECOMP * iEEET2_1.TransducerDelay.K else iEEET2_1.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  modelica_boolean tmp4;
  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[206]),1e-15);
  data->localData[0]->realVars[85] /* iEEET2_1.DiffV.u2 variable */ = (tmp4?(data->localData[0]->realVars[87] /* iEEET2_1.ECOMP variable */) * (data->simulationInfo->realParameter[205]):data->localData[0]->realVars[8] /* iEEET2_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
iEEET2_1._DiffV._y = iEEET2_1.DiffV.k1 * iEEET2_1.VoltageReference.k + iEEET2_1.DiffV.k2 * iEEET2_1.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[86] /* iEEET2_1.DiffV.y variable */ = (data->simulationInfo->realParameter[185]) * (data->simulationInfo->realParameter[215]) + (data->simulationInfo->realParameter[186]) * (data->localData[0]->realVars[85] /* iEEET2_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
iEEET2_1._add._u1 = iEEET2_1.add3_1.k1 * const.k + iEEET2_1.add3_1.k2 * iEEET2_1.DiffV.y + iEEET2_1.add3_1.k3 * iEEET2_1.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[90] /* iEEET2_1.add.u1 variable */ = (data->simulationInfo->realParameter[218]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[86] /* iEEET2_1.DiffV.y variable */) + (data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[89] /* iEEET2_1.Limiters.y variable */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_289(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_290(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_291(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_292(DATA*, threadData_t*);
/*
equation index: 297
indexNonlinear: 2
type: NONLINEAR

vars: {iEEET2_1._derivativeLag._y}
eqns: {289, 290, 291, 292}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 297 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[94] /* iEEET2_1.derivativeLag.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,297};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 297 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[94] /* iEEET2_1.derivativeLag.y variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
der(iEEET2_1._simpleLagLim._state) = (iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state) / iEEET2_1.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[25] /* der(iEEET2_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[247],"iEEET2_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
$whenCondition2 = iEEET2_1.simpleLagLim.state > iEEET2_1.simpleLagLim.outMax and iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[248], 14, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, 15, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
$whenCondition1 = iEEET2_1.simpleLagLim.state < iEEET2_1.simpleLagLim.outMin and iEEET2_1.simpleLagLim.K * iEEET2_1.add.y - iEEET2_1.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[249], 16, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[245]) * (data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) - data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */, 0.0, 17, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
der(iEEET2_1._derivativeLag._x) = (iEEET2_1.derivativeLag.u - iEEET2_1.derivativeLag.x) / iEEET2_1.derivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[22] /* der(iEEET2_1.derivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[93] /* iEEET2_1.derivativeLag.u variable */ - data->localData[0]->realVars[9] /* iEEET2_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[221],"iEEET2_1.derivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._feedback._y = iEEET2_1.derivativeLag.u - iEEET2_1.rotatingExciter.Sum.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[99] /* iEEET2_1.rotatingExciter.feedback.y variable */ = data->localData[0]->realVars[93] /* iEEET2_1.derivativeLag.u variable */ - data->localData[0]->realVars[97] /* iEEET2_1.rotatingExciter.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
der(iEEET2_1._rotatingExciter._sISO._y) = iEEET2_1.rotatingExciter.sISO.k * iEEET2_1.rotatingExciter.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[23] /* der(iEEET2_1.rotatingExciter.sISO.y) STATE_DER */ = (data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[99] /* iEEET2_1.rotatingExciter.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
der(iEEET2_1._simpleLag._state) = (iEEET2_1.simpleLag.K * iEEET2_1.derivativeLag.y - iEEET2_1.simpleLag.state) / iEEET2_1.simpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[24] /* der(iEEET2_1.simpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[241]) * (data->localData[0]->realVars[94] /* iEEET2_1.derivativeLag.y variable */) - data->localData[0]->realVars[11] /* iEEET2_1.simpleLag.state STATE(1) */,data->simulationInfo->realParameter[243],"iEEET2_1.simpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
GEN1._V = iEEET2_1.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[87] /* iEEET2_1.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
gENROE._anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[80] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[110] /* pwLine.vs.im variable */, data->localData[0]->realVars[111] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
GEN1._angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[80] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
gENROE._P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[68] /* gENROE.P variable */ = (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */) + (data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
gENROE._PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[69] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[68] /* gENROE.P variable */,data->simulationInfo->realParameter[103],"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
gENROE._Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[75] /* gENROE.Q variable */ = (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
gENROE._I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[108] /* pwLine.is.im variable */;
  tmp5 = data->localData[0]->realVars[109] /* pwLine.is.re variable */;
  data->localData[0]->realVars[67] /* gENROE.I variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
gENROE._anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[79] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[108] /* pwLine.is.im variable */), (-data->localData[0]->realVars[109] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
pwLine._Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[104] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[258]);
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
pwLine._P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[102] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[111] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[109] /* pwLine.is.re variable */) + (data->localData[0]->realVars[110] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[108] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[258]);
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
pwLine1._P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[112] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[269]);
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
pwLine1._Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[114] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[119] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[269]);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
pwLine3._P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[124] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
pwLine3._Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[126] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[131] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[130] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[280]);
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
constantLoad._angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[122] /* pwLine1.vs.im variable */, data->localData[0]->realVars[123] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
LOAD._angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
pwLine._Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[105] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[258]);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
pwLine._P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[103] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[123] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[107] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[106] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[258]);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
pwLine4._P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[135] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
pwLine4._Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[137] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[138] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[139] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[291]);
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
GEN2._V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[121] /* pwLine1.vr.re variable */;
  tmp7 = data->localData[0]->realVars[120] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
gENCLS._V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[58] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
gENCLS._anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[59] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[120] /* pwLine1.vr.im variable */, data->localData[0]->realVars[121] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
GEN2._angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[59] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
pwLine1._P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[113] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[269]);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
pwLine1._Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[115] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[116] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[117] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[269]);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
gENCLS._P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[56] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[121] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[64] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[63] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
gENCLS._Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[57] /* gENCLS.Q variable */ = (data->localData[0]->realVars[121] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[63] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[120] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[64] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 333
type: WHEN

when {$whenCondition2} then
  reinit(iEEET2_1._simpleLagLim._state,  iEEET2_1.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[248];
    infoStreamPrint(LOG_EVENTS, 0, "reinit iEEET2_1.simpleLagLim.state = %g", data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[249];
    infoStreamPrint(LOG_EVENTS, 0, "reinit iEEET2_1.simpleLagLim.state = %g", data->localData[0]->realVars[12] /* iEEET2_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_161(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_164(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_333(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_164(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_277(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_162(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_163(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_164(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_165(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_166(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_167(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_168(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_169(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_170(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_171(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_172(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_173(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_174(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_175(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_176(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_276(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_277(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_278(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_279(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_280(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_281(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_282(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_283(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_284(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_285(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_286(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_287(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_288(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_301(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_302(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_303(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_304(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_inputNames,
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
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,45,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{3a8bc223-0fea-4727-b2e8-30b911488b2c}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 142;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 299;
  data->modelData->nParametersInteger = 7;
  data->modelData->nParametersBoolean = 69;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 102;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 22;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 18;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 568;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_setupDataStruc(&data, threadData);
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


