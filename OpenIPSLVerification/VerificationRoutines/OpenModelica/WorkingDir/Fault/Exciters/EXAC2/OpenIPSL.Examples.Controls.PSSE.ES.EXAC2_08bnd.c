/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 541
type: SIMPLE_ASSIGN
$START.eXAC2.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD variable */.start = data->simulationInfo->realParameter[290] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* eXAC2.XADIFD */.name, (modelica_real) data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
$START.eXAC2.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->modelData->realVarsData[61].attribute /* eXAC2.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[61] /* eXAC2.ECOMP variable */ = data->modelData->realVarsData[61].attribute /* eXAC2.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* eXAC2.ECOMP */.name, (modelica_real) data->localData[0]->realVars[61] /* eXAC2.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
$START.eXAC2.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->modelData->realVarsData[62].attribute /* eXAC2.EFD variable */.start = data->simulationInfo->realParameter[290] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[62] /* eXAC2.EFD variable */ = data->modelData->realVarsData[62].attribute /* eXAC2.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eXAC2.EFD */.name, (modelica_real) data->localData[0]->realVars[62] /* eXAC2.EFD variable */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->modelData->realVarsData[101].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[253] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->modelData->realVarsData[100].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[252] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->modelData->realVarsData[102].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[254] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = data->modelData->realVarsData[102].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->modelData->realVarsData[98].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[245] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->modelData->realVarsData[98].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[247] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[246] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[226] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[225] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->modelData->realVarsData[111].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[300] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->modelData->realVarsData[111].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[111].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->modelData->realVarsData[110].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[299] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[110] /* gENROE.ud variable */ = data->modelData->realVarsData[110].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[110].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[110] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->modelData->realVarsData[109].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->modelData->realVarsData[109].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[109] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->modelData->realVarsData[108].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[108] /* gENROE.id variable */ = data->modelData->realVarsData[108].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[108] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->modelData->realVarsData[104].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[297] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[104] /* gENROE.Te variable */ = data->modelData->realVarsData[104].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->modelData->realVarsData[103].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[256] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[262] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[103] /* gENROE.Q variable */ = data->modelData->realVarsData[103].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->modelData->realVarsData[96].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[255] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[262] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[96] /* gENROE.P variable */ = data->modelData->realVarsData[96].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->modelData->realVarsData[106].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[293] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[295] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[106] /* gENROE.anglei variable */ = data->modelData->realVarsData[106].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[295] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[293] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[95].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[95] /* gENROE.I variable */ = data->modelData->realVarsData[95].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[107].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[286] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[107] /* gENROE.anglev variable */ = data->modelData->realVarsData[107].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[107] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[288] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[97].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[296] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[97] /* gENROE.PELEC variable */ = data->modelData->realVarsData[97].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[214] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->modelData->realVarsData[85].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[199] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[201] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[85] /* gENCLS.Q variable */ = data->modelData->realVarsData[85].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[85] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->modelData->realVarsData[84].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[198] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[201] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[84] /* gENCLS.P variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->modelData->realVarsData[89].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[210] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->modelData->realVarsData[88].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[208] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->modelData->realVarsData[94].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[218] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->modelData->realVarsData[94].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[94] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->modelData->realVarsData[93].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[215] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[93] /* gENCLS.vd variable */ = data->modelData->realVarsData[93].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[93] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[216] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->modelData->realVarsData[87].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[205] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[87] /* gENCLS.anglev variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->modelData->realVarsData[91].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[209] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[91].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[91] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->modelData->realVarsData[92].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[211] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[92].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[92] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->modelData->realVarsData[144].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[144].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[144] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->modelData->realVarsData[145].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[145].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[145] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->modelData->realVarsData[132].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[132].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[132] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->modelData->realVarsData[133].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[133].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[133] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->modelData->realVarsData[134].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[134].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[134] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->modelData->realVarsData[135].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[135] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->modelData->realVarsData[120].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[293] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[120] /* pwLine.is.im variable */ = data->modelData->realVarsData[120].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[120] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->modelData->realVarsData[121].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[295] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[121] /* pwLine.is.re variable */ = data->modelData->realVarsData[121].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[121].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[121] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->modelData->realVarsData[122].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[302] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = data->modelData->realVarsData[122].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[122] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->modelData->realVarsData[123].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[303] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = data->modelData->realVarsData[123].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[123] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->modelData->realVarsData[86].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[214] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[86] /* gENCLS.V variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_580(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_581(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_582(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_583(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_584(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_585(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_586(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_587(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_588(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_589(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_590(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_591(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_592(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_593(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_594(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_595(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_596(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_597(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 598
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[273] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[249] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[248] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[281] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->simulationInfo->realParameter[289] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[281] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[260] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[261] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->realParameter[252] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[251] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[228] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xd - gENROE.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->realParameter[290] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[252] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[289] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[224] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[290] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.T = eXAC2.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[146] /* eXAC2.imLimitedSimpleLag.T PARAM */ = data->simulationInfo->realParameter[98] /* eXAC2.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.const.y = eXAC2.imLimitedSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[148] /* eXAC2.imLimitedSimpleLag.const.y PARAM */ = data->simulationInfo->realParameter[146] /* eXAC2.imLimitedSimpleLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
eXAC2.leadLag.T1 = eXAC2.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[153] /* eXAC2.leadLag.T1 PARAM */ = data->simulationInfo->realParameter[100] /* eXAC2.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
eXAC2.leadLag.par1.y = eXAC2.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[166] /* eXAC2.leadLag.par1.y PARAM */ = data->simulationInfo->realParameter[153] /* eXAC2.leadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
eXAC2.leadLag.T2 = eXAC2.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[154] /* eXAC2.leadLag.T2 PARAM */ = data->simulationInfo->realParameter[99] /* eXAC2.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
eXAC2.leadLag.par2.y = eXAC2.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[167] /* eXAC2.leadLag.par2.y PARAM */ = data->simulationInfo->realParameter[154] /* eXAC2.leadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.T = eXAC2.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[103] /* eXAC2.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.const.y = eXAC2.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[107] /* eXAC2.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
eXAC2.Vref1.k = eXAC2.V_LR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->simulationInfo->realParameter[124] /* eXAC2.Vref1.k PARAM */ = data->simulationInfo->realParameter[118] /* eXAC2.V_LR PARAM */;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
eXAC2.add3.u2 = eXAC2.Vref1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[128] /* eXAC2.add3.u2 PARAM */ = data->simulationInfo->realParameter[124] /* eXAC2.Vref1.k PARAM */;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
eXAC2.Vref1.y = eXAC2.Vref1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[125] /* eXAC2.Vref1.y PARAM */ = data->simulationInfo->realParameter[124] /* eXAC2.Vref1.k PARAM */;
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[296] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[255] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[242] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[229] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[297] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[296] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[243] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[297] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[244] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[297] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
eXAC2.add3_2.u3 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[137] /* eXAC2.add3_2.u3 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
eXAC2.VOEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[112] /* eXAC2.VOEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
eXAC2.add3_2.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[135] /* eXAC2.add3_2.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
eXAC2.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[113] /* eXAC2.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
eXAC2.add3_2.u2 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[136] /* eXAC2.add3_2.u2 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
eXAC2.VUEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[115] /* eXAC2.VUEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
eXAC2.gain3.k = eXAC2.K_L
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[140] /* eXAC2.gain3.k PARAM */ = data->simulationInfo->realParameter[95] /* eXAC2.K_L PARAM */;
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
eXAC2.limiter.uMin = eXAC2.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[171] /* eXAC2.limiter.uMin PARAM */ = data->simulationInfo->realParameter[121] /* eXAC2.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
eXAC2.limiter.uMax = eXAC2.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[170] /* eXAC2.limiter.uMax PARAM */ = data->simulationInfo->realParameter[120] /* eXAC2.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
eXAC2.gain1.k = eXAC2.K_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->simulationInfo->realParameter[139] /* eXAC2.gain1.k PARAM */ = data->simulationInfo->realParameter[89] /* eXAC2.K_B PARAM */;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
eXAC2.gain.k = eXAC2.K_H
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[138] /* eXAC2.gain.k PARAM */ = data->simulationInfo->realParameter[94] /* eXAC2.K_H PARAM */;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
eXAC2.TransducerDelay.T_mod = if eXAC2.TransducerDelay.T < 1e-15 then 1000.0 else eXAC2.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[106] /* eXAC2.TransducerDelay.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[105] /* eXAC2.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.K_D = eXAC2.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[177] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_D PARAM */ = data->simulationInfo->realParameter[91] /* eXAC2.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.T_E = eXAC2.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[184] /* eXAC2.rotatingExciterWithDemagnetizationLimited.T_E PARAM */ = data->simulationInfo->realParameter[101] /* eXAC2.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k = 1.0 / eXAC2.rotatingExciterWithDemagnetizationLimited.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[186] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[184] /* eXAC2.rotatingExciterWithDemagnetizationLimited.T_E PARAM */,"eXAC2.rotatingExciterWithDemagnetizationLimited.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.E_2 = eXAC2.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[175] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_2 PARAM */ = data->simulationInfo->realParameter[85] /* eXAC2.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E2 = eXAC2.rotatingExciterWithDemagnetizationLimited.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->realParameter[191] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E2 PARAM */ = data->simulationInfo->realParameter[175] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.E_1 = eXAC2.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[174] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_1 PARAM */ = data->simulationInfo->realParameter[84] /* eXAC2.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E1 = eXAC2.rotatingExciterWithDemagnetizationLimited.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[190] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.E1 PARAM */ = data->simulationInfo->realParameter[174] /* eXAC2.rotatingExciterWithDemagnetizationLimited.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2 = eXAC2.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[180] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2 PARAM */ = data->simulationInfo->realParameter[97] /* eXAC2.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE2 = eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[193] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE2 PARAM */ = data->simulationInfo->realParameter[180] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1 = eXAC2.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[179] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1 PARAM */ = data->simulationInfo->realParameter[96] /* eXAC2.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE1 = eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[192] /* eXAC2.rotatingExciterWithDemagnetizationLimited.se1.SE1 PARAM */ = data->simulationInfo->realParameter[179] /* eXAC2.rotatingExciterWithDemagnetizationLimited.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k3 = eXAC2.rotatingExciterWithDemagnetizationLimited.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[183] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Sum.k3 PARAM */ = data->simulationInfo->realParameter[177] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.K_E = eXAC2.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[178] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_E PARAM */ = data->simulationInfo->realParameter[92] /* eXAC2.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.gain.k = eXAC2.rotatingExciterWithDemagnetizationLimited.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[185] /* eXAC2.rotatingExciterWithDemagnetizationLimited.gain.k PARAM */ = data->simulationInfo->realParameter[178] /* eXAC2.rotatingExciterWithDemagnetizationLimited.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.K_C = eXAC2.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[172] /* eXAC2.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[90] /* eXAC2.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.gain2.k = eXAC2.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[173] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[172] /* eXAC2.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
eXAC2.leadLag.T2_dummy = if abs(eXAC2.leadLag.T1 - eXAC2.leadLag.T2) < 1e-15 then 1000.0 else eXAC2.leadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  modelica_boolean tmp6;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[153] /* eXAC2.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[154] /* eXAC2.leadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[155] /* eXAC2.leadLag.T2_dummy PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[154] /* eXAC2.leadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.a[1] = eXAC2.leadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[156] /* eXAC2.leadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[155] /* eXAC2.leadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.a_end = if eXAC2.leadLag.TF.a[2] > 1e-13 * sqrt(eXAC2.leadLag.TF.a[1] ^ 2.0 + eXAC2.leadLag.TF.a[2] ^ 2.0) then eXAC2.leadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  tmp7 = data->simulationInfo->realParameter[156] /* eXAC2.leadLag.TF.a[1] PARAM */;
  tmp8 = data->simulationInfo->realParameter[157] /* eXAC2.leadLag.TF.a[2] PARAM */;
  tmp9 = Greater(data->simulationInfo->realParameter[157] /* eXAC2.leadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp7 * tmp7) + (tmp8 * tmp8))));
  data->simulationInfo->realParameter[158] /* eXAC2.leadLag.TF.a_end PARAM */ = (tmp9?data->simulationInfo->realParameter[157] /* eXAC2.leadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.b[1] = eXAC2.leadLag.K * eXAC2.leadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[159] /* eXAC2.leadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[152] /* eXAC2.leadLag.K PARAM */) * (data->simulationInfo->realParameter[153] /* eXAC2.leadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.bb[1] = eXAC2.leadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[159] /* eXAC2.leadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.d = eXAC2.leadLag.TF.bb[1] / eXAC2.leadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[163] /* eXAC2.leadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[161] /* eXAC2.leadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[156] /* eXAC2.leadLag.TF.a[1] PARAM */,"eXAC2.leadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.b[2] = eXAC2.leadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[160] /* eXAC2.leadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[152] /* eXAC2.leadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
eXAC2.leadLag.TF.bb[2] = eXAC2.leadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[162] /* eXAC2.leadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[160] /* eXAC2.leadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
eXAC2.imDerivativeLag.T = eXAC2.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[141] /* eXAC2.imDerivativeLag.T PARAM */ = data->simulationInfo->realParameter[102] /* eXAC2.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.T_mod = if eXAC2.imLimitedSimpleLag.T < 1e-15 then 1000.0 else eXAC2.imLimitedSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  modelica_boolean tmp10;
  tmp10 = Less(data->simulationInfo->realParameter[146] /* eXAC2.imLimitedSimpleLag.T PARAM */,1e-15);
  data->simulationInfo->realParameter[147] /* eXAC2.imLimitedSimpleLag.T_mod PARAM */ = (tmp10?1000.0:data->simulationInfo->realParameter[146] /* eXAC2.imLimitedSimpleLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.outMin = eXAC2.V_AMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[150] /* eXAC2.imLimitedSimpleLag.outMin PARAM */ = data->simulationInfo->realParameter[117] /* eXAC2.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.outMax = eXAC2.V_AMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[149] /* eXAC2.imLimitedSimpleLag.outMax PARAM */ = data->simulationInfo->realParameter[116] /* eXAC2.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
eXAC2.imLimitedSimpleLag.K = eXAC2.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->realParameter[145] /* eXAC2.imLimitedSimpleLag.K PARAM */ = data->simulationInfo->realParameter[88] /* eXAC2.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[241] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[239] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->simulationInfo->realParameter[240] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->realParameter[238] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[237] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[235] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[236] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[234] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->realParameter[253] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[250] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->realParameter[254] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[253] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->simulationInfo->realParameter[245] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[252] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->simulationInfo->realParameter[247] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[239] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[253] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[239] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[241] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[246] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[252] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[238] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[238] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[240] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[225] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[247] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[226] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[246] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[300] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[252] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[299] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[294] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[253] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[292] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->simulationInfo->realParameter[283] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[248] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[249] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->simulationInfo->realParameter[282] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[232] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[233] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->simulationInfo->realParameter[284] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[283] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[282] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[280] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[281] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[289] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[233] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[232] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[287] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[273] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->realParameter[288] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[287] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[284] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[287] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[284] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[280] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[283] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[298] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[256] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[242] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[262] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[242] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[262] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->realParameter[286] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[285] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->realParameter[303] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[301] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[286] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->realParameter[302] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[301] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[286] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[303] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[302] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[293] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[298] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[303] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[296] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[302] /* gENROE.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[303] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[302] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[295] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[296] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[303] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[298] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[302] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->simulationInfo->realParameter[291] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->simulationInfo->realParameter[304] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[291] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[305] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[306] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[48] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[52] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[50] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[47] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[51] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[49] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[36] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[36] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[59] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->realParameter[68] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->simulationInfo->realParameter[205] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[204] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[214] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[205] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[214] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[205] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->simulationInfo->realParameter[212] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[198] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[197] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->simulationInfo->realParameter[213] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[199] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[197] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[211] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[212] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[213] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[209] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[212] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[213] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[209] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[211] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[211] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[209] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->simulationInfo->realParameter[218] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->simulationInfo->realParameter[208] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[211] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[209] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->simulationInfo->realParameter[210] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[211] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[209] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->simulationInfo->realParameter[216] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[218] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[210] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[208] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->simulationInfo->realParameter[215] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[219] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[217] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[206] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->simulationInfo->realParameter[201] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[197] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[201] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[207] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[346] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[344] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[342] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[343] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->simulationInfo->realParameter[345] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[335] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[333] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[331] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[332] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->simulationInfo->realParameter[334] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[324] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[322] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[320] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[321] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->simulationInfo->realParameter[323] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[313] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[311] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[309] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[310] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->simulationInfo->realParameter[312] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_169(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 815
type: ALGORITHM

  assert(eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,194,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[6] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[6] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 816
type: ALGORITHM

  assert(eXAC2.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC2.leadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,158,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */,1);
    tmp39 = LessEq(data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */,4);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 817
type: ALGORITHM

  assert(eXAC2.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXAC2.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,163,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq(data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */,1);
    tmp44 = LessEq(data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */,4);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXAC2.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 818
type: ALGORITHM

  assert(eXAC2.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eXAC2.imDerivativeLag.T, has value: " + String(eXAC2.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,80,"Variable violating min constraint: 1e-60 <= eXAC2.imDerivativeLag.T, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->simulationInfo->realParameter[141] /* eXAC2.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[141] /* eXAC2.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXAC2.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_601(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_602(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_604(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_606(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_607(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_608(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_609(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_610(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_611(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_612(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_613(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_614(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_615(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_616(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_617(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_619(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_620(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_622(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_623(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_624(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_625(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_626(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_627(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_628(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_629(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_630(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_631(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_633(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_636(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_638(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_646(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_647(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_648(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_652(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_656(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_657(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_658(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_659(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_660(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_662(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_664(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_665(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_680(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_683(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_684(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_685(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_686(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_688(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_690(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_691(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_693(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_696(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_701(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_704(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_705(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_706(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_708(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_719(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_722(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_723(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_724(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_725(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_726(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_727(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_728(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_731(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_732(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_734(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_735(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_736(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_737(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_738(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_741(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_759(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_760(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_761(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_766(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_767(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_770(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_771(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_772(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_773(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_774(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_775(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_776(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_777(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_778(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_780(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_786(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_787(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_795(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_801(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_815(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_816(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_817(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_818(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eXAC2.leadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eXAC2.leadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eXAC2.leadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->localData[0]->realVars[90] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[90].time_unvarying = 1;
  data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[44].time_unvarying = 1;
  data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[45].time_unvarying = 1;
  data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[57].time_unvarying = 1;
  data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[58].time_unvarying = 1;
  data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[63].time_unvarying = 1;
  data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[64].time_unvarying = 1;
  data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[77].time_unvarying = 1;
  data->simulationInfo->realParameter[93] /* eXAC2.K_F PARAM */ = 0.03;
  data->modelData->realParameterData[93].time_unvarying = 1;
  data->simulationInfo->realParameter[142] /* eXAC2.imDerivativeLag.k PARAM */ = 0.03;
  data->modelData->realParameterData[142].time_unvarying = 1;
  data->simulationInfo->realParameter[196] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[196].time_unvarying = 1;
  data->simulationInfo->realParameter[222] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  data->modelData->realParameterData[222].time_unvarying = 1;
  data->simulationInfo->realParameter[223] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  data->modelData->realParameterData[223].time_unvarying = 1;
  data->simulationInfo->realParameter[228] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  data->modelData->realParameterData[228].time_unvarying = 1;
  data->simulationInfo->realParameter[229] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[229].time_unvarying = 1;
  data->simulationInfo->realParameter[230] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[230].time_unvarying = 1;
  data->simulationInfo->realParameter[231] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[231].time_unvarying = 1;
  data->simulationInfo->realParameter[232] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[232].time_unvarying = 1;
  data->simulationInfo->realParameter[233] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[233].time_unvarying = 1;
  data->simulationInfo->realParameter[248] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[248].time_unvarying = 1;
  data->simulationInfo->realParameter[249] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[249].time_unvarying = 1;
  data->simulationInfo->realParameter[250] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  data->modelData->realParameterData[250].time_unvarying = 1;
  data->simulationInfo->realParameter[251] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  data->modelData->realParameterData[251].time_unvarying = 1;
  data->simulationInfo->realParameter[258] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[258].time_unvarying = 1;
  data->simulationInfo->realParameter[259] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[259].time_unvarying = 1;
  data->simulationInfo->realParameter[267] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[267].time_unvarying = 1;
  data->simulationInfo->realParameter[268] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[268].time_unvarying = 1;
  data->simulationInfo->realParameter[278] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[278].time_unvarying = 1;
  data->simulationInfo->realParameter[279] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[279].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eXAC2.imDerivativeLag.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eXAC2.limiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eXAC2.limiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.strict PARAM */ = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eXAC2.imDerivativeLag.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eXAC2.leadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.initType PARAM */ = 4;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

