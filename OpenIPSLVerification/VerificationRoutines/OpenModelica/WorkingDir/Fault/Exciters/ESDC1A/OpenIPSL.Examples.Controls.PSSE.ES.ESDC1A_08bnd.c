/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 338
type: SIMPLE_ASSIGN
$START.eSDC1A.rotatingExciterLimited.sISO.y = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->modelData->realVarsData[3].attribute /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[267] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSDC1A.rotatingExciterLimited.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSDC1A.rotatingExciterLimited.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
$START.eSDC1A.imLeadLag.TF.x[1] = eSDC1A.imLeadLag.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->modelData->realVarsData[66].attribute /* eSDC1A.imLeadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[140] /* eSDC1A.imLeadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[66] /* eSDC1A.imLeadLag.TF.x[1] variable */ = data->modelData->realVarsData[66].attribute /* eSDC1A.imLeadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* eSDC1A.imLeadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[66] /* eSDC1A.imLeadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
$START.eSDC1A.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->modelData->realVarsData[61].attribute /* eSDC1A.XADIFD variable */.start = data->simulationInfo->realParameter[267] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[61] /* eSDC1A.XADIFD variable */ = data->modelData->realVarsData[61].attribute /* eSDC1A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* eSDC1A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[61] /* eSDC1A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
$START.eSDC1A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->modelData->realVarsData[59].attribute /* eSDC1A.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */ = data->modelData->realVarsData[59].attribute /* eSDC1A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* eSDC1A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[59] /* eSDC1A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->modelData->realVarsData[91].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[230] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[91] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[91].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[91] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->modelData->realVarsData[90].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[229] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[90] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[90].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->modelData->realVarsData[92].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[231] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[92] /* gENROE.PSIq variable */ = data->modelData->realVarsData[92].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[92] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->modelData->realVarsData[88].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[222] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[88] /* gENROE.PSId variable */ = data->modelData->realVarsData[88].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[88] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[224] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[223] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[203] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[202] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->modelData->realVarsData[101].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[277] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[101] /* gENROE.uq variable */ = data->modelData->realVarsData[101].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->modelData->realVarsData[100].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[276] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[100] /* gENROE.ud variable */ = data->modelData->realVarsData[100].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->modelData->realVarsData[99].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[99] /* gENROE.iq variable */ = data->modelData->realVarsData[99].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[99] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->modelData->realVarsData[98].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[98] /* gENROE.id variable */ = data->modelData->realVarsData[98].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->modelData->realVarsData[94].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[274] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[94] /* gENROE.Te variable */ = data->modelData->realVarsData[94].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[94] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->modelData->realVarsData[93].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[233] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[239] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[93] /* gENROE.Q variable */ = data->modelData->realVarsData[93].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[93] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->modelData->realVarsData[86].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[232] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[239] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[86] /* gENROE.P variable */ = data->modelData->realVarsData[86].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[86] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->modelData->realVarsData[96].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[270] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[272] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[96] /* gENROE.anglei variable */ = data->modelData->realVarsData[96].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[272] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[270] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[85].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[85] /* gENROE.I variable */ = data->modelData->realVarsData[85].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[85] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->modelData->realVarsData[97].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[263] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[97] /* gENROE.anglev variable */ = data->modelData->realVarsData[97].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[265] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->modelData->realVarsData[87].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[273] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[87] /* gENROE.PELEC variable */ = data->modelData->realVarsData[87].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[87] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[191] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[71] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[72] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->modelData->realVarsData[75].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[176] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[178] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[75] /* gENCLS.Q variable */ = data->modelData->realVarsData[75].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[75] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->modelData->realVarsData[74].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[175] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[178] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[74] /* gENCLS.P variable */ = data->modelData->realVarsData[74].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[74] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->modelData->realVarsData[79].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[187] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[79] /* gENCLS.iq variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->modelData->realVarsData[78].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[185] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[78] /* gENCLS.id variable */ = data->modelData->realVarsData[78].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[78] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->modelData->realVarsData[84].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[195] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[84] /* gENCLS.vq variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->modelData->realVarsData[83].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[192] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[83] /* gENCLS.vd variable */ = data->modelData->realVarsData[83].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[83] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[193] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->modelData->realVarsData[77].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[182] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[77] /* gENCLS.anglev variable */ = data->modelData->realVarsData[77].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[77] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->modelData->realVarsData[81].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[186] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[81] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[81].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[81] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->modelData->realVarsData[82].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[188] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[82] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[82].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[82] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->modelData->realVarsData[134].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[134] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[134].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[134].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[134] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->modelData->realVarsData[135].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[135] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[135].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[135] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->modelData->realVarsData[122].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[122] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[122].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[122] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->modelData->realVarsData[123].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[123] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[123].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[123] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->modelData->realVarsData[124].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[124] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[124].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[124].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[124] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->modelData->realVarsData[125].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[125] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[125].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[125] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->modelData->realVarsData[110].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[270] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[110] /* pwLine.is.im variable */ = data->modelData->realVarsData[110].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[110].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[110] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->modelData->realVarsData[111].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[272] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[111] /* pwLine.is.re variable */ = data->modelData->realVarsData[111].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[111].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[111] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->modelData->realVarsData[112].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[279] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[112] /* pwLine.vs.im variable */ = data->modelData->realVarsData[112].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[112].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[112] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->modelData->realVarsData[113].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[280] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[113] /* pwLine.vs.re variable */ = data->modelData->realVarsData[113].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[113] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->modelData->realVarsData[76].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[191] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[76] /* gENCLS.V variable */ = data->modelData->realVarsData[76].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[76].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[76] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_395(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 396
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[250] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[226] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[225] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[258] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[266] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[258] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[237] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[238] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[229] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[228] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[205] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xd - gENROE.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[267] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[229] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[266] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[247] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[250] /* gENROE.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[201] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[267] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.T1 = eSDC1A.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[129] /* eSDC1A.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[100] /* eSDC1A.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.par1.y = eSDC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[142] /* eSDC1A.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[129] /* eSDC1A.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.T2 = eSDC1A.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[130] /* eSDC1A.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[99] /* eSDC1A.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.par2.y = eSDC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[143] /* eSDC1A.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[130] /* eSDC1A.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.T = eSDC1A.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[165] /* eSDC1A.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[98] /* eSDC1A.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.const.y = eSDC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[167] /* eSDC1A.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[165] /* eSDC1A.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
eSDC1A.TransducerDelay.T = eSDC1A.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[105] /* eSDC1A.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[103] /* eSDC1A.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
eSDC1A.TransducerDelay.const.y = eSDC1A.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[107] /* eSDC1A.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[105] /* eSDC1A.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[273] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[232] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[219] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[206] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[274] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[273] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[234] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[220] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[274] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[221] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[274] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
eSDC1A.DiffV1.u2 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[86] /* eSDC1A.DiffV1.u2 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
eSDC1A.VOEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[109] /* eSDC1A.VOEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
eSDC1A.DiffV1.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[85] /* eSDC1A.DiffV1.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
eSDC1A.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[110] /* eSDC1A.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
eSDC1A.hV_GATE.n2 = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[123] /* eSDC1A.hV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
eSDC1A.VUEL = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[111] /* eSDC1A.VUEL PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
const1.y = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[37] /* const1.y PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
eSDC1A.TransducerDelay.T_mod = if eSDC1A.TransducerDelay.T < 1e-15 then 1000.0 else eSDC1A.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[105] /* eSDC1A.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[106] /* eSDC1A.TransducerDelay.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[105] /* eSDC1A.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.T_E = eSDC1A.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[154] /* eSDC1A.rotatingExciterLimited.T_E PARAM */ = data->simulationInfo->realParameter[101] /* eSDC1A.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.sISO.k = 1.0 / eSDC1A.rotatingExciterLimited.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[156] /* eSDC1A.rotatingExciterLimited.sISO.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[154] /* eSDC1A.rotatingExciterLimited.T_E PARAM */,"eSDC1A.rotatingExciterLimited.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.E_2 = eSDC1A.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[147] /* eSDC1A.rotatingExciterLimited.E_2 PARAM */ = data->simulationInfo->realParameter[89] /* eSDC1A.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.se1.E2 = eSDC1A.rotatingExciterLimited.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[161] /* eSDC1A.rotatingExciterLimited.se1.E2 PARAM */ = data->simulationInfo->realParameter[147] /* eSDC1A.rotatingExciterLimited.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.E_1 = eSDC1A.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[146] /* eSDC1A.rotatingExciterLimited.E_1 PARAM */ = data->simulationInfo->realParameter[88] /* eSDC1A.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.se1.E1 = eSDC1A.rotatingExciterLimited.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[160] /* eSDC1A.rotatingExciterLimited.se1.E1 PARAM */ = data->simulationInfo->realParameter[146] /* eSDC1A.rotatingExciterLimited.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.S_EE_2 = eSDC1A.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[151] /* eSDC1A.rotatingExciterLimited.S_EE_2 PARAM */ = data->simulationInfo->realParameter[97] /* eSDC1A.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.se1.SE2 = eSDC1A.rotatingExciterLimited.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[163] /* eSDC1A.rotatingExciterLimited.se1.SE2 PARAM */ = data->simulationInfo->realParameter[151] /* eSDC1A.rotatingExciterLimited.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.S_EE_1 = eSDC1A.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[150] /* eSDC1A.rotatingExciterLimited.S_EE_1 PARAM */ = data->simulationInfo->realParameter[96] /* eSDC1A.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
eSDC1A.rotatingExciterLimited.se1.SE1 = eSDC1A.rotatingExciterLimited.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[162] /* eSDC1A.rotatingExciterLimited.se1.SE1 PARAM */ = data->simulationInfo->realParameter[150] /* eSDC1A.rotatingExciterLimited.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.T_mod = if eSDC1A.simpleLagLim.T < 1e-15 then 1000.0 else eSDC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[165] /* eSDC1A.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[166] /* eSDC1A.simpleLagLim.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[165] /* eSDC1A.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
eSDC1A.simpleLagLim.K = eSDC1A.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[164] /* eSDC1A.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[91] /* eSDC1A.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.T2_dummy = if abs(eSDC1A.imLeadLag.T1 - eSDC1A.imLeadLag.T2) < 1e-15 then 1000.0 else eSDC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[129] /* eSDC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[130] /* eSDC1A.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[131] /* eSDC1A.imLeadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[130] /* eSDC1A.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.a[1] = eSDC1A.imLeadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[132] /* eSDC1A.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[131] /* eSDC1A.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.a_end = if eSDC1A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSDC1A.imLeadLag.TF.a[1] ^ 2.0 + eSDC1A.imLeadLag.TF.a[2] ^ 2.0) then eSDC1A.imLeadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[132] /* eSDC1A.imLeadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[133] /* eSDC1A.imLeadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[133] /* eSDC1A.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[134] /* eSDC1A.imLeadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[133] /* eSDC1A.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.b[1] = eSDC1A.imLeadLag.K * eSDC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[135] /* eSDC1A.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[128] /* eSDC1A.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[129] /* eSDC1A.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.bb[1] = eSDC1A.imLeadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[137] /* eSDC1A.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[135] /* eSDC1A.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.d = eSDC1A.imLeadLag.TF.bb[1] / eSDC1A.imLeadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[139] /* eSDC1A.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[137] /* eSDC1A.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[132] /* eSDC1A.imLeadLag.TF.a[1] PARAM */,"eSDC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.b[2] = eSDC1A.imLeadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[136] /* eSDC1A.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[128] /* eSDC1A.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.bb[2] = eSDC1A.imLeadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[138] /* eSDC1A.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[136] /* eSDC1A.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
eSDC1A.imLeadLag.TF.x_start[1] = eSDC1A.imLeadLag.x_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[140] /* eSDC1A.imLeadLag.TF.x_start[1] PARAM */ = data->simulationInfo->realParameter[144] /* eSDC1A.imLeadLag.x_start PARAM */;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
eSDC1A.imDerivativeLag.T = eSDC1A.T_F1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */ = data->simulationInfo->realParameter[102] /* eSDC1A.T_F1 PARAM */;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[218] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[216] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[217] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[215] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[214] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[212] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[254] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[213] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[211] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[247] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[230] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[227] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[231] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[230] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[222] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[229] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[224] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[216] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[230] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[216] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[218] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[223] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[229] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[215] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[215] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[217] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[202] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[224] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[203] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[223] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[249] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[277] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[229] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[251] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[234] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[276] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[252] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[271] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[230] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[234] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[269] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[260] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[225] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[226] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[259] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[209] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[210] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[261] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[260] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[259] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[257] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[258] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[266] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[254] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[247] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[248] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[210] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[209] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[264] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[250] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[254] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[265] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[264] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[261] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[264] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[261] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[257] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[260] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[275] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[233] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[219] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[239] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[197] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[219] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[239] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[263] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[262] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[280] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[278] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[263] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[279] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[278] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[263] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[280] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[279] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[270] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[197] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[275] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[273] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[279] /* gENROE.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[280] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[279] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[272] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[197] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[273] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[275] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[279] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[268] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[281] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[268] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[282] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[283] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[48] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[50] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[54] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[52] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[48] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[49] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[53] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[51] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[48] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[38] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[68] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[38] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[61] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[71] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[72] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[70] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[182] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[181] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[191] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[182] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[191] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[182] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[189] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[175] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[174] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[190] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[176] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[174] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[188] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[189] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[190] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[186] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[189] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[190] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[177] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[186] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[180] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[188] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[177] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[188] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[180] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[186] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->realParameter[195] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[185] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[188] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[186] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[187] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[188] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[186] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[193] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[195] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[177] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[187] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[180] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[185] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[192] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[196] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[194] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[183] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[178] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[171] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[174] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[178] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[184] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[326] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[323] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->simulationInfo->realParameter[327] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[321] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[324] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[319] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[325] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[320] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[322] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[315] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[312] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->simulationInfo->realParameter[316] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[310] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->simulationInfo->realParameter[313] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[308] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->simulationInfo->realParameter[314] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[309] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->realParameter[311] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->simulationInfo->realParameter[304] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[301] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->simulationInfo->realParameter[305] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[299] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->simulationInfo->realParameter[302] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[297] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->simulationInfo->realParameter[303] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[298] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->simulationInfo->realParameter[300] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[293] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[290] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[294] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[288] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[291] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[286] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[292] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[287] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[289] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_163(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_162(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_161(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_160(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_159(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_158(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_157(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_156(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 597
type: ALGORITHM

  assert(eSDC1A.rotatingExciterLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSDC1A.rotatingExciterLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSDC1A.rotatingExciterLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSDC1A.rotatingExciterLimited.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,176,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSDC1A.rotatingExciterLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[6] /* eSDC1A.rotatingExciterLimited.sISO.initType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[6] /* eSDC1A.rotatingExciterLimited.sISO.initType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eSDC1A.rotatingExciterLimited.sISO.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSDC1A.rotatingExciterLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSDC1A.rotatingExciterLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 598
type: ALGORITHM

  assert(eSDC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSDC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSDC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSDC1A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSDC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSDC1A.imLeadLag.TF.initType PARAM */,1);
    tmp39 = LessEq(data->simulationInfo->integerParameter[2] /* eSDC1A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSDC1A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSDC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSDC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 599
type: ALGORITHM

  assert(eSDC1A.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eSDC1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSDC1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSDC1A.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSDC1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSDC1A.imDerivativeLag.initType PARAM */,1);
    tmp44 = LessEq(data->simulationInfo->integerParameter[1] /* eSDC1A.imDerivativeLag.initType PARAM */,4);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSDC1A.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSDC1A.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eSDC1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 600
