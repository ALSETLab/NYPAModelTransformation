/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Machines.PSSE.GENROE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 262
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->modelData->realVarsData[65].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[136] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[65] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[65].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[65] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->modelData->realVarsData[64].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[135] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[64] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[64].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[64] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->modelData->realVarsData[66].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[137] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[66] /* gENROE.PSIq variable */ = data->modelData->realVarsData[66].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[66] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->modelData->realVarsData[62].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[128] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[62] /* gENROE.PSId variable */ = data->modelData->realVarsData[62].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[62] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->modelData->realVarsData[5].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[130] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->modelData->realVarsData[4].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[129] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->modelData->realVarsData[3].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[109] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[3].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->modelData->realVarsData[2].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[108] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[2].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->modelData->realVarsData[75].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[183] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[75] /* gENROE.uq variable */ = data->modelData->realVarsData[75].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[75] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->modelData->realVarsData[74].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[182] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[74] /* gENROE.ud variable */ = data->modelData->realVarsData[74].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[74] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->modelData->realVarsData[73].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[73] /* gENROE.iq variable */ = data->modelData->realVarsData[73].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[73] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->modelData->realVarsData[72].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[72] /* gENROE.id variable */ = data->modelData->realVarsData[72].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[72] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->modelData->realVarsData[68].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[180] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[68] /* gENROE.Te variable */ = data->modelData->realVarsData[68].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[68] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->modelData->realVarsData[67].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[139] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[145] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[67] /* gENROE.Q variable */ = data->modelData->realVarsData[67].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[67] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->modelData->realVarsData[60].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[138] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[145] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[60] /* gENROE.P variable */ = data->modelData->realVarsData[60].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[60] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->modelData->realVarsData[70].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[176] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[178] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[70] /* gENROE.anglei variable */ = data->modelData->realVarsData[70].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[70] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[178] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[176] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[58].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[58] /* gENROE.I variable */ = data->modelData->realVarsData[58].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[58] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->modelData->realVarsData[71].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[169] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[71] /* gENROE.anglev variable */ = data->modelData->realVarsData[71].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[71] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->modelData->realVarsData[6].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[171] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
$START.gENROE.ISORCE = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->modelData->realVarsData[59].attribute /* gENROE.ISORCE variable */.start = data->simulationInfo->realParameter[173] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[59] /* gENROE.ISORCE variable */ = data->modelData->realVarsData[59].attribute /* gENROE.ISORCE variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* gENROE.ISORCE */.name, (modelica_real) data->localData[0]->realVars[59] /* gENROE.ISORCE variable */);
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->modelData->realVarsData[61].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[179] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[61] /* gENROE.PELEC variable */ = data->modelData->realVarsData[61].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[61] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$START.gENROE.ETERM = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->modelData->realVarsData[57].attribute /* gENROE.ETERM variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[57] /* gENROE.ETERM variable */ = data->modelData->realVarsData[57].attribute /* gENROE.ETERM variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* gENROE.ETERM */.name, (modelica_real) data->localData[0]->realVars[57] /* gENROE.ETERM variable */);
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->modelData->realVarsData[23].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[23] /* FAULT.angle variable */ = data->modelData->realVarsData[23].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[23] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->modelData->realVarsData[22].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[22] /* FAULT.V variable */ = data->modelData->realVarsData[22].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[22].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[22] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->modelData->realVarsData[31].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[31] /* GEN2.angle variable */ = data->modelData->realVarsData[31].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[31] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->modelData->realVarsData[30].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[30] /* GEN2.V variable */ = data->modelData->realVarsData[30].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[30] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->modelData->realVarsData[35].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[35] /* LOAD.angle variable */ = data->modelData->realVarsData[35].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[35] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->modelData->realVarsData[27].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[27] /* GEN1.angle variable */ = data->modelData->realVarsData[27].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[27] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->modelData->realVarsData[45].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[45] /* constantLoad.v variable */ = data->modelData->realVarsData[45].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[45] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->modelData->realVarsData[40].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[40] /* constantLoad.angle variable */ = data->modelData->realVarsData[40].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[40] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->modelData->realVarsData[43].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[43] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[43].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[43] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->modelData->realVarsData[44].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[44] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[44].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[44] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->modelData->realVarsData[47].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[81] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[47] /* gENCLS.Q variable */ = data->modelData->realVarsData[47].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[47] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->modelData->realVarsData[46].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[80] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[46] /* gENCLS.P variable */ = data->modelData->realVarsData[46].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[46].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[46] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->modelData->realVarsData[51].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[51] /* gENCLS.iq variable */ = data->modelData->realVarsData[51].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[51] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->modelData->realVarsData[50].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[50] /* gENCLS.id variable */ = data->modelData->realVarsData[50].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[50] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->modelData->realVarsData[56].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[100] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[56] /* gENCLS.vq variable */ = data->modelData->realVarsData[56].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[56] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->modelData->realVarsData[55].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[97] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[55] /* gENCLS.vd variable */ = data->modelData->realVarsData[55].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[55] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->modelData->realVarsData[49].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[49] /* gENCLS.anglev variable */ = data->modelData->realVarsData[49].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[49] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->modelData->realVarsData[53].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[53] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[53].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->modelData->realVarsData[54].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[54] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[54].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->modelData->realVarsData[108].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[108] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[108].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[108] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->modelData->realVarsData[109].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[109] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[109].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[109] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->modelData->realVarsData[96].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[96] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[96].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[96] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->modelData->realVarsData[97].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[97] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[97].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[97] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->modelData->realVarsData[98].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[98] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[98].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[98] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->modelData->realVarsData[99].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[99] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[99].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[99] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->modelData->realVarsData[84].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[176] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[84] /* pwLine.is.im variable */ = data->modelData->realVarsData[84].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[84] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->modelData->realVarsData[85].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[178] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[85] /* pwLine.is.re variable */ = data->modelData->realVarsData[85].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[85] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->modelData->realVarsData[86].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[185] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[86] /* pwLine.vs.im variable */ = data->modelData->realVarsData[86].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[86] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->modelData->realVarsData[87].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[186] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[87] /* pwLine.vs.re variable */ = data->modelData->realVarsData[87].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[87] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->modelData->realVarsData[26].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[26] /* GEN1.V variable */ = data->modelData->realVarsData[26].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[26].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[26] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->modelData->realVarsData[48].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[48] /* gENCLS.V variable */ = data->modelData->realVarsData[48].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[48] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->modelData->realVarsData[34].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[34] /* LOAD.V variable */ = data->modelData->realVarsData[34].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[34] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_317(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 318
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[179] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[138] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[125] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[112] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[111] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[180] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[179] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[140] /* gENROE.R_a PARAM */) * ((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[126] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[180] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->realParameter[127] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[180] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  tmp2 = data->simulationInfo->realParameter[132] /* gENROE.PSIpp0.re PARAM */;
  tmp3 = data->simulationInfo->realParameter[131] /* gENROE.PSIpp0.im PARAM */;
  tmp4 = (tmp2 * tmp2) + (tmp3 * tmp3);
  if(!(tmp4 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp4);
  }
  data->simulationInfo->realParameter[164] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp4);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->realParameter[172] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[164] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[143] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[144] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[135] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[134] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xpd - gENROE.Xpp + gENROE.Xd - gENROE.Xpd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[173] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[135] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[172] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[156] /* gENROE.Xpp PARAM */ + data->simulationInfo->realParameter[153] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
gENROE.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->realParameter[106] /* gENROE.EFD PARAM */ = data->simulationInfo->realParameter[173] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->realParameter[107] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[173] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->realParameter[124] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->realParameter[122] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->realParameter[123] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->realParameter[121] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->realParameter[120] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  modelica_real tmp5;
  tmp5 = data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[118] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[160] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */,(tmp5 * tmp5),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->realParameter[119] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[117] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[153] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */,(tmp6 * tmp6),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->realParameter[136] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[133] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->realParameter[137] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[136] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->realParameter[128] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[135] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[130] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[122] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[136] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[122] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[124] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->realParameter[129] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[135] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[121] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[121] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[123] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[108] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[130] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[159] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[109] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[129] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[155] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[183] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[135] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[157] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[140] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[182] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[158] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[177] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[136] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[140] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[175] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[166] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[131] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[132] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[165] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[115] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[116] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->realParameter[167] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[166] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[165] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->realParameter[163] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[164] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[172] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[160] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[153] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[154] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  tmp7 = data->simulationInfo->realParameter[116] /* gENROE.It.re PARAM */;
  tmp8 = data->simulationInfo->realParameter[115] /* gENROE.It.im PARAM */;
  tmp9 = (tmp7 * tmp7) + (tmp8 * tmp8);
  if(!(tmp9 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp9);
  }
  data->simulationInfo->realParameter[170] /* gENROE.b PARAM */ = (sqrt(tmp9)) * (data->simulationInfo->realParameter[156] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[160] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[171] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[170] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[167] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[170] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[167] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[163] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[166] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->realParameter[181] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[139] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[125] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[145] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[125] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[145] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[169] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[168] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[186] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[184] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[169] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[185] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[184] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[169] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->simulationInfo->realParameter[186] /* gENROE.vr0 PARAM */;
  tmp11 = data->simulationInfo->realParameter[185] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[176] /* gENROE.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */) * ((data->simulationInfo->realParameter[181] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[186] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[179] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[185] /* gENROE.vi0 PARAM */))),(tmp10 * tmp10) + (tmp11 * tmp11),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->simulationInfo->realParameter[186] /* gENROE.vr0 PARAM */;
  tmp13 = data->simulationInfo->realParameter[185] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[178] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[102] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[179] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[186] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[181] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[185] /* gENROE.vi0 PARAM */),(tmp12 * tmp12) + (tmp13 * tmp13),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[174] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[187] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[174] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  tmp14 = Less(fabs(data->simulationInfo->realParameter[188] /* pwFault.R PARAM */),1e-15);
  tmp15 = Less(fabs(data->simulationInfo->realParameter[189] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */ = (tmp14 && tmp15);
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  modelica_real tmp16;
  tmp16 = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[46] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[50] /* constantLoad.S_y.re PARAM */) * ((tmp16 * tmp16)) + data->simulationInfo->realParameter[48] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  modelica_real tmp17;
  tmp17 = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[45] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[49] /* constantLoad.S_y.im PARAM */) * ((tmp17 * tmp17)) + data->simulationInfo->realParameter[47] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[34] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[34] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[57] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  tmp20 = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */)),(tmp19 * tmp19) + (tmp20 * tmp20),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  modelica_real tmp21;
  modelica_real tmp22;
  tmp21 = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  tmp22 = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */),(tmp21 * tmp21) + (tmp22 * tmp22),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[66] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[86] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[94] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[80] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[79] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[95] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[81] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[79] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  modelica_real tmp23;
  modelica_real tmp24;
  tmp23 = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  tmp24 = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[94] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[95] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */),(tmp23 * tmp23) + (tmp24 * tmp24),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[94] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[95] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[100] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[100] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[97] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[79] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[89] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[232] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[229] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[233] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[227] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[225] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[226] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[228] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[221] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[218] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[222] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[216] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[214] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[215] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[217] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[210] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[207] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[211] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[205] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[203] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[204] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[206] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[199] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[196] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[200] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[194] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[192] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[193] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[195] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_2(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_331(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_333(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_334(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_335(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_336(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_337(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_338(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_339(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_340(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_341(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_342(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_344(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_345(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_346(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_347(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_348(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_350(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_351(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_352(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_355(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_359(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_360(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_371(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_372(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_373(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_376(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_378(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_379(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_380(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_382(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_383(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_384(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_385(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_390(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_391(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_393(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_398(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_434(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_436(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_454(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENROE_eqFunction_2(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundParameters(DATA *data, threadData_t *threadData)
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
  data->localData[0]->realVars[52] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[52].time_unvarying = 1;
  data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[38].time_unvarying = 1;
  data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[39].time_unvarying = 1;
  data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[54].time_unvarying = 1;
  data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[55].time_unvarying = 1;
  data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[75].time_unvarying = 1;
  data->simulationInfo->realParameter[78] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  data->simulationInfo->realParameter[104] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  data->modelData->realParameterData[104].time_unvarying = 1;
  data->simulationInfo->realParameter[105] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  data->modelData->realParameterData[105].time_unvarying = 1;
  data->simulationInfo->realParameter[111] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  data->modelData->realParameterData[111].time_unvarying = 1;
  data->simulationInfo->realParameter[112] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[112].time_unvarying = 1;
  data->simulationInfo->realParameter[113] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[113].time_unvarying = 1;
  data->simulationInfo->realParameter[114] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[114].time_unvarying = 1;
  data->simulationInfo->realParameter[115] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[115].time_unvarying = 1;
  data->simulationInfo->realParameter[116] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[116].time_unvarying = 1;
  data->simulationInfo->realParameter[131] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[131].time_unvarying = 1;
  data->simulationInfo->realParameter[132] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[132].time_unvarying = 1;
  data->simulationInfo->realParameter[133] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  data->modelData->realParameterData[133].time_unvarying = 1;
  data->simulationInfo->realParameter[134] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  data->modelData->realParameterData[134].time_unvarying = 1;
  data->simulationInfo->realParameter[141] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[141].time_unvarying = 1;
  data->simulationInfo->realParameter[142] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[142].time_unvarying = 1;
  data->simulationInfo->realParameter[150] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[150].time_unvarying = 1;
  data->simulationInfo->realParameter[151] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[151].time_unvarying = 1;
  data->simulationInfo->realParameter[161] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[161].time_unvarying = 1;
  data->simulationInfo->realParameter[162] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[162].time_unvarying = 1;
  OpenIPSL_Examples_Machines_PSSE_GENROE_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

