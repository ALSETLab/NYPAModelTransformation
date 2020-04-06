/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 344
type: SIMPLE_ASSIGN
$START._eXAC1_1._XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->modelData->realVarsData[61].attribute /* eXAC1_1.XADIFD variable */.start = data->simulationInfo->realParameter[255];
    data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */ = data->modelData->realVarsData[61].attribute /* eXAC1_1.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* eXAC1_1.XADIFD */.name, (modelica_real) data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
$START._eXAC1_1._ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->modelData->realVarsData[58].attribute /* eXAC1_1.ECOMP variable */.start = data->simulationInfo->realParameter[15];
    data->localData[0]->realVars[58] /* eXAC1_1.ECOMP variable */ = data->modelData->realVarsData[58].attribute /* eXAC1_1.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* eXAC1_1.ECOMP */.name, (modelica_real) data->localData[0]->realVars[58] /* eXAC1_1.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$START._eXAC1_1._EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->modelData->realVarsData[59].attribute /* eXAC1_1.EFD variable */.start = data->simulationInfo->realParameter[255];
    data->localData[0]->realVars[59] /* eXAC1_1.EFD variable */ = data->modelData->realVarsData[59].attribute /* eXAC1_1.EFD variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* eXAC1_1.EFD */.name, (modelica_real) data->localData[0]->realVars[59] /* eXAC1_1.EFD variable */);
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
$START._gENROE._PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->modelData->realVarsData[94].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[218];
    data->localData[0]->realVars[94] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[94].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[94] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
$START._gENROE._PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->modelData->realVarsData[93].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[217];
    data->localData[0]->realVars[93] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[93].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[93] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
$START._gENROE._PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->modelData->realVarsData[95].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[219];
    data->localData[0]->realVars[95] /* gENROE.PSIq variable */ = data->modelData->realVarsData[95].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
$START._gENROE._PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->modelData->realVarsData[91].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[210];
    data->localData[0]->realVars[91] /* gENROE.PSId variable */ = data->modelData->realVarsData[91].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[91] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
$START._gENROE._PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[212];
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
$START._gENROE._PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[211];
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
$START._gENROE._Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[193];
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$START._gENROE._Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[192];
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$START._gENROE._uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->modelData->realVarsData[104].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[265];
    data->localData[0]->realVars[104] /* gENROE.uq variable */ = data->modelData->realVarsData[104].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$START._gENROE._ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->modelData->realVarsData[103].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[264];
    data->localData[0]->realVars[103] /* gENROE.ud variable */ = data->modelData->realVarsData[103].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$START._gENROE._iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->modelData->realVarsData[102].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[259];
    data->localData[0]->realVars[102] /* gENROE.iq variable */ = data->modelData->realVarsData[102].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$START._gENROE._id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->modelData->realVarsData[101].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[257];
    data->localData[0]->realVars[101] /* gENROE.id variable */ = data->modelData->realVarsData[101].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$START._gENROE._Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->modelData->realVarsData[97].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[262];
    data->localData[0]->realVars[97] /* gENROE.Te variable */ = data->modelData->realVarsData[97].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
$START._gENROE._Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->modelData->realVarsData[96].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[221],data->simulationInfo->realParameter[227],"gENROE.S_b");
    data->localData[0]->realVars[96] /* gENROE.Q variable */ = data->modelData->realVarsData[96].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
$START._gENROE._P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->modelData->realVarsData[89].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[220],data->simulationInfo->realParameter[227],"gENROE.S_b");
    data->localData[0]->realVars[89] /* gENROE.P variable */ = data->modelData->realVarsData[89].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[89] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
$START._gENROE._anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->modelData->realVarsData[99].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[258], data->simulationInfo->realParameter[260]);
    data->localData[0]->realVars[99] /* gENROE.anglei variable */ = data->modelData->realVarsData[99].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[99] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
$START._gENROE._I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->simulationInfo->realParameter[260];
  tmp7 = data->simulationInfo->realParameter[258];
  data->modelData->realVarsData[88].attribute /* gENROE.I variable */.start = sqrt((tmp6 * tmp6) + (tmp7 * tmp7));
    data->localData[0]->realVars[88] /* gENROE.I variable */ = data->modelData->realVarsData[88].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[88] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
$START._gENROE._anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->modelData->realVarsData[100].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[251];
    data->localData[0]->realVars[100] /* gENROE.anglev variable */ = data->modelData->realVarsData[100].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
