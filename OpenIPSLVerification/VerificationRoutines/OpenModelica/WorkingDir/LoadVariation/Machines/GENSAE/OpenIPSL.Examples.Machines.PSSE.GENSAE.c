/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Machines_PSSE_GENSAE_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Machines_PSSE_GENSAE_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Machines_PSSE_GENSAE_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Machines_PSSE_GENSAE_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 111
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[7] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[8] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
gENSAE.PSIppd = gENSAE.Epq * gENSAE.K3d + gENSAE.PSIkd * gENSAE.K4d
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */ = (data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */) * (data->simulationInfo->realParameter[118] /* gENSAE.K3d PARAM */) + (data->localData[0]->realVars[3] /* gENSAE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[119] /* gENSAE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
gENSAE.PSIpp = sqrt(gENSAE.PSIppd ^ 2.0 + gENSAE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */;
  data->localData[0]->realVars[61] /* gENSAE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENSAE.PSIpp, gENSAE.S10, gENSAE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[17] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[61] /* gENSAE.PSIpp variable */, data->simulationInfo->realParameter[137] /* gENSAE.S10 PARAM */, data->simulationInfo->realParameter[138] /* gENSAE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
$DER.gENSAE.delta = gENSAE.w_b * gENSAE.w
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[12] /* der(gENSAE.delta) STATE_DER */ = (data->simulationInfo->realParameter[178] /* gENSAE.w_b PARAM */) * (data->localData[0]->realVars[6] /* gENSAE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
$cse7 = cos(gENSAE.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[19] /* $cse7 variable */ = cos(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
$cse6 = sin(gENSAE.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[18] /* $cse6 variable */ = sin(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[15] /* $cse2 variable */ = cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[14] /* $cse1 variable */ = sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_121(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_122(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_123(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_124(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_125(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_126(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_127(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_128(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_129(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_130(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_131(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_132(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_133(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_134(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_135(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_136(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_137(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_138(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_139(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_140(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_141(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_142(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_143(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_165(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_164(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_163(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_162(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_161(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_160(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_159(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_158(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_157(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_156(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_155(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_154(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_153(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_152(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_151(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_150(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_149(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_148(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_147(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_146(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_145(DATA*, threadData_t*);
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_144(DATA*, threadData_t*);
/*
equation index: 211
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine4.is.re, pwLine3.ir.re, pwLine4.is.im, pwLine3.ir.im, pwLine3.is.re, constantLoad.p.ir, pwLine.ir.im, constantLoad.p.ii, pwLine1.is.im, pwLine1.is.re, pwLine4.ir.im, pwLine4.ir.re, gENCLS.iq, gENCLS.id, pwLine1.vr.im, pwLine1.vr.re, gENSAE.iq, gENSAE.id, pwLine3.vr.im, pwLine1.vs.re, pwLine3.vr.re, pwLine1.vs.im}
eqns: {121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144}
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 211 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[113] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[101] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[112] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[100] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[103] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[78] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[90] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[91] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[110] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[111] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[49] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[48] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[92] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[93] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[69] /* gENSAE.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[68] /* gENSAE.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[104] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[95] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[105] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[94] /* pwLine1.vs.im variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,211};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 211 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[113] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[112] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[103] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[78] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[90] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[91] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[69] /* gENSAE.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[68] /* gENSAE.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[32] /* LOAD.V variable */ = data->localData[0]->realVars[43] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
$DER.gENSAE.PSIppq = ((gENSAE.Xq - gENSAE.Xppq) * gENSAE.iq + (-gENSAE.PSIppq) - gENSAE.PSIppq * (gENSAE.Xq - gENSAE.Xl) * $cse5 / (gENSAE.Xd - gENSAE.Xl)) / gENSAE.Tppq0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->localData[0]->realVars[11] /* der(gENSAE.PSIppq) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[151] /* gENSAE.Xq PARAM */ - data->simulationInfo->realParameter[150] /* gENSAE.Xppq PARAM */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) + (-data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */) - ((data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */) * ((data->simulationInfo->realParameter[151] /* gENSAE.Xq PARAM */ - data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[17] /* $cse5 variable */,data->simulationInfo->realParameter[146] /* gENSAE.Xd PARAM */ - data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */,"gENSAE.Xd - gENSAE.Xl",equationIndexes)))),data->simulationInfo->realParameter[142] /* gENSAE.Tppq0 PARAM */,"gENSAE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
gENSAE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[80] /* pwLine.is.im variable */;
  tmp1 = data->localData[0]->realVars[81] /* pwLine.is.re variable */;
  data->localData[0]->realVars[56] /* gENSAE.I variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
gENSAE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->localData[0]->realVars[66] /* gENSAE.anglei variable */ = atan2((-data->localData[0]->realVars[80] /* pwLine.is.im variable */), (-data->localData[0]->realVars[81] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
$DER.gENSAE.PSIkd = (gENSAE.Epq + (gENSAE.Xl - gENSAE.Xpd) * gENSAE.id - gENSAE.PSIkd) / gENSAE.Tppd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->localData[0]->realVars[10] /* der(gENSAE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ + (data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */ - data->simulationInfo->realParameter[148] /* gENSAE.Xpd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */) - data->localData[0]->realVars[3] /* gENSAE.PSIkd STATE(1) */,data->simulationInfo->realParameter[141] /* gENSAE.Tppd0 PARAM */,"gENSAE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
gENSAE.ISORCE = gENSAE.Epq + gENSAE.K1d * (gENSAE.Epq + (gENSAE.Xl - gENSAE.Xpd) * gENSAE.id - gENSAE.PSIkd) + (gENSAE.Xd - gENSAE.Xpd) * gENSAE.id + $cse5 * gENSAE.PSIppd
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[57] /* gENSAE.ISORCE variable */ = data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ + (data->simulationInfo->realParameter[116] /* gENSAE.K1d PARAM */) * (data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ + (data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */ - data->simulationInfo->realParameter[148] /* gENSAE.Xpd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */) - data->localData[0]->realVars[3] /* gENSAE.PSIkd STATE(1) */) + (data->simulationInfo->realParameter[146] /* gENSAE.Xd PARAM */ - data->simulationInfo->realParameter[148] /* gENSAE.Xpd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */) + (data->localData[0]->realVars[17] /* $cse5 variable */) * (data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
$DER.gENSAE.Epq = (gENSAE.efd0 - gENSAE.ISORCE) / gENSAE.Tpd0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[9] /* der(gENSAE.Epq) STATE_DER */ = DIVISION_SIM(data->simulationInfo->realParameter[164] /* gENSAE.efd0 PARAM */ - data->localData[0]->realVars[57] /* gENSAE.ISORCE variable */,data->simulationInfo->realParameter[140] /* gENSAE.Tpd0 PARAM */,"gENSAE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
gENSAE.Te = gENSAE.PSId * gENSAE.iq - gENSAE.PSIq * gENSAE.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[65] /* gENSAE.Te variable */ = (data->localData[0]->realVars[60] /* gENSAE.PSId variable */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) - ((data->localData[0]->realVars[63] /* gENSAE.PSIq variable */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */));
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
$DER.gENSAE.w = 0.5 * ((gENSAE.pm0 - gENSAE.D * gENSAE.w) / (1.0 + gENSAE.w) - gENSAE.Te) / gENSAE.H
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->localData[0]->realVars[13] /* der(gENSAE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[171] /* gENSAE.pm0 PARAM */ - ((data->simulationInfo->realParameter[103] /* gENSAE.D PARAM */) * (data->localData[0]->realVars[6] /* gENSAE.w STATE(1) */)),1.0 + data->localData[0]->realVars[6] /* gENSAE.w STATE(1) */,"1.0 + gENSAE.w",equationIndexes) - data->localData[0]->realVars[65] /* gENSAE.Te variable */,data->simulationInfo->realParameter[109] /* gENSAE.H PARAM */,"gENSAE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
gENSAE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[58] /* gENSAE.P variable */ = (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */) + (data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
gENSAE.PELEC = gENSAE.P / gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[59] /* gENSAE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* gENSAE.P variable */,data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */,"gENSAE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
gENSAE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[64] /* gENSAE.Q variable */ = (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
gENSAE.ETERM = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[83] /* pwLine.vs.re variable */;
  tmp3 = data->localData[0]->realVars[82] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[55] /* gENSAE.ETERM variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
GEN1.V = gENSAE.ETERM
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[24] /* GEN1.V variable */ = data->localData[0]->realVars[55] /* gENSAE.ETERM variable */;
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
gENSAE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[67] /* gENSAE.anglev variable */ = atan2(data->localData[0]->realVars[82] /* pwLine.vs.im variable */, data->localData[0]->realVars[83] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENSAE.anglev
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[25] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[67] /* gENSAE.anglev variable */);
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[76] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[186] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[74] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */) + (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[186] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[84] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[91] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[90] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[197] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[86] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[91] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[90] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[197] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 232
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[38] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[94] /* pwLine1.vs.im variable */, data->localData[0]->realVars[95] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[33] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[38] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[96] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[103] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[102] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[208] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[98] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[103] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[102] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[208] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[77] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[78] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[79] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[186] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[75] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[79] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[78] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[186] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[97] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[101] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[100] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[208] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[99] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[100] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[101] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[208] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[105] /* pwLine3.vr.re variable */;
  tmp5 = data->localData[0]->realVars[104] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[20] /* FAULT.V variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[16] /* $cse4 variable */ = atan2(data->localData[0]->realVars[104] /* pwLine3.vr.im variable */, data->localData[0]->realVars[105] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[21] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[16] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[106] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[113] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[112] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[219] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[108] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[113] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[112] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[219] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[85] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[89] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[88] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[197] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[87] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[88] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[89] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[197] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[93] /* pwLine1.vr.re variable */;
  tmp7 = data->localData[0]->realVars[92] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[28] /* GEN2.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[46] /* gENCLS.V variable */ = data->localData[0]->realVars[28] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[47] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[92] /* pwLine1.vr.im variable */, data->localData[0]->realVars[93] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[29] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[47] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[107] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[111] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[110] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[219] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[109] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[110] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[111] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[219] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[44] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[52] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[51] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[45] /* gENCLS.Q variable */ = (data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[51] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[52] /* gENCLS.p.ir variable */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Machines_PSSE_GENSAE_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_113(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_114(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_115(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_117(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_118(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_119(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_120(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_211(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_212(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_213(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_214(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_215(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_216(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_217(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_218(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_221(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_222(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_223(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_224(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_225(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_226(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_227(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_228(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_229(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_230(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_231(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_232(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_233(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_234(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_235(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_236(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_237(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_238(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_239(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_240(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_241(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_242(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_243(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_244(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_254(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_113(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_114(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_115(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_117(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_118(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_119(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_120(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_211(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_213(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_216(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_217(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_218(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_111(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_112(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_113(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_114(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_115(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_116(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_117(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_118(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_119(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_120(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_211(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_213(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_216(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_217(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_218(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_219(data, threadData);

    OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_220(data, threadData);
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Machines_PSSE_GENSAE_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_12jac.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Machines_PSSE_GENSAE_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Machines_PSSE_GENSAE_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Machines_PSSE_GENSAE_performQSSSimulation,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_updateContinuousSystem,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_callExternalObjectDestructors,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initializeDAEmodeData,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionODE,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionAlgebraics,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionDAE,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionLocalKnownVars,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_input_function,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_input_function_init,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_input_function_updateStartValues,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_data_function,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_output_function,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_setc_function,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_storeDelayed,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_updateBoundVariableAttributes,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionRemovedInitialEquations,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_updateBoundParameters,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_checkForAsserts,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_ZeroCrossings,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_updateRelations,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_zeroCrossingDescription,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_relationDescription,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_initSample,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_A,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_B,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_C,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_D,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_F,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianA,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianB,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianC,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianD,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianF,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacA_column,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacB_column,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacC_column,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacD_column,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacF_column,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_linear_model_frame,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_mayer,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_lagrange,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_setInputData,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_getTimeGrid,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_symbolicInlineSystem,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_initSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_updateSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_function_equationsSynchronous,
   OpenIPSL_Examples_Machines_PSSE_GENSAE_inputNames,
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
void OpenIPSL_Examples_Machines_PSSE_GENSAE_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Machines_PSSE_GENSAE_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Machines.PSSE.GENSAE";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Machines.PSSE.GENSAE";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Machines/PSSE";
  data->modelData->modelGUID = "{4790eed4-85f2-4ce8-b1be-af9c30bd7742}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Machines.PSSE.GENSAE_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Machines.PSSE.GENSAE_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Machines.PSSE.GENSAE_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Machines.PSSE.GENSAE_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 7;
  data->modelData->nVariablesReal = 114;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 227;
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
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Machines.PSSE.GENSAE_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 453;
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
  
    OpenIPSL_Examples_Machines_PSSE_GENSAE_setupDataStruc(&data, threadData);
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


