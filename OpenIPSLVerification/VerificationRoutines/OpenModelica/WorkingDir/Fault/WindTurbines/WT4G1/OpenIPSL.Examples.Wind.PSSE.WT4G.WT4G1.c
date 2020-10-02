/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 198
type: SIMPLE_ASSIGN
$DER.gENCLS2_1.delta = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[5] /* der(gENCLS2_1.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
$DER.gENCLS2_1.eq = 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[6] /* der(gENCLS2_1.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
$DER.wT4G1.K1.state = (wT4G1.K1.K * wT4G1.Iy0 - wT4G1.K1.state) / wT4G1.K1.T_mod
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[8] /* der(wT4G1.K1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[104] /* wT4G1.K1.K PARAM */) * (data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */) - data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */,data->simulationInfo->realParameter[106] /* wT4G1.K1.T_mod PARAM */,"wT4G1.K1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
wT4G1.Iy = if abs(wT4G1.K1.T) <= 1e-15 then wT4G1.Iy0 * wT4G1.K1.K else wT4G1.K1.state
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */),1e-15);
  data->localData[0]->realVars[75] /* wT4G1.Iy variable */ = (tmp0?(data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */) * (data->simulationInfo->realParameter[104] /* wT4G1.K1.K PARAM */):data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
$cse6 = cos(gENCLS2_1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[11] /* $cse6 variable */ = cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
$cse5 = sin(gENCLS2_1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[10] /* $cse5 variable */ = sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_204(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_205(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_206(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_207(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_208(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_209(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_210(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_211(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_212(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_213(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_214(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_215(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_216(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_217(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_218(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_219(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_220(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_221(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_222(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_240(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_239(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_238(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_237(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_236(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_235(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_234(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_233(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_232(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_231(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_230(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_229(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_228(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_227(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_226(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_225(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_224(DATA*, threadData_t*);
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_223(DATA*, threadData_t*);
/*
equation index: 279
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine.is.im, pwLine2.ir.im, pwLine.is.re, pwLine2.ir.re, pwLine1.is.im, pwLine1.is.re, pwLine.ir.re, pwLine.ir.im, gENCLS2_1.iq, gENCLS2_1.id, pwLine.vr.re, pwLine.vr.im, wT4G1.Is.re, pwLine2.is.im, pwLine1.vs.im, pwLine1.vs.re, pwLine2.vs.im, pwLine2.vs.re}
eqns: {204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 240, 239, 238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223}
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 279 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[46] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[47] /* pwLine.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[56] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[57] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[45] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[44] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[31] /* gENCLS2_1.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[48] /* pwLine.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[73] /* wT4G1.Is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[66] /* pwLine2.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,279};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 279 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[46] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[47] /* pwLine.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[56] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[57] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[45] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[44] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[73] /* wT4G1.Is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
wT4G1.Iperr.y = wT4G1.Ix0 - wT4G1.Iperr.u2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */ - data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */;
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
wT4G1.K.u = smooth(0, if wT4G1.Iperr.y > wT4G1.imLimited_max.uMax then wT4G1.imLimited_max.uMax else if wT4G1.Iperr.y < wT4G1.imLimited_max.uMin then wT4G1.imLimited_max.uMin else wT4G1.Iperr.y)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */,data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */,data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */:data->localData[0]->realVars[71] /* wT4G1.Iperr.y variable */);
  }
  data->localData[0]->realVars[77] /* wT4G1.K.u variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
$DER.wT4G1.K.y = wT4G1.K.k * wT4G1.K.u
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[7] /* der(wT4G1.K.y) STATE_DER */ = (data->simulationInfo->realParameter[102] /* wT4G1.K.k PARAM */) * (data->localData[0]->realVars[77] /* wT4G1.K.u variable */);
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
$DER.wT4G1.K2.state = (wT4G1.K2.K * wT4G1.V - wT4G1.K2.state) / wT4G1.K2.T_mod
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[9] /* der(wT4G1.K2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */) * (data->localData[0]->realVars[81] /* wT4G1.V variable */) - data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */,data->simulationInfo->realParameter[112] /* wT4G1.K2.T_mod PARAM */,"wT4G1.K2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
GEN1.V = wT4G1.V
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[19] /* GEN1.V variable */ = data->localData[0]->realVars[81] /* wT4G1.V variable */;
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * wT4G1.delta
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[20] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[82] /* wT4G1.delta variable */);
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
pwLine2.P12 = (pwLine2.vs.re * pwLine2.is.re + pwLine2.vs.im * pwLine2.is.im) * pwLine2.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[60] /* pwLine2.P12 variable */ = ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */) + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */)) * (data->simulationInfo->realParameter[81] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
pwLine2.Q12 = (pwLine2.vs.im * pwLine2.is.re - pwLine2.vs.re * pwLine2.is.im) * pwLine2.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[62] /* pwLine2.Q12 variable */ = ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */))) * (data->simulationInfo->realParameter[81] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
wT4G1.P = pwLine2.vs.im * pwLine2.is.im + pwLine2.vs.re * pwLine2.is.re
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[79] /* wT4G1.P variable */ = (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */) + (data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */);
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
wT4G1.Q = pwLine2.vs.im * pwLine2.is.re - pwLine2.vs.re * pwLine2.is.im
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[80] /* wT4G1.Q variable */ = (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */));
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
pwLine2.P21 = ((-pwLine1.vs.re) * pwLine2.ir.re - pwLine1.vs.im * pwLine2.ir.im) * pwLine2.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->localData[0]->realVars[61] /* pwLine2.P21 variable */ = (((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */))) * (data->simulationInfo->realParameter[81] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
pwLine2.Q21 = (pwLine1.vs.re * pwLine2.ir.im - pwLine1.vs.im * pwLine2.ir.re) * pwLine2.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[63] /* pwLine2.Q21 variable */ = ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */))) * (data->simulationInfo->realParameter[81] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[50] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[70] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[52] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[70] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */;
  tmp5 = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[15] /* FAULT.V variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
$cse9 = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[14] /* $cse9 variable */ = atan2(data->localData[0]->realVars[58] /* pwLine1.vs.im variable */, data->localData[0]->realVars[59] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse9
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[16] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[14] /* $cse9 variable */);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine1.vs.im * pwLine.is.re - pwLine1.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[42] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[59] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine1.vs.re * pwLine.is.re + pwLine1.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[40] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */) + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[59] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine.vr.re) * pwLine1.ir.re - pwLine.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[51] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[70] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine.vr.re * pwLine1.ir.im - pwLine.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[53] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[70] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine.vr.re ^ 2.0 + pwLine.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  tmp7 = data->localData[0]->realVars[48] /* pwLine.vr.im variable */;
  data->localData[0]->realVars[23] /* GEN2.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
gENCLS2_1.V = GEN2.V
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[29] /* gENCLS2_1.V variable */ = data->localData[0]->realVars[23] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
gENCLS2_1.anglev = atan2(pwLine.vr.im, pwLine.vr.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[30] /* gENCLS2_1.anglev variable */ = atan2(data->localData[0]->realVars[48] /* pwLine.vr.im variable */, data->localData[0]->realVars[49] /* pwLine.vr.re variable */);
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS2_1.anglev
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[24] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[30] /* gENCLS2_1.anglev variable */);
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
gENCLS2_1.P = (-pwLine.vr.re) * gENCLS2_1.p.ir - pwLine.vr.im * gENCLS2_1.p.ii
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[27] /* gENCLS2_1.P variable */ = ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */));
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
gENCLS2_1.Q = pwLine.vr.re * gENCLS2_1.p.ii - pwLine.vr.im * gENCLS2_1.p.ir
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[28] /* gENCLS2_1.Q variable */ = (data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */));
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine.vr.re * pwLine.ir.im - pwLine.vr.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[43] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[59] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine.vr.re) * pwLine.ir.re - pwLine.vr.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[41] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[59] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 310
type: ALGORITHM

  assert(wT4G1.imLimited_max.uMax >= wT4G1.imLimited_max.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(wT4G1.imLimited_max.uMax, 6, 0, true) + ") < uMin (=" + String(wT4G1.imLimited_max.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,11,") < uMin (=");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */,data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp11));
      tmp12 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[138] /* wT4G1.imLimited_max.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp12);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.imLimited_max.uMax >= wT4G1.imLimited_max.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 309
type: ALGORITHM

  assert(wT4G1.lVPL.LVPL >= wT4G1.const.k, "Input signals are not consistent: limit1 < limit2");
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,49,"Input signals are not consistent: limit1 < limit2");
  static int tmp16 = 0;
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[83] /* wT4G1.lVPL.LVPL variable */,data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */);
    if(!tmp14)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",116,5,116,82,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.lVPL.LVPL >= wT4G1.const.k", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp15)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_309(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_198(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_200(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_280(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_282(data, threadData);

    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_12jac.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_performQSSSimulation,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateContinuousSystem,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_callExternalObjectDestructors,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initializeDAEmodeData,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionODE,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionAlgebraics,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionDAE,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionLocalKnownVars,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_input_function,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_input_function_init,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_input_function_updateStartValues,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_data_function,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_output_function,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_setc_function,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_storeDelayed,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundVariableAttributes,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionRemovedInitialEquations,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_checkForAsserts,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_ZeroCrossings,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_updateRelations,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_zeroCrossingDescription,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_relationDescription,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_initSample,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_A,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_B,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_C,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_D,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_F,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianA,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianB,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianC,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianD,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianF,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacA_column,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacB_column,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacC_column,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacD_column,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacF_column,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_linear_model_frame,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_mayer,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_lagrange,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_setInputData,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_getTimeGrid,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_symbolicInlineSystem,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_initSynchronous,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_updateSynchronous,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_function_equationsSynchronous,
   OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_inputNames,
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
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Wind/PSSE/WT4G";
  data->modelData->modelGUID = "{e5c5810c-9d90-4c25-b73b-76075323b8ab}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 5;
  data->modelData->nVariablesReal = 84;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 151;
  data->modelData->nParametersInteger = 4;
  data->modelData->nParametersBoolean = 53;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 61;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 18;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 14;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 3;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 450;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 3;
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
  
    OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_setupDataStruc(&data, threadData);
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