$START._gENROE._delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[253];
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$START._gENROE._PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->modelData->realVarsData[90].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[261];
    data->localData[0]->realVars[90] /* gENROE.PELEC variable */ = data->modelData->realVarsData[90].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
$START._FAULT._angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4];
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
$START._FAULT._V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7];
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
$START._GEN2._angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20];
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
$START._GEN2._V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[182];
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
$START._LOAD._angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28];
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
$START._GEN1._angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12];
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
$START._constantLoad._v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[73];
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
$START._constantLoad._angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[59];
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
$START._constantLoad._p._ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[68];
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
$START._constantLoad._p._ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[69];
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
$START._gENCLS._Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->modelData->realVarsData[78].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[167],data->simulationInfo->realParameter[169],"gENCLS.S_b");
    data->localData[0]->realVars[78] /* gENCLS.Q variable */ = data->modelData->realVarsData[78].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[78] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
$START._gENCLS._P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->modelData->realVarsData[77].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[166],data->simulationInfo->realParameter[169],"gENCLS.S_b");
    data->localData[0]->realVars[77] /* gENCLS.P variable */ = data->modelData->realVarsData[77].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[77] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
$START._gENCLS._iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->modelData->realVarsData[82].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[178];
    data->localData[0]->realVars[82] /* gENCLS.iq variable */ = data->modelData->realVarsData[82].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[82] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
$START._gENCLS._id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->modelData->realVarsData[81].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[176];
    data->localData[0]->realVars[81] /* gENCLS.id variable */ = data->modelData->realVarsData[81].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[81] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
$START._gENCLS._vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->modelData->realVarsData[87].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[186];
    data->localData[0]->realVars[87] /* gENCLS.vq variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
$START._gENCLS._vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->modelData->realVarsData[86].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[183];
    data->localData[0]->realVars[86] /* gENCLS.vd variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
$START._gENCLS._eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[184];
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
$START._gENCLS._anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->modelData->realVarsData[80].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[173];
    data->localData[0]->realVars[80] /* gENCLS.anglev variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
$START._gENCLS._delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[174];
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
$START._gENCLS._p._ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->modelData->realVarsData[84].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[177];
    data->localData[0]->realVars[84] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
$START._gENCLS._p._ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->modelData->realVarsData[85].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[179];
    data->localData[0]->realVars[85] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[85].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[85] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
$START._pwLine3._vr._im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->modelData->realVarsData[137].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7]) * (sin(data->simulationInfo->realParameter[5]));
    data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[137].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[137] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
$START._pwLine3._vr._re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->modelData->realVarsData[138].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7]) * (cos(data->simulationInfo->realParameter[5]));
    data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[138] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
$START._pwLine1._vr._im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->modelData->realVarsData[125].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[185];
    data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[125] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
$START._pwLine1._vr._re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->modelData->realVarsData[126].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[187];
    data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[126] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
$START._pwLine1._vs._im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->modelData->realVarsData[127].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[74];
    data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[127] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
$START._pwLine1._vs._re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->modelData->realVarsData[128].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[75];
    data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[128] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
$START._pwLine._is._im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->modelData->realVarsData[113].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[258]);
    data->localData[0]->realVars[113] /* pwLine.is.im variable */ = data->modelData->realVarsData[113].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[113] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
$START._pwLine._is._re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->modelData->realVarsData[114].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[260]);
    data->localData[0]->realVars[114] /* pwLine.is.re variable */ = data->modelData->realVarsData[114].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[114].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[114] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
$START._pwLine._vs._im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->modelData->realVarsData[115].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[267];
    data->localData[0]->realVars[115] /* pwLine.vs.im variable */ = data->modelData->realVarsData[115].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[115] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
$START._pwLine._vs._re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->modelData->realVarsData[116].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[268];
    data->localData[0]->realVars[116] /* pwLine.vs.re variable */ = data->modelData->realVarsData[116].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[116] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
