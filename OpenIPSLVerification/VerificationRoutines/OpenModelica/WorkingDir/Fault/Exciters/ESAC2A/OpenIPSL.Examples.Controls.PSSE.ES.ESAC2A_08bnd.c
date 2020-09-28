/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 560
type: SIMPLE_ASSIGN
$START.eSAC2A.XADIFD = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD variable */.start = data->simulationInfo->realParameter[298] /* gENROU.efd0 PARAM */;
    data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* eSAC2A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$START.eSAC2A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */ = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* eSAC2A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$START.gENROU.PSIppq = gENROU.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->modelData->realVarsData[107].attribute /* gENROU.PSIppq variable */.start = data->simulationInfo->realParameter[261] /* gENROU.PSIppq0 PARAM */;
    data->localData[0]->realVars[107] /* gENROU.PSIppq variable */ = data->modelData->realVarsData[107].attribute /* gENROU.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* gENROU.PSIppq */.name, (modelica_real) data->localData[0]->realVars[107] /* gENROU.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$START.gENROU.PSIppd = gENROU.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[106].attribute /* gENROU.PSIppd variable */.start = data->simulationInfo->realParameter[260] /* gENROU.PSIppd0 PARAM */;
    data->localData[0]->realVars[106] /* gENROU.PSIppd variable */ = data->modelData->realVarsData[106].attribute /* gENROU.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROU.PSIppd */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROU.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
$START.gENROU.PSIq = gENROU.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->modelData->realVarsData[108].attribute /* gENROU.PSIq variable */.start = data->simulationInfo->realParameter[262] /* gENROU.PSIq0 PARAM */;
    data->localData[0]->realVars[108] /* gENROU.PSIq variable */ = data->modelData->realVarsData[108].attribute /* gENROU.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* gENROU.PSIq */.name, (modelica_real) data->localData[0]->realVars[108] /* gENROU.PSIq variable */);
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$START.gENROU.PSId = gENROU.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->modelData->realVarsData[104].attribute /* gENROU.PSId variable */.start = data->simulationInfo->realParameter[253] /* gENROU.PSId0 PARAM */;
    data->localData[0]->realVars[104] /* gENROU.PSId variable */ = data->modelData->realVarsData[104].attribute /* gENROU.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROU.PSId */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROU.PSId variable */);
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
$START.gENROU.PSIkq = gENROU.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->modelData->realVarsData[10].attribute /* gENROU.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[255] /* gENROU.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROU.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
$START.gENROU.PSIkd = gENROU.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->modelData->realVarsData[9].attribute /* gENROU.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[254] /* gENROU.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROU.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROU.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
$START.gENROU.Epq = gENROU.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->modelData->realVarsData[8].attribute /* gENROU.Epq STATE(1) */.start = data->simulationInfo->realParameter[234] /* gENROU.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROU.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROU.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
$START.gENROU.Epd = gENROU.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->modelData->realVarsData[7].attribute /* gENROU.Epd STATE(1) */.start = data->simulationInfo->realParameter[233] /* gENROU.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROU.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROU.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
$START.gENROU.uq = gENROU.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->modelData->realVarsData[117].attribute /* gENROU.uq variable */.start = data->simulationInfo->realParameter[308] /* gENROU.uq0 PARAM */;
    data->localData[0]->realVars[117] /* gENROU.uq variable */ = data->modelData->realVarsData[117].attribute /* gENROU.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* gENROU.uq */.name, (modelica_real) data->localData[0]->realVars[117] /* gENROU.uq variable */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
$START.gENROU.ud = gENROU.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->modelData->realVarsData[116].attribute /* gENROU.ud variable */.start = data->simulationInfo->realParameter[307] /* gENROU.ud0 PARAM */;
    data->localData[0]->realVars[116] /* gENROU.ud variable */ = data->modelData->realVarsData[116].attribute /* gENROU.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* gENROU.ud */.name, (modelica_real) data->localData[0]->realVars[116] /* gENROU.ud variable */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
$START.gENROU.iq = gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->modelData->realVarsData[115].attribute /* gENROU.iq variable */.start = data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */;
    data->localData[0]->realVars[115] /* gENROU.iq variable */ = data->modelData->realVarsData[115].attribute /* gENROU.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* gENROU.iq */.name, (modelica_real) data->localData[0]->realVars[115] /* gENROU.iq variable */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
$START.gENROU.id = gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->modelData->realVarsData[114].attribute /* gENROU.id variable */.start = data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */;
    data->localData[0]->realVars[114] /* gENROU.id variable */ = data->modelData->realVarsData[114].attribute /* gENROU.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[114].info /* gENROU.id */.name, (modelica_real) data->localData[0]->realVars[114] /* gENROU.id variable */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
$START.gENROU.Te = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->modelData->realVarsData[110].attribute /* gENROU.Te variable */.start = data->simulationInfo->realParameter[305] /* gENROU.pm0 PARAM */;
    data->localData[0]->realVars[110] /* gENROU.Te variable */ = data->modelData->realVarsData[110].attribute /* gENROU.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[110].info /* gENROU.Te */.name, (modelica_real) data->localData[0]->realVars[110] /* gENROU.Te variable */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
