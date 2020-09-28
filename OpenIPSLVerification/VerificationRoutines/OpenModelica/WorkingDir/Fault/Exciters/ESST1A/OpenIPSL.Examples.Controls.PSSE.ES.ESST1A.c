/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 356
type: SIMPLE_ASSIGN
eSST1A.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[60] /* eSST1A.EFD0 variable */ = data->simulationInfo->realParameter[293] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[243] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 362
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[263] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[264] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[307] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.x[1] = eSST1A.imLeadLag.TF.x_scaled[1] / eSST1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[155] /* eSST1A.imLeadLag.TF.a_end PARAM */,"eSST1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.x[1] = eSST1A.imLeadLag1.TF.x_scaled[1] / eSST1A.imLeadLag1.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[173] /* eSST1A.imLeadLag1.TF.a_end PARAM */,"eSST1A.imLeadLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 367
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_370(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_371(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_373(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_375(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_376(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_377(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_378(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_379(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_380(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_381(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_382(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_383(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_384(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_385(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_386(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_387(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_388(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_389(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_390(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_391(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_392(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_414(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_413(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_412(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_411(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_410(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_409(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_408(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_407(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_406(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_405(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_404(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_403(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_402(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_401(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_400(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_399(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_398(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_397(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_396(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_395(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_394(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_393(DATA*, threadData_t*);
/*
equation index: 460
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine4.is.im, pwLine3.ir.im, pwLine3.ir.re, pwLine4.is.re, pwLine1.is.re, pwLine3.is.re, pwLine3.is.im, constantLoad.p.ii, pwLine.ir.im, pwLine.ir.re, pwLine4.ir.im, pwLine4.ir.re, gENCLS.id, gENCLS.iq, pwLine1.vr.im, pwLine1.vr.re, gENROE.id, gENROE.iq, pwLine3.vr.re, pwLine3.vr.im, pwLine1.vs.im, pwLine1.vs.re}
eqns: {370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 414, 413, 412, 411, 410, 409, 408, 407, 406, 405, 404, 403, 402, 401, 400, 399, 398, 397, 396, 395, 394, 393}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 460 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[150] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,460};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 460 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 461
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[267] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
eSST1A.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = (data->simulationInfo->realParameter[237] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[273] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[63] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[127] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[125] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[128] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[145] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[63] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */:data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
eSST1A.add3.u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[148] /* eSST1A.imGain3.k PARAM */) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[268] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[238] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[280] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[273] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[269] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[104] /* gENROE.Te variable */ = (data->localData[0]->realVars[98] /* gENROE.PSId variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((data->localData[0]->realVars[102] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[300] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[224] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[104] /* gENROE.Te variable */,data->simulationInfo->realParameter[230] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[120] /* pwLine.is.im variable */;
  tmp5 = data->localData[0]->realVars[121] /* pwLine.is.re variable */;
  data->localData[0]->realVars[95] /* gENROE.I variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[106] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[120] /* pwLine.is.im variable */), (-data->localData[0]->realVars[121] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[96] /* gENROE.P variable */ = (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */) + (data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[97] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[96] /* gENROE.P variable */,data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[103] /* gENROE.Q variable */ = (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
eSST1A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp7 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
eSST1A.imGain1.y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[146] /* eSST1A.imGain1.k PARAM */) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
eSST1A.add3.u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[147] /* eSST1A.imGain2.k PARAM */) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
eSST1A.add3.y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[66] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[130] /* eSST1A.add3.k1 PARAM */) * (data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[131] /* eSST1A.add3.k2 PARAM */) * (data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
$DER.eSST1A.TransducerDelay.state = (eSST1A.TransducerDelay.K * eSST1A.ECOMP - eSST1A.TransducerDelay.state) / eSST1A.TransducerDelay.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[13] /* der(eSST1A.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) - data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[106] /* eSST1A.TransducerDelay.T_mod PARAM */,"eSST1A.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  modelica_boolean tmp8;
  tmp8 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = (tmp8?(data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_484(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_485(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_486(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_487(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_488(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_490(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_493(DATA*, threadData_t*);
/*
equation index: 504
indexNonlinear: 3
type: NONLINEAR

vars: {eSST1A.add3_1.y}
eqns: {484, 485, 486, 487, 488, 489, 490, 491, 492, 493}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 504 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,504};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 504 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
$DER.eSST1A.imLeadLag.TF.x_scaled[1] = (eSST1A.imLeadLag.TF.a_end * eSST1A.hV_GATE.p - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.x_scaled[1]) / eSST1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[15] /* der(eSST1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[155] /* eSST1A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */) - ((data->simulationInfo->realParameter[154] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[2] /* eSST1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[153] /* eSST1A.imLeadLag.TF.a[1] PARAM */,"eSST1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
$DER.eSST1A.imLeadLag1.TF.x_scaled[1] = (eSST1A.imLeadLag1.TF.a_end * eSST1A.imLeadLag.y - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.x_scaled[1]) / eSST1A.imLeadLag1.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[16] /* der(eSST1A.imLeadLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[173] /* eSST1A.imLeadLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */) - ((data->simulationInfo->realParameter[172] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[3] /* eSST1A.imLeadLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[171] /* eSST1A.imLeadLag1.TF.a[1] PARAM */,"eSST1A.imLeadLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
$DER.eSST1A.simpleLagLim.state = (eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state) / eSST1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[17] /* der(eSST1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.T_mod PARAM */,"eSST1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
$whenCondition2 = eSST1A.simpleLagLim.state > eSST1A.simpleLagLim.outMax and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */, 17, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 18, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
$whenCondition1 = eSST1A.simpleLagLim.state < eSST1A.simpleLagLim.outMin and eSST1A.simpleLagLim.K * eSST1A.imLeadLag1.y - eSST1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */, 19, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) - data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */, 0.0, 20, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 15, Less);
  data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */ = (tmp4?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */, data->simulationInfo->realParameter[38] /* const2.k PARAM */, 16, Greater);
  data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */ = (tmp5?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
eSST1A.EFD = smooth(0, if eSST1A.lV_GATE.p > eSST1A.add3.y then eSST1A.add3.y else if eSST1A.lV_GATE.p < eSST1A.imGain1.y then eSST1A.imGain1.y else eSST1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp6 = Greater(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[66] /* eSST1A.add3.y variable */);
  tmp8 = (modelica_boolean)tmp6;
  if(tmp8)
  {
    tmp9 = data->localData[0]->realVars[66] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */);
    tmp9 = (tmp7?data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eSST1A.EFD - eSST1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[59] /* eSST1A.EFD variable */ - data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[266] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
$DER.eSST1A.imDerivativeLag.x = eSST1A.imDerivativeLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->localData[0]->realVars[14] /* der(eSST1A.imDerivativeLag.x) STATE_DER */ = data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */;
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
GEN1.V = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[107] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[122] /* pwLine.vs.im variable */, data->localData[0]->realVars[123] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[107] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[116] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[315] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[114] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */) + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[315] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[124] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[326] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[126] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[326] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[136] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[337] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[138] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[337] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[134] /* pwLine1.vs.im variable */, data->localData[0]->realVars[135] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[117] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[315] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[115] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[315] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  tmp11 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[144] /* pwLine3.vr.im variable */, data->localData[0]->realVars[145] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[137] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[337] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[139] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[337] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[146] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[348] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[148] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[348] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[125] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[326] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[127] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[326] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  tmp13 = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp12 * tmp12) + (tmp13 * tmp13));
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[86] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[87] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[132] /* pwLine1.vr.im variable */, data->localData[0]->realVars[133] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[87] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->localData[0]->realVars[147] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[348] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->localData[0]->realVars[149] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[348] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->localData[0]->realVars[84] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[92] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[85] /* gENCLS.Q variable */ = (data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[91] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[92] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 550
type: ALGORITHM

  assert(eSST1A.imLimited1.uMax >= eSST1A.imLimited1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited1.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,11,") < uMin (=");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp14 = GreaterEq(data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */,data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp17));
      tmp18 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp18);
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
equation index: 549
type: ALGORITHM

  assert(eSST1A.imLimited.uMax >= eSST1A.imLimited.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSST1A.imLimited.uMax, 6, 0, true) + ") < uMin (=" + String(eSST1A.imLimited.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,11,") < uMin (=");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp20 = GreaterEq(data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp23));
      tmp24 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp24);
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
equation index: 547
type: WHEN

when {$whenCondition2} then
  reinit(eSST1A.simpleLagLim.state,  eSST1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSST1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSST1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 546
type: ALGORITHM

  assert(eSST1A.add3.y >= eSST1A.imGain1.y, "Input signals are not consistent: limit1 < limit2");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,49,"Input signals are not consistent: limit1 < limit2");
  static int tmp28 = 0;
  {
    tmp26 = GreaterEq(data->localData[0]->realVars[66] /* eSST1A.add3.y variable */,data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */);
    if(!tmp26)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",116,5,116,82,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.add3.y >= eSST1A.imGain1.y", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp27)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_546(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_359(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_360(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_361(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_362(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_364(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_365(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_366(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_367(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_368(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_369(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_460(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_461(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_462(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_463(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_464(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_465(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_467(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_469(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_477(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_478(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_482(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_483(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_504(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_510(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_511(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_512(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_513(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_358(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_359(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_360(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_361(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_362(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_363(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_364(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_365(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_366(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_367(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_368(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_369(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_460(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_461(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_462(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_463(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_464(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_465(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_467(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_469(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_477(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_478(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_482(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_483(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_504(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_507(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_510(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_511(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_512(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_513(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{0bab51f1-6e98-47fd-87ef-617763eff2be}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 154;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 356;
  data->modelData->nParametersInteger = 14;
  data->modelData->nParametersBoolean = 75;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 96;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 27;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 23;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 839;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_setupDataStruc(&data, threadData);
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


