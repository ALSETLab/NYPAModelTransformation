/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performSimulation
#define prefixedName_updateContinuousSystem OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 367
type: SIMPLE_ASSIGN
eSAC2A.EFD0 = gENROU.efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[66] /* eSAC2A.EFD0 variable */ = data->simulationInfo->realParameter[298] /* gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin = eSAC2A.lowLim.k
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[88] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMin variable */ = data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */;
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
$DER.gENCLS.delta = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[18] /* der(gENCLS.delta) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
$DER.gENCLS.eq = 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[19] /* der(gENCLS.eq) STATE_DER */ = 0.0;
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.Epq * gENROU.K3d + gENROU.PSIkd * gENROU.K4d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ = (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[246] /* gENROU.K3d PARAM */) + (data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[248] /* gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
gENROU.PSIppq = gENROU.PSIkq * gENROU.K4q + gENROU.Epd * gENROU.K3q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[107] /* gENROU.PSIppq variable */ = (data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[249] /* gENROU.K4q PARAM */) + (data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[247] /* gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[106] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[107] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[105] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
$cse5 = OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[29] /* $cse5 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[105] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[268] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[269] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
$DER.gENROU.delta = gENROU.w_b * gENROU.w
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[24] /* der(gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[312] /* gENROU.w_b PARAM */) * (data->localData[0]->realVars[12] /* gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.x[1] = eSAC2A.imLeadLag.TF.x_scaled[1] / eSAC2A.imLeadLag.TF.a_end
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[73] /* eSAC2A.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[148] /* eSAC2A.imLeadLag.TF.a_end PARAM */,"eSAC2A.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
$cse7 = cos(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[31] /* $cse7 variable */ = cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
$cse6 = sin(gENROU.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[30] /* $cse6 variable */ = sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[27] /* $cse2 variable */ = cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[26] /* $cse1 variable */ = sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_381(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_382(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_383(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_384(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_385(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_386(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_387(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_388(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_389(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_390(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_391(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_392(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_393(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_394(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_395(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_396(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_397(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_398(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_399(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_400(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_401(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_402(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_403(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_425(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_424(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_423(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_422(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_421(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_420(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_419(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_418(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_417(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_416(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_415(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_414(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_413(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_412(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_411(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_410(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_409(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_408(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_407(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_406(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_405(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_404(DATA*, threadData_t*);
/*
equation index: 471
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine1.is.im, pwLine.ir.im, pwLine4.is.im, pwLine3.ir.im, pwLine4.is.re, pwLine3.ir.re, pwLine3.is.im, pwLine1.is.re, pwLine3.is.re, pwLine.ir.re, pwLine4.ir.im, pwLine1.ir.re, gENCLS.id, gENCLS.iq, pwLine1.vr.re, pwLine1.vr.im, gENROU.id, gENROU.iq, pwLine3.vr.im, pwLine1.vs.re, pwLine1.vs.im, pwLine3.vr.re}
eqns: {381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 425, 424, 423, 422, 421, 420, 419, 418, 417, 416, 415, 414, 413, 412, 411, 410, 409, 408, 407, 406, 405, 404}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 471 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[136] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[124] /* pwLine.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[158] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[146] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[159] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[147] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[148] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[137] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[149] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[125] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[156] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[135] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[114] /* gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[115] /* gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,471};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 471 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[136] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[124] /* pwLine.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[158] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[146] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[159] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[147] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[148] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[137] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[149] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[125] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[156] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[135] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[114] /* gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[115] /* gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkd = (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) / gENROU.Tppd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[22] /* der(gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[272] /* gENROU.Tppd0 PARAM */,"gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
eSAC2A.XADIFD = gENROU.K1d * (gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id - gENROU.PSIkd) + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + $cse5 * gENROU.PSIppd
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = (data->simulationInfo->realParameter[242] /* gENROU.K1d PARAM */) * (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[114] /* gENROU.id variable */) - data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[114] /* gENROU.id variable */) * (data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * (data->localData[0]->realVars[106] /* gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
eSAC2A.DiffV1.y = eSAC2A.DiffV1.k1 * eSAC2A.FEMAX.k + eSAC2A.DiffV1.k2 * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[58] /* eSAC2A.DiffV1.y variable */ = (data->simulationInfo->realParameter[85] /* eSAC2A.DiffV1.k1 PARAM */) * (data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */) + (data->simulationInfo->realParameter[86] /* eSAC2A.DiffV1.k2 PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
eSAC2A.ECOMP = sqrt(pwLine.vs.re ^ 2.0 + pwLine.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[129] /* pwLine.vs.re variable */;
  tmp1 = data->localData[0]->realVars[128] /* pwLine.vs.im variable */;
  data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
$DER.eSAC2A.imSimpleLag.state = (eSAC2A.imSimpleLag.K * eSAC2A.ECOMP - eSAC2A.imSimpleLag.state) / eSAC2A.imSimpleLag.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[15] /* der(eSAC2A.imSimpleLag.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[160] /* eSAC2A.imSimpleLag.K PARAM */) * (data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */) - data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */,data->simulationInfo->realParameter[162] /* eSAC2A.imSimpleLag.T_mod PARAM */,"eSAC2A.imSimpleLag.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
eSAC2A.DiffV.u2 = if abs(eSAC2A.imSimpleLag.T) <= 1e-15 then eSAC2A.ECOMP * eSAC2A.imSimpleLag.K else eSAC2A.imSimpleLag.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  modelica_boolean tmp2;
  tmp2 = LessEq(fabs(data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */ = (tmp2?(data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */) * (data->simulationInfo->realParameter[160] /* eSAC2A.imSimpleLag.K PARAM */):data->localData[0]->realVars[2] /* eSAC2A.imSimpleLag.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
eSAC2A.DiffV.y = eSAC2A.DiffV.k1 * eSAC2A.VoltageReference.k + eSAC2A.DiffV.k2 * eSAC2A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[57] /* eSAC2A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSAC2A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[127] /* eSAC2A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSAC2A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSAC2A.DiffV.u2 variable */);
  TRACE_POP
}
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_480(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_481(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_482(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_483(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_484(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_485(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_486(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_490(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_491(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_492(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_493(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_494(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_498(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_499(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_500(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_501(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_502(DATA*, threadData_t*);
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_503(DATA*, threadData_t*);
/*
equation index: 504
indexNonlinear: 3
type: NONLINEAR

vars: {eSAC2A.rectifierCommutationVoltageDrop.V_EX}
eqns: {480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503}
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_504(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,504};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 504 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.V_EX variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
$DER.eSAC2A.derivative.x = (eSAC2A.derivative.u - eSAC2A.derivative.x) / eSAC2A.derivative.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[13] /* der(eSAC2A.derivative.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[69] /* eSAC2A.derivative.u variable */ - data->localData[0]->realVars[0] /* eSAC2A.derivative.x STATE(1) */,data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */,"eSAC2A.derivative.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
$DER.gENROU.Epq = (eSAC2A.EFD - eSAC2A.XADIFD) / gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[21] /* der(gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ - data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[271] /* gENROU.Tpd0 PARAM */,"gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
$whenCondition3 = eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->booleanVars[2] /* $whenCondition3 DISCRETE */ = data->localData[0]->booleanVars[6] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.Reinit DISCRETE */;
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.x = if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper then 0.0 else if eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower then 0.0 else eSAC2A.rotatingExciterWithDemagnetization.feedback.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->localData[0]->realVars[89] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.x variable */ = (data->localData[0]->booleanVars[5] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachUpper DISCRETE */?0.0:(data->localData[0]->booleanVars[4] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.ReachLower DISCRETE */?0.0:data->localData[0]->realVars[85] /* eSAC2A.rotatingExciterWithDemagnetization.feedback.y variable */));
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
$DER.eSAC2A.rotatingExciterWithDemagnetization.sISO.w = eSAC2A.rotatingExciterWithDemagnetization.sISO.K * eSAC2A.rotatingExciterWithDemagnetization.sISO.x
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[16] /* der(eSAC2A.rotatingExciterWithDemagnetization.sISO.w) STATE_DER */ = (data->simulationInfo->realParameter[185] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.K PARAM */) * (data->localData[0]->realVars[89] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.x variable */);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
$DER.eSAC2A.simpleLagLim.state = (eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state) / eSAC2A.simpleLagLim.T_mod
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[17] /* der(eSAC2A.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[197] /* eSAC2A.simpleLagLim.T_mod PARAM */,"eSAC2A.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
$whenCondition2 = eSAC2A.simpleLagLim.state > eSAC2A.simpleLagLim.outMax and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state < 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */, 27, Greater);
  RELATIONHYSTERESIS(tmp1, (data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, 28, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ = (tmp0 && tmp1);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
$whenCondition1 = eSAC2A.simpleLagLim.state < eSAC2A.simpleLagLim.outMin and eSAC2A.simpleLagLim.K * eSAC2A.imLeadLag.y - eSAC2A.simpleLagLim.state > 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */, 29, Less);
  RELATIONHYSTERESIS(tmp3, (data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[75] /* eSAC2A.imLeadLag.y variable */) - data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */, 0.0, 30, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp2 && tmp3);
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
$DER.eSAC2A.imLeadLag.TF.x_scaled[1] = (eSAC2A.imLeadLag.TF.a_end * eSAC2A.add3_1.y - eSAC2A.imLeadLag.TF.a[2] * eSAC2A.imLeadLag.TF.x_scaled[1]) / eSAC2A.imLeadLag.TF.a[1]
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[14] /* der(eSAC2A.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[148] /* eSAC2A.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[68] /* eSAC2A.add3_1.y variable */) - ((data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[1] /* eSAC2A.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[146] /* eSAC2A.imLeadLag.TF.a[1] PARAM */,"eSAC2A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
GEN1.V = eSAC2A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->localData[0]->realVars[36] /* GEN1.V variable */ = data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
gENROU.anglev = atan2(pwLine.vs.im, pwLine.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[113] /* gENROU.anglev variable */ = atan2(data->localData[0]->realVars[128] /* pwLine.vs.im variable */, data->localData[0]->realVars[129] /* pwLine.vs.re variable */);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
GEN1.angle = 57.29577951308232 * gENROU.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[37] /* GEN1.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[113] /* gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
$DER.gENROU.PSIkq = (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) / gENROU.Tppq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[23] /* der(gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[273] /* gENROU.Tppq0 PARAM */,"gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
gENROU.XaqIlq = gENROU.K1q * (gENROU.Epd + (gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) + gENROU.Epd + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + $cse5 * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[111] /* gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[243] /* gENROU.K1q PARAM */) * (data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[115] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */) + (data->localData[0]->realVars[29] /* $cse5 variable */) * ((data->localData[0]->realVars[107] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
$DER.gENROU.Epd = (-gENROU.XaqIlq) / gENROU.Tpq0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[20] /* der(gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[111] /* gENROU.XaqIlq variable */),data->simulationInfo->realParameter[274] /* gENROU.Tpq0 PARAM */,"gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
gENROU.Te = gENROU.PSId * gENROU.iq - gENROU.PSIq * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[110] /* gENROU.Te variable */ = (data->localData[0]->realVars[104] /* gENROU.PSId variable */) * (data->localData[0]->realVars[115] /* gENROU.iq variable */) - ((data->localData[0]->realVars[108] /* gENROU.PSIq variable */) * (data->localData[0]->realVars[114] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
$DER.gENROU.w = 0.5 * ((gENROU.pm0 - gENROU.D * gENROU.w) / (1.0 + gENROU.w) - gENROU.Te) / gENROU.H
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[25] /* der(gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[305] /* gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[229] /* gENROU.D PARAM */) * (data->localData[0]->realVars[12] /* gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[12] /* gENROU.w STATE(1) */,"1.0 + gENROU.w",equationIndexes) - data->localData[0]->realVars[110] /* gENROU.Te variable */,data->simulationInfo->realParameter[235] /* gENROU.H PARAM */,"gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
gENROU.P = pwLine.vs.im * pwLine.is.im + pwLine.vs.re * pwLine.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[102] /* gENROU.P variable */ = (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */) + (data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
gENROU.PELEC = gENROU.P / gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[103] /* gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[102] /* gENROU.P variable */,data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */,"gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
gENROU.Q = pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[109] /* gENROU.Q variable */ = (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */));
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
gENROU.I = sqrt(pwLine.is.im ^ 2.0 + pwLine.is.re ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[126] /* pwLine.is.im variable */;
  tmp5 = data->localData[0]->realVars[127] /* pwLine.is.re variable */;
  data->localData[0]->realVars[101] /* gENROU.I variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
gENROU.anglei = atan2(-pwLine.is.im, -pwLine.is.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[112] /* gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[126] /* pwLine.is.im variable */), (-data->localData[0]->realVars[127] /* pwLine.is.re variable */));
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
pwLine.Q12 = (pwLine.vs.im * pwLine.is.re - pwLine.vs.re * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[122] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
pwLine.P12 = (pwLine.vs.re * pwLine.is.re + pwLine.vs.im * pwLine.is.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[120] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[129] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[127] /* pwLine.is.re variable */) + (data->localData[0]->realVars[128] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[126] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[320] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
pwLine3.P12 = (pwLine1.vs.re * pwLine3.is.re + pwLine1.vs.im * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[142] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[342] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
pwLine3.Q12 = (pwLine1.vs.im * pwLine3.is.re - pwLine1.vs.re * pwLine3.is.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[144] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[149] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[148] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[342] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
constantLoad.angle = atan2(pwLine1.vs.im, pwLine1.vs.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[50] /* constantLoad.angle variable */ = atan2(data->localData[0]->realVars[140] /* pwLine1.vs.im variable */, data->localData[0]->realVars[141] /* pwLine1.vs.re variable */);
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
LOAD.angle = 57.29577951308232 * constantLoad.angle
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[45] /* LOAD.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
pwLine.Q21 = (pwLine1.vs.re * pwLine.ir.im - pwLine1.vs.im * pwLine.ir.re) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[123] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[320] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
pwLine.P21 = ((-pwLine1.vs.re) * pwLine.ir.re - pwLine1.vs.im * pwLine.ir.im) * pwLine.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[121] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[141] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[125] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[124] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[320] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
LOAD.V = constantLoad.v
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[44] /* LOAD.V variable */ = data->localData[0]->realVars[55] /* constantLoad.v variable */;
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
pwLine1.P12 = (pwLine1.vs.re * pwLine1.is.re + pwLine1.vs.im * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[130] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[331] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
pwLine1.Q12 = (pwLine1.vs.im * pwLine1.is.re - pwLine1.vs.re * pwLine1.is.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[132] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[137] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[136] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-pwLine3.vr.re) * pwLine3.ir.re - pwLine3.vr.im * pwLine3.ir.im) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->localData[0]->realVars[143] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[151] /* pwLine3.vr.re variable */)) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[342] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
pwLine3.Q21 = (pwLine3.vr.re * pwLine3.ir.im - pwLine3.vr.im * pwLine3.ir.re) * pwLine3.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[145] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[146] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[147] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[342] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
FAULT.V = sqrt(pwLine3.vr.re ^ 2.0 + pwLine3.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[151] /* pwLine3.vr.re variable */;
  tmp7 = data->localData[0]->realVars[150] /* pwLine3.vr.im variable */;
  data->localData[0]->realVars[32] /* FAULT.V variable */ = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
$cse4 = atan2(pwLine3.vr.im, pwLine3.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[28] /* $cse4 variable */ = atan2(data->localData[0]->realVars[150] /* pwLine3.vr.im variable */, data->localData[0]->realVars[151] /* pwLine3.vr.re variable */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
FAULT.angle = 57.29577951308232 * $cse4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->localData[0]->realVars[33] /* FAULT.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[28] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
pwLine4.P12 = (pwLine3.vr.re * pwLine4.is.re + pwLine3.vr.im * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->localData[0]->realVars[152] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[353] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
pwLine4.Q12 = (pwLine3.vr.im * pwLine4.is.re - pwLine3.vr.re * pwLine4.is.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->localData[0]->realVars[154] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[150] /* pwLine3.vr.im variable */) * (data->localData[0]->realVars[159] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[151] /* pwLine3.vr.re variable */) * (data->localData[0]->realVars[158] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[353] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-pwLine1.vr.re) * pwLine4.ir.re - pwLine1.vr.im * pwLine4.ir.im) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[153] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[353] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
pwLine4.Q21 = (pwLine1.vr.re * pwLine4.ir.im - pwLine1.vr.im * pwLine4.ir.re) * pwLine4.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->localData[0]->realVars[155] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[156] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[157] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[353] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
GEN2.V = sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->localData[0]->realVars[139] /* pwLine1.vr.re variable */;
  tmp9 = data->localData[0]->realVars[138] /* pwLine1.vr.im variable */;
  data->localData[0]->realVars[40] /* GEN2.V variable */ = sqrt((tmp8 * tmp8) + (tmp9 * tmp9));
  TRACE_POP
}
/*
equation index: 548
type: SIMPLE_ASSIGN
gENCLS.V = GEN2.V
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->localData[0]->realVars[92] /* gENCLS.V variable */ = data->localData[0]->realVars[40] /* GEN2.V variable */;
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
gENCLS.anglev = atan2(pwLine1.vr.im, pwLine1.vr.re)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->localData[0]->realVars[93] /* gENCLS.anglev variable */ = atan2(data->localData[0]->realVars[138] /* pwLine1.vr.im variable */, data->localData[0]->realVars[139] /* pwLine1.vr.re variable */);
  TRACE_POP
}
/*
equation index: 550
type: SIMPLE_ASSIGN
GEN2.angle = 57.29577951308232 * gENCLS.anglev
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->localData[0]->realVars[41] /* GEN2.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[93] /* gENCLS.anglev variable */);
  TRACE_POP
}
/*
equation index: 551
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-pwLine1.vr.re) * pwLine1.ir.re - pwLine1.vr.im * pwLine1.ir.im) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->localData[0]->realVars[131] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[331] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
pwLine1.Q21 = (pwLine1.vr.re * pwLine1.ir.im - pwLine1.vr.im * pwLine1.ir.re) * pwLine1.S_b
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->localData[0]->realVars[133] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[134] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[135] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[331] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
gENCLS.P = (-pwLine1.vr.re) * gENCLS.p.ir - pwLine1.vr.im * gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->localData[0]->realVars[90] /* gENCLS.P variable */ = ((-data->localData[0]->realVars[139] /* pwLine1.vr.re variable */)) * (data->localData[0]->realVars[98] /* gENCLS.p.ir variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[97] /* gENCLS.p.ii variable */));
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
gENCLS.Q = pwLine1.vr.re * gENCLS.p.ii - pwLine1.vr.im * gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->localData[0]->realVars[91] /* gENCLS.Q variable */ = (data->localData[0]->realVars[139] /* pwLine1.vr.re variable */) * (data->localData[0]->realVars[97] /* gENCLS.p.ii variable */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.im variable */) * (data->localData[0]->realVars[98] /* gENCLS.p.ir variable */));
  TRACE_POP
}
/*
equation index: 559
type: ALGORITHM

  assert(eSAC2A.limiter1.uMax >= eSAC2A.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(eSAC2A.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(eSAC2A.limiter1.uMin, 6, 0, true) + ")");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,11,") < uMin (=");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp10 = GreaterEq(data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */,data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp13));
      tmp14 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp14);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Nonlinear.mo",19,9,20,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.limiter1.uMax >= eSAC2A.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 557
type: WHEN

when {$whenCondition2} then
  reinit(eSAC2A.simpleLagLim.state,  eSAC2A.simpleLagLim.outMax);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  if((data->localData[0]->booleanVars[1] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.simpleLagLim.state = %g", data->localData[0]->realVars[4] /* eSAC2A.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 556
type: WHEN

when {$whenCondition3} then
  reinit(eSAC2A.rotatingExciterWithDemagnetization.sISO.w,  eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar);
end when;
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  if((data->localData[0]->booleanVars[2] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */ = data->localData[0]->realVars[86] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.initVar variable */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit eSAC2A.rotatingExciterWithDemagnetization.sISO.w = %g", data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.w STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 555
type: ALGORITHM

  assert(eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax > eSAC2A.lowLim.k, "Upper limit must be greater than lower limit");
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,44,"Upper limit must be greater than lower limit");
  static int tmp18 = 0;
  {
    tmp16 = Greater(data->localData[0]->realVars[87] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.outMax variable */,data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */);
    if(!tmp16)
    {
      {
        FILE_INFO info = {"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/NonElectrical/Continuous/IntegratorLimVar.mo",66,3,69,26,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.rotatingExciterWithDemagnetization.sISO.outMax > eSAC2A.lowLim.k", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp17)));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_555(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_369(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_370(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_371(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_372(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_374(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_504(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_505(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_517(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_519(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_520(DATA* data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_521(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_369(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_370(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_371(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_372(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_374(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_376(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_377(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_378(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_380(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_476(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_478(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_504(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_505(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_517(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_519(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_520(data, threadData);

    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_521(data, threadData);
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_callback = {
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_performQSSSimulation,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateContinuousSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_callExternalObjectDestructors,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initializeStateSets,
   #else
   NULL,
   #endif
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initializeDAEmodeData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionODE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionAlgebraics,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionDAE,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionLocalKnownVars,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_init,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_input_function_updateStartValues,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_data_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_output_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setc_function,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_storeDelayed,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundVariableAttributes,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionInitialEquations_lambda0,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionRemovedInitialEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_checkForAsserts,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossingsEquations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_ZeroCrossings,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_updateRelations,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_zeroCrossingDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_relationDescription,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_initSample,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_A,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_B,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_C,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_D,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_F,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianA,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianB,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianC,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianD,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianF,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacB_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacC_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacD_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacF_column,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_linear_model_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_linear_model_datarecovery_frame,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_mayer,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_lagrange,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_pickUpBoundsForInputsInOptimization,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setInputData,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_getTimeGrid,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_symbolicInlineSystem,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_initSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_updateSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_function_equationsSynchronous,
   OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_inputNames,
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
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A";
  data->modelData->modelFilePrefix = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES";
  data->modelData->modelGUID = "{419bee00-c522-4cee-89f7-c00ac8a6db2b}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_init.c"
    ;
  static const char contents_info[] =
    #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 13;
  data->modelData->nVariablesReal = 160;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 8;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 361;
  data->modelData->nParametersInteger = 10;
  data->modelData->nParametersBoolean = 71;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 112;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 32;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 31;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 842;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 4;
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
  
    OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_setupDataStruc(&data, threadData);
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


