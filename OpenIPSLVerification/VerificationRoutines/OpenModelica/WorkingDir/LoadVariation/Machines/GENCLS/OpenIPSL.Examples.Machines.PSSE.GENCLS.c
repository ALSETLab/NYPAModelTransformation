/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Machines_PSSE_GENCLS_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Machines_PSSE_GENCLS_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Machines_PSSE_GENCLS_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Machines_PSSE_GENCLS_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 145
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[5] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[6] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
$DER.gENCLS2.delta = 6.283185307179586 * gENCLS2.omega * gENCLS2.fn
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[7] /* der(gENCLS2.delta) STATE_DER */ = (6.283185307179586) * ((data->localData[0]->realVars[4] /* gENCLS2.omega STATE(1) */) * (data->simulationInfo->realParameter[115] /* gENCLS2.fn PARAM */));
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
$DER.gENCLS2.eq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[8] /* der(gENCLS2.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
$cse10 = cos(gENCLS2.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[10] /* $cse10 variable */ = cos(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
$cse9 = sin(gENCLS2.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[14] /* $cse9 variable */ = sin(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
$cse6 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[12] /* $cse6 variable */ = cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
$cse5 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[11] /* $cse5 variable */ = sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_153(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_154(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_155(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_156(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_157(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_158(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_159(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_160(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_161(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_162(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_163(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_164(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_165(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_166(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_167(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_168(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_169(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_170(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_171(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_172(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_173(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_192(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_191(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_190(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_189(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_188(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_187(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_186(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_185(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_184(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_183(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_182(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_181(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_180(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_179(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_178(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_177(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_176(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_175(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_174(DATA*, threadData_t*);
/*
equation index: 239
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine1.is.im, pwLine.ir.im, pwLine1.is.re, pwLine.ir.re, constantLoad.p.ir, constantLoad.p.ii, pwLine3.ir.re, pwLine4.is.re, pwLine4.is.im, pwLine3.ir.im, gENCLS2.id, gENCLS2.iq, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, pwLine1.vr.re, pwLine1.vr.im, pwLine1.vs.re, pwLine1.vs.im, pwLine3.vr.re, pwLine3.vr.im}
eqns: {153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174}
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 239 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[76] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[64] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[77] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[65] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[37] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[36] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[87] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[99] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[98] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[86] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[54] /* gENCLS2.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[55] /* gENCLS2.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[96] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[75] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[43] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[44] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[79] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[78] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[91] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[90] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,239};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 239 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[76] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[64] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[77] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[65] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[37] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[36] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[99] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[98] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[54] /* gENCLS2.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[55] /* gENCLS2.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[43] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[44] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[92] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[99] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[98] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[168] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[94] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[99] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[98] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[168] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[91] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[90] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[15] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
$cse8 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[13] /* $cse8 variable */ = atan2(data->localData[0]->realVars[90] /* pwLine3.vr.im variable */, data->localData[0]->realVars[91] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse8
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[16] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[13] /* $cse8 variable */);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[83] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[87] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[86] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[157] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[85] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[86] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[87] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[157] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[27] /* LOAD.V variable */ = data->localData[0]->realVars[38] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
gENCLS2.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[50] /* gENCLS2.P variable */ = (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */) + (data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
$DER.gENCLS2.omega = 0.08333333333333333 * (gENCLS2.P_0 / gENCLS2.S_b - (gENCLS2.P + gENCLS2.D * gENCLS2.omega))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[9] /* der(gENCLS2.omega) STATE_DER */ = (0.08333333333333333) * (DIVISION_SIM(data->simulationInfo->realParameter[106] /* gENCLS2.P_0 PARAM */,data->simulationInfo->realParameter[109] /* gENCLS2.S_b PARAM */,"gENCLS2.S_b",equationIndexes) - (data->localData[0]->realVars[50] /* gENCLS2.P variable */ + (data->simulationInfo->realParameter[103] /* gENCLS2.D PARAM */) * (data->localData[0]->realVars[4] /* gENCLS2.omega STATE(1) */)));
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
gENCLS2.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[51] /* gENCLS2.Q variable */ = (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
gENCLS2.V = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[69] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[68] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[52] /* gENCLS2.V variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
GEN1.V = gENCLS2.V
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[19] /* GEN1.V variable */ = data->localData[0]->realVars[52] /* gENCLS2.V variable */;
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
gENCLS2.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[53] /* gENCLS2.anglev variable */ = atan2(data->localData[0]->realVars[68] /* pwLine.vs.im variable */, data->localData[0]->realVars[69] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENCLS2.anglev
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[20] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[53] /* gENCLS2.anglev variable */);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[62] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[135] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[60] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */) + (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[135] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[33] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[80] /* pwLine1.vs.im variable */, data->localData[0]->realVars[81] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[28] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[33] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[63] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[64] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[65] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[135] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[61] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[65] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[64] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[135] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[82] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[89] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[88] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[157] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[84] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[89] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[88] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[157] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[70] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[77] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[76] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[146] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[72] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[77] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[76] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[146] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[93] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[97] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[96] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[168] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[95] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[96] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[97] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[168] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[79] /* pwLine1.vr.re variable */;
  tmp5 = data->localData[0]->realVars[78] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[23] /* GEN2.V variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[41] /* gENCLS.V variable */ = data->localData[0]->realVars[23] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[42] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[78] /* pwLine1.vr.im variable */, data->localData[0]->realVars[79] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[24] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[42] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[71] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[75] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[74] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[146] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[73] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[74] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[75] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[146] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[39] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[47] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[46] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[40] /* gENCLS.Q variable */ = (data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[46] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[47] /* gENCLS.p.ir variable */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENCLS_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_274(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_145(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_146(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_147(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_148(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_149(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_150(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_151(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_152(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_239(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_248(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_249(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_145(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_146(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_147(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_148(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_149(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_150(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_151(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_152(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_239(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_248(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_249(data, threadData);
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Machines_PSSE_GENCLS_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_12jac.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Machines_PSSE_GENCLS_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Machines_PSSE_GENCLS_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Machines_PSSE_GENCLS_performQSSSimulation,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_updateContinuousSystem,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_callExternalObjectDestructors,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initializeDAEmodeData,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionODE,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionAlgebraics,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionDAE,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionLocalKnownVars,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_input_function,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_input_function_init,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_input_function_updateStartValues,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_data_function,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_output_function,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_setc_function,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_storeDelayed,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundVariableAttributes,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionRemovedInitialEquations,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundParameters,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_checkForAsserts,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_ZeroCrossings,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_updateRelations,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_zeroCrossingDescription,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_relationDescription,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_initSample,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_A,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_B,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_C,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_D,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_F,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianA,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianB,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianC,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianD,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianF,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacA_column,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacB_column,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacC_column,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacD_column,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacF_column,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_linear_model_frame,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_mayer,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_lagrange,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_setInputData,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_getTimeGrid,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_symbolicInlineSystem,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_initSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_updateSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_function_equationsSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENCLS_inputNames,
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
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,124,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void OpenIPSL_Examples_Machines_PSSE_GENCLS_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Machines_PSSE_GENCLS_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Machines.PSSE.GENCLS";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Machines.PSSE.GENCLS";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Machines/PSSE";
  data->modelData->modelGUID = "{b507a95d-bc84-49e3-96c5-7f03cda03ebd}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Machines.PSSE.GENCLS_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Machines.PSSE.GENCLS_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Machines.PSSE.GENCLS_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Machines.PSSE.GENCLS_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 5;
  data->modelData->nVariablesReal = 100;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 176;
  data->modelData->nParametersInteger = 5;
  data->modelData->nParametersBoolean = 68;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 58;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 20;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 14;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Machines.PSSE.GENCLS_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 4;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 423;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 2;
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
  
    OpenIPSL_Examples_Machines_PSSE_GENCLS_setupDataStruc(&data, threadData);
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


