/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 525
type: SIMPLE_ASSIGN
$START.eSAC1A.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD variable */.start = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* eSAC1A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$START.eSAC1A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->modelData->realVarsData[58].attribute /* eSAC1A.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */ = data->modelData->realVarsData[58].attribute /* eSAC1A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* eSAC1A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[58] /* eSAC1A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
$START.eSAC1A.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->modelData->realVarsData[59].attribute /* eSAC1A.EFD variable */.start = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = data->modelData->realVarsData[59].attribute /* eSAC1A.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* eSAC1A.EFD */.name, (modelica_real) data->localData[0]->realVars[59] /* eSAC1A.EFD variable */);
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->modelData->realVarsData[96].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->modelData->realVarsData[95].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[238] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[95].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->modelData->realVarsData[97].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[240] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = data->modelData->realVarsData[97].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->modelData->realVarsData[93].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[231] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->modelData->realVarsData[93].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[93] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[233] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[232] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[212] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[211] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->modelData->realVarsData[106].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[286] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[106] /* gENROE.uq variable */ = data->modelData->realVarsData[106].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->modelData->realVarsData[105].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[285] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[105] /* gENROE.ud variable */ = data->modelData->realVarsData[105].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[105] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->modelData->realVarsData[104].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[104] /* gENROE.iq variable */ = data->modelData->realVarsData[104].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->modelData->realVarsData[103].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[103] /* gENROE.id variable */ = data->modelData->realVarsData[103].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->modelData->realVarsData[99].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[283] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[99] /* gENROE.Te variable */ = data->modelData->realVarsData[99].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[99] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->modelData->realVarsData[98].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[242] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[98] /* gENROE.Q variable */ = data->modelData->realVarsData[98].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->modelData->realVarsData[91].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[241] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[91] /* gENROE.P variable */ = data->modelData->realVarsData[91].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[91] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->modelData->realVarsData[101].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[101] /* gENROE.anglei variable */ = data->modelData->realVarsData[101].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[90].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[90] /* gENROE.I variable */ = data->modelData->realVarsData[90].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->modelData->realVarsData[102].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[102] /* gENROE.anglev variable */ = data->modelData->realVarsData[102].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[274] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->modelData->realVarsData[92].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[92] /* gENROE.PELEC variable */ = data->modelData->realVarsData[92].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[92] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->modelData->realVarsData[80].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[185] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[80] /* gENCLS.Q variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->modelData->realVarsData[79].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[184] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[79] /* gENCLS.P variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->modelData->realVarsData[84].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[84] /* gENCLS.iq variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[83].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[83] /* gENCLS.id variable */ = data->modelData->realVarsData[83].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[83] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->modelData->realVarsData[89].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[204] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[88].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[201] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.vd variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[202] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->modelData->realVarsData[82].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[82] /* gENCLS.anglev variable */ = data->modelData->realVarsData[82].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[82] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->modelData->realVarsData[86].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->modelData->realVarsData[87].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->modelData->realVarsData[139].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[139] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->modelData->realVarsData[140].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[140] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->modelData->realVarsData[127].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[127] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->modelData->realVarsData[128].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[128] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->modelData->realVarsData[129].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[129] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->modelData->realVarsData[130].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[130] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[115] /* pwLine.is.im variable */ = data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[115] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[116] /* pwLine.is.re variable */ = data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[117] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->modelData->realVarsData[81].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[81] /* gENCLS.V variable */ = data->modelData->realVarsData[81].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[81] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_580(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_581(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 582
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[259] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[235] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[234] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[267] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[275] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[267] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[238] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[237] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[214] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xd - gENROE.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[238] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[275] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[259] /* gENROE.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[210] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[276] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T1 = eSAC1A.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[99] /* eSAC1A.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.par1.y = eSAC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->simulationInfo->realParameter[139] /* eSAC1A.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T2 = eSAC1A.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[98] /* eSAC1A.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.par2.y = eSAC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->simulationInfo->realParameter[140] /* eSAC1A.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.T = eSAC1A.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */ = data->simulationInfo->realParameter[102] /* eSAC1A.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.const.y = eSAC1A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[146] /* eSAC1A.imSimpleLag.const.y PARAM */ = data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.T = eSAC1A.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[97] /* eSAC1A.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.const.y = eSAC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->simulationInfo->realParameter[176] /* eSAC1A.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[241] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[228] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[215] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[283] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->realParameter[229] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[283] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[230] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[283] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
eSAC1A.add3_1.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->realParameter[119] /* eSAC1A.add3_1.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
eSAC1A.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[106] /* eSAC1A.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
eSAC1A.hV_GATE.n2 = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[124] /* eSAC1A.hV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
eSAC1A.VUEL = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[108] /* eSAC1A.VUEL PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
const1.y = const1.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[37] /* const1.y PARAM */ = data->simulationInfo->realParameter[36] /* const1.k PARAM */;
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
eSAC1A.lV_GATE.n1 = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[148] /* eSAC1A.lV_GATE.n1 PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
eSAC1A.VOEL = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[105] /* eSAC1A.VOEL PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
const2.y = const2.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[39] /* const2.y PARAM */ = data->simulationInfo->realParameter[38] /* const2.k PARAM */;
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.K_C = eSAC1A.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[151] /* eSAC1A.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[91] /* eSAC1A.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.gain2.k = eSAC1A.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[151] /* eSAC1A.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.K_D = eSAC1A.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[156] /* eSAC1A.rotatingExciterWithDemagnetization.K_D PARAM */ = data->simulationInfo->realParameter[92] /* eSAC1A.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.T_E = eSAC1A.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.T_E PARAM */ = data->simulationInfo->realParameter[100] /* eSAC1A.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.k = 1.0 / eSAC1A.rotatingExciterWithDemagnetization.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->realParameter[165] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[163] /* eSAC1A.rotatingExciterWithDemagnetization.T_E PARAM */,"eSAC1A.rotatingExciterWithDemagnetization.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.E_2 = eSAC1A.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[154] /* eSAC1A.rotatingExciterWithDemagnetization.E_2 PARAM */ = data->simulationInfo->realParameter[87] /* eSAC1A.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.E2 = eSAC1A.rotatingExciterWithDemagnetization.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[170] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E2 PARAM */ = data->simulationInfo->realParameter[154] /* eSAC1A.rotatingExciterWithDemagnetization.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.E_1 = eSAC1A.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[153] /* eSAC1A.rotatingExciterWithDemagnetization.E_1 PARAM */ = data->simulationInfo->realParameter[86] /* eSAC1A.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.E1 = eSAC1A.rotatingExciterWithDemagnetization.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[169] /* eSAC1A.rotatingExciterWithDemagnetization.se1.E1 PARAM */ = data->simulationInfo->realParameter[153] /* eSAC1A.rotatingExciterWithDemagnetization.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 = eSAC1A.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[159] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */ = data->simulationInfo->realParameter[96] /* eSAC1A.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 = eSAC1A.rotatingExciterWithDemagnetization.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[172] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */ = data->simulationInfo->realParameter[159] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 = eSAC1A.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[158] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */ = data->simulationInfo->realParameter[95] /* eSAC1A.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 = eSAC1A.rotatingExciterWithDemagnetization.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[171] /* eSAC1A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */ = data->simulationInfo->realParameter[158] /* eSAC1A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 = eSAC1A.rotatingExciterWithDemagnetization.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[162] /* eSAC1A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */ = data->simulationInfo->realParameter[156] /* eSAC1A.rotatingExciterWithDemagnetization.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.K_E = eSAC1A.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[157] /* eSAC1A.rotatingExciterWithDemagnetization.K_E PARAM */ = data->simulationInfo->realParameter[93] /* eSAC1A.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.gain.k = eSAC1A.rotatingExciterWithDemagnetization.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.gain.k PARAM */ = data->simulationInfo->realParameter[157] /* eSAC1A.rotatingExciterWithDemagnetization.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
eSAC1A.derivative.T = eSAC1A.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */ = data->simulationInfo->realParameter[101] /* eSAC1A.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.T_mod = if eSAC1A.simpleLagLim.T < 1e-15 then 1000.0 else eSAC1A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[175] /* eSAC1A.simpleLagLim.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[174] /* eSAC1A.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.outMin = eSAC1A.V_AMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[178] /* eSAC1A.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[110] /* eSAC1A.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.outMax = eSAC1A.V_AMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[177] /* eSAC1A.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[109] /* eSAC1A.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
eSAC1A.simpleLagLim.K = eSAC1A.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[173] /* eSAC1A.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[90] /* eSAC1A.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
eSAC1A.limiter1.uMin = eSAC1A.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[150] /* eSAC1A.limiter1.uMin PARAM */ = data->simulationInfo->realParameter[113] /* eSAC1A.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
eSAC1A.limiter1.uMax = eSAC1A.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[149] /* eSAC1A.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[112] /* eSAC1A.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
eSAC1A.imSimpleLag.T_mod = if eSAC1A.imSimpleLag.T < 1e-15 then 1000.0 else eSAC1A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */,1e-15);
  data->simulationInfo->realParameter[145] /* eSAC1A.imSimpleLag.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[144] /* eSAC1A.imSimpleLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.T2_dummy = if abs(eSAC1A.imLeadLag.T1 - eSAC1A.imLeadLag.T2) < 1e-15 then 1000.0 else eSAC1A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[128] /* eSAC1A.imLeadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[127] /* eSAC1A.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.a[1] = eSAC1A.imLeadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[128] /* eSAC1A.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.a_end = if eSAC1A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSAC1A.imLeadLag.TF.a[1] ^ 2.0 + eSAC1A.imLeadLag.TF.a[2] ^ 2.0) then eSAC1A.imLeadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[131] /* eSAC1A.imLeadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[130] /* eSAC1A.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.b[1] = eSAC1A.imLeadLag.K * eSAC1A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[126] /* eSAC1A.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.bb[1] = eSAC1A.imLeadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[134] /* eSAC1A.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[132] /* eSAC1A.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.d = eSAC1A.imLeadLag.TF.bb[1] / eSAC1A.imLeadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[136] /* eSAC1A.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[134] /* eSAC1A.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[129] /* eSAC1A.imLeadLag.TF.a[1] PARAM */,"eSAC1A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.b[2] = eSAC1A.imLeadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[133] /* eSAC1A.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[125] /* eSAC1A.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
eSAC1A.imLeadLag.TF.bb[2] = eSAC1A.imLeadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[135] /* eSAC1A.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[133] /* eSAC1A.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[223] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[222] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[236] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[240] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[231] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[238] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[233] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[232] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[238] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->simulationInfo->realParameter[211] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[233] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[212] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[232] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->realParameter[286] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[238] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[285] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[280] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[239] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[278] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[269] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[234] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[235] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->realParameter[268] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[218] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[219] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[270] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[269] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[268] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[266] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[267] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[275] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[219] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[218] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[273] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[259] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->simulationInfo->realParameter[274] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[273] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[270] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[273] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[270] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[266] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[269] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[284] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[242] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[228] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[228] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[248] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[271] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[287] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[287] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[272] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[279] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[284] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[281] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[282] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[289] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[284] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[288] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->simulationInfo->realParameter[277] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[290] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[277] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[291] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[292] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[52] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[56] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[54] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[51] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[55] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[53] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[63] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[72] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[190] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[200] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[191] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[198] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[184] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->simulationInfo->realParameter[199] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[185] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[183] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[198] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[199] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[198] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[199] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->simulationInfo->realParameter[204] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[197] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[195] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->simulationInfo->realParameter[202] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[204] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[196] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[194] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->simulationInfo->realParameter[201] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[205] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[203] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[192] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[183] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[187] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->simulationInfo->realParameter[193] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[332] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[330] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[328] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[329] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->simulationInfo->realParameter[331] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[321] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[319] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[317] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[318] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->simulationInfo->realParameter[320] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[310] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[308] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[306] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[307] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->simulationInfo->realParameter[309] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[299] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[297] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[295] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[296] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->simulationInfo->realParameter[298] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 794
type: ALGORITHM

  assert(eSAC1A.rotatingExciterWithDemagnetization.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.rotatingExciterWithDemagnetization.sISO.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,188,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",103,5,105,64,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.rotatingExciterWithDemagnetization.sISO.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.rotatingExciterWithDemagnetization.sISO.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 795
type: ALGORITHM

  assert(eSAC1A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.derivative.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp38 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */,1);
    tmp39 = LessEq(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */,4);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 796