$START._gENCLS._V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->modelData->realVarsData[79].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[182];
    data->localData[0]->realVars[79] /* gENCLS.V variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
$START._LOAD._V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31];
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
$START._GEN1._V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15];
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_379(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_380(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_381(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_382(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_383(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_384(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_385(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_386(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_387(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_388(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_389(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_390(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_391(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_392(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_393(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_394(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_395(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_396(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_397(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_398(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_399(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_400(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 401
type: SIMPLE_ASSIGN
eXAC1_1._TransducerDelay._T = eXAC1_1.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[98] = data->simulationInfo->realParameter[96];
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
eXAC1_1._TransducerDelay._T_mod = if eXAC1_1.TransducerDelay.T < 1e-15 then 1000.0 else eXAC1_1.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  modelica_boolean tmp0;
  tmp0 = Less(data->simulationInfo->realParameter[98],1e-15);
  data->simulationInfo->realParameter[99] = (tmp0?1000.0:data->simulationInfo->realParameter[98]);
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._K_D = eXAC1_1.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[145] = data->simulationInfo->realParameter[86];
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._T_E = eXAC1_1.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[152] = data->simulationInfo->realParameter[94];
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._sISO._k = 1.0 / eXAC1_1.rotatingExciterWithDemagnetizationLimited.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[154] = DIVISION_SIM(1.0,data->simulationInfo->realParameter[152],"eXAC1_1.rotatingExciterWithDemagnetizationLimited.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._E_2 = eXAC1_1.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[143] = data->simulationInfo->realParameter[81];
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._se1._E2 = eXAC1_1.rotatingExciterWithDemagnetizationLimited.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[159] = data->simulationInfo->realParameter[143];
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._E_1 = eXAC1_1.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[142] = data->simulationInfo->realParameter[80];
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._se1._E1 = eXAC1_1.rotatingExciterWithDemagnetizationLimited.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[158] = data->simulationInfo->realParameter[142];
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._S_EE_2 = eXAC1_1.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[148] = data->simulationInfo->realParameter[90];
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._se1._SE2 = eXAC1_1.rotatingExciterWithDemagnetizationLimited.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[161] = data->simulationInfo->realParameter[148];
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._S_EE_1 = eXAC1_1.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[147] = data->simulationInfo->realParameter[89];
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._se1._SE1 = eXAC1_1.rotatingExciterWithDemagnetizationLimited.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[160] = data->simulationInfo->realParameter[147];
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._Sum._k3 = eXAC1_1.rotatingExciterWithDemagnetizationLimited.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[151] = data->simulationInfo->realParameter[145];
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._K_E = eXAC1_1.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[146] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._gain._k = eXAC1_1.rotatingExciterWithDemagnetizationLimited.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[153] = data->simulationInfo->realParameter[146];
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
eXAC1_1._rectifierCommutationVoltageDrop._K_C = eXAC1_1.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[140] = data->simulationInfo->realParameter[85];
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
eXAC1_1._rectifierCommutationVoltageDrop._gain2._k = eXAC1_1.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[141] = data->simulationInfo->realParameter[140];
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._T1 = eXAC1_1.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[125] = data->simulationInfo->realParameter[93];
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._T2 = eXAC1_1.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[126] = data->simulationInfo->realParameter[92];
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._T2_dummy = if abs(eXAC1_1.leadLag.T1 - eXAC1_1.leadLag.T2) < 1e-15 then 1000.0 else eXAC1_1.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  modelica_boolean tmp1;
  tmp1 = Less(fabs(data->simulationInfo->realParameter[125] - data->simulationInfo->realParameter[126]),1e-15);
  data->simulationInfo->realParameter[127] = (tmp1?1000.0:data->simulationInfo->realParameter[126]);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._a[1] = eXAC1_1.leadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[128] = data->simulationInfo->realParameter[127];
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._a_end = if eXAC1_1.leadLag.TF.a[2] > 1e-13 * sqrt(eXAC1_1.leadLag.TF.a[1] ^ 2.0 + eXAC1_1.leadLag.TF.a[2] ^ 2.0) then eXAC1_1.leadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  tmp2 = data->simulationInfo->realParameter[128];
  tmp3 = data->simulationInfo->realParameter[129];
  tmp4 = Greater(data->simulationInfo->realParameter[129],(1e-13) * (sqrt((tmp2 * tmp2) + (tmp3 * tmp3))));
  data->simulationInfo->realParameter[130] = (tmp4?data->simulationInfo->realParameter[129]:1.0);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._b[1] = eXAC1_1.leadLag.K * eXAC1_1.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[131] = (data->simulationInfo->realParameter[124]) * (data->simulationInfo->realParameter[125]);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._bb[1] = eXAC1_1.leadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[133] = data->simulationInfo->realParameter[131];
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._d = eXAC1_1.leadLag.TF.bb[1] / eXAC1_1.leadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[135] = DIVISION_SIM(data->simulationInfo->realParameter[133],data->simulationInfo->realParameter[128],"eXAC1_1.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._b[2] = eXAC1_1.leadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[132] = data->simulationInfo->realParameter[124];
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
eXAC1_1._leadLag._TF._bb[2] = eXAC1_1.leadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[134] = data->simulationInfo->realParameter[132];
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
eXAC1_1._imDerivativeLag._T = eXAC1_1.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[114] = data->simulationInfo->realParameter[95];
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
eXAC1_1._imLimitedSimpleLag._T = eXAC1_1.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[119] = data->simulationInfo->realParameter[91];
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
eXAC1_1._imLimitedSimpleLag._T_mod = if eXAC1_1.imLimitedSimpleLag.T < 1e-15 then 1000.0 else eXAC1_1.imLimitedSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[119],1e-15);
  data->simulationInfo->realParameter[120] = (tmp5?1000.0:data->simulationInfo->realParameter[119]);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
eXAC1_1._imLimitedSimpleLag._outMin = eXAC1_1.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[122] = data->simulationInfo->realParameter[106];
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
eXAC1_1._imLimitedSimpleLag._outMax = eXAC1_1.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[121] = data->simulationInfo->realParameter[105];
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
eXAC1_1._imLimitedSimpleLag._K = eXAC1_1.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->realParameter[118] = data->simulationInfo->realParameter[84];
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
gENROE._K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[208] = DIVISION_SIM(data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[240],data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236],"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
gENROE._K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[206] = DIVISION_SIM(data->simulationInfo->realParameter[240] - data->simulationInfo->realParameter[236],data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236],"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
gENROE._K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[207] = DIVISION_SIM(data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[239],data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[236],"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
gENROE._K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[205] = DIVISION_SIM(data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[236],data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[236],"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
gENROE._K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[204] = (data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236]) * (DIVISION_SIM(data->simulationInfo->realParameter[240] - data->simulationInfo->realParameter[236],data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[240],"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
gENROE._K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236];
  data->simulationInfo->realParameter[202] = (data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[240]) * (DIVISION_SIM(data->simulationInfo->realParameter[242] - data->simulationInfo->realParameter[241],(tmp6 * tmp6),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
gENROE._K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[203] = (data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[236]) * (DIVISION_SIM(data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[236],data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[239],"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
gENROE._K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[236];
  data->simulationInfo->realParameter[201] = (data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[239]) * (DIVISION_SIM(data->simulationInfo->realParameter[235] - data->simulationInfo->realParameter[237],(tmp7 * tmp7),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
gENROE._PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[218] = data->simulationInfo->realParameter[215];
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
gENROE._iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[259] = data->simulationInfo->realParameter[196];
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
gENROE._PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[219] = data->simulationInfo->realParameter[218] - ((data->simulationInfo->realParameter[240]) * (data->simulationInfo->realParameter[259]));
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
gENROE._PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[217] = data->simulationInfo->realParameter[216];
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
gENROE._id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[257] = data->simulationInfo->realParameter[195];
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
gENROE._PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[210] = data->simulationInfo->realParameter[217] - ((data->simulationInfo->realParameter[239]) * (data->simulationInfo->realParameter[257]));
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
gENROE._PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[212] = DIVISION_SIM((data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236]) * ((data->simulationInfo->realParameter[206]) * (data->simulationInfo->realParameter[259])) - data->simulationInfo->realParameter[218],data->simulationInfo->realParameter[206] + data->simulationInfo->realParameter[208],"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
gENROE._PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[211] = DIVISION_SIM(data->simulationInfo->realParameter[217] + (data->simulationInfo->realParameter[236] - data->simulationInfo->realParameter[237]) * ((data->simulationInfo->realParameter[205]) * (data->simulationInfo->realParameter[257])),data->simulationInfo->realParameter[205] + data->simulationInfo->realParameter[207],"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
gENROE._Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[192] = data->simulationInfo->realParameter[212] + (data->simulationInfo->realParameter[236] - data->simulationInfo->realParameter[241]) * (data->simulationInfo->realParameter[259]);
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
gENROE._Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[193] = data->simulationInfo->realParameter[211] + (data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[236]) * (data->simulationInfo->realParameter[257]);
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
gENROE._Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[238] = data->simulationInfo->realParameter[239];
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
gENROE._abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp8 = data->simulationInfo->realParameter[214];
  tmp9 = data->simulationInfo->realParameter[213];
  tmp10 = (tmp8 * tmp8) + (tmp9 * tmp9);
  if(!(tmp10 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp10);
  }
  data->simulationInfo->realParameter[246] = sqrt(tmp10);
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
gENROE._dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[254] = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[246], data->simulationInfo->realParameter[225], data->simulationInfo->realParameter[226], 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
gENROE._efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xpd - gENROE.Xpp + gENROE.Xd - gENROE.Xpd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[255] = (data->simulationInfo->realParameter[217]) * (1.0 + data->simulationInfo->realParameter[254]) + (data->simulationInfo->realParameter[257]) * (data->simulationInfo->realParameter[237] - data->simulationInfo->realParameter[238] + data->simulationInfo->realParameter[235] - data->simulationInfo->realParameter[237]);
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
gENROE._p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[261] = DIVISION_SIM(data->simulationInfo->realParameter[220],data->simulationInfo->realParameter[209],"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
gENROE._pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  modelica_real tmp11;
  modelica_real tmp12;
  tmp11 = data->simulationInfo->realParameter[259];
  tmp12 = data->simulationInfo->realParameter[257];
  data->simulationInfo->realParameter[262] = data->simulationInfo->realParameter[261] + (data->simulationInfo->realParameter[222]) * ((tmp11 * tmp11) + (tmp12 * tmp12));
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
gENROE._uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[265] = data->simulationInfo->realParameter[217] + ((-data->simulationInfo->realParameter[239])) * (data->simulationInfo->realParameter[257]) - ((data->simulationInfo->realParameter[222]) * (data->simulationInfo->realParameter[259]));
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
gENROE._ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[264] = (data->simulationInfo->realParameter[240]) * (data->simulationInfo->realParameter[259]) + (-data->simulationInfo->realParameter[218]) - ((data->simulationInfo->realParameter[222]) * (data->simulationInfo->realParameter[257]));
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
gENROE._ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[248] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[213], data->simulationInfo->realParameter[214], 0.0);
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
gENROE._ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[247] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[199], data->simulationInfo->realParameter[200], 0.0);
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
gENROE._ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[249] = data->simulationInfo->realParameter[248] - data->simulationInfo->realParameter[247];
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
gENROE._a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[245] = (data->simulationInfo->realParameter[246]) * (1.0 + (data->simulationInfo->realParameter[254]) * (DIVISION_SIM(data->simulationInfo->realParameter[242] - data->simulationInfo->realParameter[236],data->simulationInfo->realParameter[235] - data->simulationInfo->realParameter[236],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
gENROE._b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[200];
  tmp14 = data->simulationInfo->realParameter[199];
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[252] = (sqrt(tmp15)) * (data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[242]);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
gENROE._delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[253] = atan((data->simulationInfo->realParameter[252]) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[249]),(data->simulationInfo->realParameter[252]) * (sin(data->simulationInfo->realParameter[249])) - data->simulationInfo->realParameter[245],"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[248];
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
gENROE._q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[263] = DIVISION_SIM(data->simulationInfo->realParameter[221],data->simulationInfo->realParameter[209],"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
gENROE._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[227] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
gENROE._CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[188] = DIVISION_SIM(data->simulationInfo->realParameter[209],data->simulationInfo->realParameter[227],"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
gENROE._angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[251] = (0.0174532925199433) * (data->simulationInfo->realParameter[250]);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
gENROE._vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[268] = (data->simulationInfo->realParameter[266]) * (cos(data->simulationInfo->realParameter[251]));
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
gENROE._vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[267] = (data->simulationInfo->realParameter[266]) * (sin(data->simulationInfo->realParameter[251]));
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
gENROE._ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[268];
  tmp17 = data->simulationInfo->realParameter[267];
  data->simulationInfo->realParameter[258] = DIVISION_SIM((data->simulationInfo->realParameter[188]) * ((data->simulationInfo->realParameter[263]) * (data->simulationInfo->realParameter[268]) - ((data->simulationInfo->realParameter[261]) * (data->simulationInfo->realParameter[267]))),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
gENROE._ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[268];
  tmp19 = data->simulationInfo->realParameter[267];
  data->simulationInfo->realParameter[260] = ((-data->simulationInfo->realParameter[188])) * (DIVISION_SIM((data->simulationInfo->realParameter[261]) * (data->simulationInfo->realParameter[268]) + (data->simulationInfo->realParameter[263]) * (data->simulationInfo->realParameter[267]),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
gENROE._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[256] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
gENROE._w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[269] = (6.283185307179586) * (data->simulationInfo->realParameter[256]);
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
FAULT._angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[5] = (0.0174532925199433) * (data->simulationInfo->realParameter[4]);
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
FAULT._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
FAULT._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
GEN2._angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[21] = (0.0174532925199433) * (data->simulationInfo->realParameter[20]);
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
GEN2._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
GEN2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
LOAD._angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[29] = (0.0174532925199433) * (data->simulationInfo->realParameter[28]);
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
LOAD._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
LOAD._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
GEN1._angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[13] = (0.0174532925199433) * (data->simulationInfo->realParameter[12]);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
GEN1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[14] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
GEN1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
pwFault._ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[270]),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[271]),1e-15);
  data->simulationInfo->booleanParameter[66] = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
constantLoad._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[45] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
constantLoad._p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[70] = DIVISION_SIM((data->simulationInfo->realParameter[47]) * (data->simulationInfo->realParameter[73]) + (data->simulationInfo->realParameter[51]) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[49],data->simulationInfo->realParameter[45],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
constantLoad._q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[71] = DIVISION_SIM((data->simulationInfo->realParameter[46]) * (data->simulationInfo->realParameter[73]) + (data->simulationInfo->realParameter[50]) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[48],data->simulationInfo->realParameter[45],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
constantLoad._PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[35] = ((data->simulationInfo->realParameter[71] == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[70],data->simulationInfo->realParameter[71],"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
constantLoad._d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[65] = DIVISION_SIM(data->simulationInfo->realParameter[70] + data->simulationInfo->realParameter[64],data->simulationInfo->realParameter[35],"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[71];
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
constantLoad._angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[59] = (0.0174532925199433) * (data->simulationInfo->realParameter[58]);
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
constantLoad._vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[75] = (data->simulationInfo->realParameter[73]) * (cos(data->simulationInfo->realParameter[59]));
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
constantLoad._vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->realParameter[74] = (data->simulationInfo->realParameter[73]) * (sin(data->simulationInfo->realParameter[59]));
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
constantLoad._ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[75];
  tmp26 = data->simulationInfo->realParameter[74];
  data->simulationInfo->realParameter[68] = DIVISION_SIM((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[74]) - ((data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[75])),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
constantLoad._ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[75];
  tmp28 = data->simulationInfo->realParameter[74];
  data->simulationInfo->realParameter[69] = DIVISION_SIM((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[75]) + (data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[74]),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
constantLoad._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[67] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
gENCLS._angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->realParameter[173] = (0.0174532925199433) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
gENCLS._vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->simulationInfo->realParameter[187] = (data->simulationInfo->realParameter[182]) * (cos(data->simulationInfo->realParameter[173]));
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
gENCLS._vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[185] = (data->simulationInfo->realParameter[182]) * (sin(data->simulationInfo->realParameter[173]));
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
gENCLS._p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[180] = DIVISION_SIM(data->simulationInfo->realParameter[166],data->simulationInfo->realParameter[165],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
gENCLS._q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[181] = DIVISION_SIM(data->simulationInfo->realParameter[167],data->simulationInfo->realParameter[165],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
gENCLS._ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[187];
  tmp30 = data->simulationInfo->realParameter[185];
  data->simulationInfo->realParameter[179] = DIVISION_SIM((data->simulationInfo->realParameter[180]) * (data->simulationInfo->realParameter[187]) + (data->simulationInfo->realParameter[181]) * (data->simulationInfo->realParameter[185]),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
gENCLS._ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[187];
  tmp32 = data->simulationInfo->realParameter[185];
  data->simulationInfo->realParameter[177] = DIVISION_SIM((data->simulationInfo->realParameter[180]) * (data->simulationInfo->realParameter[185]) - ((data->simulationInfo->realParameter[181]) * (data->simulationInfo->realParameter[187])),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
gENCLS._delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[174] = atan2(data->simulationInfo->realParameter[185] + (data->simulationInfo->realParameter[168]) * (data->simulationInfo->realParameter[177]) + (data->simulationInfo->realParameter[171]) * (data->simulationInfo->realParameter[179]), data->simulationInfo->realParameter[187] + (data->simulationInfo->realParameter[168]) * (data->simulationInfo->realParameter[179]) - ((data->simulationInfo->realParameter[171]) * (data->simulationInfo->realParameter[177])));
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
gENCLS._vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->simulationInfo->realParameter[186] = (data->simulationInfo->realParameter[187]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[174])) + (data->simulationInfo->realParameter[185]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[174]));
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
gENCLS._id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->realParameter[176] = (data->simulationInfo->realParameter[179]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[174])) - ((data->simulationInfo->realParameter[177]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[174])));
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
gENCLS._iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[178] = (data->simulationInfo->realParameter[179]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[174])) + (data->simulationInfo->realParameter[177]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[174]));
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
gENCLS._vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->realParameter[184] = data->simulationInfo->realParameter[186] + (data->simulationInfo->realParameter[168]) * (data->simulationInfo->realParameter[178]) + (data->simulationInfo->realParameter[171]) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
gENCLS._vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[183] = (data->simulationInfo->realParameter[187]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[174])) - ((data->simulationInfo->realParameter[185]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[174])));
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
gENCLS._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[169] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
gENCLS._CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[162] = DIVISION_SIM(data->simulationInfo->realParameter[165],data->simulationInfo->realParameter[169],"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
gENCLS._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[175] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
pwLine4._Z._im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[314] = data->simulationInfo->realParameter[311];
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
pwLine4._Z._re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->simulationInfo->realParameter[315] = data->simulationInfo->realParameter[309];
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
pwLine4._Y._im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[312] = data->simulationInfo->realParameter[307];
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
pwLine4._Y._re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[313] = data->simulationInfo->realParameter[308];
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
pwLine4._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[310] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
pwLine3._Z._im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[303] = data->simulationInfo->realParameter[300];
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
pwLine3._Z._re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->simulationInfo->realParameter[304] = data->simulationInfo->realParameter[298];
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
pwLine3._Y._im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[301] = data->simulationInfo->realParameter[296];
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
pwLine3._Y._re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[302] = data->simulationInfo->realParameter[297];
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
pwLine3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->simulationInfo->realParameter[299] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
pwLine1._Z._im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->simulationInfo->realParameter[292] = data->simulationInfo->realParameter[289];
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
pwLine1._Z._re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->simulationInfo->realParameter[293] = data->simulationInfo->realParameter[287];
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
pwLine1._Y._im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->realParameter[290] = data->simulationInfo->realParameter[285];
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
pwLine1._Y._re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->simulationInfo->realParameter[291] = data->simulationInfo->realParameter[286];
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
pwLine1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->simulationInfo->realParameter[288] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
pwLine._Z._im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->simulationInfo->realParameter[281] = data->simulationInfo->realParameter[278];
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
pwLine._Z._re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->simulationInfo->realParameter[282] = data->simulationInfo->realParameter[276];
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
pwLine._Y._im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->simulationInfo->realParameter[279] = data->simulationInfo->realParameter[274];
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
pwLine._Y._re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[280] = data->simulationInfo->realParameter[275];
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
pwLine._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[277] = data->simulationInfo->realParameter[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_166(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_165(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_164(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_163(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_162(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_161(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_160(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_159(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 594
type: ALGORITHM

  assert(eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,196,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[6],1);
    tmp34 = LessEq((modelica_integer)data->simulationInfo->integerParameter[6],4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[6], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 595
type: ALGORITHM

  assert(eXAC1_1.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC1_1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC1_1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC1_1.leadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,160,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC1_1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[2],1);
    tmp39 = LessEq((modelica_integer)data->simulationInfo->integerParameter[2],4);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[2], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC1_1.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC1_1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 596
type: ALGORITHM

  assert(eXAC1_1.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC1_1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC1_1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC1_1.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,165,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC1_1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[1],1);
    tmp44 = LessEq((modelica_integer)data->simulationInfo->integerParameter[1],4);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[1], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC1_1.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC1_1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 597
type: ALGORITHM

  assert(eXAC1_1.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eXAC1_1.imDerivativeLag.T, has value: " + String(eXAC1_1.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,82,"Variable violating min constraint: 1e-60 <= eXAC1_1.imDerivativeLag.T, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->simulationInfo->realParameter[114],1e-60);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[114], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC1_1.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_401(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_416(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_464(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_536(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_537(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_538(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_547(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_550(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_551(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_557(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_559(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_560(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_561(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_571(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_572(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_573(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_578(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_579(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_580(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_166(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_165(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_164(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_162(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_160(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_159(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_594(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_596(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_597(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->localData[0]->realVars[83] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[83].time_unvarying = 1;
  data->simulationInfo->realParameter[39] = 0.0;
  data->modelData->realParameterData[39].time_unvarying = 1;
  data->simulationInfo->realParameter[40] = 0.5040355607168797;
  data->modelData->realParameterData[40].time_unvarying = 1;
  data->simulationInfo->realParameter[41] = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] = 0.0;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] = 0.1016207385868717;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[44] = 0.0;
  data->modelData->realParameterData[44].time_unvarying = 1;
  data->simulationInfo->realParameter[55] = 0.4881;
  data->modelData->realParameterData[55].time_unvarying = 1;
  data->simulationInfo->realParameter[56] = -0.4999;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[57] = 1.502;
  data->modelData->realParameterData[57].time_unvarying = 1;
  data->simulationInfo->realParameter[62] = 0.1389;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[63] = 1.769;
  data->modelData->realParameterData[63].time_unvarying = 1;
  data->simulationInfo->realParameter[76] = 3.964;
  data->modelData->realParameterData[76].time_unvarying = 1;
  data->simulationInfo->realParameter[88] = 0.03;
  data->modelData->realParameterData[88].time_unvarying = 1;
  data->simulationInfo->realParameter[115] = 0.03;
  data->modelData->realParameterData[115].time_unvarying = 1;
  data->simulationInfo->realParameter[164] = 0.0;
  data->modelData->realParameterData[164].time_unvarying = 1;
  data->simulationInfo->realParameter[190] = -0.5650202843208616;
  data->modelData->realParameterData[190].time_unvarying = 1;
  data->simulationInfo->realParameter[191] = 0.825077013560536;
  data->modelData->realParameterData[191].time_unvarying = 1;
  data->simulationInfo->realParameter[195] = 0.248896193836464;
  data->modelData->realParameterData[195].time_unvarying = 1;
  data->simulationInfo->realParameter[196] = 0.3177807746702022;
  data->modelData->realParameterData[196].time_unvarying = 1;
  data->simulationInfo->realParameter[197] = -5.013342868567351;
  data->modelData->realParameterData[197].time_unvarying = 1;
  data->simulationInfo->realParameter[198] = 0.7556357708851228;
  data->modelData->realParameterData[198].time_unvarying = 1;
  data->simulationInfo->realParameter[199] = -0.02580594464131273;
  data->modelData->realParameterData[199].time_unvarying = 1;
  data->simulationInfo->realParameter[200] = 0.4028250107397031;
  data->modelData->realParameterData[200].time_unvarying = 1;
  data->simulationInfo->realParameter[213] = 0.1511271541770246;
  data->modelData->realParameterData[213].time_unvarying = 1;
  data->simulationInfo->realParameter[214] = 1.00266857371347;
  data->modelData->realParameterData[214].time_unvarying = 1;
  data->simulationInfo->realParameter[215] = -0.4418365415628956;
  data->modelData->realParameterData[215].time_unvarying = 1;
  data->simulationInfo->realParameter[216] = 0.9126687000122171;
  data->modelData->realParameterData[216].time_unvarying = 1;
  data->simulationInfo->realParameter[223] = 0.05416582;
  data->modelData->realParameterData[223].time_unvarying = 1;
  data->simulationInfo->realParameter[224] = 0.4;
  data->modelData->realParameterData[224].time_unvarying = 1;
  data->simulationInfo->realParameter[232] = 0.07056215202908395;
  data->modelData->realParameterData[232].time_unvarying = 1;
  data->simulationInfo->realParameter[233] = 0.9975073847852077;
  data->modelData->realParameterData[233].time_unvarying = 1;
  data->simulationInfo->realParameter[243] = 0.2;
  data->modelData->realParameterData[243].time_unvarying = 1;
  data->simulationInfo->realParameter[244] = 0.0;
  data->modelData->realParameterData[244].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] = 4;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

