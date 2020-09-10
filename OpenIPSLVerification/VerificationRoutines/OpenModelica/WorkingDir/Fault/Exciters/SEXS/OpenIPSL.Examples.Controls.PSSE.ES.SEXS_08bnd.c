/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 302
type: SIMPLE_ASSIGN
$START.sEXS.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->modelData->realVarsData[124].attribute /* sEXS.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[124] /* sEXS.ECOMP variable */ = data->modelData->realVarsData[124].attribute /* sEXS.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[124].info /* sEXS.ECOMP */.name, (modelica_real) data->localData[0]->realVars[124] /* sEXS.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$START.gENROU.PSIppq = gENROU.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->modelData->realVarsData[68].attribute /* gENROU.PSIppq variable */.start = data->simulationInfo->realParameter[139] /* gENROU.PSIppq0 PARAM */;
    data->localData[0]->realVars[68] /* gENROU.PSIppq variable */ = data->modelData->realVarsData[68].attribute /* gENROU.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* gENROU.PSIppq */.name, (modelica_real) data->localData[0]->realVars[68] /* gENROU.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$START.gENROU.PSIppd = gENROU.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->modelData->realVarsData[67].attribute /* gENROU.PSIppd variable */.start = data->simulationInfo->realParameter[138] /* gENROU.PSIppd0 PARAM */;
    data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ = data->modelData->realVarsData[67].attribute /* gENROU.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* gENROU.PSIppd */.name, (modelica_real) data->localData[0]->realVars[67] /* gENROU.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
$START.gENROU.PSIq = gENROU.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->modelData->realVarsData[69].attribute /* gENROU.PSIq variable */.start = data->simulationInfo->realParameter[140] /* gENROU.PSIq0 PARAM */;
    data->localData[0]->realVars[69] /* gENROU.PSIq variable */ = data->modelData->realVarsData[69].attribute /* gENROU.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* gENROU.PSIq */.name, (modelica_real) data->localData[0]->realVars[69] /* gENROU.PSIq variable */);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
$START.gENROU.PSId = gENROU.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->modelData->realVarsData[65].attribute /* gENROU.PSId variable */.start = data->simulationInfo->realParameter[131] /* gENROU.PSId0 PARAM */;
    data->localData[0]->realVars[65] /* gENROU.PSId variable */ = data->modelData->realVarsData[65].attribute /* gENROU.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* gENROU.PSId */.name, (modelica_real) data->localData[0]->realVars[65] /* gENROU.PSId variable */);
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
$START.gENROU.PSIkq = gENROU.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->modelData->realVarsData[5].attribute /* gENROU.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[133] /* gENROU.PSIkq0 PARAM */;
    data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENROU.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENROU.PSIkq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
$START.gENROU.PSIkd = gENROU.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->modelData->realVarsData[4].attribute /* gENROU.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[132] /* gENROU.PSIkd0 PARAM */;
    data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENROU.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENROU.PSIkd */.name, (modelica_real) data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
$START.gENROU.Epq = gENROU.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->modelData->realVarsData[3].attribute /* gENROU.Epq STATE(1) */.start = data->simulationInfo->realParameter[112] /* gENROU.Epq0 PARAM */;
    data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ = data->modelData->realVarsData[3].attribute /* gENROU.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* gENROU.Epq */.name, (modelica_real) data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
$START.gENROU.Epd = gENROU.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->modelData->realVarsData[2].attribute /* gENROU.Epd STATE(1) */.start = data->simulationInfo->realParameter[111] /* gENROU.Epd0 PARAM */;
    data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ = data->modelData->realVarsData[2].attribute /* gENROU.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* gENROU.Epd */.name, (modelica_real) data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
$START.gENROU.uq = gENROU.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->modelData->realVarsData[79].attribute /* gENROU.uq variable */.start = data->simulationInfo->realParameter[186] /* gENROU.uq0 PARAM */;
    data->localData[0]->realVars[79] /* gENROU.uq variable */ = data->modelData->realVarsData[79].attribute /* gENROU.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENROU.uq */.name, (modelica_real) data->localData[0]->realVars[79] /* gENROU.uq variable */);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
$START.gENROU.ud = gENROU.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->modelData->realVarsData[78].attribute /* gENROU.ud variable */.start = data->simulationInfo->realParameter[185] /* gENROU.ud0 PARAM */;
    data->localData[0]->realVars[78] /* gENROU.ud variable */ = data->modelData->realVarsData[78].attribute /* gENROU.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gENROU.ud */.name, (modelica_real) data->localData[0]->realVars[78] /* gENROU.ud variable */);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
