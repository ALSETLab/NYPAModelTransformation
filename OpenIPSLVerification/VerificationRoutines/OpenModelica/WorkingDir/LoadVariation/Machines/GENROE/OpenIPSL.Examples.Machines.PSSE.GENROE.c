/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Machines.PSSE.GENROE_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Machines_PSSE_GENROE_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Machines_PSSE_GENROE_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Machines_PSSE_GENROE_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Machines_PSSE_GENROE_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 115
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[8] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[9] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[64] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[121] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[123] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[65] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[124] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[122] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[64] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[65] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[63] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[19] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[63] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[143] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[144] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[14] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[187] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[7] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->localData[0]->realVars[21] /* $cse7 variable */ = cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[20] /* $cse6 variable */ = sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[17] /* $cse2 variable */ = cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[16] /* $cse1 variable */ = sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_126(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_127(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_128(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_129(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_130(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_131(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_132(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_133(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_134(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_135(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_136(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_137(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_138(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_139(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_140(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_141(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_142(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_143(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_144(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_145(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_146(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_147(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_148(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_170(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_169(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_168(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_167(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_166(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_165(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_164(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_163(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_162(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_161(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_160(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_159(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_158(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_157(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_156(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_155(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_154(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_153(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_152(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_151(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_150(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_149(DATA*, threadData_t*);
/*
equation index: 216
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine.ir.re, pwLine3.is.re, pwLine.ir.im, pwLine3.is.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.ir.im, pwLine4.is.im, constantLoad.p.ir, constantLoad.p.ii, pwLine4.ir.im, pwLine4.ir.re, gENCLS.iq, gENCLS.id, pwLine1.vr.im, pwLine1.vr.re, gENROE.id, gENROE.iq, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.re, pwLine3.vr.im}
eqns: {126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149}
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 216 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[83] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[107] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[82] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[106] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[117] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[105] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[104] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[116] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[44] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[43] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[114] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[115] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[51] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[50] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[96] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[97] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[72] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[73] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[98] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[99] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[109] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[108] /* pwLine3.vr.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,216};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 216 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[83] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[107] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[82] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[106] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[117] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[105] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[104] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[116] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[44] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[43] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[114] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[115] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[51] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[50] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[96] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[97] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[72] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[73] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[98] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[99] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[109] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[108] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[34] /* LOAD.V variable */ = data->localData[0]->realVars[45] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[101] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[109] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[105] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[108] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[104] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[217] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[103] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[109] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[104] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[108] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[105] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[217] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[109] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[108] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[22] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[18] /* $cse4 variable */ = atan2(data->localData[0]->realVars[108] /* pwLine3.vr.im variable */, data->localData[0]->realVars[109] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[23] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[18] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[110] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[109] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[117] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[108] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[116] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[228] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[112] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[108] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[117] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[109] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[116] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[228] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[12] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[72] /* gENROE.id variable */) - data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[147] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
gENROE.ISORCE = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[59] /* gENROE.ISORCE variable */ = (data->simulationInfo->realParameter[117] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[72] /* gENROE.id variable */) - data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[72] /* gENROE.id variable */) * (data->simulationInfo->realParameter[153] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[19] /* $cse5 variable */) * (data->localData[0]->realVars[64] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (gENROE.efd0 - gENROE.ISORCE) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[11] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* gENROE.efd0 PARAM */ - data->localData[0]->realVars[59] /* gENROE.ISORCE variable */,data->simulationInfo->realParameter[146] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[84] /* pwLine.is.im variable */;
  tmp3 = data->localData[0]->realVars[85] /* pwLine.is.re variable */;
  data->localData[0]->realVars[58] /* gENROE.I variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[70] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[84] /* pwLine.is.im variable */), (-data->localData[0]->realVars[85] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[13] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[73] /* gENROE.iq variable */) - data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[148] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[69] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[118] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[73] /* gENROE.iq variable */) - data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[73] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[160] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[19] /* $cse5 variable */) * ((data->localData[0]->realVars[65] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[160] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[153] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 232
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[10] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[69] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[149] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[68] /* gENROE.Te variable */ = (data->localData[0]->realVars[62] /* gENROE.PSId variable */) * (data->localData[0]->realVars[73] /* gENROE.iq variable */) - ((data->localData[0]->realVars[66] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[72] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[15] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[180] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[103] /* gENROE.D PARAM */) * (data->localData[0]->realVars[7] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[7] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[68] /* gENROE.Te variable */,data->simulationInfo->realParameter[110] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
gENROE.ETERM = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[87] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[86] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[57] /* gENROE.ETERM variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
GEN1.V = gENROE.ETERM
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[26] /* GEN1.V variable */ = data->localData[0]->realVars[57] /* gENROE.ETERM variable */;
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[71] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[86] /* pwLine.vs.im variable */, data->localData[0]->realVars[87] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[27] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[71] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[60] /* gENROE.P variable */ = (data->localData[0]->realVars[86] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[84] /* pwLine.is.im variable */) + (data->localData[0]->realVars[87] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[85] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[61] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[60] /* gENROE.P variable */,data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[67] /* gENROE.Q variable */ = (data->localData[0]->realVars[86] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[85] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[87] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[84] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[80] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[86] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[85] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[87] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[84] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[195] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[78] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[87] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[85] /* pwLine.is.re variable */) + (data->localData[0]->realVars[86] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[84] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[195] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[88] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[95] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[94] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[206] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[90] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[95] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[94] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[206] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[100] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[107] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[106] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[217] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[102] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[107] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[106] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[217] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[40] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[98] /* pwLine1.vs.im variable */, data->localData[0]->realVars[99] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[35] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[40] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[81] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[82] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[83] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[195] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[79] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[99] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[83] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[82] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[195] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[89] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[97] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[93] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[96] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[92] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[206] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[91] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[97] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[92] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[96] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[93] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[206] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[97] /* pwLine1.vr.re variable */;
  tmp7 = data->localData[0]->realVars[96] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[30] /* GEN2.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[48] /* gENCLS.V variable */ = data->localData[0]->realVars[30] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[49] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[96] /* pwLine1.vr.im variable */, data->localData[0]->realVars[97] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[31] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[49] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[111] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[97] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[115] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[96] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[114] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[228] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[113] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[97] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[114] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[96] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[115] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[228] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[46] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[97] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[54] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[96] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[53] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[47] /* gENCLS.Q variable */ = (data->localData[0]->realVars[97] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[53] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[96] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[54] /* gENCLS.p.ir variable */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROE_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENROE_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_121(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_122(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_123(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_124(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_125(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_234(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_235(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_236(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_237(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_261(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENROE_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_119(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_120(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_121(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_122(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_123(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_124(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_125(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_216(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_225(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_226(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_227(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_230(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_231(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_232(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_233(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_234(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_115(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_116(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_117(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_118(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_119(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_120(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_121(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_122(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_123(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_124(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_125(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_216(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_225(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_226(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_227(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_230(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_231(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_232(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_233(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_234(data, threadData);
}

int OpenIPSL_Examples_Machines_PSSE_GENROE_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Machines_PSSE_GENROE_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Machines.PSSE.GENROE_12jac.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENROE_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Machines_PSSE_GENROE_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Machines_PSSE_GENROE_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Machines_PSSE_GENROE_performQSSSimulation,
   OpenIPSL_Examples_Machines_PSSE_GENROE_updateContinuousSystem,
   OpenIPSL_Examples_Machines_PSSE_GENROE_callExternalObjectDestructors,
   OpenIPSL_Examples_Machines_PSSE_GENROE_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Machines_PSSE_GENROE_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Machines_PSSE_GENROE_initializeDAEmodeData,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionODE,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionAlgebraics,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionDAE,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionLocalKnownVars,
   OpenIPSL_Examples_Machines_PSSE_GENROE_input_function,
   OpenIPSL_Examples_Machines_PSSE_GENROE_input_function_init,
   OpenIPSL_Examples_Machines_PSSE_GENROE_input_function_updateStartValues,
   OpenIPSL_Examples_Machines_PSSE_GENROE_data_function,
   OpenIPSL_Examples_Machines_PSSE_GENROE_output_function,
   OpenIPSL_Examples_Machines_PSSE_GENROE_setc_function,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_storeDelayed,
   OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundVariableAttributes,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionRemovedInitialEquations,
   OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundParameters,
   OpenIPSL_Examples_Machines_PSSE_GENROE_checkForAsserts,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_ZeroCrossings,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_updateRelations,
   OpenIPSL_Examples_Machines_PSSE_GENROE_zeroCrossingDescription,
   OpenIPSL_Examples_Machines_PSSE_GENROE_relationDescription,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_initSample,
   OpenIPSL_Examples_Machines_PSSE_GENROE_INDEX_JAC_A,
   OpenIPSL_Examples_Machines_PSSE_GENROE_INDEX_JAC_B,
   OpenIPSL_Examples_Machines_PSSE_GENROE_INDEX_JAC_C,
   OpenIPSL_Examples_Machines_PSSE_GENROE_INDEX_JAC_D,
   OpenIPSL_Examples_Machines_PSSE_GENROE_INDEX_JAC_F,
   OpenIPSL_Examples_Machines_PSSE_GENROE_initialAnalyticJacobianA,
   OpenIPSL_Examples_Machines_PSSE_GENROE_initialAnalyticJacobianB,
   OpenIPSL_Examples_Machines_PSSE_GENROE_initialAnalyticJacobianC,
   OpenIPSL_Examples_Machines_PSSE_GENROE_initialAnalyticJacobianD,
   OpenIPSL_Examples_Machines_PSSE_GENROE_initialAnalyticJacobianF,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionJacA_column,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionJacB_column,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionJacC_column,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionJacD_column,
   OpenIPSL_Examples_Machines_PSSE_GENROE_functionJacF_column,
   OpenIPSL_Examples_Machines_PSSE_GENROE_linear_model_frame,
   OpenIPSL_Examples_Machines_PSSE_GENROE_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Machines_PSSE_GENROE_mayer,
   OpenIPSL_Examples_Machines_PSSE_GENROE_lagrange,
   OpenIPSL_Examples_Machines_PSSE_GENROE_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Machines_PSSE_GENROE_setInputData,
   OpenIPSL_Examples_Machines_PSSE_GENROE_getTimeGrid,
   OpenIPSL_Examples_Machines_PSSE_GENROE_symbolicInlineSystem,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_initSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_updateSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENROE_function_equationsSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENROE_inputNames,
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
void OpenIPSL_Examples_Machines_PSSE_GENROE_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Machines_PSSE_GENROE_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Machines.PSSE.GENROE";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Machines.PSSE.GENROE";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Machines/PSSE";
  data->modelData->modelGUID = "{757d2afd-98f6-4531-9e98-566126de7af3}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Machines.PSSE.GENROE_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Machines.PSSE.GENROE_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Machines.PSSE.GENROE_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Machines.PSSE.GENROE_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 8;
  data->modelData->nVariablesReal = 118;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 236;
  data->modelData->nParametersInteger = 5;
  data->modelData->nParametersBoolean = 68;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 63;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 20;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 14;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Machines.PSSE.GENROE_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 468;
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
  
    OpenIPSL_Examples_Machines_PSSE_GENROE_setupDataStruc(&data, threadData);
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


