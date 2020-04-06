/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 323
type: SIMPLE_ASSIGN
$START._iEEET2_1._rotatingExciter._sISO._y = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->modelData->realVarsData[10].attribute /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[170];
    data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */ = data->modelData->realVarsData[10].attribute /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* iEEET2_1.rotatingExciter.sISO.y */.name, (modelica_real) data->localData[0]->realVars[10] /* iEEET2_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
$START._iEEET2_1._ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->modelData->realVarsData[86].attribute /* iEEET2_1.ECOMP variable */.start = data->simulationInfo->realParameter[15];
    data->localData[0]->realVars[86] /* iEEET2_1.ECOMP variable */ = data->modelData->realVarsData[86].attribute /* iEEET2_1.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* iEEET2_1.ECOMP */.name, (modelica_real) data->localData[0]->realVars[86] /* iEEET2_1.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
$START._gENROE._PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->modelData->realVarsData[71].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[133];
    data->localData[0]->realVars[71] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[71].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[71] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
$START._gENROE._PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->modelData->realVarsData[70].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[132];
    data->localData[0]->realVars[70] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[70].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[70] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
$START._gENROE._PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->modelData->realVarsData[72].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[134];
    data->localData[0]->realVars[72] /* gENROE.PSIq variable */ = data->modelData->realVarsData[72].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[72] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
$START._gENROE._PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->modelData->realVarsData[68].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[125];
    data->localData[0]->realVars[68] /* gENROE.PSId variable */ = data->modelData->realVarsData[68].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[68] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
$START._gENROE._PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->modelData->realVarsData[5].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[127];
    data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
$START._gENROE._PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->modelData->realVarsData[4].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[126];
    data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
$START._gENROE._Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->modelData->realVarsData[3].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[108];
    data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[3].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
$START._gENROE._Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->modelData->realVarsData[2].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[107];
    data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[2].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
$START._gENROE._uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->modelData->realVarsData[82].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[180];
    data->localData[0]->realVars[82] /* gENROE.uq variable */ = data->modelData->realVarsData[82].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[82] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
$START._gENROE._ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->modelData->realVarsData[81].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[179];
    data->localData[0]->realVars[81] /* gENROE.ud variable */ = data->modelData->realVarsData[81].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[81] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
$START._gENROE._iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->modelData->realVarsData[80].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[174];
    data->localData[0]->realVars[80] /* gENROE.iq variable */ = data->modelData->realVarsData[80].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[80] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
$START._gENROE._id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->modelData->realVarsData[79].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[172];
    data->localData[0]->realVars[79] /* gENROE.id variable */ = data->modelData->realVarsData[79].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[79] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
$START._gENROE._Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->modelData->realVarsData[74].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[177];
    data->localData[0]->realVars[74] /* gENROE.Te variable */ = data->modelData->realVarsData[74].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[74] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
$START._gENROE._Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->modelData->realVarsData[73].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[136],data->simulationInfo->realParameter[142],"gENROE.S_b");
    data->localData[0]->realVars[73] /* gENROE.Q variable */ = data->modelData->realVarsData[73].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[73] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
$START._gENROE._P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->modelData->realVarsData[66].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[135],data->simulationInfo->realParameter[142],"gENROE.S_b");
    data->localData[0]->realVars[66] /* gENROE.P variable */ = data->modelData->realVarsData[66].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[66] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
$START._gENROE._anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->modelData->realVarsData[77].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[173], data->simulationInfo->realParameter[175]);
    data->localData[0]->realVars[77] /* gENROE.anglei variable */ = data->modelData->realVarsData[77].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[77] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
$START._gENROE._I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[175];
  tmp1 = data->simulationInfo->realParameter[173];
  data->modelData->realVarsData[65].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[65] /* gENROE.I variable */ = data->modelData->realVarsData[65].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[65] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
$START._gENROE._anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->modelData->realVarsData[78].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[166];
    data->localData[0]->realVars[78] /* gENROE.anglev variable */ = data->modelData->realVarsData[78].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[78] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
$START._gENROE._delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->modelData->realVarsData[6].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[168];
    data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