$START.gENROU.iq = gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->modelData->realVarsData[77].attribute /* gENROU.iq variable */.start = data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */;
    data->localData[0]->realVars[77] /* gENROU.iq variable */ = data->modelData->realVarsData[77].attribute /* gENROU.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* gENROU.iq */.name, (modelica_real) data->localData[0]->realVars[77] /* gENROU.iq variable */);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
$START.gENROU.id = gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->modelData->realVarsData[76].attribute /* gENROU.id variable */.start = data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */;
    data->localData[0]->realVars[76] /* gENROU.id variable */ = data->modelData->realVarsData[76].attribute /* gENROU.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[76].info /* gENROU.id */.name, (modelica_real) data->localData[0]->realVars[76] /* gENROU.id variable */);
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
$START.gENROU.Te = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->modelData->realVarsData[71].attribute /* gENROU.Te variable */.start = data->simulationInfo->realParameter[183] /* gENROU.pm0 PARAM */;
    data->localData[0]->realVars[71] /* gENROU.Te variable */ = data->modelData->realVarsData[71].attribute /* gENROU.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* gENROU.Te */.name, (modelica_real) data->localData[0]->realVars[71] /* gENROU.Te variable */);
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
$START.gENROU.Q = gENROU.Q_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->modelData->realVarsData[70].attribute /* gENROU.Q variable */.start = DIVISION(data->simulationInfo->realParameter[142] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[148] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[70] /* gENROU.Q variable */ = data->modelData->realVarsData[70].attribute /* gENROU.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* gENROU.Q */.name, (modelica_real) data->localData[0]->realVars[70] /* gENROU.Q variable */);
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
$START.gENROU.P = gENROU.P_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->modelData->realVarsData[63].attribute /* gENROU.P variable */.start = DIVISION(data->simulationInfo->realParameter[141] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[148] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[63] /* gENROU.P variable */ = data->modelData->realVarsData[63].attribute /* gENROU.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* gENROU.P */.name, (modelica_real) data->localData[0]->realVars[63] /* gENROU.P variable */);
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
$START.gENROU.anglei = atan2(gENROU.ii0, gENROU.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->modelData->realVarsData[74].attribute /* gENROU.anglei variable */.start = atan2(data->simulationInfo->realParameter[179] /* gENROU.ii0 PARAM */, data->simulationInfo->realParameter[181] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[74] /* gENROU.anglei variable */ = data->modelData->realVarsData[74].attribute /* gENROU.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* gENROU.anglei */.name, (modelica_real) data->localData[0]->realVars[74] /* gENROU.anglei variable */);
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
$START.gENROU.I = sqrt(gENROU.ir0 ^ 2.0 + gENROU.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[181] /* gENROU.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[179] /* gENROU.ii0 PARAM */;
  data->modelData->realVarsData[62].attribute /* gENROU.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[62] /* gENROU.I variable */ = data->modelData->realVarsData[62].attribute /* gENROU.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* gENROU.I */.name, (modelica_real) data->localData[0]->realVars[62] /* gENROU.I variable */);
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
$START.gENROU.anglev = gENROU.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->modelData->realVarsData[75].attribute /* gENROU.anglev variable */.start = data->simulationInfo->realParameter[172] /* gENROU.angle_0rad PARAM */;
    data->localData[0]->realVars[75] /* gENROU.anglev variable */ = data->modelData->realVarsData[75].attribute /* gENROU.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* gENROU.anglev */.name, (modelica_real) data->localData[0]->realVars[75] /* gENROU.anglev variable */);
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
$START.gENROU.delta = gENROU.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->modelData->realVarsData[6].attribute /* gENROU.delta STATE(1) */.start = data->simulationInfo->realParameter[174] /* gENROU.delta0 PARAM */;
    data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENROU.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENROU.delta */.name, (modelica_real) data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
