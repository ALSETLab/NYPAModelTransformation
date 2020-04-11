/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 969
type: SIMPLE_ASSIGN
$START.eSAC2A.XADIFD = gENROU.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD variable */.start = data->simulationInfo->realParameter[299] /* gENROU.efd0 PARAM */;
    data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* eSAC2A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 970
type: SIMPLE_ASSIGN
$START.eSAC2A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */ = data->modelData->realVarsData[64].attribute /* eSAC2A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* eSAC2A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[64] /* eSAC2A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 971
type: SIMPLE_ASSIGN
$START.gENROU.PSIppq = gENROU.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->modelData->realVarsData[103].attribute /* gENROU.PSIppq variable */.start = data->simulationInfo->realParameter[262] /* gENROU.PSIppq0 PARAM */;
    data->localData[0]->realVars[103] /* gENROU.PSIppq variable */ = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROU.PSIppq */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROU.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
$START.gENROU.PSIppd = gENROU.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->modelData->realVarsData[102].attribute /* gENROU.PSIppd variable */.start = data->simulationInfo->realParameter[261] /* gENROU.PSIppd0 PARAM */;
    data->localData[0]->realVars[102] /* gENROU.PSIppd variable */ = data->modelData->realVarsData[102].attribute /* gENROU.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROU.PSIppd */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROU.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
$START.gENROU.PSIq = gENROU.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->modelData->realVarsData[104].attribute /* gENROU.PSIq variable */.start = data->simulationInfo->realParameter[263] /* gENROU.PSIq0 PARAM */;
    data->localData[0]->realVars[104] /* gENROU.PSIq variable */ = data->modelData->realVarsData[104].attribute /* gENROU.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROU.PSIq */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROU.PSIq variable */);
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
$START.gENROU.PSId = gENROU.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->modelData->realVarsData[100].attribute /* gENROU.PSId variable */.start = data->simulationInfo->realParameter[254] /* gENROU.PSId0 PARAM */;
    data->localData[0]->realVars[100] /* gENROU.PSId variable */ = data->modelData->realVarsData[100].attribute /* gENROU.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROU.PSId */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROU.PSId variable */);
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
$START.gENROU.PSIkq = gENROU.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->modelData->realVarsData[10].attribute /* gENROU.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[256] /* gENROU.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROU.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
$START.gENROU.PSIkd = gENROU.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->modelData->realVarsData[9].attribute /* gENROU.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[255] /* gENROU.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROU.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROU.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 977
type: SIMPLE_ASSIGN
$START.gENROU.Epq = gENROU.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->modelData->realVarsData[8].attribute /* gENROU.Epq STATE(1) */.start = data->simulationInfo->realParameter[235] /* gENROU.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROU.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROU.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
$START.gENROU.Epd = gENROU.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->modelData->realVarsData[7].attribute /* gENROU.Epd STATE(1) */.start = data->simulationInfo->realParameter[234] /* gENROU.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROU.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROU.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
$START.gENROU.uq = gENROU.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->modelData->realVarsData[113].attribute /* gENROU.uq variable */.start = data->simulationInfo->realParameter[309] /* gENROU.uq0 PARAM */;
    data->localData[0]->realVars[113] /* gENROU.uq variable */ = data->modelData->realVarsData[113].attribute /* gENROU.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[113].info /* gENROU.uq */.name, (modelica_real) data->localData[0]->realVars[113] /* gENROU.uq variable */);
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
$START.gENROU.ud = gENROU.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->modelData->realVarsData[112].attribute /* gENROU.ud variable */.start = data->simulationInfo->realParameter[308] /* gENROU.ud0 PARAM */;
    data->localData[0]->realVars[112] /* gENROU.ud variable */ = data->modelData->realVarsData[112].attribute /* gENROU.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[112].info /* gENROU.ud */.name, (modelica_real) data->localData[0]->realVars[112] /* gENROU.ud variable */);
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
$START.gENROU.iq = gENROU.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->modelData->realVarsData[111].attribute /* gENROU.iq variable */.start = data->simulationInfo->realParameter[303] /* gENROU.iq0 PARAM */;
    data->localData[0]->realVars[111] /* gENROU.iq variable */ = data->modelData->realVarsData[111].attribute /* gENROU.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[111].info /* gENROU.iq */.name, (modelica_real) data->localData[0]->realVars[111] /* gENROU.iq variable */);
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
$START.gENROU.id = gENROU.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->modelData->realVarsData[110].attribute /* gENROU.id variable */.start = data->simulationInfo->realParameter[301] /* gENROU.id0 PARAM */;
    data->localData[0]->realVars[110] /* gENROU.id variable */ = data->modelData->realVarsData[110].attribute /* gENROU.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[110].info /* gENROU.id */.name, (modelica_real) data->localData[0]->realVars[110] /* gENROU.id variable */);
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
$START.gENROU.Te = gENROU.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->modelData->realVarsData[106].attribute /* gENROU.Te variable */.start = data->simulationInfo->realParameter[306] /* gENROU.pm0 PARAM */;
    data->localData[0]->realVars[106] /* gENROU.Te variable */ = data->modelData->realVarsData[106].attribute /* gENROU.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROU.Te */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROU.Te variable */);
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
$START.gENROU.Q = gENROU.Q_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->modelData->realVarsData[105].attribute /* gENROU.Q variable */.start = DIVISION(data->simulationInfo->realParameter[265] /* gENROU.Q_0 PARAM */,data->simulationInfo->realParameter[271] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[105] /* gENROU.Q variable */ = data->modelData->realVarsData[105].attribute /* gENROU.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* gENROU.Q */.name, (modelica_real) data->localData[0]->realVars[105] /* gENROU.Q variable */);
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
$START.gENROU.P = gENROU.P_0 / gENROU.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->modelData->realVarsData[98].attribute /* gENROU.P variable */.start = DIVISION(data->simulationInfo->realParameter[264] /* gENROU.P_0 PARAM */,data->simulationInfo->realParameter[271] /* gENROU.S_b PARAM */,"gENROU.S_b");
    data->localData[0]->realVars[98] /* gENROU.P variable */ = data->modelData->realVarsData[98].attribute /* gENROU.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROU.P */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROU.P variable */);
  TRACE_POP
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$START.gENROU.anglei = atan2(gENROU.ii0, gENROU.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  data->modelData->realVarsData[108].attribute /* gENROU.anglei variable */.start = atan2(data->simulationInfo->realParameter[302] /* gENROU.ii0 PARAM */, data->simulationInfo->realParameter[304] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[108] /* gENROU.anglei variable */ = data->modelData->realVarsData[108].attribute /* gENROU.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* gENROU.anglei */.name, (modelica_real) data->localData[0]->realVars[108] /* gENROU.anglei variable */);
  TRACE_POP
}

