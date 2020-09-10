/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_SEXS_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_SEXS_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 142
type: SIMPLE_ASSIGN
sEXS.EFD0 = gENROU.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[125] /* sEXS.EFD0 variable */ = data->simulationInfo->realParameter[176] /* gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[10] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[11] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.Epq * gENROU.K3d + gENROU.PSIkd * gENROU.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ = (data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[124] /* gENROU.K3d PARAM */) + (data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[126] /* gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
gENROU.PSIppq = gENROU.PSIkq * gENROU.K4q + gENROU.Epd * gENROU.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[68] /* gENROU.PSIppq variable */ = (data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[127] /* gENROU.K4q PARAM */) + (data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[125] /* gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[67] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[68] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[66] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[23] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[66] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[146] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[147] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
$DER.gENROU.delta = gENROU.w_b * gENROU.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[16] /* der(gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[190] /* gENROU.w_b PARAM */) * (data->localData[0]->realVars[7] /* gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.x[1] = sEXS.leadLag.TF.x_scaled[1] / sEXS.leadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[127] /* sEXS.leadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[8] /* sEXS.leadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[270] /* sEXS.leadLag.TF.a_end PARAM */,"sEXS.leadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
$cse7 = cos(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[25] /* $cse7 variable */ = cos(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
$cse6 = sin(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[24] /* $cse6 variable */ = sin(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[21] /* $cse2 variable */ = cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[20] /* $cse1 variable */ = sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_155(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_156(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_157(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_158(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_159(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_160(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_161(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_162(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_163(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_164(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_165(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_166(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_167(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_168(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_169(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_170(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_171(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_172(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_173(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_174(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_175(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_176(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_177(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_199(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_198(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_197(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_196(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_195(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_194(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_193(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_192(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_191(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_190(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_189(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_188(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_187(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_186(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_185(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_184(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_183(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_182(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_181(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_180(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_179(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_178(DATA*, threadData_t*);
/*
equation index: 245
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine1.is.re, pwLine.ir.re, pwLine1.is.im, constantLoad.p.ii, constantLoad.p.ir, pwLine3.ir.im, pwLine4.is.im, pwLine3.ir.re, pwLine4.is.re, pwLine3.is.im, pwLine4.ir.im, pwLine4.ir.re, gENCLS.id, gENCLS.iq, pwLine1.vr.re, pwLine1.vr.im, gENROU.iq, gENROU.id, pwLine1.vs.im, pwLine1.vs.re, pwLine3.vr.im, pwLine3.vr.re}
eqns: {155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 245 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[99] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[98] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[47] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[118] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[119] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[54] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[55] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[77] /* gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[76] /* gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,245};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 245 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[98] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[77] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[76] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[38] /* LOAD.V variable */ = data->localData[0]->realVars[49] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[26] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[22] /* $cse4 variable */ = atan2(data->localData[0]->realVars[112] /* pwLine3.vr.im variable */, data->localData[0]->realVars[113] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[27] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[22] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[114] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[231] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[116] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[231] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[105] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[220] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[107] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[220] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
gENROU.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[88] /* pwLine.is.im variable */;
  tmp3 = data->localData[0]->realVars[89] /* pwLine.is.re variable */;
  data->localData[0]->realVars[62] /* gENROU.I variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
gENROU.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[74] /* gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[88] /* pwLine.is.im variable */), (-data->localData[0]->realVars[89] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) / gENROU.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[15] /* der(gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[151] /* gENROU.Tppq0 PARAM */,"gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
gENROU.XaqIlq = gENROU.K1q * (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + $cse5 * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[73] /* gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[121] /* gENROU.K1q PARAM */) * (data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[77] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */) + (data->localData[0]->realVars[23] /* $cse5 variable */) * ((data->localData[0]->realVars[68] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = (-gENROU.XaqIlq) / gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[12] /* der(gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[73] /* gENROU.XaqIlq variable */),data->simulationInfo->realParameter[152] /* gENROU.Tpq0 PARAM */,"gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) / gENROU.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[14] /* der(gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */) - data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[150] /* gENROU.Tppd0 PARAM */,"gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
gENROU.XADIFD = gENROU.K1d * (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + $cse5 * gENROU.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[72] /* gENROU.XADIFD variable */ = (data->simulationInfo->realParameter[120] /* gENROU.K1d PARAM */) * (data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */) - data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[76] /* gENROU.id variable */) * (data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) + (data->localData[0]->realVars[23] /* $cse5 variable */) * (data->localData[0]->realVars[67] /* gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
gENROU.Te = gENROU.PSId * gENROU.iq - gENROU.PSIq * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[71] /* gENROU.Te variable */ = (data->localData[0]->realVars[65] /* gENROU.PSId variable */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - ((data->localData[0]->realVars[69] /* gENROU.PSIq variable */) * (data->localData[0]->realVars[76] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
$DER.gENROU.w = 0.5 * ((gENROU.pm0 - gENROU.D * gENROU.w) / (1.0 + gENROU.w) - gENROU.Te) / gENROU.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[17] /* der(gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[183] /* gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[107] /* gENROU.D PARAM */) * (data->localData[0]->realVars[7] /* gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[7] /* gENROU.w STATE(1) */,"1.0 + gENROU.w",equationIndexes) - data->localData[0]->realVars[71] /* gENROU.Te variable */,data->simulationInfo->realParameter[113] /* gENROU.H PARAM */,"gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
sEXS.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[91] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[90] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[124] /* sEXS.ECOMP variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
sEXS.DiffV.y = sEXS.DiffV.k1 * sEXS.VoltageReference.k + sEXS.DiffV.k2 * sEXS.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[122] /* sEXS.DiffV.y variable */ = (data->simulationInfo->realParameter[239] /* sEXS.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[262] /* sEXS.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[240] /* sEXS.DiffV.k2 PARAM */) * (data->localData[0]->realVars[124] /* sEXS.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
sEXS.V_erro.y = sEXS.V_erro.k1 * const.k + sEXS.V_erro.k2 * sEXS.DiffV.y + sEXS.V_erro.k3 * sEXS.DiffV1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[126] /* sEXS.V_erro.y variable */ = (data->simulationInfo->realParameter[258] /* sEXS.V_erro.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[259] /* sEXS.V_erro.k2 PARAM */) * (data->localData[0]->realVars[122] /* sEXS.DiffV.y variable */) + (data->simulationInfo->realParameter[260] /* sEXS.V_erro.k3 PARAM */) * (data->localData[0]->realVars[123] /* sEXS.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
$DER.sEXS.leadLag.TF.x_scaled[1] = (sEXS.leadLag.TF.a_end * sEXS.V_erro.y - sEXS.leadLag.TF.a[2] * sEXS.leadLag.TF.x_scaled[1]) / sEXS.leadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[18] /* der(sEXS.leadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[270] /* sEXS.leadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[126] /* sEXS.V_erro.y variable */) - ((data->simulationInfo->realParameter[269] /* sEXS.leadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[8] /* sEXS.leadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[268] /* sEXS.leadLag.TF.a[1] PARAM */,"sEXS.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.y = (sEXS.leadLag.TF.bb[2] - sEXS.leadLag.TF.a[2] * sEXS.leadLag.TF.d) * sEXS.leadLag.TF.x[1] + sEXS.leadLag.TF.d * sEXS.V_erro.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[128] /* sEXS.leadLag.TF.y variable */ = (data->simulationInfo->realParameter[274] /* sEXS.leadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[269] /* sEXS.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[275] /* sEXS.leadLag.TF.d PARAM */))) * (data->localData[0]->realVars[127] /* sEXS.leadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[275] /* sEXS.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[126] /* sEXS.V_erro.y variable */);
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
sEXS.leadLag.y = if abs(sEXS.leadLag.T1 - sEXS.leadLag.T2) < 1e-15 then sEXS.leadLag.K * sEXS.V_erro.y else sEXS.leadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp6;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[265] /* sEXS.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[266] /* sEXS.leadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */ = (tmp6?(data->simulationInfo->realParameter[264] /* sEXS.leadLag.K PARAM */) * (data->localData[0]->realVars[126] /* sEXS.V_erro.y variable */):data->localData[0]->realVars[128] /* sEXS.leadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
$DER.sEXS.simpleLagLim.state = (sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state) / sEXS.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[19] /* der(sEXS.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[282] /* sEXS.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[284] /* sEXS.simpleLagLim.T_mod PARAM */,"sEXS.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
gENROU.EFD = if abs(sEXS.simpleLagLim.T) <= 1e-15 then max(min(sEXS.leadLag.y * sEXS.simpleLagLim.K, sEXS.simpleLagLim.outMax), sEXS.simpleLagLim.outMin) else max(min(sEXS.simpleLagLim.state, sEXS.simpleLagLim.outMax), sEXS.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  modelica_boolean tmp7;
  tmp7 = LessEq(fabs(data->simulationInfo->realParameter[283] /* sEXS.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[61] /* gENROU.EFD variable */ = (tmp7?fmax(fmin((data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) * (data->simulationInfo->realParameter[282] /* sEXS.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[286] /* sEXS.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[287] /* sEXS.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[286] /* sEXS.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[287] /* sEXS.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = (gENROU.EFD - gENROU.XADIFD) / gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[13] /* der(gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[61] /* gENROU.EFD variable */ - data->localData[0]->realVars[72] /* gENROU.XADIFD variable */,data->simulationInfo->realParameter[149] /* gENROU.Tpd0 PARAM */,"gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
$whenCondition2 = sEXS.simpleLagLim.state > sEXS.simpleLagLim.outMax and sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[286] /* sEXS.simpleLagLim.outMax PARAM */, 14, Greater);
  RELATIONHYSTERESIS(tmp9, (data->simulationInfo->realParameter[282] /* sEXS.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, 0.0, 15, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
$whenCondition1 = sEXS.simpleLagLim.state < sEXS.simpleLagLim.outMin and sEXS.simpleLagLim.K * sEXS.leadLag.y - sEXS.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[287] /* sEXS.simpleLagLim.outMin PARAM */, 16, Less);
  RELATIONHYSTERESIS(tmp11, (data->simulationInfo->realParameter[282] /* sEXS.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[129] /* sEXS.leadLag.y variable */) - data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */, 0.0, 17, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp10 && tmp11);
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
GEN1.V = sEXS.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[30] /* GEN1.V variable */ = data->localData[0]->realVars[124] /* sEXS.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
gENROU.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[75] /* gENROU.anglev variable */ = atan2(data->localData[0]->realVars[90] /* pwLine.vs.im variable */, data->localData[0]->realVars[91] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROU.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[31] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[75] /* gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
gENROU.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[63] /* gENROU.P variable */ = (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */) + (data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
gENROU.PELEC = gENROU.P / gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[64] /* gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[63] /* gENROU.P variable */,data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */,"gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
gENROU.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[70] /* gENROU.Q variable */ = (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[84] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[198] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[82] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */) + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[198] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[44] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[102] /* pwLine1.vs.im variable */, data->localData[0]->realVars[103] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[39] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[44] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[85] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[198] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[83] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[198] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[104] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[220] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[106] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[220] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[92] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[209] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[94] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[209] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;
  tmp13 = data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[34] /* GEN2.V variable */ = sqrt((tmp12 * tmp12) + (tmp13 * tmp13));
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[52] /* gENCLS.V variable */ = data->localData[0]->realVars[34] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[53] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[100] /* pwLine1.vr.im variable */, data->localData[0]->realVars[101] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[35] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[53] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[93] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[209] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[95] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[209] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[115] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[231] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[117] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[231] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[50] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[58] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[57] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[51] /* gENCLS.Q variable */ = (data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[57] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[58] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 300
type: WHEN

when {$whenCondition2} then
  reinit(sEXS.simpleLagLim.state,  sEXS.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[286] /* sEXS.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit sEXS.simpleLagLim.state = %g", data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[287] /* sEXS.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit sEXS.simpleLagLim.state = %g", data->localData[0]->realVars[9] /* sEXS.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_142(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_143(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_144(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_148(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_149(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_150(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_151(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_153(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_154(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_245(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_246(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_247(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_248(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_249(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_250(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_251(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_252(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_300(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_143(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_144(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_148(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_149(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_150(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_151(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_153(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_154(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_245(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_257(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_258(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_264(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_268(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_269(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_270(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_271(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_143(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_144(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_145(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_146(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_147(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_148(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_149(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_150(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_151(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_152(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_153(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_154(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_245(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_256(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_257(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_258(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_259(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_260(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_261(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_262(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_263(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_264(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_265(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_266(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_267(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_268(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_269(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_270(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_271(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_SEXS_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_SEXS_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_SEXS_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_SEXS_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_SEXS_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.SEXS";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.SEXS";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{56da78fb-6065-41a7-9588-83d252c813c7}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 10;
  data->modelData->nVariablesReal = 130;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 289;
  data->modelData->nParametersInteger = 9;
  data->modelData->nParametersBoolean = 68;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 73;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 22;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 18;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 539;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_SEXS_setupDataStruc(&data, threadData);
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