$START.gENROU.Q = gENROU.Q_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->modelData->realVarsData[109].attribute /* gENROU.Q variable */.start = DIVISION(data->simulationInfo->realParameter[264] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[270] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[109] /* gENROU.Q variable */ = data->modelData->realVarsData[109].attribute /* gENROU.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* gENROU.Q */.name, (modelica_real) data->localData[0]->realVars[109] /* gENROU.Q variable */);
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
$START.gENROU.P = gENROU.P_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->modelData->realVarsData[102].attribute /* gENROU.P variable */.start = DIVISION(data->simulationInfo->realParameter[263] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[270] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[102] /* gENROU.P variable */ = data->modelData->realVarsData[102].attribute /* gENROU.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROU.P */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROU.P variable */);
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$START.gENROU.anglei = atan2(gENROU.ii0, gENROU.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->modelData->realVarsData[112].attribute /* gENROU.anglei variable */.start = atan2(data->simulationInfo->realParameter[301] /* gENROU.ii0 PARAM */, data->simulationInfo->realParameter[303] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[112] /* gENROU.anglei variable */ = data->modelData->realVarsData[112].attribute /* gENROU.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[112].info /* gENROU.anglei */.name, (modelica_real) data->localData[0]->realVars[112] /* gENROU.anglei variable */);
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
$START.gENROU.I = sqrt(gENROU.ir0 ^ 2.0 + gENROU.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[303] /* gENROU.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[301] /* gENROU.ii0 PARAM */;
  data->modelData->realVarsData[101].attribute /* gENROU.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[101] /* gENROU.I variable */ = data->modelData->realVarsData[101].attribute /* gENROU.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROU.I */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROU.I variable */);
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
$START.gENROU.anglev = gENROU.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->modelData->realVarsData[113].attribute /* gENROU.anglev variable */.start = data->simulationInfo->realParameter[294] /* gENROU.angle_0rad PARAM */;
    data->localData[0]->realVars[113] /* gENROU.anglev variable */ = data->modelData->realVarsData[113].attribute /* gENROU.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* gENROU.anglev */.name, (modelica_real) data->localData[0]->realVars[113] /* gENROU.anglev variable */);
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
$START.gENROU.delta = gENROU.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->modelData->realVarsData[11].attribute /* gENROU.delta STATE(1) */.start = data->simulationInfo->realParameter[296] /* gENROU.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROU.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROU.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
$START.gENROU.PELEC = gENROU.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->modelData->realVarsData[103].attribute /* gENROU.PELEC variable */.start = data->simulationInfo->realParameter[304] /* gENROU.p0 PARAM */;
    data->localData[0]->realVars[103] /* gENROU.PELEC variable */ = data->modelData->realVarsData[103].attribute /* gENROU.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROU.PELEC */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROU.PELEC variable */);
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[222] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->modelData->realVarsData[91].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[207] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[209] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[91] /* gENCLS.Q variable */ = data->modelData->realVarsData[91].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[91] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->modelData->realVarsData[90].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[206] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[209] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[90] /* gENCLS.P variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[90] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->modelData->realVarsData[95].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[218] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[95] /* gENCLS.iq variable */ = data->modelData->realVarsData[95].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[95] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->modelData->realVarsData[94].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[216] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[94] /* gENCLS.id variable */ = data->modelData->realVarsData[94].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[94] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->modelData->realVarsData[100].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[226] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[100] /* gENCLS.vq variable */ = data->modelData->realVarsData[100].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[100] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->modelData->realVarsData[99].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[223] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[99] /* gENCLS.vd variable */ = data->modelData->realVarsData[99].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[99] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[224] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->modelData->realVarsData[93].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[213] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[93] /* gENCLS.anglev variable */ = data->modelData->realVarsData[93].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[93] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->modelData->realVarsData[97].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[217] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[97] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[97].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[97] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->modelData->realVarsData[98].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[219] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[98] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[98].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[98] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->modelData->realVarsData[150].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[150] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[150].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[150].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[150] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->modelData->realVarsData[151].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[151] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[151].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[151].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[151] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->modelData->realVarsData[138].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[138] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[138].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[138].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[138] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->modelData->realVarsData[139].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[139] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[139].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[139] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->modelData->realVarsData[140].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[140] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[140].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[140] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->modelData->realVarsData[141].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[141] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[141].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[141].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[141] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROU.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->modelData->realVarsData[126].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[301] /* gENROU.ii0 PARAM */);
    data->localData[0]->realVars[126] /* pwLine.is.im variable */ = data->modelData->realVarsData[126].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[126].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[126] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROU.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->modelData->realVarsData[127].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[303] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[127] /* pwLine.is.re variable */ = data->modelData->realVarsData[127].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[127] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROU.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->modelData->realVarsData[128].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[310] /* gENROU.vi0 PARAM */;
    data->localData[0]->realVars[128] /* pwLine.vs.im variable */ = data->modelData->realVarsData[128].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[128] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROU.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->modelData->realVarsData[129].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[311] /* gENROU.vr0 PARAM */;
    data->localData[0]->realVars[129] /* pwLine.vs.re variable */ = data->modelData->realVarsData[129].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[129] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->modelData->realVarsData[92].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[222] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[92] /* gENCLS.V variable */ = data->modelData->realVarsData[92].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[92] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_565(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_566(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_567(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_568(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_569(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_570(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_571(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_572(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_573(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_574(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_575(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_576(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_577(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_578(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_579(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_580(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_581(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_582(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_583(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_584(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_585(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_586(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_587(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_588(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_589(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_598(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_599(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_600(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_601(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_602(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_603(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_604(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_605(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_606(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_607(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_608(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_609(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_610(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_611(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_612(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_613(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_614(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_615(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 618
type: SIMPLE_ASSIGN
gENROU.abs_PSIpp0 = (gENROU.PSIpp0.re ^ 2.0 + gENROU.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[257] /* gENROU.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[256] /* gENROU.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROU.PSIpp0.re ^ 2.0 + gENROU.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[289] /* gENROU.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
gENROU.dsat = OpenIPSL.NonElectrical.Functions.SE(gENROU.abs_PSIpp0, gENROU.S10, gENROU.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[297] /* gENROU.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[289] /* gENROU.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[268] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[269] /* gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
gENROU.PSIppd0 = gENROU.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[260] /* gENROU.PSIppd0 PARAM */ = data->simulationInfo->realParameter[259] /* gENROU.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
gENROU.id0 = gENROU.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */ = data->simulationInfo->realParameter[236] /* gENROU.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
gENROU.efd0 = gENROU.PSIppd0 * (1.0 + gENROU.dsat) + gENROU.id0 * (gENROU.Xd - gENROU.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[298] /* gENROU.efd0 PARAM */ = (data->simulationInfo->realParameter[260] /* gENROU.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[297] /* gENROU.dsat PARAM */) + (data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */) * (data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
gENROU.EFD0 = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[232] /* gENROU.EFD0 PARAM */ = data->simulationInfo->realParameter[298] /* gENROU.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.T1 = eSAC2A.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[111] /* eSAC2A.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.par1.y = eSAC2A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[156] /* eSAC2A.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.T2 = eSAC2A.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[110] /* eSAC2A.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.par2.y = eSAC2A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[157] /* eSAC2A.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
eSAC2A.imSimpleLag.T = eSAC2A.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */ = data->simulationInfo->realParameter[114] /* eSAC2A.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
eSAC2A.imSimpleLag.const.y = eSAC2A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[163] /* eSAC2A.imSimpleLag.const.y PARAM */ = data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
eSAC2A.simpleLagLim.T = eSAC2A.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */ = data->simulationInfo->realParameter[109] /* eSAC2A.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
eSAC2A.simpleLagLim.const.y = eSAC2A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[198] /* eSAC2A.simpleLagLim.const.y PARAM */ = data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */;
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.outMin = eSAC2A.lowLim.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[184] /* eSAC2A.rotatingExciterWithDemagnetization.outMin PARAM */ = data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */;
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
eSAC2A.lowLim.y = eSAC2A.lowLim.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->simulationInfo->realParameter[169] /* eSAC2A.lowLim.y PARAM */ = data->simulationInfo->realParameter[168] /* eSAC2A.lowLim.k PARAM */;
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
eSAC2A.FEMAX.k = eSAC2A.V_FEMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */ = data->simulationInfo->realParameter[123] /* eSAC2A.V_FEMAX PARAM */;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
eSAC2A.DiffV1.u1 = eSAC2A.FEMAX.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[87] /* eSAC2A.DiffV1.u1 PARAM */ = data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
eSAC2A.FEMAX.y = eSAC2A.FEMAX.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->simulationInfo->realParameter[98] /* eSAC2A.FEMAX.y PARAM */ = data->simulationInfo->realParameter[97] /* eSAC2A.FEMAX.k PARAM */;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
eSAC2A.const.k = eSAC2A.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */ = data->simulationInfo->realParameter[104] /* eSAC2A.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
eSAC2A.DiffV2.u1 = eSAC2A.const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[90] /* eSAC2A.DiffV2.u1 PARAM */ = data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
eSAC2A.const.y = eSAC2A.const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[134] /* eSAC2A.const.y PARAM */ = data->simulationInfo->realParameter[133] /* eSAC2A.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
eSAC2A.add3_1.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[132] /* eSAC2A.add3_1.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
eSAC2A.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[118] /* eSAC2A.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
eSAC2A.lV_GATE.n1 = const4.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[165] /* eSAC2A.lV_GATE.n1 PARAM */ = data->simulationInfo->realParameter[36] /* const4.k PARAM */;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
eSAC2A.VOEL = const4.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[117] /* eSAC2A.VOEL PARAM */ = data->simulationInfo->realParameter[36] /* const4.k PARAM */;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
const4.y = const4.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[37] /* const4.y PARAM */ = data->simulationInfo->realParameter[36] /* const4.k PARAM */;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
eSAC2A.hV_GATE.n2 = const5.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->realParameter[141] /* eSAC2A.hV_GATE.n2 PARAM */ = data->simulationInfo->realParameter[38] /* const5.k PARAM */;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
eSAC2A.VUEL = const5.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[120] /* eSAC2A.VUEL PARAM */ = data->simulationInfo->realParameter[38] /* const5.k PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
const5.y = const5.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[39] /* const5.y PARAM */ = data->simulationInfo->realParameter[38] /* const5.k PARAM */;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
gENROU.p0 = gENROU.P_0 / gENROU.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[304] /* gENROU.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[250] /* gENROU.M_b PARAM */,"gENROU.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
gENROU.iq0 = gENROU.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */ = data->simulationInfo->realParameter[237] /* gENROU.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
gENROU.pm0 = gENROU.p0 + gENROU.R_a * (gENROU.iq0 ^ 2.0 + gENROU.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */;
  data->simulationInfo->realParameter[305] /* gENROU.pm0 PARAM */ = data->simulationInfo->realParameter[304] /* gENROU.p0 PARAM */ + (data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
gENROU.PMECH = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[251] /* gENROU.PMECH PARAM */ = data->simulationInfo->realParameter[305] /* gENROU.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
gENROU.PMECH0 = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[252] /* gENROU.PMECH0 PARAM */ = data->simulationInfo->realParameter[305] /* gENROU.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
eSAC2A.gain1.k = eSAC2A.K_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[140] /* eSAC2A.gain1.k PARAM */ = data->simulationInfo->realParameter[101] /* eSAC2A.K_B PARAM */;
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
eSAC2A.gain.k = eSAC2A.K_H
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[139] /* eSAC2A.gain.k PARAM */ = data->simulationInfo->realParameter[106] /* eSAC2A.K_H PARAM */;
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
eSAC2A.se1.E2 = eSAC2A.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[192] /* eSAC2A.se1.E2 PARAM */ = data->simulationInfo->realParameter[95] /* eSAC2A.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
eSAC2A.se1.E1 = eSAC2A.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[191] /* eSAC2A.se1.E1 PARAM */ = data->simulationInfo->realParameter[94] /* eSAC2A.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
eSAC2A.se1.SE2 = eSAC2A.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[194] /* eSAC2A.se1.SE2 PARAM */ = data->simulationInfo->realParameter[108] /* eSAC2A.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
eSAC2A.se1.SE1 = eSAC2A.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[193] /* eSAC2A.se1.SE1 PARAM */ = data->simulationInfo->realParameter[107] /* eSAC2A.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
eSAC2A.DiffV1.k2 = -eSAC2A.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[86] /* eSAC2A.DiffV1.k2 PARAM */ = (-data->simulationInfo->realParameter[103] /* eSAC2A.K_D PARAM */);
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.K_C = eSAC2A.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[170] /* eSAC2A.rectifierCommutationVoltageDrop.K_C PARAM */ = data->simulationInfo->realParameter[102] /* eSAC2A.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.gain2.k = eSAC2A.rectifierCommutationVoltageDrop.K_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */ = data->simulationInfo->realParameter[170] /* eSAC2A.rectifierCommutationVoltageDrop.K_C PARAM */;
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.K_D = eSAC2A.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[175] /* eSAC2A.rotatingExciterWithDemagnetization.K_D PARAM */ = data->simulationInfo->realParameter[103] /* eSAC2A.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.T_E = eSAC2A.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[182] /* eSAC2A.rotatingExciterWithDemagnetization.T_E PARAM */ = data->simulationInfo->realParameter[112] /* eSAC2A.T_E PARAM */;
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.K = 1.0 / eSAC2A.rotatingExciterWithDemagnetization.T_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[185] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.K PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[182] /* eSAC2A.rotatingExciterWithDemagnetization.T_E PARAM */,"eSAC2A.rotatingExciterWithDemagnetization.T_E",equationIndexes);
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.E_2 = eSAC2A.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[173] /* eSAC2A.rotatingExciterWithDemagnetization.E_2 PARAM */ = data->simulationInfo->realParameter[95] /* eSAC2A.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.se1.E2 = eSAC2A.rotatingExciterWithDemagnetization.E_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[188] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E2 PARAM */ = data->simulationInfo->realParameter[173] /* eSAC2A.rotatingExciterWithDemagnetization.E_2 PARAM */;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.E_1 = eSAC2A.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[172] /* eSAC2A.rotatingExciterWithDemagnetization.E_1 PARAM */ = data->simulationInfo->realParameter[94] /* eSAC2A.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.se1.E1 = eSAC2A.rotatingExciterWithDemagnetization.E_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.se1.E1 PARAM */ = data->simulationInfo->realParameter[172] /* eSAC2A.rotatingExciterWithDemagnetization.E_1 PARAM */;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.S_EE_2 = eSAC2A.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[178] /* eSAC2A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */ = data->simulationInfo->realParameter[108] /* eSAC2A.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.se1.SE2 = eSAC2A.rotatingExciterWithDemagnetization.S_EE_2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[190] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE2 PARAM */ = data->simulationInfo->realParameter[178] /* eSAC2A.rotatingExciterWithDemagnetization.S_EE_2 PARAM */;
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.S_EE_1 = eSAC2A.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->simulationInfo->realParameter[177] /* eSAC2A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */ = data->simulationInfo->realParameter[107] /* eSAC2A.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.se1.SE1 = eSAC2A.rotatingExciterWithDemagnetization.S_EE_1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[189] /* eSAC2A.rotatingExciterWithDemagnetization.se1.SE1 PARAM */ = data->simulationInfo->realParameter[177] /* eSAC2A.rotatingExciterWithDemagnetization.S_EE_1 PARAM */;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 = eSAC2A.rotatingExciterWithDemagnetization.K_D
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->realParameter[181] /* eSAC2A.rotatingExciterWithDemagnetization.Sum.k3 PARAM */ = data->simulationInfo->realParameter[175] /* eSAC2A.rotatingExciterWithDemagnetization.K_D PARAM */;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.K_E = eSAC2A.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[176] /* eSAC2A.rotatingExciterWithDemagnetization.K_E PARAM */ = data->simulationInfo->realParameter[104] /* eSAC2A.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.gain.k = eSAC2A.rotatingExciterWithDemagnetization.K_E
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[183] /* eSAC2A.rotatingExciterWithDemagnetization.gain.k PARAM */ = data->simulationInfo->realParameter[176] /* eSAC2A.rotatingExciterWithDemagnetization.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
eSAC2A.derivative.T = eSAC2A.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */ = data->simulationInfo->realParameter[113] /* eSAC2A.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
eSAC2A.simpleLagLim.T_mod = if eSAC2A.simpleLagLim.T < 1e-15 then 1000.0 else eSAC2A.simpleLagLim.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */,1e-15);
  data->simulationInfo->realParameter[197] /* eSAC2A.simpleLagLim.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[196] /* eSAC2A.simpleLagLim.T PARAM */);
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
eSAC2A.simpleLagLim.outMin = eSAC2A.V_AMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[200] /* eSAC2A.simpleLagLim.outMin PARAM */ = data->simulationInfo->realParameter[122] /* eSAC2A.V_AMIN PARAM */;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
eSAC2A.simpleLagLim.outMax = eSAC2A.V_AMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[199] /* eSAC2A.simpleLagLim.outMax PARAM */ = data->simulationInfo->realParameter[121] /* eSAC2A.V_AMAX PARAM */;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
eSAC2A.simpleLagLim.K = eSAC2A.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[195] /* eSAC2A.simpleLagLim.K PARAM */ = data->simulationInfo->realParameter[100] /* eSAC2A.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
eSAC2A.limiter1.uMin = eSAC2A.V_RMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->realParameter[167] /* eSAC2A.limiter1.uMin PARAM */ = data->simulationInfo->realParameter[126] /* eSAC2A.V_RMIN PARAM */;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
eSAC2A.limiter1.uMax = eSAC2A.V_RMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->realParameter[166] /* eSAC2A.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[125] /* eSAC2A.V_RMAX PARAM */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
eSAC2A.imSimpleLag.T_mod = if eSAC2A.imSimpleLag.T < 1e-15 then 1000.0 else eSAC2A.imSimpleLag.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */,1e-15);
  data->simulationInfo->realParameter[162] /* eSAC2A.imSimpleLag.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[161] /* eSAC2A.imSimpleLag.T PARAM */);
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.T2_dummy = if abs(eSAC2A.imLeadLag.T1 - eSAC2A.imLeadLag.T2) < 1e-15 then 1000.0 else eSAC2A.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[145] /* eSAC2A.imLeadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[144] /* eSAC2A.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.a[1] = eSAC2A.imLeadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[146] /* eSAC2A.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[145] /* eSAC2A.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.a_end = if eSAC2A.imLeadLag.TF.a[2] > 1e-13 * sqrt(eSAC2A.imLeadLag.TF.a[1] ^ 2.0 + eSAC2A.imLeadLag.TF.a[2] ^ 2.0) then eSAC2A.imLeadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[146] /* eSAC2A.imLeadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[148] /* eSAC2A.imLeadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[147] /* eSAC2A.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.b[1] = eSAC2A.imLeadLag.K * eSAC2A.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[149] /* eSAC2A.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[142] /* eSAC2A.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[143] /* eSAC2A.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.bb[1] = eSAC2A.imLeadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[151] /* eSAC2A.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[149] /* eSAC2A.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.d = eSAC2A.imLeadLag.TF.bb[1] / eSAC2A.imLeadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[153] /* eSAC2A.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[151] /* eSAC2A.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[146] /* eSAC2A.imLeadLag.TF.a[1] PARAM */,"eSAC2A.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.b[2] = eSAC2A.imLeadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[150] /* eSAC2A.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[142] /* eSAC2A.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
eSAC2A.imLeadLag.TF.bb[2] = eSAC2A.imLeadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->simulationInfo->realParameter[152] /* eSAC2A.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[150] /* eSAC2A.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
gENROU.K4q = (gENROU.Xpq - gENROU.Xppq) / (gENROU.Xpq - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[249] /* gENROU.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */,data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xpq - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
gENROU.K3q = (gENROU.Xppq - gENROU.Xl) / (gENROU.Xpq - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[247] /* gENROU.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xpq - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
gENROU.K4d = (gENROU.Xpd - gENROU.Xppd) / (gENROU.Xpd - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->realParameter[248] /* gENROU.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */,data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xpd - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
gENROU.K3d = (gENROU.Xppd - gENROU.Xl) / (gENROU.Xpd - gENROU.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->simulationInfo->realParameter[246] /* gENROU.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xpd - gENROU.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
gENROU.K2q = (gENROU.Xpq - gENROU.Xl) * (gENROU.Xppq - gENROU.Xl) / (gENROU.Xpq - gENROU.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->simulationInfo->realParameter[245] /* gENROU.K2q PARAM */ = (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */,"gENROU.Xpq - gENROU.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
gENROU.K1q = (gENROU.Xpq - gENROU.Xppq) * (gENROU.Xq - gENROU.Xpq) / (gENROU.Xpq - gENROU.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */;
  data->simulationInfo->realParameter[243] /* gENROU.K1q PARAM */ = (data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */,(tmp11 * tmp11),"(gENROU.Xpq - gENROU.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
gENROU.K2d = (gENROU.Xpd - gENROU.Xl) * (gENROU.Xppd - gENROU.Xl) / (gENROU.Xpd - gENROU.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[244] /* gENROU.K2d PARAM */ = (data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */,"gENROU.Xpd - gENROU.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
gENROU.K1d = (gENROU.Xpd - gENROU.Xppd) * (gENROU.Xd - gENROU.Xpd) / (gENROU.Xpd - gENROU.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */;
  data->simulationInfo->realParameter[242] /* gENROU.K1d PARAM */ = (data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */,(tmp12 * tmp12),"(gENROU.Xpd - gENROU.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
gENROU.PSIppq0 = gENROU.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[261] /* gENROU.PSIppq0 PARAM */ = data->simulationInfo->realParameter[258] /* gENROU.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
gENROU.PSIq0 = (-gENROU.PSIppq0) - gENROU.Xppq * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[262] /* gENROU.PSIq0 PARAM */ = (-data->simulationInfo->realParameter[261] /* gENROU.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */) * (data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
gENROU.PSId0 = gENROU.PSIppd0 - gENROU.Xppd * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[253] /* gENROU.PSId0 PARAM */ = data->simulationInfo->realParameter[260] /* gENROU.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */) * (data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
gENROU.PSIkq0 = ((gENROU.Xpq - gENROU.Xl) * gENROU.K3q * gENROU.iq0 - gENROU.PSIppq0) / (gENROU.K3q + gENROU.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[255] /* gENROU.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * ((data->simulationInfo->realParameter[247] /* gENROU.K3q PARAM */) * (data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */)) - data->simulationInfo->realParameter[261] /* gENROU.PSIppq0 PARAM */,data->simulationInfo->realParameter[247] /* gENROU.K3q PARAM */ + data->simulationInfo->realParameter[249] /* gENROU.K4q PARAM */,"gENROU.K3q + gENROU.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
gENROU.PSIkd0 = (gENROU.PSIppd0 + (gENROU.Xl - gENROU.Xpd) * gENROU.K3d * gENROU.id0) / (gENROU.K3d + gENROU.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->simulationInfo->realParameter[254] /* gENROU.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[260] /* gENROU.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */) * ((data->simulationInfo->realParameter[246] /* gENROU.K3d PARAM */) * (data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */)),data->simulationInfo->realParameter[246] /* gENROU.K3d PARAM */ + data->simulationInfo->realParameter[248] /* gENROU.K4d PARAM */,"gENROU.K3d + gENROU.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
gENROU.Epd0 = gENROU.PSIkq0 + (gENROU.Xl - gENROU.Xpq) * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->realParameter[233] /* gENROU.Epd0 PARAM */ = data->simulationInfo->realParameter[255] /* gENROU.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[284] /* gENROU.Xpq PARAM */) * (data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
gENROU.Epq0 = gENROU.PSIkd0 + (gENROU.Xpd - gENROU.Xl) * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->realParameter[234] /* gENROU.Epq0 PARAM */ = data->simulationInfo->realParameter[254] /* gENROU.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[280] /* gENROU.Xpd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */) * (data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
gENROU.uq0 = gENROU.PSIppd0 + (-gENROU.Xppd) * gENROU.id0 - gENROU.R_a * gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->realParameter[308] /* gENROU.uq0 PARAM */ = data->simulationInfo->realParameter[260] /* gENROU.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */)) * (data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */) - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
gENROU.ud0 = gENROU.Xppq * gENROU.iq0 + (-gENROU.PSIppq0) - gENROU.R_a * gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->simulationInfo->realParameter[307] /* gENROU.ud0 PARAM */ = (data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */) * (data->simulationInfo->realParameter[302] /* gENROU.iq0 PARAM */) + (-data->simulationInfo->realParameter[261] /* gENROU.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (data->simulationInfo->realParameter[300] /* gENROU.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
gENROU.ang_PSIpp0 = Modelica.Math.atan3(gENROU.PSIpp0.im, gENROU.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->simulationInfo->realParameter[291] /* gENROU.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[256] /* gENROU.PSIpp0.im PARAM */, data->simulationInfo->realParameter[257] /* gENROU.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
gENROU.ang_It = Modelica.Math.atan3(gENROU.It.im, gENROU.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->simulationInfo->realParameter[290] /* gENROU.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[240] /* gENROU.It.im PARAM */, data->simulationInfo->realParameter[241] /* gENROU.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
gENROU.ang_PSIpp0andIt = gENROU.ang_PSIpp0 - gENROU.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[292] /* gENROU.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[291] /* gENROU.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[290] /* gENROU.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
gENROU.a = gENROU.abs_PSIpp0 * (1.0 + gENROU.dsat * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[288] /* gENROU.a PARAM */ = (data->simulationInfo->realParameter[289] /* gENROU.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[297] /* gENROU.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[278] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[279] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
gENROU.b = (gENROU.It.re ^ 2.0 + gENROU.It.im ^ 2.0) ^ 0.5 * (gENROU.Xpp - gENROU.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[241] /* gENROU.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[240] /* gENROU.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROU.It.re ^ 2.0 + gENROU.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[295] /* gENROU.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[281] /* gENROU.Xpp PARAM */ - data->simulationInfo->realParameter[285] /* gENROU.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
gENROU.delta0 = atan(gENROU.b * cos(gENROU.ang_PSIpp0andIt) / (gENROU.b * sin(gENROU.ang_PSIpp0andIt) - gENROU.a)) + gENROU.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[296] /* gENROU.delta0 PARAM */ = atan((data->simulationInfo->realParameter[295] /* gENROU.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[292] /* gENROU.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[295] /* gENROU.b PARAM */) * (sin(data->simulationInfo->realParameter[292] /* gENROU.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[288] /* gENROU.a PARAM */,"gENROU.b * sin(gENROU.ang_PSIpp0andIt) - gENROU.a",equationIndexes))) + data->simulationInfo->realParameter[291] /* gENROU.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
gENROU.q0 = gENROU.Q_0 / gENROU.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[306] /* gENROU.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[264] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[250] /* gENROU.M_b PARAM */,"gENROU.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
gENROU.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[270] /* gENROU.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
gENROU.CoB = gENROU.M_b / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[250] /* gENROU.M_b PARAM */,data->simulationInfo->realParameter[270] /* gENROU.S_b PARAM */,"gENROU.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
gENROU.angle_0rad = 0.0174532925199433 * gENROU.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->realParameter[294] /* gENROU.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[293] /* gENROU.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
gENROU.vr0 = gENROU.v_0 * cos(gENROU.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->realParameter[311] /* gENROU.vr0 PARAM */ = (data->simulationInfo->realParameter[309] /* gENROU.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[294] /* gENROU.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
gENROU.vi0 = gENROU.v_0 * sin(gENROU.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->realParameter[310] /* gENROU.vi0 PARAM */ = (data->simulationInfo->realParameter[309] /* gENROU.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[294] /* gENROU.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
gENROU.ii0 = gENROU.CoB * (gENROU.q0 * gENROU.vr0 - gENROU.p0 * gENROU.vi0) / (gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[311] /* gENROU.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[310] /* gENROU.vi0 PARAM */;
  data->simulationInfo->realParameter[301] /* gENROU.ii0 PARAM */ = (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[306] /* gENROU.q0 PARAM */) * (data->simulationInfo->realParameter[311] /* gENROU.vr0 PARAM */) - ((data->simulationInfo->realParameter[304] /* gENROU.p0 PARAM */) * (data->simulationInfo->realParameter[310] /* gENROU.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
gENROU.ir0 = (-gENROU.CoB) * (gENROU.p0 * gENROU.vr0 + gENROU.q0 * gENROU.vi0) / (gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[311] /* gENROU.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[310] /* gENROU.vi0 PARAM */;
  data->simulationInfo->realParameter[303] /* gENROU.ir0 PARAM */ = ((-data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[304] /* gENROU.p0 PARAM */) * (data->simulationInfo->realParameter[311] /* gENROU.vr0 PARAM */) + (data->simulationInfo->realParameter[306] /* gENROU.q0 PARAM */) * (data->simulationInfo->realParameter[310] /* gENROU.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROU.vr0 ^ 2.0 + gENROU.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
gENROU.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->simulationInfo->realParameter[299] /* gENROU.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
gENROU.w_b = 6.283185307179586 * gENROU.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[312] /* gENROU.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[299] /* gENROU.fn PARAM */);
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[313] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[314] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[52] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[56] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[54] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[51] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[55] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[53] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[50] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[40] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[63] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[75] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[76] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->simulationInfo->realParameter[72] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->simulationInfo->realParameter[213] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[212] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[222] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[213] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[222] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[213] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->simulationInfo->realParameter[220] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[206] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[205] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->simulationInfo->realParameter[221] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[207] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[205] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[219] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[220] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[221] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[217] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[220] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[221] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[217] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[219] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[219] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[217] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->simulationInfo->realParameter[226] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->simulationInfo->realParameter[216] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[219] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[217] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->simulationInfo->realParameter[218] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[219] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[217] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->simulationInfo->realParameter[224] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[226] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[218] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[216] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->simulationInfo->realParameter[223] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[227] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[225] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[214] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->simulationInfo->realParameter[209] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[205] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[209] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->simulationInfo->realParameter[215] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[354] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[352] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[350] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[351] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->simulationInfo->realParameter[353] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[343] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[341] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[339] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[340] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->simulationInfo->realParameter[342] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[332] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[330] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[328] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[329] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  data->simulationInfo->realParameter[331] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[321] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[319] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[317] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[318] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  data->simulationInfo->realParameter[320] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 839
type: ALGORITHM

  assert(eSAC2A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC2A.derivative.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 840
type: ALGORITHM

  assert(eSAC2A.derivative.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSAC2A.derivative.T, has value: " + String(eSAC2A.derivative.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,76,"Variable violating min constraint: 1e-60 <= eSAC2A.derivative.T, has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp38 = GreaterEq(data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */,1e-60);
    if(!tmp38)
    {
      tmp40 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.derivative.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 841
type: ALGORITHM

  assert(eSAC2A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC2A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp42 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */,1);
    tmp43 = LessEq(data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp42 && tmp43))
    {
      tmp45 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_619(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_621(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_623(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_624(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_625(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_626(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_627(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_628(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_629(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_630(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_656(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_657(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_658(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_659(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_660(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_684(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_685(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_686(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_690(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_691(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_693(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_696(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_699(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_700(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_706(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_708(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_709(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_710(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_711(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_712(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_713(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_715(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_717(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_719(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_720(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_721(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_722(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_723(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_726(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_731(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_732(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_733(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_742(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_743(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_744(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_745(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_746(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_747(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_748(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_749(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_750(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_751(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_752(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_753(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_754(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_755(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_756(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_757(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_758(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_759(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_760(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_761(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_762(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_763(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_764(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_765(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_766(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_767(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_768(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_769(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_782(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_783(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_784(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_785(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_786(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_788(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_789(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_790(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_791(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_792(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_793(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_794(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_795(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_796(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_797(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_798(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_799(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_800(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_801(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_802(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_803(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_829(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_839(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_840(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_841(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eSAC2A.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eSAC2A.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eSAC2A.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->localData[0]->realVars[96] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[96].time_unvarying = 1;
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
  data->simulationInfo->realParameter[105] /* eSAC2A.K_F PARAM */ = 0.03;
  data->modelData->realParameterData[105].time_unvarying = 1;
  data->simulationInfo->realParameter[136] /* eSAC2A.derivative.k PARAM */ = 0.03;
  data->modelData->realParameterData[136].time_unvarying = 1;
  data->simulationInfo->realParameter[204] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[204].time_unvarying = 1;
  data->simulationInfo->realParameter[230] /* gENROU.DQ_dq.im PARAM */ = -0.4824562617299565;
  data->modelData->realParameterData[230].time_unvarying = 1;
  data->simulationInfo->realParameter[231] /* gENROU.DQ_dq.re PARAM */ = 0.8759200622873959;
  data->modelData->realParameterData[231].time_unvarying = 1;
  data->simulationInfo->realParameter[236] /* gENROU.I_dq.im PARAM */ = 0.2169491553618439;
  data->modelData->realParameterData[236].time_unvarying = 1;
  data->simulationInfo->realParameter[237] /* gENROU.I_dq.re PARAM */ = 0.3403918503789823;
  data->modelData->realParameterData[237].time_unvarying = 1;
  data->simulationInfo->realParameter[238] /* gENROU.Is.im PARAM */ = -5.013342920101253;
  data->modelData->realParameterData[238].time_unvarying = 1;
  data->simulationInfo->realParameter[239] /* gENROU.Is.re PARAM */ = 0.7556344673040269;
  data->modelData->realParameterData[239].time_unvarying = 1;
  data->simulationInfo->realParameter[240] /* gENROU.It.im PARAM */ = -0.02580593802055783;
  data->modelData->realParameterData[240].time_unvarying = 1;
  data->simulationInfo->realParameter[241] /* gENROU.It.re PARAM */ = 0.402824529267427;
  data->modelData->realParameterData[241].time_unvarying = 1;
  data->simulationInfo->realParameter[256] /* gENROU.PSIpp0.im PARAM */ = 0.1511268934608054;
  data->modelData->realParameterData[256].time_unvarying = 1;
  data->simulationInfo->realParameter[257] /* gENROU.PSIpp0.re PARAM */ = 1.00266858402025;
  data->modelData->realParameterData[257].time_unvarying = 1;
  data->simulationInfo->realParameter[258] /* gENROU.PSIpp0_dq.im PARAM */ = -0.3513686588669895;
  data->modelData->realParameterData[258].time_unvarying = 1;
  data->simulationInfo->realParameter[259] /* gENROU.PSIpp0_dq.re PARAM */ = 0.9511696446345945;
  data->modelData->realParameterData[259].time_unvarying = 1;
  data->simulationInfo->realParameter[266] /* gENROU.S.im PARAM */ = 0.0541657134890556;
  data->modelData->realParameterData[266].time_unvarying = 1;
  data->simulationInfo->realParameter[267] /* gENROU.S.re PARAM */ = 0.399999529123306;
  data->modelData->realParameterData[267].time_unvarying = 1;
  data->simulationInfo->realParameter[275] /* gENROU.VT.im PARAM */ = 0.07056198760732002;
  data->modelData->realParameterData[275].time_unvarying = 1;
  data->simulationInfo->realParameter[276] /* gENROU.VT.re PARAM */ = 0.9975073964161391;
  data->modelData->realParameterData[276].time_unvarying = 1;
  data->simulationInfo->realParameter[286] /* gENROU.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[286].time_unvarying = 1;
  data->simulationInfo->realParameter[287] /* gENROU.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[287].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eSAC2A.derivative.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eSAC2A.limiter1.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eSAC2A.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