/*
equation index: 987
type: SIMPLE_ASSIGN
$START.gENROU.I = sqrt(gENROU.ir0 ^ 2.0 + gENROU.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[304] /* gENROU.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[302] /* gENROU.ii0 PARAM */;
  data->modelData->realVarsData[97].attribute /* gENROU.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[97] /* gENROU.I variable */ = data->modelData->realVarsData[97].attribute /* gENROU.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROU.I */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROU.I variable */);
  TRACE_POP
}

/*
equation index: 988
type: SIMPLE_ASSIGN
$START.gENROU.anglev = gENROU.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->modelData->realVarsData[109].attribute /* gENROU.anglev variable */.start = data->simulationInfo->realParameter[295] /* gENROU.angle_0rad PARAM */;
    data->localData[0]->realVars[109] /* gENROU.anglev variable */ = data->modelData->realVarsData[109].attribute /* gENROU.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* gENROU.anglev */.name, (modelica_real) data->localData[0]->realVars[109] /* gENROU.anglev variable */);
  TRACE_POP
}

/*
equation index: 989
type: SIMPLE_ASSIGN
$START.gENROU.delta = gENROU.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->modelData->realVarsData[11].attribute /* gENROU.delta STATE(1) */.start = data->simulationInfo->realParameter[297] /* gENROU.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROU.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROU.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 990
type: SIMPLE_ASSIGN
$START.gENROU.PELEC = gENROU.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->modelData->realVarsData[99].attribute /* gENROU.PELEC variable */.start = data->simulationInfo->realParameter[305] /* gENROU.p0 PARAM */;
    data->localData[0]->realVars[99] /* gENROU.PELEC variable */ = data->modelData->realVarsData[99].attribute /* gENROU.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENROU.PELEC */.name, (modelica_real) data->localData[0]->realVars[99] /* gENROU.PELEC variable */);
  TRACE_POP
}

