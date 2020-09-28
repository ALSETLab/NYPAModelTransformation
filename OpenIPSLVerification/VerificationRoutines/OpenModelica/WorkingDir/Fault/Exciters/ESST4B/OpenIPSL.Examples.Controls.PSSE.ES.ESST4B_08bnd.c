/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 522
type: SIMPLE_ASSIGN
$START.eSST4B.XADIFD = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->modelData->realVarsData[68].attribute /* eSST4B.XADIFD variable */.start = data->simulationInfo->realParameter[256] /* gENROU.efd0 PARAM */;
    data->localData[0]->realVars[68] /* eSST4B.XADIFD variable */ = data->modelData->realVarsData[68].attribute /* eSST4B.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSST4B.XADIFD */.name, (modelica_real) data->localData[0]->realVars[68] /* eSST4B.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
$START.eSST4B.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */ = data->modelData->realVarsData[56].attribute /* eSST4B.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSST4B.ECOMP */.name, (modelica_real) data->localData[0]->realVars[56] /* eSST4B.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
$START.gENROU.PSIppq = gENROU.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->modelData->realVarsData[96].attribute /* gENROU.PSIppq variable */.start = data->simulationInfo->realParameter[219] /* gENROU.PSIppq0 PARAM */;
    data->localData[0]->realVars[96] /* gENROU.PSIppq variable */ = data->modelData->realVarsData[96].attribute /* gENROU.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROU.PSIppq */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROU.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
$START.gENROU.PSIppd = gENROU.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->modelData->realVarsData[95].attribute /* gENROU.PSIppd variable */.start = data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */;
    data->localData[0]->realVars[95] /* gENROU.PSIppd variable */ = data->modelData->realVarsData[95].attribute /* gENROU.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROU.PSIppd */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROU.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$START.gENROU.PSIq = gENROU.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->modelData->realVarsData[97].attribute /* gENROU.PSIq variable */.start = data->simulationInfo->realParameter[220] /* gENROU.PSIq0 PARAM */;
    data->localData[0]->realVars[97] /* gENROU.PSIq variable */ = data->modelData->realVarsData[97].attribute /* gENROU.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROU.PSIq */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROU.PSIq variable */);
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
$START.gENROU.PSId = gENROU.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->modelData->realVarsData[93].attribute /* gENROU.PSId variable */.start = data->simulationInfo->realParameter[211] /* gENROU.PSId0 PARAM */;
    data->localData[0]->realVars[93] /* gENROU.PSId variable */ = data->modelData->realVarsData[93].attribute /* gENROU.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENROU.PSId */.name, (modelica_real) data->localData[0]->realVars[93] /* gENROU.PSId variable */);
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
$START.gENROU.PSIkq = gENROU.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->modelData->realVarsData[9].attribute /* gENROU.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[213] /* gENROU.PSIkq0 PARAM */;
    data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROU.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROU.PSIkq */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROU.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
$START.gENROU.PSIkd = gENROU.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->modelData->realVarsData[8].attribute /* gENROU.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[212] /* gENROU.PSIkd0 PARAM */;
    data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROU.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROU.PSIkd */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROU.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$START.gENROU.Epq = gENROU.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->modelData->realVarsData[7].attribute /* gENROU.Epq STATE(1) */.start = data->simulationInfo->realParameter[192] /* gENROU.Epq0 PARAM */;
    data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROU.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROU.Epq */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROU.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