type: ALGORITHM

  assert(eSDC1A.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSDC1A.imDerivativeLag.T, has value: " + String(eSDC1A.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,81,"Variable violating min constraint: 1e-60 <= eSDC1A.imDerivativeLag.T, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[124] /* eSDC1A.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSDC1A.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_399(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_434(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_436(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_439(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_464(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_541(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_547(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_550(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_551(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_557(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_558(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_559(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_560(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_564(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_570(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_571(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_572(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_576(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_578(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_580(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_582(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_584(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_162(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_160(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_159(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_158(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_599(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_600(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eSDC1A.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eSDC1A.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eSDC1A.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->localData[0]->realVars[80] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[80].time_unvarying = 1;
  data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[44].time_unvarying = 1;
  data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[45].time_unvarying = 1;
  data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[46].time_unvarying = 1;
  data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[47].time_unvarying = 1;
  data->simulationInfo->realParameter[58] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[58].time_unvarying = 1;
  data->simulationInfo->realParameter[59] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[59].time_unvarying = 1;
  data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[60].time_unvarying = 1;
  data->simulationInfo->realParameter[65] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[65].time_unvarying = 1;
  data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[66].time_unvarying = 1;
  data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[79].time_unvarying = 1;
  data->simulationInfo->realParameter[94] /* eSDC1A.K_F PARAM */ = 0.07000000000000001;
  data->modelData->realParameterData[94].time_unvarying = 1;
  data->simulationInfo->realParameter[125] /* eSDC1A.imDerivativeLag.k PARAM */ = 0.07000000000000001;
  data->modelData->realParameterData[125].time_unvarying = 1;
  data->simulationInfo->realParameter[173] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[173].time_unvarying = 1;
  data->simulationInfo->realParameter[199] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  data->modelData->realParameterData[199].time_unvarying = 1;
  data->simulationInfo->realParameter[200] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  data->modelData->realParameterData[200].time_unvarying = 1;
  data->simulationInfo->realParameter[205] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  data->modelData->realParameterData[205].time_unvarying = 1;
  data->simulationInfo->realParameter[206] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[206].time_unvarying = 1;
  data->simulationInfo->realParameter[207] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[207].time_unvarying = 1;
  data->simulationInfo->realParameter[208] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[208].time_unvarying = 1;
  data->simulationInfo->realParameter[209] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[209].time_unvarying = 1;
  data->simulationInfo->realParameter[210] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[210].time_unvarying = 1;
  data->simulationInfo->realParameter[225] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[225].time_unvarying = 1;
  data->simulationInfo->realParameter[226] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[226].time_unvarying = 1;
  data->simulationInfo->realParameter[227] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  data->modelData->realParameterData[227].time_unvarying = 1;
  data->simulationInfo->realParameter[228] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  data->modelData->realParameterData[228].time_unvarying = 1;
  data->simulationInfo->realParameter[235] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[235].time_unvarying = 1;
  data->simulationInfo->realParameter[236] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[236].time_unvarying = 1;
  data->simulationInfo->realParameter[244] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[244].time_unvarying = 1;
  data->simulationInfo->realParameter[245] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[245].time_unvarying = 1;
  data->simulationInfo->realParameter[255] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[255].time_unvarying = 1;
  data->simulationInfo->realParameter[256] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[256].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eSDC1A.imDerivativeLag.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eSDC1A.rotatingExciterLimited.sISO.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eSDC1A.rotatingExciterLimited.sISO.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eSDC1A.imDerivativeLag.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eSDC1A.imLeadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* eSDC1A.rotatingExciterLimited.sISO.initType PARAM */ = 4;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

