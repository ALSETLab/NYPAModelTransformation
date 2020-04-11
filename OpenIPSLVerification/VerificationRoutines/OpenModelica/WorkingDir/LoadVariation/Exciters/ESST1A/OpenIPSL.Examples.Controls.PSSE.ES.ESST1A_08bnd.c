/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 977
type: SIMPLE_ASSIGN
$START.eSST1A.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD variable */.start = data->simulationInfo->realParameter[293] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* eSST1A.XADIFD */.name, (modelica_real) data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
$START.eSST1A.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* eSST1A.ECOMP */.name, (modelica_real) data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
$START.eSST1A.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->modelData->realVarsData[59].attribute /* eSST1A.EFD variable */.start = data->simulationInfo->realParameter[293] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = data->modelData->realVarsData[59].attribute /* eSST1A.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* eSST1A.EFD */.name, (modelica_real) data->localData[0]->realVars[59] /* eSST1A.EFD variable */);
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->modelData->realVarsData[101].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[256] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[101] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->modelData->realVarsData[100].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[255] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[100] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->modelData->realVarsData[102].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[257] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = data->modelData->realVarsData[102].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[102] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->modelData->realVarsData[98].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[248] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->modelData->realVarsData[98].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[98] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[250] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[249] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[229] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 987
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[228] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 988
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->modelData->realVarsData[111].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[303] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->modelData->realVarsData[111].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[111].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 989
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->modelData->realVarsData[110].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[302] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[110] /* gENROE.ud variable */ = data->modelData->realVarsData[110].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[110].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[110] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 990
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->modelData->realVarsData[109].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[297] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[109] /* gENROE.iq variable */ = data->modelData->realVarsData[109].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[109] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 991
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->modelData->realVarsData[108].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[295] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[108] /* gENROE.id variable */ = data->modelData->realVarsData[108].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[108] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 992
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->modelData->realVarsData[104].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[300] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[104] /* gENROE.Te variable */ = data->modelData->realVarsData[104].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[104] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 993
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->modelData->realVarsData[103].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[259] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[265] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[103] /* gENROE.Q variable */ = data->modelData->realVarsData[103].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[103] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 994
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  data->modelData->realVarsData[96].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[258] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[265] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[96] /* gENROE.P variable */ = data->modelData->realVarsData[96].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 995
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  data->modelData->realVarsData[106].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[296] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[298] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[106] /* gENROE.anglei variable */ = data->modelData->realVarsData[106].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[106] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 996
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[298] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[296] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[95].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[95] /* gENROE.I variable */ = data->modelData->realVarsData[95].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 997
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->modelData->realVarsData[107].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[289] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[107] /* gENROE.anglev variable */ = data->modelData->realVarsData[107].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[107] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[291] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[11].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 999
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  data->modelData->realVarsData[97].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[299] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[97] /* gENROE.PELEC variable */ = data->modelData->realVarsData[97].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* FAULT.angle variable */ = data->modelData->realVarsData[33].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[32] /* FAULT.V variable */ = data->modelData->realVarsData[32].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[32] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* GEN2.angle variable */ = data->modelData->realVarsData[41].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[217] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[40] /* GEN2.V variable */ = data->modelData->realVarsData[40].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[40] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[45] /* LOAD.angle variable */ = data->modelData->realVarsData[45].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[45] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN1.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[78] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[55] /* constantLoad.v variable */ = data->modelData->realVarsData[55].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[55] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[64] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[50] /* constantLoad.angle variable */ = data->modelData->realVarsData[50].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[50] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[54] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  data->modelData->realVarsData[85].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[202] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[204] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[85] /* gENCLS.Q variable */ = data->modelData->realVarsData[85].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[85] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  data->modelData->realVarsData[84].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[201] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[204] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[84] /* gENCLS.P variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  data->modelData->realVarsData[89].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[213] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.iq variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->modelData->realVarsData[88].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[211] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.id variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  data->modelData->realVarsData[94].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[221] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->modelData->realVarsData[94].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[94] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  data->modelData->realVarsData[93].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[218] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[93] /* gENCLS.vd variable */ = data->modelData->realVarsData[93].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[93] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[219] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->modelData->realVarsData[87].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[208] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[87] /* gENCLS.anglev variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[209] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  data->modelData->realVarsData[91].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[212] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[91].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[91] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  data->modelData->realVarsData[92].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[214] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[92].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[92] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  data->modelData->realVarsData[144].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[144].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[144] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  data->modelData->realVarsData[145].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[145].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[145] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  data->modelData->realVarsData[132].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[220] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[132].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[132] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  data->modelData->realVarsData[133].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[222] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[133].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[133] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  data->modelData->realVarsData[134].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[79] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[134].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[134] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  data->modelData->realVarsData[135].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[80] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[135].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[135] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  data->modelData->realVarsData[120].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[296] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[120] /* pwLine.is.im variable */ = data->modelData->realVarsData[120].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[120] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  data->modelData->realVarsData[121].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[298] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[121] /* pwLine.is.re variable */ = data->modelData->realVarsData[121].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[121].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[121] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  data->modelData->realVarsData[122].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[305] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = data->modelData->realVarsData[122].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[122].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[122] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  data->modelData->realVarsData[123].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[306] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = data->modelData->realVarsData[123].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[123].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[123] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  data->modelData->realVarsData[86].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[217] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[86] /* gENCLS.V variable */ = data->modelData->realVarsData[86].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[86] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[44] /* LOAD.V variable */ = data->modelData->realVarsData[44].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[44] /* LOAD.V variable */);
  TRACE_POP
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN1.V variable */ = data->modelData->realVarsData[36].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN1.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_977(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_978(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_979(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_980(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_981(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_982(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_983(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_984(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_985(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_986(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_987(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_988(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_989(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_990(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_991(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_992(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_993(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_994(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_995(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_996(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_997(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_998(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_999(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1000(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1001(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1002(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1003(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1004(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1005(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1006(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1007(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1008(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1009(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1010(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1011(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1012(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1013(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1014(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1015(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1016(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1017(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1018(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1019(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1020(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1021(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1022(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1023(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1024(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1025(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1026(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1027(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1028(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1029(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1030(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1031(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1032(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1033(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_601(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_598(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_597(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_596(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_595(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_594(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_593(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_592(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_591(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_590(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_589(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_587(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_586(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_584(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_583(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_581(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_580(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_578(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_577(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_575(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_574(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_572(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_571(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_569(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_568(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_567(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_563(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_562(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_561(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_560(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_559(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_558(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_556(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_555(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_554(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_553(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_552(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_550(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_541(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_501(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_498(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_497(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_465(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_464(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_458(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_457(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_454(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_452(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_451(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_450(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_448(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_444(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_443(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_442(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_441(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_440(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_439(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_438(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_437(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_436(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_435(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_434(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_433(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_432(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_431(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_430(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_429(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_428(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_427(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_426(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_425(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_424(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_423(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_422(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_419(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_417(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_416(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_413(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_412(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_411(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_410(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_409(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_407(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_406(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_389(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_378(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_361(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_355(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_344(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_340(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_338(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_327(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_323(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_320(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_312(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_308(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_285(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_284(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_269(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_256(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_254(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_248(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_246(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_244(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_242(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_227(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_223(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_221(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_218(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_216(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_214(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_212(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_210(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_208(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_205(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_203(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_201(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_199(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_197(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_195(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_192(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_190(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_188(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_186(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_184(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_182(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_179(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_169(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_168(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_167(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1261
type: ALGORITHM

  assert(eSST1A.imLeadLag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST1A.imLeadLag1.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,162,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */,1);
    tmp1 = LessEq(data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */,4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eSST1A.imLeadLag1.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLeadLag1.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag1.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1262
type: ALGORITHM

  assert(eSST1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST1A.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,161,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */,1);
    tmp6 = LessEq(data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eSST1A.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1263
type: ALGORITHM

  assert(eSST1A.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eSST1A.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */,1);
    tmp11 = LessEq(data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */,4);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eSST1A.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eSST1A.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1264
type: ALGORITHM

  assert(eSST1A.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eSST1A.imDerivativeLag.T, has value: " + String(eSST1A.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,81,"Variable violating min constraint: 1e-60 <= eSST1A.imDerivativeLag.T, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp15 = GreaterEq(data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp15)
    {
      tmp17 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neSST1A.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_601(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_596(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_594(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_593(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_592(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_591(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_590(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_589(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_587(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_584(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_580(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_578(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_572(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_571(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_561(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_560(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_559(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_558(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_550(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_541(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_537(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_522(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_521(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_501(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_498(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_497(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_475(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_473(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_470(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_464(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_454(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_439(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_436(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_434(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_428(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_416(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_378(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_355(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_344(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_340(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_338(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_312(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_285(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_284(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_269(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_254(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_248(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_246(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_244(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_242(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_229(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_227(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_225(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_221(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_218(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_216(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_214(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_212(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_210(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_208(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_205(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_203(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_201(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_199(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_197(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_195(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_192(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_190(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_188(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_186(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_184(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_182(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_179(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_168(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_167(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1261(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1262(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1263(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_1264(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->realVars[90] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[90].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