$START.gENROU.Epd = gENROU.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->modelData->realVarsData[6].attribute /* gENROU.Epd STATE(1) */.start = data->simulationInfo->realParameter[191] /* gENROU.Epd0 PARAM */;
    data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENROU.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENROU.Epd */.name, (modelica_real) data->localData[0]->realVars[6] /* gENROU.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$START.gENROU.uq = gENROU.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->modelData->realVarsData[106].attribute /* gENROU.uq variable */.start = data->simulationInfo->realParameter[266] /* gENROU.uq0 PARAM */;
    data->localData[0]->realVars[106] /* gENROU.uq variable */ = data->modelData->realVarsData[106].attribute /* gENROU.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROU.uq */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROU.uq variable */);
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
$START.gENROU.ud = gENROU.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->modelData->realVarsData[105].attribute /* gENROU.ud variable */.start = data->simulationInfo->realParameter[265] /* gENROU.ud0 PARAM */;
    data->localData[0]->realVars[105] /* gENROU.ud variable */ = data->modelData->realVarsData[105].attribute /* gENROU.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* gENROU.ud */.name, (modelica_real) data->localData[0]->realVars[105] /* gENROU.ud variable */);
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
$START.gENROU.iq = gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->modelData->realVarsData[104].attribute /* gENROU.iq variable */.start = data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */;
    data->localData[0]->realVars[104] /* gENROU.iq variable */ = data->modelData->realVarsData[104].attribute /* gENROU.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROU.iq */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROU.iq variable */);
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
$START.gENROU.id = gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->modelData->realVarsData[103].attribute /* gENROU.id variable */.start = data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */;
    data->localData[0]->realVars[103] /* gENROU.id variable */ = data->modelData->realVarsData[103].attribute /* gENROU.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROU.id */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROU.id variable */);
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
$START.gENROU.Te = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->modelData->realVarsData[99].attribute /* gENROU.Te variable */.start = data->simulationInfo->realParameter[263] /* gENROU.pm0 PARAM */;
    data->localData[0]->realVars[99] /* gENROU.Te variable */ = data->modelData->realVarsData[99].attribute /* gENROU.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENROU.Te */.name, (modelica_real) data->localData[0]->realVars[99] /* gENROU.Te variable */);
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
$START.gENROU.Q = gENROU.Q_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->modelData->realVarsData[98].attribute /* gENROU.Q variable */.start = DIVISION(data->simulationInfo->realParameter[222] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[228] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[98] /* gENROU.Q variable */ = data->modelData->realVarsData[98].attribute /* gENROU.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROU.Q */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROU.Q variable */);
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
$START.gENROU.P = gENROU.P_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->modelData->realVarsData[91].attribute /* gENROU.P variable */.start = DIVISION(data->simulationInfo->realParameter[221] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[228] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[91] /* gENROU.P variable */ = data->modelData->realVarsData[91].attribute /* gENROU.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENROU.P */.name, (modelica_real) data->localData[0]->realVars[91] /* gENROU.P variable */);
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
$START.gENROU.anglei = atan2(gENROU.ii0, gENROU.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->modelData->realVarsData[101].attribute /* gENROU.anglei variable */.start = atan2(data->simulationInfo->realParameter[259] /* gENROU.ii0 PARAM */, data->simulationInfo->realParameter[261] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[101] /* gENROU.anglei variable */ = data->modelData->realVarsData[101].attribute /* gENROU.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROU.anglei */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROU.anglei variable */);
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
$START.gENROU.I = sqrt(gENROU.ir0 ^ 2.0 + gENROU.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[261] /* gENROU.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[259] /* gENROU.ii0 PARAM */;
  data->modelData->realVarsData[90].attribute /* gENROU.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[90] /* gENROU.I variable */ = data->modelData->realVarsData[90].attribute /* gENROU.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROU.I */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROU.I variable */);
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
$START.gENROU.anglev = gENROU.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->modelData->realVarsData[102].attribute /* gENROU.anglev variable */.start = data->simulationInfo->realParameter[252] /* gENROU.angle_0rad PARAM */;
    data->localData[0]->realVars[102] /* gENROU.anglev variable */ = data->modelData->realVarsData[102].attribute /* gENROU.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROU.anglev */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROU.anglev variable */);
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
$START.gENROU.delta = gENROU.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->modelData->realVarsData[10].attribute /* gENROU.delta STATE(1) */.start = data->simulationInfo->realParameter[254] /* gENROU.delta0 PARAM */;
    data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROU.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROU.delta */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROU.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