$START._gENROE._XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->modelData->realVarsData[75].attribute /* gENROE.XADIFD variable */.start = data->simulationInfo->realParameter[170];
    data->localData[0]->realVars[75] /* gENROE.XADIFD variable */ = data->modelData->realVarsData[75].attribute /* gENROE.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* gENROE.XADIFD */.name, (modelica_real) data->localData[0]->realVars[75] /* gENROE.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
$START._gENROE._PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->modelData->realVarsData[67].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[176];
    data->localData[0]->realVars[67] /* gENROE.PELEC variable */ = data->modelData->realVarsData[67].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[67] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$START._FAULT._angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4];
    data->localData[0]->realVars[31] /* FAULT.angle variable */ = data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[31] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
$START._FAULT._V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7];
    data->localData[0]->realVars[30] /* FAULT.V variable */ = data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[30] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
$START._GEN2._angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20];
    data->localData[0]->realVars[39] /* GEN2.angle variable */ = data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[39] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
$START._GEN2._V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[97];
    data->localData[0]->realVars[38] /* GEN2.V variable */ = data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[38] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
$START._LOAD._angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28];
    data->localData[0]->realVars[43] /* LOAD.angle variable */ = data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[43] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
$START._GEN1._angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12];
    data->localData[0]->realVars[35] /* GEN1.angle variable */ = data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[35] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
$START._constantLoad._v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[73];
    data->localData[0]->realVars[53] /* constantLoad.v variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
$START._constantLoad._angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[59];
    data->localData[0]->realVars[48] /* constantLoad.angle variable */ = data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$START._constantLoad._p._ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[68];
    data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[51] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$START._constantLoad._p._ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[69];
    data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[52] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$START._gENCLS._Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->modelData->realVarsData[55].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[82],data->simulationInfo->realParameter[84],"gENCLS.S_b");
    data->localData[0]->realVars[55] /* gENCLS.Q variable */ = data->modelData->realVarsData[55].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[55] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$START._gENCLS._P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->modelData->realVarsData[54].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[81],data->simulationInfo->realParameter[84],"gENCLS.S_b");
    data->localData[0]->realVars[54] /* gENCLS.P variable */ = data->modelData->realVarsData[54].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[54] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$START._gENCLS._iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->modelData->realVarsData[59].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[93];
    data->localData[0]->realVars[59] /* gENCLS.iq variable */ = data->modelData->realVarsData[59].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[59] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$START._gENCLS._id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->modelData->realVarsData[58].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[91];
    data->localData[0]->realVars[58] /* gENCLS.id variable */ = data->modelData->realVarsData[58].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[58] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
$START._gENCLS._vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->modelData->realVarsData[64].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[101];
    data->localData[0]->realVars[64] /* gENCLS.vq variable */ = data->modelData->realVarsData[64].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[64] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
$START._gENCLS._vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->modelData->realVarsData[63].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[98];
    data->localData[0]->realVars[63] /* gENCLS.vd variable */ = data->modelData->realVarsData[63].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[63] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
$START._gENCLS._eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[99];
    data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
$START._gENCLS._anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->modelData->realVarsData[57].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[88];
    data->localData[0]->realVars[57] /* gENCLS.anglev variable */ = data->modelData->realVarsData[57].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[57] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
$START._gENCLS._delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[89];
    data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
$START._gENCLS._p._ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->modelData->realVarsData[61].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[92];
    data->localData[0]->realVars[61] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[61].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[61] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$START._gENCLS._p._ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->modelData->realVarsData[62].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[94];
    data->localData[0]->realVars[62] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[62].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[62] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
$START._pwLine3._vr._im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->modelData->realVarsData[129].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7]) * (sin(data->simulationInfo->realParameter[5]));
    data->localData[0]->realVars[129] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[129].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[129] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
$START._pwLine3._vr._re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->modelData->realVarsData[130].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7]) * (cos(data->simulationInfo->realParameter[5]));
    data->localData[0]->realVars[130] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[130].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[130] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
$START._pwLine1._vr._im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->modelData->realVarsData[117].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[100];
    data->localData[0]->realVars[117] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[117].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[117] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
$START._pwLine1._vr._re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->modelData->realVarsData[118].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[102];
    data->localData[0]->realVars[118] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[118].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