type: ALGORITHM

  assert(eSAC1A.derivative.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSAC1A.derivative.T, has value: " + String(eSAC1A.derivative.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,76,"Variable violating min constraint: 1e-60 <= eSAC1A.derivative.T, has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp43 = GreaterEq(data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */,1e-60);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[120] /* eSAC1A.derivative.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.derivative.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 797
type: ALGORITHM

  assert(eSAC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC1A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp47 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */,1);
    tmp48 = LessEq(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp47 && tmp48))
    {
      tmp50 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_582(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_590(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_591(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_592(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_593(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_594(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_596(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_599(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_600(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_601(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_603(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_604(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_605(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_606(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_607(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_608(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_609(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_610(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_611(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_642(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_646(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_647(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_648(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_652(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_662(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_664(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_665(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_668(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_670(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_671(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_675(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_676(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_684(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_685(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_686(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_688(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_699(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_700(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_701(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_702(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_703(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_704(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_705(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_706(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_708(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_709(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_710(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_711(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_712(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_713(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_714(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_715(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_719(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_722(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_723(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_724(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_737(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_738(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_739(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_740(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_741(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_760(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_761(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_770(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_772(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_773(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_774(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_775(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_776(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_778(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_779(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_780(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_781(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_794(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_795(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_797(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eSAC1A.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eSAC1A.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eSAC1A.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[10].time_unvarying = 1;
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
  data->simulationInfo->realParameter[94] /* eSAC1A.K_F PARAM */ = 0.03;
  data->modelData->realParameterData[94].time_unvarying = 1;
  data->simulationInfo->realParameter[121] /* eSAC1A.derivative.k PARAM */ = 0.03;
  data->modelData->realParameterData[121].time_unvarying = 1;
  data->simulationInfo->realParameter[182] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[182].time_unvarying = 1;
  data->simulationInfo->realParameter[208] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  data->modelData->realParameterData[208].time_unvarying = 1;
  data->simulationInfo->realParameter[209] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  data->modelData->realParameterData[209].time_unvarying = 1;
  data->simulationInfo->realParameter[214] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  data->modelData->realParameterData[214].time_unvarying = 1;
  data->simulationInfo->realParameter[215] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[215].time_unvarying = 1;
  data->simulationInfo->realParameter[216] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[216].time_unvarying = 1;
  data->simulationInfo->realParameter[217] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[217].time_unvarying = 1;
  data->simulationInfo->realParameter[218] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[218].time_unvarying = 1;
  data->simulationInfo->realParameter[219] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[219].time_unvarying = 1;
  data->simulationInfo->realParameter[234] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[234].time_unvarying = 1;
  data->simulationInfo->realParameter[235] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[235].time_unvarying = 1;
  data->simulationInfo->realParameter[236] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  data->modelData->realParameterData[236].time_unvarying = 1;
  data->simulationInfo->realParameter[237] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  data->modelData->realParameterData[237].time_unvarying = 1;
  data->simulationInfo->realParameter[244] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[244].time_unvarying = 1;
  data->simulationInfo->realParameter[245] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[245].time_unvarying = 1;
  data->simulationInfo->realParameter[253] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[253].time_unvarying = 1;
  data->simulationInfo->realParameter[254] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[254].time_unvarying = 1;
  data->simulationInfo->realParameter[264] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[264].time_unvarying = 1;
  data->simulationInfo->realParameter[265] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[265].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eSAC1A.derivative.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eSAC1A.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eSAC1A.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->booleanParameter[48] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.strict PARAM */ = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eSAC1A.derivative.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eSAC1A.imLeadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.initType PARAM */ = 4;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