/*
equation index: 991
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 992
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 993
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 994
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[223] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 995
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 996
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 997
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 999
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  data->modelData->realVarsData[87].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[208] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[210] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[87] /* gENCLS.Q variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  data->modelData->realVarsData[86].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[207] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[210] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[86] /* gENCLS.P variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  data->modelData->realVarsData[91].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[219] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[91] /* gENCLS.iq variable */ = data->modelData->realVarsData[91].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[91] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  data->modelData->realVarsData[90].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[217] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[90] /* gENCLS.id variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[90] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  data->modelData->realVarsData[96].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[227] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[96] /* gENCLS.vq variable */ = data->modelData->realVarsData[96].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[96] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  data->modelData->realVarsData[95].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[224] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[95] /* gENCLS.vd variable */ = data->modelData->realVarsData[95].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[95] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[225] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  data->modelData->realVarsData[89].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[214] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.anglev variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[215] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  data->modelData->realVarsData[93].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[218] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[93] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[93].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[93] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  data->modelData->realVarsData[94].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[220] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[94] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[94].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[94] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  data->modelData->realVarsData[146].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[146].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[146] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->modelData->realVarsData[147].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[147].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[147] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  data->modelData->realVarsData[134].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[226] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[134].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[134] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  data->modelData->realVarsData[135].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[228] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[135] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  data->modelData->realVarsData[136].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[136].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[136] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->modelData->realVarsData[137].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[137].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[137] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROU.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->modelData->realVarsData[122].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[302] /* gENROU.ii0 PARAM */);
    data->localData[0]->realVars[122] /* pwLine.is.im variable */ = data->modelData->realVarsData[122].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[122] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROU.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  data->modelData->realVarsData[123].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[304] /* gENROU.ir0 PARAM */);
    data->localData[0]->realVars[123] /* pwLine.is.re variable */ = data->modelData->realVarsData[123].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[123] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROU.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  data->modelData->realVarsData[124].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[311] /* gENROU.vi0 PARAM */;
    data->localData[0]->realVars[124] /* pwLine.vs.im variable */ = data->modelData->realVarsData[124].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[124].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[124] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROU.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  data->modelData->realVarsData[125].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[312] /* gENROU.vr0 PARAM */;
    data->localData[0]->realVars[125] /* pwLine.vs.re variable */ = data->modelData->realVarsData[125].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[125].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[125] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  data->modelData->realVarsData[88].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[223] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.V variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_969(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_970(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_971(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_972(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_973(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_974(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_975(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_976(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_977(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_978(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_979(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_980(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_981(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_982(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_983(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_984(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_985(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_986(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_987(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_988(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_989(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_990(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_991(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_992(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_993(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_994(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_995(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_996(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_997(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_998(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_999(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1000(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1001(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1002(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1003(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1004(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1005(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1006(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1007(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1008(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1009(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1010(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1011(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1012(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1013(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1014(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1015(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1016(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1017(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1018(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1019(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1020(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1021(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1022(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1023(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1024(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_598(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_589(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_587(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_586(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_584(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_583(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_581(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_580(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_578(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_577(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_575(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_574(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_573(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_571(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_570(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_569(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_567(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_566(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_565(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_563(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_562(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_561(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_559(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_558(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_557(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_555(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_554(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_553(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_547(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_469(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_468(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_460(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_459(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_457(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_453(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_452(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_451(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_450(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_448(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_444(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_443(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_442(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_441(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_440(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_439(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_438(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_437(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_436(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_435(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_434(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_433(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_432(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_431(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_430(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_429(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_428(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_427(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_426(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_425(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_424(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_423(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_420(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_418(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_417(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_414(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_413(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_412(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_411(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_410(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_408(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_407(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_390(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_362(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_358(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_356(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_345(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_341(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_339(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_324(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_321(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_318(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_309(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_307(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_270(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_262(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_257(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_255(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_254(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_243(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_230(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_224(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_222(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_217(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_215(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_213(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_211(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_209(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_206(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_204(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_202(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_200(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_198(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_196(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_193(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_191(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_189(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_187(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_185(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_183(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1249
type: ALGORITHM

  assert(eSAC2A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC2A.derivative.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */,1);
    tmp1 = LessEq(data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */,4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSAC2A.derivative.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.derivative.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.derivative.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1250
type: ALGORITHM

  assert(eSAC2A.derivative.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSAC2A.derivative.T, has value: " + String(eSAC2A.derivative.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,76,"Variable violating min constraint: 1e-60 <= eSAC2A.derivative.T, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp5 = GreaterEq(data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */,1e-60);
    if(!tmp5)
    {
      tmp7 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[135] /* eSAC2A.derivative.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.derivative.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1251
type: ALGORITHM

  assert(eSAC2A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSAC2A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */,1);
    tmp10 = LessEq(data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSAC2A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSAC2A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSAC2A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_589(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_587(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_584(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_580(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_578(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_573(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_571(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_570(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_561(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_559(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_558(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_557(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_547(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_530(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_472(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_459(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_439(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_436(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_434(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_390(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_379(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_373(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_356(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_345(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_341(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_339(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_318(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_270(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_262(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_257(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_255(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_254(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_246(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_243(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_230(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_226(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_224(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_222(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_219(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_217(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_215(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_213(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_211(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_209(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_206(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_204(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_202(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_200(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_198(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_196(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_193(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_191(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_189(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_187(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_185(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_183(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1249(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1250(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_1251(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->realVars[92] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[92].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