$START.gENROU.XADIFD = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->modelData->realVarsData[72].attribute /* gENROU.XADIFD variable */.start = data->simulationInfo->realParameter[176] /* gENROU.efd0 PARAM */;
    data->localData[0]->realVars[72] /* gENROU.XADIFD variable */ = data->modelData->realVarsData[72].attribute /* gENROU.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* gENROU.XADIFD */.name, (modelica_real) data->localData[0]->realVars[72] /* gENROU.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
$START.gENROU.PELEC = gENROU.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->modelData->realVarsData[64].attribute /* gENROU.PELEC variable */.start = data->simulationInfo->realParameter[182] /* gENROU.p0 PARAM */;
    data->localData[0]->realVars[64] /* gENROU.PELEC variable */ = data->modelData->realVarsData[64].attribute /* gENROU.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* gENROU.PELEC */.name, (modelica_real) data->localData[0]->realVars[64] /* gENROU.PELEC variable */);
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->modelData->realVarsData[27].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[27] /* FAULT.angle variable */ = data->modelData->realVarsData[27].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[27] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->modelData->realVarsData[26].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[26] /* FAULT.V variable */ = data->modelData->realVarsData[26].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[26].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[26] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->modelData->realVarsData[35].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[35] /* GEN2.angle variable */ = data->modelData->realVarsData[35].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[35] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->modelData->realVarsData[34].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[100] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[34] /* GEN2.V variable */ = data->modelData->realVarsData[34].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[34] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->modelData->realVarsData[39].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[39] /* LOAD.angle variable */ = data->modelData->realVarsData[39].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[39] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->modelData->realVarsData[31].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[31] /* GEN1.angle variable */ = data->modelData->realVarsData[31].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[31] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->modelData->realVarsData[49].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[49] /* constantLoad.v variable */ = data->modelData->realVarsData[49].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[49] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->modelData->realVarsData[44].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[44] /* constantLoad.angle variable */ = data->modelData->realVarsData[44].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[44] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->modelData->realVarsData[47].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[71] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[47] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->modelData->realVarsData[48].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[72] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[48] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->modelData->realVarsData[51].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[85] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[87] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[51] /* gENCLS.Q variable */ = data->modelData->realVarsData[51].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[51] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->modelData->realVarsData[50].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[84] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[87] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[50] /* gENCLS.P variable */ = data->modelData->realVarsData[50].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[50] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->modelData->realVarsData[55].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[96] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[55] /* gENCLS.iq variable */ = data->modelData->realVarsData[55].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[55] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->modelData->realVarsData[54].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[94] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[54] /* gENCLS.id variable */ = data->modelData->realVarsData[54].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[54] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->modelData->realVarsData[60].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[104] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[60] /* gENCLS.vq variable */ = data->modelData->realVarsData[60].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[60] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->modelData->realVarsData[59].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[101] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[59] /* gENCLS.vd variable */ = data->modelData->realVarsData[59].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[59] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[102] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->modelData->realVarsData[53].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[91] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[53] /* gENCLS.anglev variable */ = data->modelData->realVarsData[53].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[53] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->modelData->realVarsData[57].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[95] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[57] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[57].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[57] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->modelData->realVarsData[58].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[97] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[58] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[58].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[58] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->modelData->realVarsData[112].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[112].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[112] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->modelData->realVarsData[113].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[113] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->modelData->realVarsData[100].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[100] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->modelData->realVarsData[101].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[101] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->modelData->realVarsData[102].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[102] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->modelData->realVarsData[103].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[103] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROU.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->modelData->realVarsData[88].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[179] /* gENROU.ii0 PARAM */);
    data->localData[0]->realVars[88] /* pwLine.is.im variable */ = data->modelData->realVarsData[88].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[88] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROU.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->modelData->realVarsData[89].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[181] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[89] /* pwLine.is.re variable */ = data->modelData->realVarsData[89].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[89] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROU.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->modelData->realVarsData[90].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[188] /* gENROU.vi0 PARAM */;
    data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = data->modelData->realVarsData[90].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[90] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROU.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->modelData->realVarsData[91].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[189] /* gENROU.vr0 PARAM */;
    data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = data->modelData->realVarsData[91].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[91] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->modelData->realVarsData[30].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[30] /* GEN1.V variable */ = data->modelData->realVarsData[30].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[30] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->modelData->realVarsData[52].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[100] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[52] /* gENCLS.V variable */ = data->modelData->realVarsData[52].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[52] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->modelData->realVarsData[38].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[38] /* LOAD.V variable */ = data->modelData->realVarsData[38].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[38] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_348(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_349(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_350(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_351(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_352(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_353(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_354(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_355(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_356(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_357(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 358
type: SIMPLE_ASSIGN
const2.y = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[37] /* const2.y PARAM */ = data->simulationInfo->realParameter[36] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
gENROU.abs_PSIpp0 = (gENROU.PSIpp0.re ^ 2.0 + gENROU.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[135] /* gENROU.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[134] /* gENROU.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROU.PSIpp0.re ^ 2.0 + gENROU.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[167] /* gENROU.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
gENROU.dsat = OpenIPSL.NonElectrical.Functions.SE(gENROU.abs_PSIpp0, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[175] /* gENROU.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[167] /* gENROU.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[146] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[147] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
gENROU.PSIppd0 = gENROU.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[138] /* gENROU.PSIppd0 PARAM */ = data->simulationInfo->realParameter[137] /* gENROU.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
gENROU.id0 = gENROU.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */ = data->simulationInfo->realParameter[114] /* gENROU.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
gENROU.efd0 = gENROU.PSIppd0 * (1.0 + gENROU.dsat) + gENROU.id0 * (gENROU.Xpd - gENROU.Xpp + gENROU.Xd - gENROU.Xpd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->realParameter[176] /* gENROU.efd0 PARAM */ = (data->simulationInfo->realParameter[138] /* gENROU.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[175] /* gENROU.dsat PARAM */) + (data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */) * (data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[159] /* gENROU.Xpp PARAM */ + data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */);
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
gENROU.EFD0 = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[110] /* gENROU.EFD0 PARAM */ = data->simulationInfo->realParameter[176] /* gENROU.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.T = sEXS.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->realParameter[283] /* sEXS.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[253] /* sEXS.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.const.y = sEXS.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->realParameter[285] /* sEXS.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[283] /* sEXS.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
sEXS.leadLag.T1 = sEXS.T_AT_B * sEXS.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->realParameter[265] /* sEXS.leadLag.T1 PARAM */ = (data->simulationInfo->realParameter[251] /* sEXS.T_AT_B PARAM */) * (data->simulationInfo->realParameter[252] /* sEXS.T_B PARAM */);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
sEXS.leadLag.par1.y = sEXS.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[278] /* sEXS.leadLag.par1.y PARAM */ = data->simulationInfo->realParameter[265] /* sEXS.leadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
sEXS.leadLag.T2 = sEXS.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[266] /* sEXS.leadLag.T2 PARAM */ = data->simulationInfo->realParameter[252] /* sEXS.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
sEXS.leadLag.par2.y = sEXS.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[279] /* sEXS.leadLag.par2.y PARAM */ = data->simulationInfo->realParameter[266] /* sEXS.leadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
gENROU.p0 = gENROU.P_0 / gENROU.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[182] /* gENROU.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[141] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[128] /* gENROU.M_b PARAM */,"gENROU.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
gENROU.iq0 = gENROU.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */ = data->simulationInfo->realParameter[115] /* gENROU.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENROU.pm0 = gENROU.p0 + gENROU.R_a * (gENROU.iq0 ^ 2.0 + gENROU.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */;
  data->simulationInfo->realParameter[183] /* gENROU.pm0 PARAM */ = data->simulationInfo->realParameter[182] /* gENROU.p0 PARAM */ + (data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
gENROU.PMECH = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[129] /* gENROU.PMECH PARAM */ = data->simulationInfo->realParameter[183] /* gENROU.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
gENROU.PMECH0 = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[130] /* gENROU.PMECH0 PARAM */ = data->simulationInfo->realParameter[183] /* gENROU.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
sEXS.DiffV1.u2 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[245] /* sEXS.DiffV1.u2 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
sEXS.VOEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[254] /* sEXS.VOEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
sEXS.V_erro.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[261] /* sEXS.V_erro.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
sEXS.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[255] /* sEXS.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
sEXS.DiffV1.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[244] /* sEXS.DiffV1.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
sEXS.VUEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[256] /* sEXS.VUEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
sEXS.leadLag.T2_dummy = if abs(sEXS.leadLag.T1 - sEXS.leadLag.T2) < 1e-15 then 1000.0 else sEXS.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp5;
  tmp5 = Less(fabs(data->simulationInfo->realParameter[265] /* sEXS.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[266] /* sEXS.leadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[267] /* sEXS.leadLag.T2_dummy PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[266] /* sEXS.leadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.a[1] = sEXS.leadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[268] /* sEXS.leadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[267] /* sEXS.leadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.a_end = if sEXS.leadLag.TF.a[2] > 1e-13 * sqrt(sEXS.leadLag.TF.a[1] ^ 2.0 + sEXS.leadLag.TF.a[2] ^ 2.0) then sEXS.leadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  tmp6 = data->simulationInfo->realParameter[268] /* sEXS.leadLag.TF.a[1] PARAM */;
  tmp7 = data->simulationInfo->realParameter[269] /* sEXS.leadLag.TF.a[2] PARAM */;
  tmp8 = Greater(data->simulationInfo->realParameter[269] /* sEXS.leadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp6 * tmp6) + (tmp7 * tmp7))));
  data->simulationInfo->realParameter[270] /* sEXS.leadLag.TF.a_end PARAM */ = (tmp8?data->simulationInfo->realParameter[269] /* sEXS.leadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.b[1] = sEXS.leadLag.K * sEXS.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[271] /* sEXS.leadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[264] /* sEXS.leadLag.K PARAM */) * (data->simulationInfo->realParameter[265] /* sEXS.leadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.bb[1] = sEXS.leadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[273] /* sEXS.leadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[271] /* sEXS.leadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.d = sEXS.leadLag.TF.bb[1] / sEXS.leadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[275] /* sEXS.leadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[273] /* sEXS.leadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[268] /* sEXS.leadLag.TF.a[1] PARAM */,"sEXS.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.b[2] = sEXS.leadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[272] /* sEXS.leadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[264] /* sEXS.leadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
sEXS.leadLag.TF.bb[2] = sEXS.leadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[274] /* sEXS.leadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[272] /* sEXS.leadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.T_mod = if sEXS.simpleLagLim.T < 1e-15 then 1000.0 else sEXS.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  modelica_boolean tmp9;
  tmp9 = Less(data->simulationInfo->realParameter[283] /* sEXS.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[284] /* sEXS.simpleLagLim.T_mod PARAM */ = (tmp9?1000.0:data->simulationInfo->realParameter[283] /* sEXS.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.outMin = sEXS.E_MIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[287] /* sEXS.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[248] /* sEXS.E_MIN PARAM */;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.outMax = sEXS.E_MAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[286] /* sEXS.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[247] /* sEXS.E_MAX PARAM */;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
sEXS.simpleLagLim.K = sEXS.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[282] /* sEXS.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[250] /* sEXS.K PARAM */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENROU.K4q = (gENROU.Xpq - gENROU.Xppq) / (gENROU.Xpq - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[127] /* gENROU.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */,data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xpq - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
gENROU.K3q = (gENROU.Xppq - gENROU.Xl) / (gENROU.Xpq - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[125] /* gENROU.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xpq - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
gENROU.K4d = (gENROU.Xpd - gENROU.Xppd) / (gENROU.Xpd - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[126] /* gENROU.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */,data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xpd - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
gENROU.K3d = (gENROU.Xppd - gENROU.Xl) / (gENROU.Xpd - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[124] /* gENROU.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xpd - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
gENROU.K2q = (gENROU.Xpq - gENROU.Xl) * (gENROU.Xppq - gENROU.Xl) / (gENROU.Xpq - gENROU.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[123] /* gENROU.K2q PARAM */ = (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */,"gENROU.Xpq - gENROU.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
gENROU.K1q = (gENROU.Xpq - gENROU.Xppq) * (gENROU.Xq - gENROU.Xpq) / (gENROU.Xpq - gENROU.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  modelica_real tmp10;
  tmp10 = data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */;
  data->simulationInfo->realParameter[121] /* gENROU.K1q PARAM */ = (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */,(tmp10 * tmp10),"(gENROU.Xpq - gENROU.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
gENROU.K2d = (gENROU.Xpd - gENROU.Xl) * (gENROU.Xppd - gENROU.Xl) / (gENROU.Xpd - gENROU.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[122] /* gENROU.K2d PARAM */ = (data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */,"gENROU.Xpd - gENROU.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
gENROU.K1d = (gENROU.Xpd - gENROU.Xppd) * (gENROU.Xd - gENROU.Xpd) / (gENROU.Xpd - gENROU.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */;
  data->simulationInfo->realParameter[120] /* gENROU.K1d PARAM */ = (data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */,(tmp11 * tmp11),"(gENROU.Xpd - gENROU.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
gENROU.PSIppq0 = gENROU.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[139] /* gENROU.PSIppq0 PARAM */ = data->simulationInfo->realParameter[136] /* gENROU.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
gENROU.PSIq0 = (-gENROU.PSIppq0) - gENROU.Xppq * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[140] /* gENROU.PSIq0 PARAM */ = (-data->simulationInfo->realParameter[139] /* gENROU.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */) * (data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENROU.PSId0 = gENROU.PSIppd0 - gENROU.Xppd * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[131] /* gENROU.PSId0 PARAM */ = data->simulationInfo->realParameter[138] /* gENROU.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */) * (data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
gENROU.PSIkq0 = ((gENROU.Xpq - gENROU.Xl) * gENROU.K3q * gENROU.iq0 - gENROU.PSIppq0) / (gENROU.K3q + gENROU.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[133] /* gENROU.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * ((data->simulationInfo->realParameter[125] /* gENROU.K3q PARAM */) * (data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */)) - data->simulationInfo->realParameter[139] /* gENROU.PSIppq0 PARAM */,data->simulationInfo->realParameter[125] /* gENROU.K3q PARAM */ + data->simulationInfo->realParameter[127] /* gENROU.K4q PARAM */,"gENROU.K3q + gENROU.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENROU.PSIkd0 = (gENROU.PSIppd0 + (gENROU.Xl - gENROU.Xpd) * gENROU.K3d * gENROU.id0) / (gENROU.K3d + gENROU.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[132] /* gENROU.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[138] /* gENROU.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) * ((data->simulationInfo->realParameter[124] /* gENROU.K3d PARAM */) * (data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */)),data->simulationInfo->realParameter[124] /* gENROU.K3d PARAM */ + data->simulationInfo->realParameter[126] /* gENROU.K4d PARAM */,"gENROU.K3d + gENROU.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENROU.Epd0 = gENROU.PSIkq0 + (gENROU.Xl - gENROU.Xpq) * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[111] /* gENROU.Epd0 PARAM */ = data->simulationInfo->realParameter[133] /* gENROU.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */) * (data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENROU.Epq0 = gENROU.PSIkd0 + (gENROU.Xpd - gENROU.Xl) * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[112] /* gENROU.Epq0 PARAM */ = data->simulationInfo->realParameter[132] /* gENROU.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENROU.uq0 = gENROU.PSIppd0 + (-gENROU.Xppd) * gENROU.id0 - gENROU.R_a * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[186] /* gENROU.uq0 PARAM */ = data->simulationInfo->realParameter[138] /* gENROU.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */)) * (data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */) - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENROU.ud0 = gENROU.Xppq * gENROU.iq0 + (-gENROU.PSIppq0) - gENROU.R_a * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[185] /* gENROU.ud0 PARAM */ = (data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */) * (data->simulationInfo->realParameter[180] /* gENROU.iq0 PARAM */) + (-data->simulationInfo->realParameter[139] /* gENROU.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (data->simulationInfo->realParameter[178] /* gENROU.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENROU.ang_PSIpp0 = Modelica.Math.atan3(gENROU.PSIpp0.im, gENROU.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[169] /* gENROU.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[134] /* gENROU.PSIpp0.im PARAM */, data->simulationInfo->realParameter[135] /* gENROU.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
gENROU.ang_It = Modelica.Math.atan3(gENROU.It.im, gENROU.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[168] /* gENROU.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[118] /* gENROU.It.im PARAM */, data->simulationInfo->realParameter[119] /* gENROU.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENROU.ang_PSIpp0andIt = gENROU.ang_PSIpp0 - gENROU.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[170] /* gENROU.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[169] /* gENROU.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[168] /* gENROU.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENROU.a = gENROU.abs_PSIpp0 * (1.0 + gENROU.dsat * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[166] /* gENROU.a PARAM */ = (data->simulationInfo->realParameter[167] /* gENROU.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[175] /* gENROU.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENROU.b = (gENROU.It.re ^ 2.0 + gENROU.It.im ^ 2.0) ^ 0.5 * (gENROU.Xpp - gENROU.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  tmp12 = data->simulationInfo->realParameter[119] /* gENROU.It.re PARAM */;
  tmp13 = data->simulationInfo->realParameter[118] /* gENROU.It.im PARAM */;
  tmp14 = (tmp12 * tmp12) + (tmp13 * tmp13);
  if(!(tmp14 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROU.It.re ^ 2.0 + gENROU.It.im ^ 2.0) was %g should be >= 0", tmp14);
  }
  data->simulationInfo->realParameter[173] /* gENROU.b PARAM */ = (sqrt(tmp14)) * (data->simulationInfo->realParameter[159] /* gENROU.Xpp PARAM */ - data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
gENROU.delta0 = atan(gENROU.b * cos(gENROU.ang_PSIpp0andIt) / (gENROU.b * sin(gENROU.ang_PSIpp0andIt) - gENROU.a)) + gENROU.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[174] /* gENROU.delta0 PARAM */ = atan((data->simulationInfo->realParameter[173] /* gENROU.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[170] /* gENROU.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[173] /* gENROU.b PARAM */) * (sin(data->simulationInfo->realParameter[170] /* gENROU.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[166] /* gENROU.a PARAM */,"gENROU.b * sin(gENROU.ang_PSIpp0andIt) - gENROU.a",equationIndexes))) + data->simulationInfo->realParameter[169] /* gENROU.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
gENROU.q0 = gENROU.Q_0 / gENROU.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[184] /* gENROU.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[142] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[128] /* gENROU.M_b PARAM */,"gENROU.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
gENROU.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[148] /* gENROU.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
gENROU.CoB = gENROU.M_b / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[128] /* gENROU.M_b PARAM */,data->simulationInfo->realParameter[148] /* gENROU.S_b PARAM */,"gENROU.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
gENROU.angle_0rad = 0.0174532925199433 * gENROU.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[172] /* gENROU.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[171] /* gENROU.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
gENROU.vr0 = gENROU.v_0 * cos(gENROU.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[189] /* gENROU.vr0 PARAM */ = (data->simulationInfo->realParameter[187] /* gENROU.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[172] /* gENROU.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
gENROU.vi0 = gENROU.v_0 * sin(gENROU.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->realParameter[188] /* gENROU.vi0 PARAM */ = (data->simulationInfo->realParameter[187] /* gENROU.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[172] /* gENROU.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
gENROU.ii0 = gENROU.CoB * (gENROU.q0 * gENROU.vr0 - gENROU.p0 * gENROU.vi0) / (gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = data->simulationInfo->realParameter[189] /* gENROU.vr0 PARAM */;
  tmp16 = data->simulationInfo->realParameter[188] /* gENROU.vi0 PARAM */;
  data->simulationInfo->realParameter[179] /* gENROU.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */) * ((data->simulationInfo->realParameter[184] /* gENROU.q0 PARAM */) * (data->simulationInfo->realParameter[189] /* gENROU.vr0 PARAM */) - ((data->simulationInfo->realParameter[182] /* gENROU.p0 PARAM */) * (data->simulationInfo->realParameter[188] /* gENROU.vi0 PARAM */))),(tmp15 * tmp15) + (tmp16 * tmp16),"gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
gENROU.ir0 = (-gENROU.CoB) * (gENROU.p0 * gENROU.vr0 + gENROU.q0 * gENROU.vi0) / (gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  modelica_real tmp17;
  modelica_real tmp18;
  tmp17 = data->simulationInfo->realParameter[189] /* gENROU.vr0 PARAM */;
  tmp18 = data->simulationInfo->realParameter[188] /* gENROU.vi0 PARAM */;
  data->simulationInfo->realParameter[181] /* gENROU.ir0 PARAM */ = ((-data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[182] /* gENROU.p0 PARAM */) * (data->simulationInfo->realParameter[189] /* gENROU.vr0 PARAM */) + (data->simulationInfo->realParameter[184] /* gENROU.q0 PARAM */) * (data->simulationInfo->realParameter[188] /* gENROU.vi0 PARAM */),(tmp17 * tmp17) + (tmp18 * tmp18),"gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
gENROU.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[177] /* gENROU.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
gENROU.w_b = 6.283185307179586 * gENROU.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[190] /* gENROU.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[177] /* gENROU.fn PARAM */);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  tmp19 = Less(fabs(data->simulationInfo->realParameter[191] /* pwFault.R PARAM */),1e-15);
  tmp20 = Less(fabs(data->simulationInfo->realParameter[192] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */ = (tmp19 && tmp20);
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[48] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  modelica_real tmp21;
  tmp21 = data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[50] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[54] /* constantLoad.S_y.re PARAM */) * ((tmp21 * tmp21)) + data->simulationInfo->realParameter[52] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[48] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[49] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[53] /* constantLoad.S_y.im PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[51] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[48] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[38] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[68] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[38] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[61] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[76] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[62] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  modelica_real tmp24;
  modelica_real tmp25;
  tmp24 = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
  tmp25 = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[71] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */)),(tmp24 * tmp24) + (tmp25 * tmp25),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  modelica_real tmp26;
  modelica_real tmp27;
  tmp26 = data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */;
  tmp27 = data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[72] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[73] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[74] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[77] /* constantLoad.vi0 PARAM */),(tmp26 * tmp26) + (tmp27 * tmp27),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[70] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[91] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[90] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[100] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[91] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[100] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[91] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[98] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[84] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[99] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[85] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */;
  tmp29 = data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[97] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[98] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[99] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */),(tmp28 * tmp28) + (tmp29 * tmp29),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  modelica_real tmp30;
  modelica_real tmp31;
  tmp30 = data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */;
  tmp31 = data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[95] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[98] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[99] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */)),(tmp30 * tmp30) + (tmp31 * tmp31),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[95] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[97] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[97] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[95] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[104] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[94] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[97] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[95] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[96] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[97] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[95] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[102] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[104] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[96] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[94] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[101] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[105] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[103] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[92] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[87] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[83] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[87] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[93] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[232] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[230] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[228] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[229] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[231] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[221] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[219] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[217] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[218] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[220] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[210] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[208] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[206] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[207] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[209] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[199] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[197] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[195] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[196] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->realParameter[198] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_138(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_137(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_136(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_135(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_134(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_133(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_132(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_131(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 538
type: ALGORITHM

  assert(sEXS.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and sEXS.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= sEXS.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(sEXS.leadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,157,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= sEXS.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->simulationInfo->integerParameter[5] /* sEXS.leadLag.TF.initType PARAM */,1);
    tmp33 = LessEq(data->simulationInfo->integerParameter[5] /* sEXS.leadLag.TF.initType PARAM */,4);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* sEXS.leadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",1279,5,1282,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsEXS.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and sEXS.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_364(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_367(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_371(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_372(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_373(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_378(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_379(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_380(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_382(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_383(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_384(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_385(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_390(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_391(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_393(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_401(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_416(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_454(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_459(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_461(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_464(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_137(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_136(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_134(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_538(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* sEXS.leadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* sEXS.leadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* sEXS.leadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->localData[0]->realVars[56] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[56].time_unvarying = 1;
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
  data->simulationInfo->realParameter[82] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[82].time_unvarying = 1;
  data->simulationInfo->realParameter[108] /* gENROU.DQ_dq.im PARAM */ = -0.5640195981481834;
  data->modelData->realParameterData[108].time_unvarying = 1;
  data->simulationInfo->realParameter[109] /* gENROU.DQ_dq.re PARAM */ = 0.825761401922348;
  data->modelData->realParameterData[109].time_unvarying = 1;
  data->simulationInfo->realParameter[114] /* gENROU.I_dq.im PARAM */ = 0.2485107537063859;
  data->modelData->realParameterData[114].time_unvarying = 1;
  data->simulationInfo->realParameter[115] /* gENROU.I_dq.re PARAM */ = 0.3180822870713747;
  data->modelData->realParameterData[115].time_unvarying = 1;
  data->simulationInfo->realParameter[116] /* gENROU.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[116].time_unvarying = 1;
  data->simulationInfo->realParameter[117] /* gENROU.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[117].time_unvarying = 1;
  data->simulationInfo->realParameter[118] /* gENROU.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[118].time_unvarying = 1;
  data->simulationInfo->realParameter[119] /* gENROU.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[119].time_unvarying = 1;
  data->simulationInfo->realParameter[134] /* gENROU.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[134].time_unvarying = 1;
  data->simulationInfo->realParameter[135] /* gENROU.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[135].time_unvarying = 1;
  data->simulationInfo->realParameter[136] /* gENROU.PSIpp0_dq.im PARAM */ = -0.4407297553199289;
  data->modelData->realParameterData[136].time_unvarying = 1;
  data->simulationInfo->realParameter[137] /* gENROU.PSIpp0_dq.re PARAM */ = 0.9132036838613202;
  data->modelData->realParameterData[137].time_unvarying = 1;
  data->simulationInfo->realParameter[144] /* gENROU.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[144].time_unvarying = 1;
  data->simulationInfo->realParameter[145] /* gENROU.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[145].time_unvarying = 1;
  data->simulationInfo->realParameter[153] /* gENROU.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[153].time_unvarying = 1;
  data->simulationInfo->realParameter[154] /* gENROU.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[154].time_unvarying = 1;
  data->simulationInfo->realParameter[164] /* gENROU.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[164].time_unvarying = 1;
  data->simulationInfo->realParameter[165] /* gENROU.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[165].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* sEXS.leadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[5].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