$START.gENROU.PELEC = gENROU.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->modelData->realVarsData[92].attribute /* gENROU.PELEC variable */.start = data->simulationInfo->realParameter[262] /* gENROU.p0 PARAM */;
    data->localData[0]->realVars[92] /* gENROU.PELEC variable */ = data->modelData->realVarsData[92].attribute /* gENROU.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENROU.PELEC */.name, (modelica_real) data->localData[0]->realVars[92] /* gENROU.PELEC variable */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[31] /* FAULT.angle variable */ = data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[31] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[30] /* FAULT.V variable */ = data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[30] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[39] /* GEN2.angle variable */ = data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[39] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[180] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[38] /* GEN2.V variable */ = data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[38] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[43] /* LOAD.angle variable */ = data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[43] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[35] /* GEN1.angle variable */ = data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[35] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.v variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[48] /* constantLoad.angle variable */ = data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[51] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[52] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->modelData->realVarsData[80].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[165] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[167] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[80] /* gENCLS.Q variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->modelData->realVarsData[79].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[164] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[167] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[79] /* gENCLS.P variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->modelData->realVarsData[84].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[176] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->modelData->realVarsData[83].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[174] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->modelData->realVarsData[83].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[83] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->modelData->realVarsData[89].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[184] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->modelData->realVarsData[88].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[181] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.vd variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[182] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[82].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[171] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[82] /* gENCLS.anglev variable */ = data->modelData->realVarsData[82].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[82] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[86].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[175] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->modelData->realVarsData[87].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[177] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->modelData->realVarsData[139].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[139] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->modelData->realVarsData[140].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[140] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->modelData->realVarsData[127].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[127] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->modelData->realVarsData[128].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[128] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->modelData->realVarsData[129].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[129] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->modelData->realVarsData[130].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[130] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROU.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[259] /* gENROU.ii0 PARAM */);
    data->localData[0]->realVars[115] /* pwLine.is.im variable */ = data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[115] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROU.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[261] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[116] /* pwLine.is.re variable */ = data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROU.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */;
    data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[117] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROU.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */;
    data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[34] /* GEN1.V variable */ = data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[34] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->modelData->realVarsData[81].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[180] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[81] /* gENCLS.V variable */ = data->modelData->realVarsData[81].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[81] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->modelData->realVarsData[42].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[42] /* LOAD.V variable */ = data->modelData->realVarsData[42].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[42] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_577(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 580
type: SIMPLE_ASSIGN
gENROU.abs_PSIpp0 = (gENROU.PSIpp0.re ^ 2.0 + gENROU.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[215] /* gENROU.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[214] /* gENROU.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROU.PSIpp0.re ^ 2.0 + gENROU.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[247] /* gENROU.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
gENROU.dsat = OpenIPSL.NonElectrical.Functions.SE(gENROU.abs_PSIpp0, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[255] /* gENROU.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[247] /* gENROU.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[226] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[227] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
gENROU.PSIppd0 = gENROU.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */ = data->simulationInfo->realParameter[217] /* gENROU.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
gENROU.id0 = gENROU.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */ = data->simulationInfo->realParameter[194] /* gENROU.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
gENROU.efd0 = gENROU.PSIppd0 * (1.0 + gENROU.dsat) + gENROU.id0 * (gENROU.Xd - gENROU.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[256] /* gENROU.efd0 PARAM */ = (data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[255] /* gENROU.dsat PARAM */) + (data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */) * (data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[239] /* gENROU.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
gENROU.EFD0 = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[190] /* gENROU.EFD0 PARAM */ = data->simulationInfo->realParameter[256] /* gENROU.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
eSST4B.VA.T = eSST4B.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */ = data->simulationInfo->realParameter[103] /* eSST4B.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
eSST4B.VA.const.y = eSST4B.VA.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->realParameter[113] /* eSST4B.VA.const.y PARAM */ = data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.T = eSST4B.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[104] /* eSST4B.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.const.y = eSST4B.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[108] /* eSST4B.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
eSST4B.add3_1.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[148] /* eSST4B.add3_1.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
eSST4B.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->simulationInfo->realParameter[123] /* eSST4B.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
eSST4B.add3_1.u3 = const5.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->simulationInfo->realParameter[149] /* eSST4B.add3_1.u3 PARAM */ = data->simulationInfo->realParameter[38] /* const5.k PARAM */;
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
eSST4B.VUEL = const5.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->simulationInfo->realParameter[129] /* eSST4B.VUEL PARAM */ = data->simulationInfo->realParameter[38] /* const5.k PARAM */;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
const5.y = const5.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[39] /* const5.y PARAM */ = data->simulationInfo->realParameter[38] /* const5.k PARAM */;
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
gENROU.p0 = gENROU.P_0 / gENROU.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[262] /* gENROU.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[221] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[208] /* gENROU.M_b PARAM */,"gENROU.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
gENROU.iq0 = gENROU.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */ = data->simulationInfo->realParameter[195] /* gENROU.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
gENROU.pm0 = gENROU.p0 + gENROU.R_a * (gENROU.iq0 ^ 2.0 + gENROU.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */;
  data->simulationInfo->realParameter[263] /* gENROU.pm0 PARAM */ = data->simulationInfo->realParameter[262] /* gENROU.p0 PARAM */ + (data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
gENROU.PMECH = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->simulationInfo->realParameter[209] /* gENROU.PMECH PARAM */ = data->simulationInfo->realParameter[263] /* gENROU.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
gENROU.PMECH0 = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->simulationInfo->realParameter[210] /* gENROU.PMECH0 PARAM */ = data->simulationInfo->realParameter[263] /* gENROU.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.n2 = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->realParameter[151] /* eSST4B.lV_Gate.n2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
eSST4B.VOEL = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->realParameter[122] /* eSST4B.VOEL PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
const1.y = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[37] /* const1.y PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
eSST4B.THETAPrad = 0.0174532925199433 * eSST4B.THETAP
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[102] /* eSST4B.THETAPrad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[101] /* eSST4B.THETAP PARAM */);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.K_C = eSST4B.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[158] /* eSST4B.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[91] /* eSST4B.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
eSST4B.rectifierCommutationVoltageDrop.gain2.k = eSST4B.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[159] /* eSST4B.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[158] /* eSST4B.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
eSST4B.TransducerDelay.T_mod = if eSST4B.TransducerDelay.T < 1e-15 then 1000.0 else eSST4B.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[107] /* eSST4B.TransducerDelay.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[106] /* eSST4B.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
eSST4B.maxLimiter.uMax = eSST4B.V_BMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[156] /* eSST4B.maxLimiter.uMax PARAM */ = data->simulationInfo->realParameter[130] /* eSST4B.V_BMAX PARAM */;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
eSST4B.limiter1.uMin = eSST4B.V_MMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */ = data->simulationInfo->realParameter[132] /* eSST4B.V_MMIN PARAM */;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
eSST4B.limiter1.uMax = eSST4B.V_MMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[131] /* eSST4B.V_MMAX PARAM */;
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
eSST4B.Gain2.k = eSST4B.K_PM
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[88] /* eSST4B.Gain2.k PARAM */ = data->simulationInfo->realParameter[97] /* eSST4B.K_PM PARAM */;
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
eSST4B.VM1.outMin = eSST4B.V_MMIN / eSST4B.K_PM
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[120] /* eSST4B.VM1.outMin PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[132] /* eSST4B.V_MMIN PARAM */,data->simulationInfo->realParameter[97] /* eSST4B.K_PM PARAM */,"eSST4B.K_PM",equationIndexes);
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
eSST4B.VM1.outMax = eSST4B.V_MMAX / eSST4B.K_PM
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[119] /* eSST4B.VM1.outMax PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[131] /* eSST4B.V_MMAX PARAM */,data->simulationInfo->realParameter[97] /* eSST4B.K_PM PARAM */,"eSST4B.K_PM",equationIndexes);
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
eSST4B.VM1.k = eSST4B.K_IM
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[118] /* eSST4B.VM1.k PARAM */ = data->simulationInfo->realParameter[94] /* eSST4B.K_IM PARAM */;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
eSST4B.gain.k = eSST4B.K_G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[150] /* eSST4B.gain.k PARAM */ = data->simulationInfo->realParameter[92] /* eSST4B.K_G PARAM */;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
eSST4B.limiter.uMin = eSST4B.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[153] /* eSST4B.limiter.uMin PARAM */ = data->simulationInfo->realParameter[135] /* eSST4B.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
eSST4B.limiter.uMax = eSST4B.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[152] /* eSST4B.limiter.uMax PARAM */ = data->simulationInfo->realParameter[134] /* eSST4B.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
eSST4B.Gain1.k = eSST4B.K_PR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[87] /* eSST4B.Gain1.k PARAM */ = data->simulationInfo->realParameter[98] /* eSST4B.K_PR PARAM */;
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
eSST4B.VR1.outMin = eSST4B.V_RMIN / eSST4B.K_PR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[127] /* eSST4B.VR1.outMin PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[135] /* eSST4B.V_RMIN PARAM */,data->simulationInfo->realParameter[98] /* eSST4B.K_PR PARAM */,"eSST4B.K_PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
eSST4B.VR1.outMax = eSST4B.V_RMAX / eSST4B.K_PR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[126] /* eSST4B.VR1.outMax PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[134] /* eSST4B.V_RMAX PARAM */,data->simulationInfo->realParameter[98] /* eSST4B.K_PR PARAM */,"eSST4B.K_PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
eSST4B.VR1.k = eSST4B.K_IR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->simulationInfo->realParameter[125] /* eSST4B.VR1.k PARAM */ = data->simulationInfo->realParameter[95] /* eSST4B.K_IR PARAM */;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
eSST4B.VA.T_mod = if eSST4B.VA.T < 1e-15 then 1000.0 else eSST4B.VA.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */,1e-15);
  data->simulationInfo->realParameter[112] /* eSST4B.VA.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[111] /* eSST4B.VA.T PARAM */);
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
gENROU.K4q = (gENROU.Xpq - gENROU.Xppq) / (gENROU.Xpq - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[207] /* gENROU.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */,data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xpq - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
gENROU.K3q = (gENROU.Xppq - gENROU.Xl) / (gENROU.Xpq - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[205] /* gENROU.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xpq - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
gENROU.K4d = (gENROU.Xpd - gENROU.Xppd) / (gENROU.Xpd - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[206] /* gENROU.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */,data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xpd - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
gENROU.K3d = (gENROU.Xppd - gENROU.Xl) / (gENROU.Xpd - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[204] /* gENROU.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xpd - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
gENROU.K2q = (gENROU.Xpq - gENROU.Xl) * (gENROU.Xppq - gENROU.Xl) / (gENROU.Xpq - gENROU.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[203] /* gENROU.K2q PARAM */ = (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */,"gENROU.Xpq - gENROU.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
gENROU.K1q = (gENROU.Xpq - gENROU.Xppq) * (gENROU.Xq - gENROU.Xpq) / (gENROU.Xpq - gENROU.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */;
  data->simulationInfo->realParameter[201] /* gENROU.K1q PARAM */ = (data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */,(tmp7 * tmp7),"(gENROU.Xpq - gENROU.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
gENROU.K2d = (gENROU.Xpd - gENROU.Xl) * (gENROU.Xppd - gENROU.Xl) / (gENROU.Xpd - gENROU.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[202] /* gENROU.K2d PARAM */ = (data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */,"gENROU.Xpd - gENROU.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
gENROU.K1d = (gENROU.Xpd - gENROU.Xppd) * (gENROU.Xd - gENROU.Xpd) / (gENROU.Xpd - gENROU.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  modelica_real tmp8;
  tmp8 = data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */;
  data->simulationInfo->realParameter[200] /* gENROU.K1d PARAM */ = (data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */,(tmp8 * tmp8),"(gENROU.Xpd - gENROU.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
gENROU.PSIppq0 = gENROU.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[219] /* gENROU.PSIppq0 PARAM */ = data->simulationInfo->realParameter[216] /* gENROU.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
gENROU.PSIq0 = (-gENROU.PSIppq0) - gENROU.Xppq * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[220] /* gENROU.PSIq0 PARAM */ = (-data->simulationInfo->realParameter[219] /* gENROU.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */) * (data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
gENROU.PSId0 = gENROU.PSIppd0 - gENROU.Xppd * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[211] /* gENROU.PSId0 PARAM */ = data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */) * (data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
gENROU.PSIkq0 = ((gENROU.Xpq - gENROU.Xl) * gENROU.K3q * gENROU.iq0 - gENROU.PSIppq0) / (gENROU.K3q + gENROU.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[213] /* gENROU.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * ((data->simulationInfo->realParameter[205] /* gENROU.K3q PARAM */) * (data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */)) - data->simulationInfo->realParameter[219] /* gENROU.PSIppq0 PARAM */,data->simulationInfo->realParameter[205] /* gENROU.K3q PARAM */ + data->simulationInfo->realParameter[207] /* gENROU.K4q PARAM */,"gENROU.K3q + gENROU.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
gENROU.PSIkd0 = (gENROU.PSIppd0 + (gENROU.Xl - gENROU.Xpd) * gENROU.K3d * gENROU.id0) / (gENROU.K3d + gENROU.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[212] /* gENROU.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */) * ((data->simulationInfo->realParameter[204] /* gENROU.K3d PARAM */) * (data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */)),data->simulationInfo->realParameter[204] /* gENROU.K3d PARAM */ + data->simulationInfo->realParameter[206] /* gENROU.K4d PARAM */,"gENROU.K3d + gENROU.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
gENROU.Epd0 = gENROU.PSIkq0 + (gENROU.Xl - gENROU.Xpq) * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[191] /* gENROU.Epd0 PARAM */ = data->simulationInfo->realParameter[213] /* gENROU.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[242] /* gENROU.Xpq PARAM */) * (data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
gENROU.Epq0 = gENROU.PSIkd0 + (gENROU.Xpd - gENROU.Xl) * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[192] /* gENROU.Epq0 PARAM */ = data->simulationInfo->realParameter[212] /* gENROU.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[238] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */) * (data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
gENROU.uq0 = gENROU.PSIppd0 + (-gENROU.Xppd) * gENROU.id0 - gENROU.R_a * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[266] /* gENROU.uq0 PARAM */ = data->simulationInfo->realParameter[218] /* gENROU.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */)) * (data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
gENROU.ud0 = gENROU.Xppq * gENROU.iq0 + (-gENROU.PSIppq0) - gENROU.R_a * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[265] /* gENROU.ud0 PARAM */ = (data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */) * (data->simulationInfo->realParameter[260] /* gENROU.iq0 PARAM */) + (-data->simulationInfo->realParameter[219] /* gENROU.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (data->simulationInfo->realParameter[258] /* gENROU.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
gENROU.ang_PSIpp0 = Modelica.Math.atan3(gENROU.PSIpp0.im, gENROU.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[249] /* gENROU.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[214] /* gENROU.PSIpp0.im PARAM */, data->simulationInfo->realParameter[215] /* gENROU.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
gENROU.ang_It = Modelica.Math.atan3(gENROU.It.im, gENROU.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[248] /* gENROU.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[198] /* gENROU.It.im PARAM */, data->simulationInfo->realParameter[199] /* gENROU.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
gENROU.ang_PSIpp0andIt = gENROU.ang_PSIpp0 - gENROU.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[250] /* gENROU.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[249] /* gENROU.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[248] /* gENROU.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
gENROU.a = gENROU.abs_PSIpp0 * (1.0 + gENROU.dsat * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[246] /* gENROU.a PARAM */ = (data->simulationInfo->realParameter[247] /* gENROU.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[255] /* gENROU.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[236] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[237] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
gENROU.b = (gENROU.It.re ^ 2.0 + gENROU.It.im ^ 2.0) ^ 0.5 * (gENROU.Xpp - gENROU.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  tmp9 = data->simulationInfo->realParameter[199] /* gENROU.It.re PARAM */;
  tmp10 = data->simulationInfo->realParameter[198] /* gENROU.It.im PARAM */;
  tmp11 = (tmp9 * tmp9) + (tmp10 * tmp10);
  if(!(tmp11 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROU.It.re ^ 2.0 + gENROU.It.im ^ 2.0) was %g should be >= 0", tmp11);
  }
  data->simulationInfo->realParameter[253] /* gENROU.b PARAM */ = (sqrt(tmp11)) * (data->simulationInfo->realParameter[239] /* gENROU.Xpp PARAM */ - data->simulationInfo->realParameter[243] /* gENROU.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
gENROU.delta0 = atan(gENROU.b * cos(gENROU.ang_PSIpp0andIt) / (gENROU.b * sin(gENROU.ang_PSIpp0andIt) - gENROU.a)) + gENROU.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[254] /* gENROU.delta0 PARAM */ = atan((data->simulationInfo->realParameter[253] /* gENROU.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[250] /* gENROU.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[253] /* gENROU.b PARAM */) * (sin(data->simulationInfo->realParameter[250] /* gENROU.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[246] /* gENROU.a PARAM */,"gENROU.b * sin(gENROU.ang_PSIpp0andIt) - gENROU.a",equationIndexes))) + data->simulationInfo->realParameter[249] /* gENROU.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
gENROU.q0 = gENROU.Q_0 / gENROU.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[264] /* gENROU.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[222] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[208] /* gENROU.M_b PARAM */,"gENROU.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
gENROU.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->realParameter[228] /* gENROU.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
gENROU.CoB = gENROU.M_b / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[208] /* gENROU.M_b PARAM */,data->simulationInfo->realParameter[228] /* gENROU.S_b PARAM */,"gENROU.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
gENROU.angle_0rad = 0.0174532925199433 * gENROU.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[252] /* gENROU.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[251] /* gENROU.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
gENROU.vr0 = gENROU.v_0 * cos(gENROU.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */ = (data->simulationInfo->realParameter[267] /* gENROU.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[252] /* gENROU.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
gENROU.vi0 = gENROU.v_0 * sin(gENROU.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */ = (data->simulationInfo->realParameter[267] /* gENROU.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[252] /* gENROU.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
gENROU.ii0 = gENROU.CoB * (gENROU.q0 * gENROU.vr0 - gENROU.p0 * gENROU.vi0) / (gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */;
  tmp13 = data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */;
  data->simulationInfo->realParameter[259] /* gENROU.ii0 PARAM */ = (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[264] /* gENROU.q0 PARAM */) * (data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */) - ((data->simulationInfo->realParameter[262] /* gENROU.p0 PARAM */) * (data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */)),(tmp12 * tmp12) + (tmp13 * tmp13),"gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
gENROU.ir0 = (-gENROU.CoB) * (gENROU.p0 * gENROU.vr0 + gENROU.q0 * gENROU.vi0) / (gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */;
  tmp15 = data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */;
  data->simulationInfo->realParameter[261] /* gENROU.ir0 PARAM */ = ((-data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[262] /* gENROU.p0 PARAM */) * (data->simulationInfo->realParameter[269] /* gENROU.vr0 PARAM */) + (data->simulationInfo->realParameter[264] /* gENROU.q0 PARAM */) * (data->simulationInfo->realParameter[268] /* gENROU.vi0 PARAM */),(tmp14 * tmp14) + (tmp15 * tmp15),"gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
gENROU.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->realParameter[257] /* gENROU.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
gENROU.w_b = 6.283185307179586 * gENROU.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[270] /* gENROU.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[257] /* gENROU.fn PARAM */);
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  tmp16 = Less(fabs(data->simulationInfo->realParameter[271] /* pwFault.R PARAM */),1e-15);
  tmp17 = Less(fabs(data->simulationInfo->realParameter[272] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[73] /* pwFault.ground PARAM */ = (tmp16 && tmp17);
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  modelica_real tmp18;
  tmp18 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[52] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[56] /* constantLoad.S_y.re PARAM */) * ((tmp18 * tmp18)) + data->simulationInfo->realParameter[54] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  modelica_real tmp19;
  tmp19 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[51] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[55] /* constantLoad.S_y.im PARAM */) * ((tmp19 * tmp19)) + data->simulationInfo->realParameter[53] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[63] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  modelica_real tmp21;
  modelica_real tmp22;
  tmp21 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp22 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */)),(tmp21 * tmp21) + (tmp22 * tmp22),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  modelica_real tmp23;
  modelica_real tmp24;
  tmp23 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp24 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */),(tmp23 * tmp23) + (tmp24 * tmp24),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->realParameter[72] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->simulationInfo->realParameter[171] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[170] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[180] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[171] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[180] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[171] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->simulationInfo->realParameter[178] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[164] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[163] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->simulationInfo->realParameter[179] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[165] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[163] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[177] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[178] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[179] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */),(tmp25 * tmp25) + (tmp26 * tmp26),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[175] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[178] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[179] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */)),(tmp27 * tmp27) + (tmp28 * tmp28),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[175] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[177] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[177] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[175] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[184] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->simulationInfo->realParameter[174] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[177] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[175] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[176] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[177] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[175] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[182] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[184] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[176] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[174] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[181] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[185] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[183] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[172] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->simulationInfo->realParameter[167] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[163] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[167] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->simulationInfo->realParameter[173] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[312] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[310] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[308] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[309] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->realParameter[311] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[301] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[299] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[297] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[298] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[300] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[290] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[288] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[286] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[287] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[289] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[279] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[277] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[275] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[276] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->realParameter[278] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 773
type: ALGORITHM

  assert(eSST4B.VM1.initType >= Modelica.Blocks.Types.Init.NoInit and eSST4B.VM1.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST4B.VM1.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST4B.VM1.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,152,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST4B.VM1.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSST4B.VM1.initType PARAM */,1);
    tmp30 = LessEq(data->simulationInfo->integerParameter[1] /* eSST4B.VM1.initType PARAM */,4);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSST4B.VM1.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.VM1.initType >= Modelica.Blocks.Types.Init.NoInit and eSST4B.VM1.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 774
type: ALGORITHM

  assert(eSST4B.VR1.initType >= Modelica.Blocks.Types.Init.NoInit and eSST4B.VR1.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST4B.VR1.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST4B.VR1.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,152,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST4B.VR1.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp34 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSST4B.VR1.initType PARAM */,1);
    tmp35 = LessEq(data->simulationInfo->integerParameter[2] /* eSST4B.VR1.initType PARAM */,4);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSST4B.VR1.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST4B.VR1.initType >= Modelica.Blocks.Types.Init.NoInit and eSST4B.VR1.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_580(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_585(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_587(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_588(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_589(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_590(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_591(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_592(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_593(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_594(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_596(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_600(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_601(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_602(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_603(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_604(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_605(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_606(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_609(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_610(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_611(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_612(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_615(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_619(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_620(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_624(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_625(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_626(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_627(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_630(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_631(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_636(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_638(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_642(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_643(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_644(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_646(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_647(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_652(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_656(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_657(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_660(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_664(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_665(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_676(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_680(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_683(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_684(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_685(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_686(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_688(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_689(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_690(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_691(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_693(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_696(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_699(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_700(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_701(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_702(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_703(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_719(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_722(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_723(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_724(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_725(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_726(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_727(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_728(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_731(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_732(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_734(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_735(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_736(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_737(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_741(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_746(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_748(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_749(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_752(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_759(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_760(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_761(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_773(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_774(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->localData[0]->realVars[85] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[85].time_unvarying = 1;
  data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[44].time_unvarying = 1;
  data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[45].time_unvarying = 1;
  data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[46].time_unvarying = 1;
  data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[47].time_unvarying = 1;
  data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[48].time_unvarying = 1;
  data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[49].time_unvarying = 1;
  data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[60].time_unvarying = 1;
  data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[67].time_unvarying = 1;
  data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[68].time_unvarying = 1;
  data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[81].time_unvarying = 1;
  data->simulationInfo->realParameter[99] /* eSST4B.K_P_comp.im PARAM */ = 0.0;
  data->modelData->realParameterData[99].time_unvarying = 1;
  data->simulationInfo->realParameter[100] /* eSST4B.K_P_comp.re PARAM */ = 6.73;
  data->modelData->realParameterData[100].time_unvarying = 1;
  data->simulationInfo->realParameter[162] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[162].time_unvarying = 1;
  data->simulationInfo->realParameter[188] /* gENROU.DQ_dq.im PARAM */ = -0.4824562617299565;
  data->modelData->realParameterData[188].time_unvarying = 1;
  data->simulationInfo->realParameter[189] /* gENROU.DQ_dq.re PARAM */ = 0.8759200622873959;
  data->modelData->realParameterData[189].time_unvarying = 1;
  data->simulationInfo->realParameter[194] /* gENROU.I_dq.im PARAM */ = 0.2169491553618439;
  data->modelData->realParameterData[194].time_unvarying = 1;
  data->simulationInfo->realParameter[195] /* gENROU.I_dq.re PARAM */ = 0.3403918503789823;
  data->modelData->realParameterData[195].time_unvarying = 1;
  data->simulationInfo->realParameter[196] /* gENROU.Is.im PARAM */ = -5.013342920101253;
  data->modelData->realParameterData[196].time_unvarying = 1;
  data->simulationInfo->realParameter[197] /* gENROU.Is.re PARAM */ = 0.7556344673040269;
  data->modelData->realParameterData[197].time_unvarying = 1;
  data->simulationInfo->realParameter[198] /* gENROU.It.im PARAM */ = -0.02580593802055783;
  data->modelData->realParameterData[198].time_unvarying = 1;
  data->simulationInfo->realParameter[199] /* gENROU.It.re PARAM */ = 0.402824529267427;
  data->modelData->realParameterData[199].time_unvarying = 1;
  data->simulationInfo->realParameter[214] /* gENROU.PSIpp0.im PARAM */ = 0.1511268934608054;
  data->modelData->realParameterData[214].time_unvarying = 1;
  data->simulationInfo->realParameter[215] /* gENROU.PSIpp0.re PARAM */ = 1.00266858402025;
  data->modelData->realParameterData[215].time_unvarying = 1;
  data->simulationInfo->realParameter[216] /* gENROU.PSIpp0_dq.im PARAM */ = -0.3513686588669895;
  data->modelData->realParameterData[216].time_unvarying = 1;
  data->simulationInfo->realParameter[217] /* gENROU.PSIpp0_dq.re PARAM */ = 0.9511696446345945;
  data->modelData->realParameterData[217].time_unvarying = 1;
  data->simulationInfo->realParameter[224] /* gENROU.S.im PARAM */ = 0.0541657134890556;
  data->modelData->realParameterData[224].time_unvarying = 1;
  data->simulationInfo->realParameter[225] /* gENROU.S.re PARAM */ = 0.399999529123306;
  data->modelData->realParameterData[225].time_unvarying = 1;
  data->simulationInfo->realParameter[233] /* gENROU.VT.im PARAM */ = 0.07056198760732002;
  data->modelData->realParameterData[233].time_unvarying = 1;
  data->simulationInfo->realParameter[234] /* gENROU.VT.re PARAM */ = 0.9975073964161391;
  data->modelData->realParameterData[234].time_unvarying = 1;
  data->simulationInfo->realParameter[244] /* gENROU.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[244].time_unvarying = 1;
  data->simulationInfo->realParameter[245] /* gENROU.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[245].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eSST4B.VM1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eSST4B.VM1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eSST4B.VR1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* eSST4B.VR1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* eSST4B.limiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->booleanParameter[50] /* eSST4B.limiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  data->simulationInfo->booleanParameter[51] /* eSST4B.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  data->simulationInfo->booleanParameter[52] /* eSST4B.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  data->simulationInfo->booleanParameter[53] /* eSST4B.maxLimiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[53].time_unvarying = 1;
  data->simulationInfo->booleanParameter[54] /* eSST4B.maxLimiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eSST4B.VM1.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eSST4B.VR1.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