$START._pwLine1._vs._im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->modelData->realVarsData[119].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[74];
    data->localData[0]->realVars[119] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[119].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[119].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[119] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
$START._pwLine1._vs._re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->modelData->realVarsData[120].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[75];
    data->localData[0]->realVars[120] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[120].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[120] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
$START._pwLine._is._im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->modelData->realVarsData[105].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[173]);
    data->localData[0]->realVars[105] /* pwLine.is.im variable */ = data->modelData->realVarsData[105].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[105] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
$START._pwLine._is._re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->modelData->realVarsData[106].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[175]);
    data->localData[0]->realVars[106] /* pwLine.is.re variable */ = data->modelData->realVarsData[106].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[106] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
$START._pwLine._vs._im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->modelData->realVarsData[107].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[182];
    data->localData[0]->realVars[107] /* pwLine.vs.im variable */ = data->modelData->realVarsData[107].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[107] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
$START._pwLine._vs._re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->modelData->realVarsData[108].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[183];
    data->localData[0]->realVars[108] /* pwLine.vs.re variable */ = data->modelData->realVarsData[108].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[108] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
$START._GEN1._V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15];
    data->localData[0]->realVars[34] /* GEN1.V variable */ = data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[34] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
$START._gENCLS._V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->modelData->realVarsData[56].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[97];
    data->localData[0]->realVars[56] /* gENCLS.V variable */ = data->modelData->realVarsData[56].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[56] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
