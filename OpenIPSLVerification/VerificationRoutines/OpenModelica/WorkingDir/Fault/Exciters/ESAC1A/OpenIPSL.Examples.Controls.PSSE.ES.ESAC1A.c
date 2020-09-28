/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 347
type: SIMPLE_ASSIGN
eSAC1A.EFD0 = gENROE.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[60] /* eSAC1A.EFD0 variable */ = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.Epq * gENROE.K3d + gENROE.PSIkd * gENROE.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
gENROE.PSIppq = gENROE.PSIkq * gENROE.K4q + gENROE.Epd * gENROE.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 352
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 353
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
$DER.gENROE.delta = gENROE.w_b * gENROE.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->realVars[24] /* der(gENROE.delta) STATE_DER */ = (data->simulationInfo->realParameter[290] /* gENROE.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.x[1] = eSAC1A.imLeadLag.TF.x_scaled[1] / eSAC1A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */,"eSAC1A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 = eSAC1A.rotatingExciterWithDemagnetization.gain.k * eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[76] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 variable */ = (data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.gain.k PARAM */) * (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(eSAC1A.rotatingExciterWithDemagnetization.sISO.y, eSAC1A.rotatingExciterWithDemagnetization.se1.SE1, eSAC1A.rotatingExciterWithDemagnetization.se1.SE2, eSAC1A.rotatingExciterWithDemagnetization.se1.E1, eSAC1A.rotatingExciterWithDemagnetization.se1.E2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[77] /* eSAC1A.rotatingExciterWithDemagnetization.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[171] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */, data->simulationInfo->realParameter[172] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */, data->simulationInfo->realParameter[169] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E1 PARAM */, data->simulationInfo->realParameter[170] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 = eSAC1A.rotatingExciterWithDemagnetization.sISO.y * eSAC1A.rotatingExciterWithDemagnetization.VE.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 variable */ = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[77] /* eSAC1A.rotatingExciterWithDemagnetization.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
$cse7 = cos(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
$cse6 = sin(gENROE.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 362
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_363(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_367(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_371(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_372(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_373(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_374(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_375(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_376(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_377(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_378(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_379(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_380(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_381(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_382(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_383(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_384(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_385(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_407(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_406(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_405(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_404(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_403(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_402(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_401(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_400(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_399(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_398(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_397(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_396(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_395(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_394(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_393(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_392(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_391(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_390(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_389(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_388(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_387(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_386(DATA*, threadData_t*);
/*
equation index: 453
indexNonlinear: 4
type: NONLINEAR

vars: {pwLine1.is.im, constantLoad.p.ii, pwLine1.is.re, pwLine.ir.re, pwLine3.ir.re, pwLine4.is.re, pwLine3.ir.im, pwLine4.is.im, pwLine3.is.re, pwLine3.is.im, pwLine1.ir.im, pwLine1.ir.re, gENCLS.iq, gENCLS.id, pwLine1.vr.re, pwLine1.vr.im, gENROE.iq, gENROE.id, pwLine1.vs.im, pwLine3.vr.im, pwLine3.vr.re, pwLine1.vs.re}
eqns: {363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 407, 406, 405, 404, 403, 402, 401, 400, 399, 398, 397, 396, 395, 394, 393, 392, 391, 390, 389, 388, 387, 386}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 453 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[14] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[15] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[16] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[17] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[18] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[19] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[20] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[21] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,453};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 453 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[14];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[15];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[16];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[17];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[18];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[19];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[20];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[21];
  TRACE_POP
}
/*
equation index: 454
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 455
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[141] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 456
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[143] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 457
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  tmp1 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 458
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[139] /* pwLine3.vr.im variable */, data->localData[0]->realVars[140] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 459
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 460
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->localData[0]->realVars[132] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 461
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[134] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkq = (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) / gENROE.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */,data->simulationInfo->realParameter[251] /* gENROE.Tppq0 PARAM */,"gENROE.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
gENROE.XaqIlq = gENROE.K1q * (gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + $cse5 * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */ = (data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
$DER.gENROE.Epd = (-gENROE.XaqIlq) / gENROE.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[20] /* der(gENROE.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */),data->simulationInfo->realParameter[252] /* gENROE.Tpq0 PARAM */,"gENROE.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
$DER.gENROE.PSIkd = (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) / gENROE.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */,data->simulationInfo->realParameter[250] /* gENROE.Tppd0 PARAM */,"gENROE.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
gENROE.Te = gENROE.PSId * gENROE.iq - gENROE.PSIq * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[99] /* gENROE.Te variable */ = (data->localData[0]->realVars[93] /* gENROE.PSId variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((data->localData[0]->realVars[97] /* gENROE.PSIq variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
$DER.gENROE.w = 0.5 * ((gENROE.pm0 - gENROE.D * gENROE.w) / (1.0 + gENROE.w) - gENROE.Te) / gENROE.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[25] /* der(gENROE.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[283] /* gENROE.pm0 PARAM */ - ((data->simulationInfo->realParameter[207] /* gENROE.D PARAM */) * (data->localData[0]->realVars[12] /* gENROE.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROE.w STATE(1) */,"1.0 + gENROE.w",equationIndexes) - data->localData[0]->realVars[99] /* gENROE.Te variable */,data->simulationInfo->realParameter[213] /* gENROE.H PARAM */,"gENROE.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
eSAC1A.XADIFD = gENROE.K1d * (gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + $cse5 * gENROE.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = (data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
eSAC1A.derivative.u = eSAC1A.rotatingExciterWithDemagnetization.Sum.k1 * eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 + eSAC1A.rotatingExciterWithDemagnetization.Sum.k2 * eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 + eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */ = (data->simulationInfo->realParameter[160] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k1 PARAM */) * (data->localData[0]->realVars[75] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u1 variable */) + (data->simulationInfo->realParameter[161] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k2 PARAM */) * (data->localData[0]->realVars[76] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.u2 variable */) + (data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
$DER.eSAC1A.derivative.x = (eSAC1A.derivative.u - eSAC1A.derivative.x) / eSAC1A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[13] /* der(eSAC1A.derivative.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */,data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
eSAC1A.derivative.y = 0.03 * (eSAC1A.derivative.u - eSAC1A.derivative.x) / eSAC1A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[64] /* eSAC1A.derivative.y variable */ = (0.03) * (DIVISION_SIM(data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC1A.derivative.x STATE(1) */,data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,"eSAC1A.derivative.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 14, LessEq);
  tmp15 = (modelica_boolean)tmp2;
  if(tmp15)
  {
    tmp16 = 1.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.0, 15, Greater);
    RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 16, LessEq);
    tmp13 = (modelica_boolean)(tmp3 && tmp4);
    if(tmp13)
    {
      tmp14 = 1.0 + (-0.577) * (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.433, 17, Greater);
      RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 18, Less);
      tmp11 = (modelica_boolean)(tmp5 && tmp6);
      if(tmp11)
      {
        tmp7 = data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp8 = 0.75 - ((tmp7 * tmp7));
        if(!(tmp8 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp8);
        }
        tmp12 = sqrt(tmp8);
      }
      else
      {
        RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 0.75, 19, GreaterEq);
        RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */, 1.0, 20, LessEq);
        tmp12 = ((tmp9 && tmp10)?(1.732) * (1.0 - data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.rotatingExciterWithDemagnetization.sISO.y * eSAC1A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
$DER.gENROE.Epq = (eSAC1A.EFD - eSAC1A.XADIFD) / gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ - data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[249] /* gENROE.Tpd0 PARAM */,"gENROE.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
gENROE.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  modelica_real tmp17;
  modelica_real tmp18;
  tmp17 = data->localData[0]->realVars[115] /* pwLine.is.im variable */;
  tmp18 = data->localData[0]->realVars[116] /* pwLine.is.re variable */;
  data->localData[0]->realVars[90] /* gENROE.I variable */ = sqrt((tmp17 * tmp17) + (tmp18 * tmp18));
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
gENROE.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[101] /* gENROE.anglei variable */ = atan2((-data->localData[0]->realVars[115] /* pwLine.is.im variable */), (-data->localData[0]->realVars[116] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
gENROE.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[91] /* gENROE.P variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */) + (data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
gENROE.PELEC = gENROE.P / gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[92] /* gENROE.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[91] /* gENROE.P variable */,data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */,"gENROE.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
gENROE.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[98] /* gENROE.Q variable */ = (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
eSAC1A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = data->localData[0]->realVars[118] /* pwLine.vs.re variable */;
  tmp20 = data->localData[0]->realVars[117] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */ = sqrt((tmp19 * tmp19) + (tmp20 * tmp20));
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
$DER.eSAC1A.imSimpleLag.state = (eSAC1A.imSimpleLag.K * eSAC1A.ECOMP - eSAC1A.imSimpleLag.state) / eSAC1A.imSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[15] /* der(eSAC1A.imSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.K PARAM */) * (data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */) - data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[145] /* eSAC1A.imSimpleLag.T_mod PARAM */,"eSAC1A.imSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
eSAC1A.DiffV.u2 = if abs(eSAC1A.imSimpleLag.T) <= 1e-15 then eSAC1A.ECOMP * eSAC1A.imSimpleLag.K else eSAC1A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  modelica_boolean tmp21;
  tmp21 = LessEq(fabs(data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSAC1A.DiffV.u2 variable */ = (tmp21?(data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */) * (data->simulationInfo->realParameter[143] /* eSAC1A.imSimpleLag.K PARAM */):data->localData[0]->realVars[2] /* eSAC1A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
eSAC1A.DiffV.y = eSAC1A.DiffV.k1 * eSAC1A.VoltageReference.k + eSAC1A.DiffV.k2 * eSAC1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->localData[0]->realVars[57] /* eSAC1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSAC1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[114] /* eSAC1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSAC1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSAC1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
eSAC1A.add3_1.y = eSAC1A.add3_1.k1 * const.k + eSAC1A.add3_1.k2 * eSAC1A.DiffV.y + eSAC1A.add3_1.k3 * eSAC1A.derivative.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */ = (data->simulationInfo->realParameter[116] /* eSAC1A.add3_1.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[117] /* eSAC1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSAC1A.DiffV.y variable */) + (data->simulationInfo->realParameter[118] /* eSAC1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[64] /* eSAC1A.derivative.y variable */);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
$DER.eSAC1A.imLeadLag.TF.x_scaled[1] = (eSAC1A.imLeadLag.TF.a_end * eSAC1A.add3_1.y - eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.x_scaled[1]) / eSAC1A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[14] /* der(eSAC1A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */) - ((data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[1] /* eSAC1A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */,"eSAC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.y = (eSAC1A.imLeadLag.TF.bb[2] - eSAC1A.imLeadLag.TF.a[2] * eSAC1A.imLeadLag.TF.d) * eSAC1A.imLeadLag.TF.x[1] + eSAC1A.imLeadLag.TF.d * eSAC1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->localData[0]->realVars[68] /* eSAC1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[67] /* eSAC1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.y = if abs(eSAC1A.imLeadLag.T1 - eSAC1A.imLeadLag.T2) < 1e-15 then eSAC1A.imLeadLag.K * eSAC1A.add3_1.y else eSAC1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  modelica_boolean tmp22;
  tmp22 = Less(fabs(data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */ = (tmp22?(data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[62] /* eSAC1A.add3_1.y variable */):data->localData[0]->realVars[68] /* eSAC1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
$DER.eSAC1A.simpleLagLim.state = (eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state) / eSAC1A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[17] /* der(eSAC1A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.T_mod PARAM */,"eSAC1A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
eSAC1A.hV_GATE.n1 = if abs(eSAC1A.simpleLagLim.T) <= 1e-15 then max(min(eSAC1A.imLeadLag.y * eSAC1A.simpleLagLim.K, eSAC1A.simpleLagLim.outMax), eSAC1A.simpleLagLim.outMin) else max(min(eSAC1A.simpleLagLim.state, eSAC1A.simpleLagLim.outMax), eSAC1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  modelica_boolean tmp23;
  tmp23 = LessEq(fabs(data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */ = (tmp23?fmax(fmin((data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) * (data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
eSAC1A.hV_GATE.p = if eSAC1A.hV_GATE.n1 < const1.k then const1.k else eSAC1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  modelica_boolean tmp24;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 21, Less);
  data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */ = (tmp24?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[65] /* eSAC1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
eSAC1A.lV_GATE.p = if const2.k > eSAC1A.hV_GATE.p then eSAC1A.hV_GATE.p else const2.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  modelica_boolean tmp25;
  RELATIONHYSTERESIS(tmp25, data->simulationInfo->realParameter[38] /* const2.k PARAM */, data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */, 22, Greater);
  data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */ = (tmp25?data->localData[0]->realVars[66] /* eSAC1A.hV_GATE.p variable */:data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  TRACE_POP
}
/*
equation index: 494
type: SIMPLE_ASSIGN
eSAC1A.limiter1.y = smooth(0, if eSAC1A.lV_GATE.p > eSAC1A.limiter1.uMax then eSAC1A.limiter1.uMax else if eSAC1A.lV_GATE.p < eSAC1A.limiter1.uMin then eSAC1A.limiter1.uMin else eSAC1A.lV_GATE.p)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp26 = Greater(data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */;
  }
  else
  {
    tmp27 = Less(data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    tmp29 = (tmp27?data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */:data->localData[0]->realVars[70] /* eSAC1A.lV_GATE.p variable */);
  }
  data->localData[0]->realVars[71] /* eSAC1A.limiter1.y variable */ = tmp29;
  TRACE_POP
}
/*
equation index: 495
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.feedback.y = eSAC1A.limiter1.y - eSAC1A.derivative.u
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */ = data->localData[0]->realVars[71] /* eSAC1A.limiter1.y variable */ - data->localData[0]->realVars[63] /* eSAC1A.derivative.u variable */;
  TRACE_POP
}
/*
equation index: 496
type: SIMPLE_ASSIGN
$DER.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = if eSAC1A.rotatingExciterWithDemagnetization.sISO.y < eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y < 0.0 or eSAC1A.rotatingExciterWithDemagnetization.sISO.y > eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax and eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y > 0.0 then 0.0 else eSAC1A.rotatingExciterWithDemagnetization.sISO.k * eSAC1A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  RELATIONHYSTERESIS(tmp30, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[167] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMin PARAM */, 23, Less);
  RELATIONHYSTERESIS(tmp31, (data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, 24, Less);
  RELATIONHYSTERESIS(tmp32, data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */, data->simulationInfo->realParameter[166] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.outMax PARAM */, 25, Greater);
  RELATIONHYSTERESIS(tmp33, (data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */), 0.0, 26, Greater);
  data->localData[0]->realVars[16] /* der(eSAC1A.rotatingExciterWithDemagnetization.sISO.y) STATE_DER */ = (((tmp30 && tmp31) || (tmp32 && tmp33))?0.0:(data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */) * (data->localData[0]->realVars[78] /* eSAC1A.rotatingExciterWithDemagnetization.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 497
type: SIMPLE_ASSIGN
$whenCondition2 = eSAC1A.simpleLagLim.state > eSAC1A.simpleLagLim.outMax and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  RELATIONHYSTERESIS(tmp34, data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */, 27, Greater);
  RELATIONHYSTERESIS(tmp35, (data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp34 && tmp35);
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
$whenCondition1 = eSAC1A.simpleLagLim.state < eSAC1A.simpleLagLim.outMin and eSAC1A.simpleLagLim.K * eSAC1A.imLeadLag.y - eSAC1A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  RELATIONHYSTERESIS(tmp36, data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */, 29, Less);
  RELATIONHYSTERESIS(tmp37, (data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[69] /* eSAC1A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp36 && tmp37);
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
GEN1.V = eSAC1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
gENROE.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->localData[0]->realVars[102] /* gENROE.anglev variable */ = atan2(data->localData[0]->realVars[117] /* pwLine.vs.im variable */, data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROE.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[102] /* gENROE.anglev variable */);
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[111] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 503
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[109] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */) + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[131] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[133] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[129] /* pwLine1.vs.im variable */, data->localData[0]->realVars[130] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->localData[0]->realVars[112] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[110] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[119] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->localData[0]->realVars[121] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->localData[0]->realVars[142] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[144] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  modelica_real tmp38;
  modelica_real tmp39;
  tmp38 = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  tmp39 = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp38 * tmp38) + (tmp39 * tmp39));
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[81] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[82] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[127] /* pwLine1.vr.im variable */, data->localData[0]->realVars[128] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[82] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[120] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[122] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[79] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[87] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[86] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[80] /* gENCLS.Q variable */ = (data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[86] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[87] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 524
type: ALGORITHM

  assert(eSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC1A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC1A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,11,") < uMin (=");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp40 = GreaterEq(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp43));
      tmp44 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp44);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.limiter1.uMax >= eSAC1A.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 522
type: WHEN

when {$whenCondition2} then
  reinit(eSAC1A.simpleLagLim.state,  eSAC1A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC1A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC1A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_522(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_350(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_351(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_352(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_353(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_355(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_360(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_361(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_362(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_468(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_348(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_349(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_350(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_351(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_352(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_353(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_354(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_355(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_356(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_357(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_358(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_359(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_360(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_361(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_362(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_468(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{34cff503-368b-42a6-bd1e-bdfc5be72241}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 149;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 339;
  data->modelData->nParametersInteger = 11;
  data->modelData->nParametersBoolean = 73;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 101;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 29;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 31;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 8;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 798;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 5;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_setupDataStruc(&data, threadData);
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


