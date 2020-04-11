/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1410
type: SIMPLE_ASSIGN
$START.pSS2A.derivativeLag3.TF.x[1] = pSS2A.derivativeLag3.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  data->modelData->realVarsData[163].attribute /* pSS2A.derivativeLag3.TF.x[1] variable */.start = data->simulationInfo->realParameter[435] /* pSS2A.derivativeLag3.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[163] /* pSS2A.derivativeLag3.TF.x[1] variable */ = data->modelData->realVarsData[163].attribute /* pSS2A.derivativeLag3.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[163].info /* pSS2A.derivativeLag3.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[163] /* pSS2A.derivativeLag3.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
$START.pSS2A.derivativeLag2.TF.x[1] = pSS2A.derivativeLag2.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  data->modelData->realVarsData[160].attribute /* pSS2A.derivativeLag2.TF.x[1] variable */.start = data->simulationInfo->realParameter[418] /* pSS2A.derivativeLag2.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[160] /* pSS2A.derivativeLag2.TF.x[1] variable */ = data->modelData->realVarsData[160].attribute /* pSS2A.derivativeLag2.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[160].info /* pSS2A.derivativeLag2.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[160] /* pSS2A.derivativeLag2.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
$START.pSS2A.derivativeLag1.TF.x[1] = pSS2A.derivativeLag1.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  data->modelData->realVarsData[158].attribute /* pSS2A.derivativeLag1.TF.x[1] variable */.start = data->simulationInfo->realParameter[401] /* pSS2A.derivativeLag1.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[158] /* pSS2A.derivativeLag1.TF.x[1] variable */ = data->modelData->realVarsData[158].attribute /* pSS2A.derivativeLag1.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[158].info /* pSS2A.derivativeLag1.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[158] /* pSS2A.derivativeLag1.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
$START.pSS2A.derivativeLag.TF.x[1] = pSS2A.derivativeLag.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  data->modelData->realVarsData[155].attribute /* pSS2A.derivativeLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[384] /* pSS2A.derivativeLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[155] /* pSS2A.derivativeLag.TF.x[1] variable */ = data->modelData->realVarsData[155].attribute /* pSS2A.derivativeLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[155].info /* pSS2A.derivativeLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[155] /* pSS2A.derivativeLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
$START.pSS2A.rampTrackingFilter.TF2[1].x[1] = pSS2A.rampTrackingFilter.TF2[1].x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  data->modelData->realVarsData[175].attribute /* pSS2A.rampTrackingFilter.TF2[1].x[1] variable */.start = data->simulationInfo->realParameter[497] /* pSS2A.rampTrackingFilter.TF2[1].x_start[1] PARAM */;
    data->localData[0]->realVars[175] /* pSS2A.rampTrackingFilter.TF2[1].x[1] variable */ = data->modelData->realVarsData[175].attribute /* pSS2A.rampTrackingFilter.TF2[1].x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[175].info /* pSS2A.rampTrackingFilter.TF2[1].x[1] */.name, (modelica_real) data->localData[0]->realVars[175] /* pSS2A.rampTrackingFilter.TF2[1].x[1] variable */);
  TRACE_POP
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
$START.pSS2A.rampTrackingFilter.TF1[5].x[1] = pSS2A.rampTrackingFilter.TF1[5].x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  data->modelData->realVarsData[169].attribute /* pSS2A.rampTrackingFilter.TF1[5].x[1] variable */.start = data->simulationInfo->realParameter[483] /* pSS2A.rampTrackingFilter.TF1[5].x_start[1] PARAM */;
    data->localData[0]->realVars[169] /* pSS2A.rampTrackingFilter.TF1[5].x[1] variable */ = data->modelData->realVarsData[169].attribute /* pSS2A.rampTrackingFilter.TF1[5].x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[169].info /* pSS2A.rampTrackingFilter.TF1[5].x[1] */.name, (modelica_real) data->localData[0]->realVars[169] /* pSS2A.rampTrackingFilter.TF1[5].x[1] variable */);
  TRACE_POP
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
$START.pSS2A.rampTrackingFilter.TF1[4].x[1] = pSS2A.rampTrackingFilter.TF1[4].x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  data->modelData->realVarsData[168].attribute /* pSS2A.rampTrackingFilter.TF1[4].x[1] variable */.start = data->simulationInfo->realParameter[482] /* pSS2A.rampTrackingFilter.TF1[4].x_start[1] PARAM */;
    data->localData[0]->realVars[168] /* pSS2A.rampTrackingFilter.TF1[4].x[1] variable */ = data->modelData->realVarsData[168].attribute /* pSS2A.rampTrackingFilter.TF1[4].x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[168].info /* pSS2A.rampTrackingFilter.TF1[4].x[1] */.name, (modelica_real) data->localData[0]->realVars[168] /* pSS2A.rampTrackingFilter.TF1[4].x[1] variable */);
  TRACE_POP
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
$START.pSS2A.rampTrackingFilter.TF1[3].x[1] = pSS2A.rampTrackingFilter.TF1[3].x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  data->modelData->realVarsData[167].attribute /* pSS2A.rampTrackingFilter.TF1[3].x[1] variable */.start = data->simulationInfo->realParameter[481] /* pSS2A.rampTrackingFilter.TF1[3].x_start[1] PARAM */;
    data->localData[0]->realVars[167] /* pSS2A.rampTrackingFilter.TF1[3].x[1] variable */ = data->modelData->realVarsData[167].attribute /* pSS2A.rampTrackingFilter.TF1[3].x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[167].info /* pSS2A.rampTrackingFilter.TF1[3].x[1] */.name, (modelica_real) data->localData[0]->realVars[167] /* pSS2A.rampTrackingFilter.TF1[3].x[1] variable */);
  TRACE_POP
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
$START.pSS2A.rampTrackingFilter.TF1[2].x[1] = pSS2A.rampTrackingFilter.TF1[2].x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  data->modelData->realVarsData[166].attribute /* pSS2A.rampTrackingFilter.TF1[2].x[1] variable */.start = data->simulationInfo->realParameter[480] /* pSS2A.rampTrackingFilter.TF1[2].x_start[1] PARAM */;
    data->localData[0]->realVars[166] /* pSS2A.rampTrackingFilter.TF1[2].x[1] variable */ = data->modelData->realVarsData[166].attribute /* pSS2A.rampTrackingFilter.TF1[2].x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[166].info /* pSS2A.rampTrackingFilter.TF1[2].x[1] */.name, (modelica_real) data->localData[0]->realVars[166] /* pSS2A.rampTrackingFilter.TF1[2].x[1] variable */);
  TRACE_POP
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
$START.pSS2A.rampTrackingFilter.TF1[1].x[1] = pSS2A.rampTrackingFilter.TF1[1].x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  data->modelData->realVarsData[165].attribute /* pSS2A.rampTrackingFilter.TF1[1].x[1] variable */.start = data->simulationInfo->realParameter[479] /* pSS2A.rampTrackingFilter.TF1[1].x_start[1] PARAM */;
    data->localData[0]->realVars[165] /* pSS2A.rampTrackingFilter.TF1[1].x[1] variable */ = data->modelData->realVarsData[165].attribute /* pSS2A.rampTrackingFilter.TF1[1].x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[165].info /* pSS2A.rampTrackingFilter.TF1[1].x[1] */.name, (modelica_real) data->localData[0]->realVars[165] /* pSS2A.rampTrackingFilter.TF1[1].x[1] variable */);
  TRACE_POP
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
$START.pSS2A.SimpleLag2.state = pSS2A.SimpleLag2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  data->modelData->realVarsData[16].attribute /* pSS2A.SimpleLag2.state STATE(1) */.start = data->simulationInfo->realParameter[354] /* pSS2A.SimpleLag2.y_start PARAM */;
    data->localData[0]->realVars[16] /* pSS2A.SimpleLag2.state STATE(1) */ = data->modelData->realVarsData[16].attribute /* pSS2A.SimpleLag2.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[16].info /* pSS2A.SimpleLag2.state */.name, (modelica_real) data->localData[0]->realVars[16] /* pSS2A.SimpleLag2.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
$START.pSS2A.SimpleLag2.y = pSS2A.SimpleLag2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  data->modelData->realVarsData[151].attribute /* pSS2A.SimpleLag2.y variable */.start = data->simulationInfo->realParameter[354] /* pSS2A.SimpleLag2.y_start PARAM */;
    data->localData[0]->realVars[151] /* pSS2A.SimpleLag2.y variable */ = data->modelData->realVarsData[151].attribute /* pSS2A.SimpleLag2.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[151].info /* pSS2A.SimpleLag2.y */.name, (modelica_real) data->localData[0]->realVars[151] /* pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
$START.pSS2A.SimpleLag1.state = pSS2A.SimpleLag1.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  data->modelData->realVarsData[15].attribute /* pSS2A.SimpleLag1.state STATE(1) */.start = data->simulationInfo->realParameter[349] /* pSS2A.SimpleLag1.y_start PARAM */;
    data->localData[0]->realVars[15] /* pSS2A.SimpleLag1.state STATE(1) */ = data->modelData->realVarsData[15].attribute /* pSS2A.SimpleLag1.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* pSS2A.SimpleLag1.state */.name, (modelica_real) data->localData[0]->realVars[15] /* pSS2A.SimpleLag1.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
$START.pSS2A.SimpleLag1.y = pSS2A.SimpleLag1.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  data->modelData->realVarsData[149].attribute /* pSS2A.SimpleLag1.y variable */.start = data->simulationInfo->realParameter[349] /* pSS2A.SimpleLag1.y_start PARAM */;
    data->localData[0]->realVars[149] /* pSS2A.SimpleLag1.y variable */ = data->modelData->realVarsData[149].attribute /* pSS2A.SimpleLag1.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[149].info /* pSS2A.SimpleLag1.y */.name, (modelica_real) data->localData[0]->realVars[149] /* pSS2A.SimpleLag1.y variable */);
  TRACE_POP
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
$START.pSS2A.Leadlag2.TF.x[1] = pSS2A.Leadlag2.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  data->modelData->realVarsData[145].attribute /* pSS2A.Leadlag2.TF.x[1] variable */.start = data->simulationInfo->realParameter[339] /* pSS2A.Leadlag2.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[145] /* pSS2A.Leadlag2.TF.x[1] variable */ = data->modelData->realVarsData[145].attribute /* pSS2A.Leadlag2.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[145].info /* pSS2A.Leadlag2.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[145] /* pSS2A.Leadlag2.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
$START.pSS2A.Leadlag1.TF.x[1] = pSS2A.Leadlag1.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  data->modelData->realVarsData[141].attribute /* pSS2A.Leadlag1.TF.x[1] variable */.start = data->simulationInfo->realParameter[321] /* pSS2A.Leadlag1.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[141] /* pSS2A.Leadlag1.TF.x[1] variable */ = data->modelData->realVarsData[141].attribute /* pSS2A.Leadlag1.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[141].info /* pSS2A.Leadlag1.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[141] /* pSS2A.Leadlag1.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
$START.eSST1A.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  data->modelData->realVarsData[91].attribute /* eSST1A.XADIFD variable */.start = data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */ = data->modelData->realVarsData[91].attribute /* eSST1A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* eSST1A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
$START.eSST1A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */ = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* eSST1A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
$START.eSST1A.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  data->modelData->realVarsData[87].attribute /* eSST1A.EFD variable */.start = data->simulationInfo->realParameter[291] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[87] /* eSST1A.EFD variable */ = data->modelData->realVarsData[87].attribute /* eSST1A.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* eSST1A.EFD */.name, (modelica_real) data->localData[0]->realVars[87] /* eSST1A.EFD variable */);
  TRACE_POP
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  data->modelData->realVarsData[130].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[254] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[130] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[130] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  data->modelData->realVarsData[129].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[253] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[129] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  data->modelData->realVarsData[131].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[255] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[131] /* gENROE.PSIq variable */ = data->modelData->realVarsData[131].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[131].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[131] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  data->modelData->realVarsData[127].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[246] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[127] /* gENROE.PSId variable */ = data->modelData->realVarsData[127].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[127] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[248] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[247] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[227] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[226] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  data->modelData->realVarsData[140].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[301] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[140] /* gENROE.uq variable */ = data->modelData->realVarsData[140].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[140] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  data->modelData->realVarsData[139].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[300] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[139] /* gENROE.ud variable */ = data->modelData->realVarsData[139].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[139] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  data->modelData->realVarsData[138].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[295] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[138] /* gENROE.iq variable */ = data->modelData->realVarsData[138].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[138] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  data->modelData->realVarsData[137].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[293] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[137] /* gENROE.id variable */ = data->modelData->realVarsData[137].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[137].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[137] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  data->modelData->realVarsData[133].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[298] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[133] /* gENROE.Te variable */ = data->modelData->realVarsData[133].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[133].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[133] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  data->modelData->realVarsData[132].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[257] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[263] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[132] /* gENROE.Q variable */ = data->modelData->realVarsData[132].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[132].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[132] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  data->modelData->realVarsData[125].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[256] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[263] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[125] /* gENROE.P variable */ = data->modelData->realVarsData[125].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[125] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  data->modelData->realVarsData[135].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[294] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[296] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[135] /* gENROE.anglei variable */ = data->modelData->realVarsData[135].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[135] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 1445
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[296] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[294] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[124].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[124] /* gENROE.I variable */ = data->modelData->realVarsData[124].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[124].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[124] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  data->modelData->realVarsData[136].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[287] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[136] /* gENROE.anglev variable */ = data->modelData->realVarsData[136].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[136].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[136] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[289] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  data->modelData->realVarsData[126].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[297] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[126] /* gENROE.PELEC variable */ = data->modelData->realVarsData[126].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[126] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  data->modelData->realVarsData[61].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[61] /* FAULT.angle variable */ = data->modelData->realVarsData[61].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[61] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  data->modelData->realVarsData[60].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[60] /* FAULT.V variable */ = data->modelData->realVarsData[60].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[60] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 1451
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  data->modelData->realVarsData[69].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[69] /* GEN2.angle variable */ = data->modelData->realVarsData[69].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[69] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  data->modelData->realVarsData[68].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[215] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[68] /* GEN2.V variable */ = data->modelData->realVarsData[68].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[68] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  data->modelData->realVarsData[73].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[73] /* LOAD.angle variable */ = data->modelData->realVarsData[73].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[73] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  data->modelData->realVarsData[65].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[65] /* GEN1.angle variable */ = data->modelData->realVarsData[65].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[65] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  data->modelData->realVarsData[83].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[83] /* constantLoad.v variable */ = data->modelData->realVarsData[83].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[83] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  data->modelData->realVarsData[78].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[78] /* constantLoad.angle variable */ = data->modelData->realVarsData[78].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[78] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  data->modelData->realVarsData[81].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[81] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[81] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  data->modelData->realVarsData[82].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[82] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[82] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  data->modelData->realVarsData[114].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[200] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[202] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[114] /* gENCLS.Q variable */ = data->modelData->realVarsData[114].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[114].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[114] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  data->modelData->realVarsData[113].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[199] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[202] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[113] /* gENCLS.P variable */ = data->modelData->realVarsData[113].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[113] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  data->modelData->realVarsData[118].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[211] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[118] /* gENCLS.iq variable */ = data->modelData->realVarsData[118].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[118] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  data->modelData->realVarsData[117].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[209] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[117] /* gENCLS.id variable */ = data->modelData->realVarsData[117].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[117] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  data->modelData->realVarsData[123].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[219] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[123] /* gENCLS.vq variable */ = data->modelData->realVarsData[123].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[123] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  data->modelData->realVarsData[122].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[216] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[122] /* gENCLS.vd variable */ = data->modelData->realVarsData[122].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[122] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[217] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  data->modelData->realVarsData[116].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[206] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[116] /* gENCLS.anglev variable */ = data->modelData->realVarsData[116].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[116] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[207] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1468
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  data->modelData->realVarsData[120].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[210] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[120] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[120].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[120] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  data->modelData->realVarsData[121].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[212] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[121] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[121].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[121].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[121] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  data->modelData->realVarsData[208].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[208].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[208] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  data->modelData->realVarsData[209].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[209].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[209] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  data->modelData->realVarsData[196].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[218] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[196].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[196] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  data->modelData->realVarsData[197].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[220] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[197].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[197] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  data->modelData->realVarsData[198].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[198].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[198] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  data->modelData->realVarsData[199].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[199].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[199] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  data->modelData->realVarsData[184].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[294] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[184] /* pwLine.is.im variable */ = data->modelData->realVarsData[184].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[184].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[184] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  data->modelData->realVarsData[185].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[296] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[185] /* pwLine.is.re variable */ = data->modelData->realVarsData[185].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[185].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[185] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  data->modelData->realVarsData[186].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[303] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[186] /* pwLine.vs.im variable */ = data->modelData->realVarsData[186].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[186].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[186] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  data->modelData->realVarsData[187].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[304] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[187] /* pwLine.vs.re variable */ = data->modelData->realVarsData[187].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[187].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[187] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  data->modelData->realVarsData[64].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[64] /* GEN1.V variable */ = data->modelData->realVarsData[64].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[64] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  data->modelData->realVarsData[115].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[215] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[115] /* gENCLS.V variable */ = data->modelData->realVarsData[115].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[115] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  data->modelData->realVarsData[72].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[72] /* LOAD.V variable */ = data->modelData->realVarsData[72].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[72] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1410(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1411(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1412(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1413(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1414(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1415(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1416(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1417(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1418(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1419(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1420(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1421(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1422(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1423(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1424(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1425(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1426(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1427(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1428(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1429(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1430(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1431(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1432(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1433(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1434(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1435(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1436(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1437(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1438(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1439(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1440(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1441(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1442(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1443(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1444(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1445(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1446(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1447(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1448(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1449(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1450(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1451(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1452(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1453(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1454(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1455(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1456(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1457(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1458(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1459(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1460(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1461(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1462(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1463(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1464(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1465(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1466(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1467(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1468(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1469(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1470(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1471(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1472(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1473(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1474(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1475(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1476(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1477(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1478(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1479(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1480(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1482(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_917(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_914(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_913(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_912(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_911(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_910(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_909(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_908(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_907(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_906(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_905(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_903(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_902(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_900(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_899(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_897(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_896(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_894(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_893(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_891(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_890(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_888(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_887(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_885(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_884(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_882(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_881(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_879(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_878(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_876(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_875(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_873(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_872(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_870(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_869(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_867(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_866(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_864(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_863(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_861(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_860(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_858(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_857(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_855(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_854(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_853(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_849(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_848(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_847(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_846(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_845(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_844(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_842(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_841(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_840(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_839(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_838(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_836(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_835(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_834(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_833(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_832(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_830(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_829(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_828(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_827(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_826(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_825(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_824(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_822(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_821(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_820(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_819(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_817(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_816(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_815(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_814(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_812(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_810(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_809(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_808(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_807(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_806(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_805(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_803(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_802(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_801(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_800(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_798(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_797(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_796(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_795(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_793(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_791(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_790(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_789(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_788(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_787(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_786(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_784(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_783(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_782(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_781(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_779(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_778(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_777(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_776(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_774(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_772(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_771(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_770(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_769(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_768(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_767(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_765(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_764(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_763(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_762(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_760(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_759(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_758(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_757(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_755(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_753(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_752(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_750(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_749(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_747(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_745(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_744(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_743(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_742(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_740(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_739(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_738(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_737(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_734(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_733(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_731(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_730(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_729(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_727(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_726(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_725(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_724(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_721(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_720(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_718(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_717(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_716(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_714(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_713(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_712(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_711(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_708(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_707(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_705(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_704(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_703(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_701(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_700(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_699(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_698(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_695(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_694(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_692(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_691(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_690(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_688(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_687(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_686(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_685(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_682(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_681(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_679(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_678(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_677(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_675(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_674(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_673(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_672(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_669(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_668(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_667(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_666(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_665(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_663(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_661(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_659(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_655(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_653(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_650(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_649(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_646(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_645(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_643(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_641(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_640(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_639(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_638(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_637(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_636(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_635(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_634(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_632(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_630(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_629(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_628(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_627(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_625(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_623(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_622(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_621(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_620(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_619(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_618(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_617(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_616(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_614(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_612(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_611(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_610(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_609(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_606(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_604(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_603(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_601(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_597(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_595(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_591(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_590(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_585(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_583(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_581(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_579(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_575(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_574(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_572(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_570(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_569(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_568(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_567(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_566(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_565(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_564(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_563(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_562(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_561(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_560(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_558(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_556(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_555(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_554(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_553(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_552(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_551(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_550(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_539(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_537(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_488(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_478(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_458(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_443(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_441(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_430(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_426(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_424(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_413(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_409(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_407(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_396(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_392(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_389(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_386(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_381(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_377(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_375(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_374(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_371(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_370(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_369(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_368(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_367(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_366(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_365(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_364(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_363(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_362(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_361(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_360(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_358(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_356(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_355(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_354(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_353(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_338(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_330(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_329(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_316(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_314(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_281(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_279(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_270(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_264(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_257(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_255(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_242(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_241(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_240(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_239(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_238(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_237(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_236(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_8(DATA *data, threadData_t *threadData);


/*
equation index: 1887
type: ALGORITHM

  assert(pSS2A.derivativeLag3.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag3.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag3.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.derivativeLag3.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1887};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,165,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag3.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->simulationInfo->integerParameter[32] /* pSS2A.derivativeLag3.TF.initType PARAM */,1);
    tmp1 = LessEq(data->simulationInfo->integerParameter[32] /* pSS2A.derivativeLag3.TF.initType PARAM */,4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[32] /* pSS2A.derivativeLag3.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.derivativeLag3.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag3.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1888
type: ALGORITHM

  assert(pSS2A.derivativeLag2.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.derivativeLag2.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1888};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,165,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->simulationInfo->integerParameter[28] /* pSS2A.derivativeLag2.TF.initType PARAM */,1);
    tmp6 = LessEq(data->simulationInfo->integerParameter[28] /* pSS2A.derivativeLag2.TF.initType PARAM */,4);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[28] /* pSS2A.derivativeLag2.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.derivativeLag2.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1889
type: ALGORITHM

  assert(pSS2A.derivativeLag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.derivativeLag1.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1889};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,165,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->simulationInfo->integerParameter[24] /* pSS2A.derivativeLag1.TF.initType PARAM */,1);
    tmp11 = LessEq(data->simulationInfo->integerParameter[24] /* pSS2A.derivativeLag1.TF.initType PARAM */,4);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[24] /* pSS2A.derivativeLag1.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.derivativeLag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1890
type: ALGORITHM

  assert(pSS2A.derivativeLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.derivativeLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1890};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.derivativeLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->simulationInfo->integerParameter[20] /* pSS2A.derivativeLag.TF.initType PARAM */,1);
    tmp16 = LessEq(data->simulationInfo->integerParameter[20] /* pSS2A.derivativeLag.TF.initType PARAM */,4);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[20] /* pSS2A.derivativeLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.derivativeLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.derivativeLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1891
type: ALGORITHM

  assert(pSS2A.rampTrackingFilter.TF2[1].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF2[1].initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF2[1].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.rampTrackingFilter.TF2[1].initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1891};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,173,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF2[1].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp23;
  static int tmp24 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp24)
  {
    tmp20 = GreaterEq(data->simulationInfo->integerParameter[58] /* pSS2A.rampTrackingFilter.TF2[1].initType PARAM */,1);
    tmp21 = LessEq(data->simulationInfo->integerParameter[58] /* pSS2A.rampTrackingFilter.TF2[1].initType PARAM */,4);
    if(!(tmp20 && tmp21))
    {
      tmp23 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[58] /* pSS2A.rampTrackingFilter.TF2[1].initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.rampTrackingFilter.TF2[1].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF2[1].initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp24 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1892
type: ALGORITHM

  assert(pSS2A.rampTrackingFilter.TF1[5].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[5].initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[5].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.rampTrackingFilter.TF1[5].initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1892};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,173,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[5].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp29)
  {
    tmp25 = GreaterEq(data->simulationInfo->integerParameter[42] /* pSS2A.rampTrackingFilter.TF1[5].initType PARAM */,1);
    tmp26 = LessEq(data->simulationInfo->integerParameter[42] /* pSS2A.rampTrackingFilter.TF1[5].initType PARAM */,4);
    if(!(tmp25 && tmp26))
    {
      tmp28 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[42] /* pSS2A.rampTrackingFilter.TF1[5].initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.rampTrackingFilter.TF1[5].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[5].initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp29 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1893
type: ALGORITHM

  assert(pSS2A.rampTrackingFilter.TF1[4].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[4].initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[4].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.rampTrackingFilter.TF1[4].initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1893};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,173,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[4].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp30 = GreaterEq(data->simulationInfo->integerParameter[41] /* pSS2A.rampTrackingFilter.TF1[4].initType PARAM */,1);
    tmp31 = LessEq(data->simulationInfo->integerParameter[41] /* pSS2A.rampTrackingFilter.TF1[4].initType PARAM */,4);
    if(!(tmp30 && tmp31))
    {
      tmp33 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[41] /* pSS2A.rampTrackingFilter.TF1[4].initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.rampTrackingFilter.TF1[4].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[4].initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1894
type: ALGORITHM

  assert(pSS2A.rampTrackingFilter.TF1[3].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[3].initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[3].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.rampTrackingFilter.TF1[3].initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1894};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,173,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[3].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp35 = GreaterEq(data->simulationInfo->integerParameter[40] /* pSS2A.rampTrackingFilter.TF1[3].initType PARAM */,1);
    tmp36 = LessEq(data->simulationInfo->integerParameter[40] /* pSS2A.rampTrackingFilter.TF1[3].initType PARAM */,4);
    if(!(tmp35 && tmp36))
    {
      tmp38 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[40] /* pSS2A.rampTrackingFilter.TF1[3].initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.rampTrackingFilter.TF1[3].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[3].initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1895
type: ALGORITHM

  assert(pSS2A.rampTrackingFilter.TF1[2].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[2].initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[2].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.rampTrackingFilter.TF1[2].initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1895};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,173,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[2].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp44)
  {
    tmp40 = GreaterEq(data->simulationInfo->integerParameter[39] /* pSS2A.rampTrackingFilter.TF1[2].initType PARAM */,1);
    tmp41 = LessEq(data->simulationInfo->integerParameter[39] /* pSS2A.rampTrackingFilter.TF1[2].initType PARAM */,4);
    if(!(tmp40 && tmp41))
    {
      tmp43 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[39] /* pSS2A.rampTrackingFilter.TF1[2].initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.rampTrackingFilter.TF1[2].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[2].initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp44 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1896
type: ALGORITHM

  assert(pSS2A.rampTrackingFilter.TF1[1].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[1].initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[1].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.rampTrackingFilter.TF1[1].initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1896};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,173,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.rampTrackingFilter.TF1[1].initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp45 = GreaterEq(data->simulationInfo->integerParameter[38] /* pSS2A.rampTrackingFilter.TF1[1].initType PARAM */,1);
    tmp46 = LessEq(data->simulationInfo->integerParameter[38] /* pSS2A.rampTrackingFilter.TF1[1].initType PARAM */,4);
    if(!(tmp45 && tmp46))
    {
      tmp48 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[38] /* pSS2A.rampTrackingFilter.TF1[1].initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.rampTrackingFilter.TF1[1].initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.rampTrackingFilter.TF1[1].initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1897
type: ALGORITHM

  assert(pSS2A.Leadlag2.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.Leadlag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.Leadlag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.Leadlag2.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1897};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.Leadlag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp50 = GreaterEq(data->simulationInfo->integerParameter[14] /* pSS2A.Leadlag2.TF.initType PARAM */,1);
    tmp51 = LessEq(data->simulationInfo->integerParameter[14] /* pSS2A.Leadlag2.TF.initType PARAM */,4);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[14] /* pSS2A.Leadlag2.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.Leadlag2.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.Leadlag2.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp54 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1898
type: ALGORITHM

  assert(pSS2A.Leadlag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.Leadlag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.Leadlag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(pSS2A.Leadlag1.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1898};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= pSS2A.Leadlag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp55 = GreaterEq(data->simulationInfo->integerParameter[10] /* pSS2A.Leadlag1.TF.initType PARAM */,1);
    tmp56 = LessEq(data->simulationInfo->integerParameter[10] /* pSS2A.Leadlag1.TF.initType PARAM */,4);
    if(!(tmp55 && tmp56))
    {
      tmp58 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[10] /* pSS2A.Leadlag1.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npSS2A.Leadlag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and pSS2A.Leadlag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1899
type: ALGORITHM

  assert(eSST1A.imLeadLag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST1A.imLeadLag1.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1899};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,162,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp63;
  static int tmp64 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp64)
  {
    tmp60 = GreaterEq(data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */,1);
    tmp61 = LessEq(data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */,4);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLeadLag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp64 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1900
type: ALGORITHM

  assert(eSST1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST1A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1900};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp68;
  static int tmp69 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp69)
  {
    tmp65 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */,1);
    tmp66 = LessEq(data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp65 && tmp66))
    {
      tmp68 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp69 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1901
type: ALGORITHM

  assert(eSST1A.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST1A.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1901};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp74)
  {
    tmp70 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */,1);
    tmp71 = LessEq(data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */,4);
    if(!(tmp70 && tmp71))
    {
      tmp73 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp74 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1902
type: ALGORITHM

  assert(eSST1A.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSST1A.imDerivativeLag.T, has value: " + String(eSST1A.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1902};
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,81,"Variable violating min constraint: 1e-60 <= eSST1A.imDerivativeLag.T, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp75 = GreaterEq(data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp75)
    {
      tmp77 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_917(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_914(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_913(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_912(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_911(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_910(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_909(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_908(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_907(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_906(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_905(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_903(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_902(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_900(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_899(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_897(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_896(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_894(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_893(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_891(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_890(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_888(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_887(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_885(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_884(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_882(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_881(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_879(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_878(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_876(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_875(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_873(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_872(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_870(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_869(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_867(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_866(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_864(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_863(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_861(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_860(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_858(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_857(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_855(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_854(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_853(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_849(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_848(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_847(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_846(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_845(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_844(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_842(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_841(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_840(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_839(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_838(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_836(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_835(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_834(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_833(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_832(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_830(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_829(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_828(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_827(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_826(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_825(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_824(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_822(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_821(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_820(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_819(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_817(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_816(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_815(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_814(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_812(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_810(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_809(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_808(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_807(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_806(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_805(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_803(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_802(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_801(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_800(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_798(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_797(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_795(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_793(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_791(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_787(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_786(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_779(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_778(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_777(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_776(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_774(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_772(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_771(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_770(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_767(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_762(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_760(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_759(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_752(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_750(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_749(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_738(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_737(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_734(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_731(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_727(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_726(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_725(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_724(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_714(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_713(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_712(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_711(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_708(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_705(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_704(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_703(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_701(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_700(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_699(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_691(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_690(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_688(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_686(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_685(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_675(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_669(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_668(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_665(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_659(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_646(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_643(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_638(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_636(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_635(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_634(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_630(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_629(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_628(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_627(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_625(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_623(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_622(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_621(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_620(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_619(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_617(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_616(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_614(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_612(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_611(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_610(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_609(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_606(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_604(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_603(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_601(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_591(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_590(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_585(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_579(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_572(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_570(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_564(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_561(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_560(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_558(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_551(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_550(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_537(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_371(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_367(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_365(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_364(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_363(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_360(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_356(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_355(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_354(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_353(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_338(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_314(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_281(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_279(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_270(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_264(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_257(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_255(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_242(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_241(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_240(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_239(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_238(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_237(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_236(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1887(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1888(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1889(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1890(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1891(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1892(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1893(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1894(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1895(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1896(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1897(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1898(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1899(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1900(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1901(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1902(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->realVars[119] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[119].time_unvarying = 1;
  data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */ = 0.0;
  data->modelData->realParameterData[119].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