$START._LOAD._V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->modelData->realVarsData[42].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31];
    data->localData[0]->realVars[42] /* LOAD.V variable */ = data->modelData->realVarsData[42].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[42] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_357(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_358(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_359(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_360(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_361(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_362(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_363(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_364(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_365(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_366(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_367(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_368(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_369(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_370(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_371(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_372(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_373(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_374(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_375(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_376(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_377(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_378(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_379(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 380
type: SIMPLE_ASSIGN
iEEET2_1._TransducerDelay._T = iEEET2_1.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[205] = data->simulationInfo->realParameter[203];
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
iEEET2_1._TransducerDelay._T_mod = if iEEET2_1.TransducerDelay.T < 1e-15 then 1000.0 else iEEET2_1.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp0;
  tmp0 = Less(data->simulationInfo->realParameter[205],1e-15);
  data->simulationInfo->realParameter[206] = (tmp0?1000.0:data->simulationInfo->realParameter[205]);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._T_E = iEEET2_1.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[227] = data->simulationInfo->realParameter[201];
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._sISO._k = 1.0 / iEEET2_1.rotatingExciter.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[229] = DIVISION_SIM(1.0,data->simulationInfo->realParameter[227],"iEEET2_1.rotatingExciter.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._E_2 = iEEET2_1.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[220] = data->simulationInfo->realParameter[191];
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._se1._E2 = iEEET2_1.rotatingExciter.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[232] = data->simulationInfo->realParameter[220];
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._E_1 = iEEET2_1.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[219] = data->simulationInfo->realParameter[190];
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._se1._E1 = iEEET2_1.rotatingExciter.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[231] = data->simulationInfo->realParameter[219];
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._S_EE_2 = iEEET2_1.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[224] = data->simulationInfo->realParameter[199];
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._se1._SE2 = iEEET2_1.rotatingExciter.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[234] = data->simulationInfo->realParameter[224];
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._S_EE_1 = iEEET2_1.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[223] = data->simulationInfo->realParameter[198];
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
iEEET2_1._rotatingExciter._se1._SE1 = iEEET2_1.rotatingExciter.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[233] = data->simulationInfo->realParameter[223];
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._T = iEEET2_1.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[236] = data->simulationInfo->realParameter[200];
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._T_mod = if iEEET2_1.simpleLagLim.T < 1e-15 then 1000.0 else iEEET2_1.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  modelica_boolean tmp1;
  tmp1 = Less(data->simulationInfo->realParameter[236],1e-15);
  data->simulationInfo->realParameter[237] = (tmp1?1000.0:data->simulationInfo->realParameter[236]);
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._outMin = iEEET2_1.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[239] = data->simulationInfo->realParameter[213];
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._outMax = iEEET2_1.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[238] = data->simulationInfo->realParameter[212];
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
iEEET2_1._simpleLagLim._K = iEEET2_1.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[235] = data->simulationInfo->realParameter[194];
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._T = iEEET2_1.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[215] = data->simulationInfo->realParameter[202];
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
gENROE._K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[123] = DIVISION_SIM(data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[155],data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151],"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENROE._K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[121] = DIVISION_SIM(data->simulationInfo->realParameter[155] - data->simulationInfo->realParameter[151],data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151],"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
gENROE._K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[122] = DIVISION_SIM(data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[154],data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[151],"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
gENROE._K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[120] = DIVISION_SIM(data->simulationInfo->realParameter[154] - data->simulationInfo->realParameter[151],data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[151],"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
gENROE._K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[119] = (data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151]) * (DIVISION_SIM(data->simulationInfo->realParameter[155] - data->simulationInfo->realParameter[151],data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[155],"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
gENROE._K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  modelica_real tmp2;
  tmp2 = data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151];
  data->simulationInfo->realParameter[117] = (data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[155]) * (DIVISION_SIM(data->simulationInfo->realParameter[157] - data->simulationInfo->realParameter[156],(tmp2 * tmp2),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
gENROE._K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[118] = (data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[151]) * (DIVISION_SIM(data->simulationInfo->realParameter[154] - data->simulationInfo->realParameter[151],data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[154],"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
gENROE._K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  modelica_real tmp3;
  tmp3 = data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[151];
  data->simulationInfo->realParameter[116] = (data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[154]) * (DIVISION_SIM(data->simulationInfo->realParameter[150] - data->simulationInfo->realParameter[152],(tmp3 * tmp3),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
gENROE._PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[133] = data->simulationInfo->realParameter[130];
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
gENROE._iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[174] = data->simulationInfo->realParameter[111];
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENROE._PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[134] = data->simulationInfo->realParameter[133] - ((data->simulationInfo->realParameter[155]) * (data->simulationInfo->realParameter[174]));
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENROE._PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[132] = data->simulationInfo->realParameter[131];
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENROE._id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[172] = data->simulationInfo->realParameter[110];
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENROE._PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[125] = data->simulationInfo->realParameter[132] - ((data->simulationInfo->realParameter[154]) * (data->simulationInfo->realParameter[172]));
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENROE._PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[127] = DIVISION_SIM((data->simulationInfo->realParameter[156] - data->simulationInfo->realParameter[151]) * ((data->simulationInfo->realParameter[121]) * (data->simulationInfo->realParameter[174])) - data->simulationInfo->realParameter[133],data->simulationInfo->realParameter[121] + data->simulationInfo->realParameter[123],"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
gENROE._PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[126] = DIVISION_SIM(data->simulationInfo->realParameter[132] + (data->simulationInfo->realParameter[151] - data->simulationInfo->realParameter[152]) * ((data->simulationInfo->realParameter[120]) * (data->simulationInfo->realParameter[172])),data->simulationInfo->realParameter[120] + data->simulationInfo->realParameter[122],"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENROE._Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[107] = data->simulationInfo->realParameter[127] + (data->simulationInfo->realParameter[151] - data->simulationInfo->realParameter[156]) * (data->simulationInfo->realParameter[174]);
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENROE._Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[108] = data->simulationInfo->realParameter[126] + (data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[151]) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENROE._Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[153] = data->simulationInfo->realParameter[154];
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENROE._abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp4 = data->simulationInfo->realParameter[129];
  tmp5 = data->simulationInfo->realParameter[128];
  tmp6 = (tmp4 * tmp4) + (tmp5 * tmp5);
  if(!(tmp6 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp6);
  }
  data->simulationInfo->realParameter[161] = sqrt(tmp6);
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENROE._dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[169] = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[161], data->simulationInfo->realParameter[140], data->simulationInfo->realParameter[141], 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENROE._efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xpd - gENROE.Xpp + gENROE.Xd - gENROE.Xpd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[170] = (data->simulationInfo->realParameter[132]) * (1.0 + data->simulationInfo->realParameter[169]) + (data->simulationInfo->realParameter[172]) * (data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[153] + data->simulationInfo->realParameter[150] - data->simulationInfo->realParameter[152]);
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
gENROE._p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[176] = DIVISION_SIM(data->simulationInfo->realParameter[135],data->simulationInfo->realParameter[124],"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
gENROE._pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  modelica_real tmp7;
  modelica_real tmp8;
  tmp7 = data->simulationInfo->realParameter[174];
  tmp8 = data->simulationInfo->realParameter[172];
  data->simulationInfo->realParameter[177] = data->simulationInfo->realParameter[176] + (data->simulationInfo->realParameter[137]) * ((tmp7 * tmp7) + (tmp8 * tmp8));
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
gENROE._uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[180] = data->simulationInfo->realParameter[132] + ((-data->simulationInfo->realParameter[154])) * (data->simulationInfo->realParameter[172]) - ((data->simulationInfo->realParameter[137]) * (data->simulationInfo->realParameter[174]));
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
gENROE._ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[179] = (data->simulationInfo->realParameter[155]) * (data->simulationInfo->realParameter[174]) + (-data->simulationInfo->realParameter[133]) - ((data->simulationInfo->realParameter[137]) * (data->simulationInfo->realParameter[172]));
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
gENROE._ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[163] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[128], data->simulationInfo->realParameter[129], 0.0);
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
gENROE._ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[162] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[114], data->simulationInfo->realParameter[115], 0.0);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
gENROE._ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[164] = data->simulationInfo->realParameter[163] - data->simulationInfo->realParameter[162];
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
gENROE._a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[160] = (data->simulationInfo->realParameter[161]) * (1.0 + (data->simulationInfo->realParameter[169]) * (DIVISION_SIM(data->simulationInfo->realParameter[157] - data->simulationInfo->realParameter[151],data->simulationInfo->realParameter[150] - data->simulationInfo->realParameter[151],"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
gENROE._b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  tmp9 = data->simulationInfo->realParameter[115];
  tmp10 = data->simulationInfo->realParameter[114];
  tmp11 = (tmp9 * tmp9) + (tmp10 * tmp10);
  if(!(tmp11 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp11);
  }
  data->simulationInfo->realParameter[167] = (sqrt(tmp11)) * (data->simulationInfo->realParameter[153] - data->simulationInfo->realParameter[157]);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
gENROE._delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[168] = atan((data->simulationInfo->realParameter[167]) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[164]),(data->simulationInfo->realParameter[167]) * (sin(data->simulationInfo->realParameter[164])) - data->simulationInfo->realParameter[160],"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[163];
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
gENROE._q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[178] = DIVISION_SIM(data->simulationInfo->realParameter[136],data->simulationInfo->realParameter[124],"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
gENROE._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[142] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
gENROE._CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[103] = DIVISION_SIM(data->simulationInfo->realParameter[124],data->simulationInfo->realParameter[142],"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
gENROE._angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[166] = (0.0174532925199433) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
gENROE._vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[183] = (data->simulationInfo->realParameter[181]) * (cos(data->simulationInfo->realParameter[166]));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
gENROE._vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[182] = (data->simulationInfo->realParameter[181]) * (sin(data->simulationInfo->realParameter[166]));
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
gENROE._ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->simulationInfo->realParameter[183];
  tmp13 = data->simulationInfo->realParameter[182];
  data->simulationInfo->realParameter[173] = DIVISION_SIM((data->simulationInfo->realParameter[103]) * ((data->simulationInfo->realParameter[178]) * (data->simulationInfo->realParameter[183]) - ((data->simulationInfo->realParameter[176]) * (data->simulationInfo->realParameter[182]))),(tmp12 * tmp12) + (tmp13 * tmp13),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
gENROE._ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->simulationInfo->realParameter[183];
  tmp15 = data->simulationInfo->realParameter[182];
  data->simulationInfo->realParameter[175] = ((-data->simulationInfo->realParameter[103])) * (DIVISION_SIM((data->simulationInfo->realParameter[176]) * (data->simulationInfo->realParameter[183]) + (data->simulationInfo->realParameter[178]) * (data->simulationInfo->realParameter[182]),(tmp14 * tmp14) + (tmp15 * tmp15),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
gENROE._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[171] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
gENROE._w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[184] = (6.283185307179586) * (data->simulationInfo->realParameter[171]);
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
FAULT._angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[5] = (0.0174532925199433) * (data->simulationInfo->realParameter[4]);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
FAULT._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
FAULT._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
GEN2._angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[21] = (0.0174532925199433) * (data->simulationInfo->realParameter[20]);
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
GEN2._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
GEN2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
LOAD._angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[29] = (0.0174532925199433) * (data->simulationInfo->realParameter[28]);
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
LOAD._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
LOAD._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
GEN1._angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[13] = (0.0174532925199433) * (data->simulationInfo->realParameter[12]);
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
GEN1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[14] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
GEN1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
pwFault._ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  tmp16 = Less(fabs(data->simulationInfo->realParameter[246]),1e-15);
  tmp17 = Less(fabs(data->simulationInfo->realParameter[247]),1e-15);
  data->simulationInfo->booleanParameter[64] = (tmp16 && tmp17);
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
constantLoad._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[45] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
constantLoad._p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  modelica_real tmp18;
  tmp18 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[70] = DIVISION_SIM((data->simulationInfo->realParameter[47]) * (data->simulationInfo->realParameter[73]) + (data->simulationInfo->realParameter[51]) * ((tmp18 * tmp18)) + data->simulationInfo->realParameter[49],data->simulationInfo->realParameter[45],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
constantLoad._q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  modelica_real tmp19;
  tmp19 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[71] = DIVISION_SIM((data->simulationInfo->realParameter[46]) * (data->simulationInfo->realParameter[73]) + (data->simulationInfo->realParameter[50]) * ((tmp19 * tmp19)) + data->simulationInfo->realParameter[48],data->simulationInfo->realParameter[45],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
constantLoad._PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[35] = ((data->simulationInfo->realParameter[71] == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[70],data->simulationInfo->realParameter[71],"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
constantLoad._d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[65] = DIVISION_SIM(data->simulationInfo->realParameter[70] + data->simulationInfo->realParameter[64],data->simulationInfo->realParameter[35],"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[71];
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
constantLoad._angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[59] = (0.0174532925199433) * (data->simulationInfo->realParameter[58]);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
constantLoad._vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[75] = (data->simulationInfo->realParameter[73]) * (cos(data->simulationInfo->realParameter[59]));
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
constantLoad._vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[74] = (data->simulationInfo->realParameter[73]) * (sin(data->simulationInfo->realParameter[59]));
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
constantLoad._ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  modelica_real tmp21;
  modelica_real tmp22;
  tmp21 = data->simulationInfo->realParameter[75];
  tmp22 = data->simulationInfo->realParameter[74];
  data->simulationInfo->realParameter[68] = DIVISION_SIM((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[74]) - ((data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[75])),(tmp21 * tmp21) + (tmp22 * tmp22),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
constantLoad._ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  modelica_real tmp23;
  modelica_real tmp24;
  tmp23 = data->simulationInfo->realParameter[75];
  tmp24 = data->simulationInfo->realParameter[74];
  data->simulationInfo->realParameter[69] = DIVISION_SIM((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[75]) + (data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[74]),(tmp23 * tmp23) + (tmp24 * tmp24),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
constantLoad._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[67] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
gENCLS._angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[88] = (0.0174532925199433) * (data->simulationInfo->realParameter[87]);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
gENCLS._vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[102] = (data->simulationInfo->realParameter[97]) * (cos(data->simulationInfo->realParameter[88]));
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
gENCLS._vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[100] = (data->simulationInfo->realParameter[97]) * (sin(data->simulationInfo->realParameter[88]));
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
gENCLS._p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[95] = DIVISION_SIM(data->simulationInfo->realParameter[81],data->simulationInfo->realParameter[80],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
gENCLS._q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[96] = DIVISION_SIM(data->simulationInfo->realParameter[82],data->simulationInfo->realParameter[80],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
gENCLS._ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[102];
  tmp26 = data->simulationInfo->realParameter[100];
  data->simulationInfo->realParameter[94] = DIVISION_SIM((data->simulationInfo->realParameter[95]) * (data->simulationInfo->realParameter[102]) + (data->simulationInfo->realParameter[96]) * (data->simulationInfo->realParameter[100]),(tmp25 * tmp25) + (tmp26 * tmp26),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
gENCLS._ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[102];
  tmp28 = data->simulationInfo->realParameter[100];
  data->simulationInfo->realParameter[92] = DIVISION_SIM((data->simulationInfo->realParameter[95]) * (data->simulationInfo->realParameter[100]) - ((data->simulationInfo->realParameter[96]) * (data->simulationInfo->realParameter[102])),(tmp27 * tmp27) + (tmp28 * tmp28),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
gENCLS._delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[89] = atan2(data->simulationInfo->realParameter[100] + (data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[92]) + (data->simulationInfo->realParameter[86]) * (data->simulationInfo->realParameter[94]), data->simulationInfo->realParameter[102] + (data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[94]) - ((data->simulationInfo->realParameter[86]) * (data->simulationInfo->realParameter[92])));
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
gENCLS._vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[101] = (data->simulationInfo->realParameter[102]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[89])) + (data->simulationInfo->realParameter[100]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[89]));
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
gENCLS._id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[91] = (data->simulationInfo->realParameter[94]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[89])) - ((data->simulationInfo->realParameter[92]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[89])));
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
gENCLS._iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[93] = (data->simulationInfo->realParameter[94]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[89])) + (data->simulationInfo->realParameter[92]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[89]));
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
gENCLS._vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[99] = data->simulationInfo->realParameter[101] + (data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[93]) + (data->simulationInfo->realParameter[86]) * (data->simulationInfo->realParameter[91]);
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
gENCLS._vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[98] = (data->simulationInfo->realParameter[102]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[89])) - ((data->simulationInfo->realParameter[100]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[89])));
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
gENCLS._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[84] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
gENCLS._CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[77] = DIVISION_SIM(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[84],"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
gENCLS._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[90] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
pwLine4._Z._im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[290] = data->simulationInfo->realParameter[287];
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
pwLine4._Z._re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[291] = data->simulationInfo->realParameter[285];
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
pwLine4._Y._im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[288] = data->simulationInfo->realParameter[283];
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
pwLine4._Y._re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[289] = data->simulationInfo->realParameter[284];
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
pwLine4._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[286] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
pwLine3._Z._im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[279] = data->simulationInfo->realParameter[276];
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
pwLine3._Z._re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[280] = data->simulationInfo->realParameter[274];
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
pwLine3._Y._im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[277] = data->simulationInfo->realParameter[272];
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
pwLine3._Y._re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[278] = data->simulationInfo->realParameter[273];
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
pwLine3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->realParameter[275] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
pwLine1._Z._im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->realParameter[268] = data->simulationInfo->realParameter[265];
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
pwLine1._Z._re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[269] = data->simulationInfo->realParameter[263];
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
pwLine1._Y._im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->simulationInfo->realParameter[266] = data->simulationInfo->realParameter[261];
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
pwLine1._Y._re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->simulationInfo->realParameter[267] = data->simulationInfo->realParameter[262];
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
pwLine1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->simulationInfo->realParameter[264] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
pwLine._Z._im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->simulationInfo->realParameter[257] = data->simulationInfo->realParameter[254];
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
pwLine._Z._re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[258] = data->simulationInfo->realParameter[252];
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
pwLine._Y._im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[255] = data->simulationInfo->realParameter[250];
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
pwLine._Y._re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->realParameter[256] = data->simulationInfo->realParameter[251];
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
pwLine._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[253] = data->simulationInfo->realParameter[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_151(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_149(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 551
type: ALGORITHM

  assert(iEEET2_1.rotatingExciter.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and iEEET2_1.rotatingExciter.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= iEEET2_1.rotatingExciter.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(iEEET2_1.rotatingExciter.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,171,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= iEEET2_1.rotatingExciter.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[2],1);
    tmp30 = LessEq((modelica_integer)data->simulationInfo->integerParameter[2],4);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[2], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",15,5,18,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\niEEET2_1.rotatingExciter.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and iEEET2_1.rotatingExciter.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 552
type: ALGORITHM

  assert(iEEET2_1.derivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and iEEET2_1.derivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= iEEET2_1.derivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(iEEET2_1.derivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= iEEET2_1.derivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp34 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[1],1);
    tmp35 = LessEq((modelica_integer)data->simulationInfo->integerParameter[1],4);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[1], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\niEEET2_1.derivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and iEEET2_1.derivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 553
type: ALGORITHM

  assert(iEEET2_1.derivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= iEEET2_1.derivativeLag.T, has value: " + String(iEEET2_1.derivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,81,"Variable violating min constraint: 1e-60 <= iEEET2_1.derivativeLag.T, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp39 = GreaterEq(data->simulationInfo->realParameter[215],1e-60);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[215], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\niEEET2_1.derivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_380(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_383(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_384(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_385(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_390(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_391(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_393(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_434(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_454(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_459(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_461(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_464(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_478(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_529(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_530(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_531(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_536(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_537(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_538(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_151(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_551(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_553(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] = ((modelica_integer) 1);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->localData[0]->realVars[60] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[60].time_unvarying = 1;
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
  data->simulationInfo->realParameter[79] = 0.0;
  data->modelData->realParameterData[79].time_unvarying = 1;
  data->simulationInfo->realParameter[105] = -0.5650202843208616;
  data->modelData->realParameterData[105].time_unvarying = 1;
  data->simulationInfo->realParameter[106] = 0.825077013560536;
  data->modelData->realParameterData[106].time_unvarying = 1;
  data->simulationInfo->realParameter[110] = 0.248896193836464;
  data->modelData->realParameterData[110].time_unvarying = 1;
  data->simulationInfo->realParameter[111] = 0.3177807746702022;
  data->modelData->realParameterData[111].time_unvarying = 1;
  data->simulationInfo->realParameter[112] = -5.013342868567351;
  data->modelData->realParameterData[112].time_unvarying = 1;
  data->simulationInfo->realParameter[113] = 0.7556357708851228;
  data->modelData->realParameterData[113].time_unvarying = 1;
  data->simulationInfo->realParameter[114] = -0.02580594464131273;
  data->modelData->realParameterData[114].time_unvarying = 1;
  data->simulationInfo->realParameter[115] = 0.4028250107397031;
  data->modelData->realParameterData[115].time_unvarying = 1;
  data->simulationInfo->realParameter[128] = 0.1511271541770246;
  data->modelData->realParameterData[128].time_unvarying = 1;
  data->simulationInfo->realParameter[129] = 1.00266857371347;
  data->modelData->realParameterData[129].time_unvarying = 1;
  data->simulationInfo->realParameter[130] = -0.4418365415628956;
  data->modelData->realParameterData[130].time_unvarying = 1;
  data->simulationInfo->realParameter[131] = 0.9126687000122171;
  data->modelData->realParameterData[131].time_unvarying = 1;
  data->simulationInfo->realParameter[138] = 0.05416582;
  data->modelData->realParameterData[138].time_unvarying = 1;
  data->simulationInfo->realParameter[139] = 0.4;
  data->modelData->realParameterData[139].time_unvarying = 1;
  data->simulationInfo->realParameter[147] = 0.07056215202908395;
  data->modelData->realParameterData[147].time_unvarying = 1;
  data->simulationInfo->realParameter[148] = 0.9975073847852077;
  data->modelData->realParameterData[148].time_unvarying = 1;
  data->simulationInfo->realParameter[158] = 0.2;
  data->modelData->realParameterData[158].time_unvarying = 1;
  data->simulationInfo->realParameter[159] = 0.0;
  data->modelData->realParameterData[159].time_unvarying = 1;
  data->simulationInfo->realParameter[196] = 0.06;
  data->modelData->realParameterData[196].time_unvarying = 1;
  data->simulationInfo->realParameter[216] = 0.06;
  data->modelData->realParameterData[216].time_unvarying = 1;
  data->simulationInfo->booleanParameter[63] = 0;
  data->modelData->booleanParameterData[63].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

