/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 971
type: SIMPLE_ASSIGN
$START.cSVGN1.leadLag.TF.x[1] = cSVGN1.leadLag.TF.x_start[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->modelData->realVarsData[59].attribute /* cSVGN1.leadLag.TF.x[1] variable */.start = data->simulationInfo->realParameter[103] /* cSVGN1.leadLag.TF.x_start[1] PARAM */;
    data->localData[0]->realVars[59] /* cSVGN1.leadLag.TF.x[1] variable */ = data->modelData->realVarsData[59].attribute /* cSVGN1.leadLag.TF.x[1] variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* cSVGN1.leadLag.TF.x[1] */.name, (modelica_real) data->localData[0]->realVars[59] /* cSVGN1.leadLag.TF.x[1] variable */);
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
$START.cSVGN1.p.ii = cSVGN1.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->modelData->realVarsData[67].attribute /* cSVGN1.p.ii variable */.start = data->simulationInfo->realParameter[85] /* cSVGN1.ii0 PARAM */;
    data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */ = data->modelData->realVarsData[67].attribute /* cSVGN1.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* cSVGN1.p.ii */.name, (modelica_real) data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */);
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
$START.cSVGN1.p.ir = cSVGN1.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->modelData->realVarsData[68].attribute /* cSVGN1.p.ir variable */.start = data->simulationInfo->realParameter[87] /* cSVGN1.ir0 PARAM */;
    data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */ = data->modelData->realVarsData[68].attribute /* cSVGN1.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* cSVGN1.p.ir */.name, (modelica_real) data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */);
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
$START.cSVGN1.V = cSVGN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->modelData->realVarsData[51].attribute /* cSVGN1.V variable */.start = data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */;
    data->localData[0]->realVars[51] /* cSVGN1.V variable */ = data->modelData->realVarsData[51].attribute /* cSVGN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* cSVGN1.V */.name, (modelica_real) data->localData[0]->realVars[51] /* cSVGN1.V variable */);
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
$START.cSVGN1.Y = cSVGN1.Y0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->modelData->realVarsData[52].attribute /* cSVGN1.Y variable */.start = data->simulationInfo->realParameter[65] /* cSVGN1.Y0 PARAM */;
    data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = data->modelData->realVarsData[52].attribute /* cSVGN1.Y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* cSVGN1.Y */.name, (modelica_real) data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
$START.cSVGN1.iq = cSVGN1.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->modelData->realVarsData[58].attribute /* cSVGN1.iq variable */.start = data->simulationInfo->realParameter[86] /* cSVGN1.iq0 PARAM */;
    data->localData[0]->realVars[58] /* cSVGN1.iq variable */ = data->modelData->realVarsData[58].attribute /* cSVGN1.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* cSVGN1.iq */.name, (modelica_real) data->localData[0]->realVars[58] /* cSVGN1.iq variable */);
  TRACE_POP
}

/*
equation index: 977
type: SIMPLE_ASSIGN
$START.cSVGN1.id = cSVGN1.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->modelData->realVarsData[57].attribute /* cSVGN1.id variable */.start = data->simulationInfo->realParameter[84] /* cSVGN1.id0 PARAM */;
    data->localData[0]->realVars[57] /* cSVGN1.id variable */ = data->modelData->realVarsData[57].attribute /* cSVGN1.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* cSVGN1.id */.name, (modelica_real) data->localData[0]->realVars[57] /* cSVGN1.id variable */);
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
$START.cSVGN1.vq = cSVGN1.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->modelData->realVarsData[71].attribute /* cSVGN1.vq variable */.start = data->simulationInfo->realParameter[132] /* cSVGN1.vq0 PARAM */;
    data->localData[0]->realVars[71] /* cSVGN1.vq variable */ = data->modelData->realVarsData[71].attribute /* cSVGN1.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* cSVGN1.vq */.name, (modelica_real) data->localData[0]->realVars[71] /* cSVGN1.vq variable */);
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
$START.cSVGN1.vd = cSVGN1.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->modelData->realVarsData[70].attribute /* cSVGN1.vd variable */.start = data->simulationInfo->realParameter[130] /* cSVGN1.vd0 PARAM */;
    data->localData[0]->realVars[70] /* cSVGN1.vd variable */ = data->modelData->realVarsData[70].attribute /* cSVGN1.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* cSVGN1.vd */.name, (modelica_real) data->localData[0]->realVars[70] /* cSVGN1.vd variable */);
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
$START.cSVGN1.anglev = cSVGN1.anglev_rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->modelData->realVarsData[56].attribute /* cSVGN1.anglev variable */.start = data->simulationInfo->realParameter[76] /* cSVGN1.anglev_rad PARAM */;
    data->localData[0]->realVars[56] /* cSVGN1.anglev variable */ = data->modelData->realVarsData[56].attribute /* cSVGN1.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* cSVGN1.anglev */.name, (modelica_real) data->localData[0]->realVars[56] /* cSVGN1.anglev variable */);
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
$START.gENSAL.PSIq = gENSAL.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->modelData->realVarsData[98].attribute /* gENSAL.PSIq variable */.start = data->simulationInfo->realParameter[236] /* gENSAL.PSIq0 PARAM */;
    data->localData[0]->realVars[98] /* gENSAL.PSIq variable */ = data->modelData->realVarsData[98].attribute /* gENSAL.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gENSAL.PSIq */.name, (modelica_real) data->localData[0]->realVars[98] /* gENSAL.PSIq variable */);
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
$START.gENSAL.PSId = gENSAL.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->modelData->realVarsData[96].attribute /* gENSAL.PSId variable */.start = data->simulationInfo->realParameter[228] /* gENSAL.PSId0 PARAM */;
    data->localData[0]->realVars[96] /* gENSAL.PSId variable */ = data->modelData->realVarsData[96].attribute /* gENSAL.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENSAL.PSId */.name, (modelica_real) data->localData[0]->realVars[96] /* gENSAL.PSId variable */);
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
$START.gENSAL.PSIppd = gENSAL.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->modelData->realVarsData[97].attribute /* gENSAL.PSIppd variable */.start = data->simulationInfo->realParameter[234] /* gENSAL.PSIppd0 PARAM */;
    data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */ = data->modelData->realVarsData[97].attribute /* gENSAL.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENSAL.PSIppd */.name, (modelica_real) data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
$START.gENSAL.PSIppq = gENSAL.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->modelData->realVarsData[7].attribute /* gENSAL.PSIppq STATE(1) */.start = data->simulationInfo->realParameter[235] /* gENSAL.PSIppq0 PARAM */;
    data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENSAL.PSIppq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENSAL.PSIppq */.name, (modelica_real) data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */);
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
$START.gENSAL.PSIkd = gENSAL.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->modelData->realVarsData[6].attribute /* gENSAL.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[229] /* gENSAL.PSIkd0 PARAM */;
    data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENSAL.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENSAL.PSIkd */.name, (modelica_real) data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$START.gENSAL.Epq = gENSAL.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  data->modelData->realVarsData[5].attribute /* gENSAL.Epq STATE(1) */.start = data->simulationInfo->realParameter[211] /* gENSAL.Epq0 PARAM */;
    data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENSAL.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENSAL.Epq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 987
type: SIMPLE_ASSIGN
$START.gENSAL.uq = gENSAL.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  data->modelData->realVarsData[106].attribute /* gENSAL.uq variable */.start = data->simulationInfo->realParameter[275] /* gENSAL.uq0 PARAM */;
    data->localData[0]->realVars[106] /* gENSAL.uq variable */ = data->modelData->realVarsData[106].attribute /* gENSAL.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* gENSAL.uq */.name, (modelica_real) data->localData[0]->realVars[106] /* gENSAL.uq variable */);
  TRACE_POP
}

/*
equation index: 988
type: SIMPLE_ASSIGN
$START.gENSAL.ud = gENSAL.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->modelData->realVarsData[105].attribute /* gENSAL.ud variable */.start = data->simulationInfo->realParameter[274] /* gENSAL.ud0 PARAM */;
    data->localData[0]->realVars[105] /* gENSAL.ud variable */ = data->modelData->realVarsData[105].attribute /* gENSAL.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[105].info /* gENSAL.ud */.name, (modelica_real) data->localData[0]->realVars[105] /* gENSAL.ud variable */);
  TRACE_POP
}

/*
equation index: 989
type: SIMPLE_ASSIGN
$START.gENSAL.iq = gENSAL.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->modelData->realVarsData[104].attribute /* gENSAL.iq variable */.start = data->simulationInfo->realParameter[269] /* gENSAL.iq0 PARAM */;
    data->localData[0]->realVars[104] /* gENSAL.iq variable */ = data->modelData->realVarsData[104].attribute /* gENSAL.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* gENSAL.iq */.name, (modelica_real) data->localData[0]->realVars[104] /* gENSAL.iq variable */);
  TRACE_POP
}

/*
equation index: 990
type: SIMPLE_ASSIGN
$START.gENSAL.id = gENSAL.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->modelData->realVarsData[103].attribute /* gENSAL.id variable */.start = data->simulationInfo->realParameter[267] /* gENSAL.id0 PARAM */;
    data->localData[0]->realVars[103] /* gENSAL.id variable */ = data->modelData->realVarsData[103].attribute /* gENSAL.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* gENSAL.id */.name, (modelica_real) data->localData[0]->realVars[103] /* gENSAL.id variable */);
  TRACE_POP
}

/*
equation index: 991
type: SIMPLE_ASSIGN
$START.gENSAL.Te = gENSAL.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->modelData->realVarsData[100].attribute /* gENSAL.Te variable */.start = data->simulationInfo->realParameter[272] /* gENSAL.pm0 PARAM */;
    data->localData[0]->realVars[100] /* gENSAL.Te variable */ = data->modelData->realVarsData[100].attribute /* gENSAL.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gENSAL.Te */.name, (modelica_real) data->localData[0]->realVars[100] /* gENSAL.Te variable */);
  TRACE_POP
}

/*
equation index: 992
type: SIMPLE_ASSIGN
$START.gENSAL.Q = gENSAL.Q_0 / gENSAL.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->modelData->realVarsData[99].attribute /* gENSAL.Q variable */.start = DIVISION(data->simulationInfo->realParameter[238] /* gENSAL.Q_0 PARAM */,data->simulationInfo->realParameter[244] /* gENSAL.S_b PARAM */,"gENSAL.S_b");
    data->localData[0]->realVars[99] /* gENSAL.Q variable */ = data->modelData->realVarsData[99].attribute /* gENSAL.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gENSAL.Q */.name, (modelica_real) data->localData[0]->realVars[99] /* gENSAL.Q variable */);
  TRACE_POP
}

/*
equation index: 993
type: SIMPLE_ASSIGN
$START.gENSAL.P = gENSAL.P_0 / gENSAL.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->modelData->realVarsData[94].attribute /* gENSAL.P variable */.start = DIVISION(data->simulationInfo->realParameter[237] /* gENSAL.P_0 PARAM */,data->simulationInfo->realParameter[244] /* gENSAL.S_b PARAM */,"gENSAL.S_b");
    data->localData[0]->realVars[94] /* gENSAL.P variable */ = data->modelData->realVarsData[94].attribute /* gENSAL.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENSAL.P */.name, (modelica_real) data->localData[0]->realVars[94] /* gENSAL.P variable */);
  TRACE_POP
}

/*
equation index: 994
type: SIMPLE_ASSIGN
$START.gENSAL.anglei = atan2(gENSAL.ii0, gENSAL.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  data->modelData->realVarsData[101].attribute /* gENSAL.anglei variable */.start = atan2(data->simulationInfo->realParameter[268] /* gENSAL.ii0 PARAM */, data->simulationInfo->realParameter[270] /* gENSAL.ir0 PARAM */);
    data->localData[0]->realVars[101] /* gENSAL.anglei variable */ = data->modelData->realVarsData[101].attribute /* gENSAL.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[101].info /* gENSAL.anglei */.name, (modelica_real) data->localData[0]->realVars[101] /* gENSAL.anglei variable */);
  TRACE_POP
}

/*
equation index: 995
type: SIMPLE_ASSIGN
$START.gENSAL.I = sqrt(gENSAL.ir0 ^ 2.0 + gENSAL.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[270] /* gENSAL.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[268] /* gENSAL.ii0 PARAM */;
  data->modelData->realVarsData[92].attribute /* gENSAL.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[92] /* gENSAL.I variable */ = data->modelData->realVarsData[92].attribute /* gENSAL.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENSAL.I */.name, (modelica_real) data->localData[0]->realVars[92] /* gENSAL.I variable */);
  TRACE_POP
}

/*
equation index: 996
type: SIMPLE_ASSIGN
$START.gENSAL.anglev = gENSAL.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  data->modelData->realVarsData[102].attribute /* gENSAL.anglev variable */.start = data->simulationInfo->realParameter[262] /* gENSAL.angle_0rad PARAM */;
    data->localData[0]->realVars[102] /* gENSAL.anglev variable */ = data->modelData->realVarsData[102].attribute /* gENSAL.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[102].info /* gENSAL.anglev */.name, (modelica_real) data->localData[0]->realVars[102] /* gENSAL.anglev variable */);
  TRACE_POP
}

/*
equation index: 997
type: SIMPLE_ASSIGN
$START.gENSAL.delta = gENSAL.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->modelData->realVarsData[8].attribute /* gENSAL.delta STATE(1) */.start = data->simulationInfo->realParameter[263] /* gENSAL.delta0 PARAM */;
    data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENSAL.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENSAL.delta */.name, (modelica_real) data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
$START.gENSAL.ISORCE = gENSAL.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->modelData->realVarsData[93].attribute /* gENSAL.ISORCE variable */.start = data->simulationInfo->realParameter[265] /* gENSAL.efd0 PARAM */;
    data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */ = data->modelData->realVarsData[93].attribute /* gENSAL.ISORCE variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENSAL.ISORCE */.name, (modelica_real) data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */);
  TRACE_POP
}

/*
equation index: 999
type: SIMPLE_ASSIGN
$START.gENSAL.PELEC = gENSAL.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  data->modelData->realVarsData[95].attribute /* gENSAL.PELEC variable */.start = data->simulationInfo->realParameter[271] /* gENSAL.p0 PARAM */;
    data->localData[0]->realVars[95] /* gENSAL.PELEC variable */ = data->modelData->realVarsData[95].attribute /* gENSAL.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENSAL.PELEC */.name, (modelica_real) data->localData[0]->realVars[95] /* gENSAL.PELEC variable */);
  TRACE_POP
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
$START.gENSAL.ETERM = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  data->modelData->realVarsData[91].attribute /* gENSAL.ETERM variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[91] /* gENSAL.ETERM variable */ = data->modelData->realVarsData[91].attribute /* gENSAL.ETERM variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* gENSAL.ETERM */.name, (modelica_real) data->localData[0]->realVars[91] /* gENSAL.ETERM variable */);
  TRACE_POP
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
$START.SHUNT.angle = SHUNT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  data->modelData->realVarsData[44].attribute /* SHUNT.angle variable */.start = data->simulationInfo->realParameter[36] /* SHUNT.angle_0 PARAM */;
    data->localData[0]->realVars[44] /* SHUNT.angle variable */ = data->modelData->realVarsData[44].attribute /* SHUNT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* SHUNT.angle */.name, (modelica_real) data->localData[0]->realVars[44] /* SHUNT.angle variable */);
  TRACE_POP
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  data->modelData->realVarsData[29].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[29] /* FAULT.angle variable */ = data->modelData->realVarsData[29].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[29].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[29] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  data->modelData->realVarsData[28].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[28] /* FAULT.V variable */ = data->modelData->realVarsData[28].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[28] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  data->modelData->realVarsData[37].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[37] /* GEN2.angle variable */ = data->modelData->realVarsData[37].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[37] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  data->modelData->realVarsData[36].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[199] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[36] /* GEN2.V variable */ = data->modelData->realVarsData[36].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[36] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  data->modelData->realVarsData[41].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[41] /* LOAD.angle variable */ = data->modelData->realVarsData[41].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[41] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  data->modelData->realVarsData[33].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[33] /* GEN1.angle variable */ = data->modelData->realVarsData[33].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  data->modelData->realVarsData[79].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[175] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[79] /* constantLoad.v variable */ = data->modelData->realVarsData[79].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[79] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  data->modelData->realVarsData[74].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[161] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[74] /* constantLoad.angle variable */ = data->modelData->realVarsData[74].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[74] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  data->modelData->realVarsData[77].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[170] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[77] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[77].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[77] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  data->modelData->realVarsData[78].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[171] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[78] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  data->modelData->realVarsData[81].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[184] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[186] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[81] /* gENCLS.Q variable */ = data->modelData->realVarsData[81].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[81] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->modelData->realVarsData[80].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[183] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[186] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[80] /* gENCLS.P variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  data->modelData->realVarsData[85].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[195] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[85] /* gENCLS.iq variable */ = data->modelData->realVarsData[85].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[85] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  data->modelData->realVarsData[84].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[193] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[84] /* gENCLS.id variable */ = data->modelData->realVarsData[84].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[84] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  data->modelData->realVarsData[90].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[203] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[90] /* gENCLS.vq variable */ = data->modelData->realVarsData[90].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[90] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->modelData->realVarsData[89].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[200] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[89] /* gENCLS.vd variable */ = data->modelData->realVarsData[89].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[89] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->modelData->realVarsData[4].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[201] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[4] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[4] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  data->modelData->realVarsData[83].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[190] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[83] /* gENCLS.anglev variable */ = data->modelData->realVarsData[83].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[83] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  data->modelData->realVarsData[3].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[191] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[3].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  data->modelData->realVarsData[87].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[194] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[87] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[87].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[87] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  data->modelData->realVarsData[88].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[196] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[88] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[88].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[88] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  data->modelData->realVarsData[149].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[149].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[149] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  data->modelData->realVarsData[150].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[150].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[150] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
$START.pwLine2.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  data->modelData->realVarsData[139].attribute /* pwLine2.vr.im variable */.start = data->simulationInfo->realParameter[202] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[139].info /* pwLine2.vr.im */.name, (modelica_real) data->localData[0]->realVars[139] /* pwLine2.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
$START.pwLine2.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  data->modelData->realVarsData[140].attribute /* pwLine2.vr.re variable */.start = data->simulationInfo->realParameter[204] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[140].info /* pwLine2.vr.re */.name, (modelica_real) data->localData[0]->realVars[140] /* pwLine2.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = cSVGN1.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  data->modelData->realVarsData[127].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[131] /* cSVGN1.vi0 PARAM */;
    data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[127].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[127] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = cSVGN1.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  data->modelData->realVarsData[128].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[133] /* cSVGN1.vr0 PARAM */;
    data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[128].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[128] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  data->modelData->realVarsData[129].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[176] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[129].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[129] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  data->modelData->realVarsData[130].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[177] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[130] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENSAL.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[268] /* gENSAL.ii0 PARAM */);
    data->localData[0]->realVars[115] /* pwLine.is.im variable */ = data->modelData->realVarsData[115].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[115].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[115] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENSAL.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[270] /* gENSAL.ir0 PARAM */);
    data->localData[0]->realVars[116] /* pwLine.is.re variable */ = data->modelData->realVarsData[116].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[116].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[116] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENSAL.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[277] /* gENSAL.vi0 PARAM */;
    data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = data->modelData->realVarsData[117].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[117].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[117] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENSAL.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[278] /* gENSAL.vr0 PARAM */;
    data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = data->modelData->realVarsData[118].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  data->modelData->realVarsData[32].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[32] /* GEN1.V variable */ = data->modelData->realVarsData[32].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[32] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
$START.cSVGN1.v = cSVGN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  data->modelData->realVarsData[69].attribute /* cSVGN1.v variable */.start = data->simulationInfo->realParameter[129] /* cSVGN1.v_0 PARAM */;
    data->localData[0]->realVars[69] /* cSVGN1.v variable */ = data->modelData->realVarsData[69].attribute /* cSVGN1.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* cSVGN1.v */.name, (modelica_real) data->localData[0]->realVars[69] /* cSVGN1.v variable */);
  TRACE_POP
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  data->modelData->realVarsData[82].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[199] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[82] /* gENCLS.V variable */ = data->modelData->realVarsData[82].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[82] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  data->modelData->realVarsData[40].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[40] /* LOAD.V variable */ = data->modelData->realVarsData[40].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[40] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_971(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_972(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_973(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_974(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_975(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_976(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_977(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_978(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_979(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_980(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_981(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_982(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_983(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_984(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_985(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_986(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_987(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_988(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_989(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_990(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_991(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_992(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_993(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_994(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_995(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_996(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_997(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_998(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_999(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1000(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1001(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1002(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1003(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1004(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1005(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1006(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1007(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1008(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1009(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1010(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1011(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1012(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1013(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1014(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1015(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1016(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1017(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1018(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1019(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1020(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1021(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1022(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1023(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1024(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1025(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1026(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1027(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1028(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1029(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1030(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1031(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1032(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1033(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1034(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1035(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1036(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1037(data, threadData);

  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1038(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_535(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_534(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_533(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_581(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_540(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_538(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_532(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_531(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_528(DATA *data, threadData_t *threadData);


/*
equation index: 1048
type: SIMPLE_ASSIGN
$cse9 = sin(cSVGN1.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  data->localData[0]->realVars[27] /* $cse9 variable */ = sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */);
  TRACE_POP
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
$cse10 = cos(cSVGN1.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  data->localData[0]->realVars[21] /* $cse10 variable */ = cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */);
  TRACE_POP
}
extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_590(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_589(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_587(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_586(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_584(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_583(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_579(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_578(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_577(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_575(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_574(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_573(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_569(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_568(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_567(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_566(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_565(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_564(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_563(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_562(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_557(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_556(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_555(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_554(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_553(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_552(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_549(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_548(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_547(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_546(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_544(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_543(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_542(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_527(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_526(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_525(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_524(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_510(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_507(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_504(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_496(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_489(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_488(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_481(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_480(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_479(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_477(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_468(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_467(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_465(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_463(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_462(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_461(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_460(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_459(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_458(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_457(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_454(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_453(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_452(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_451(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_450(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_448(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_444(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_443(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_442(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_441(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_440(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_438(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_437(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_436(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_435(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_434(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_433(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_432(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_430(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_429(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_411(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_400(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_396(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_394(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_383(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_379(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_377(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_366(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_362(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_360(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_349(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_345(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_343(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_332(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_328(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_325(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_322(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_317(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_311(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_310(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_307(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_306(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_305(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_304(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_303(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_301(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_300(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_296(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_293(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_290(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_265(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_264(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_258(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_257(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_256(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_255(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_254(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_253(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_251(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_250(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_249(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_239(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_232(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_230(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_223(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_221(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_217(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_215(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_213(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_210(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_208(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_206(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_204(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_202(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_200(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_197(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_195(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_193(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_191(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_189(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_187(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_184(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_182(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_13(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_12(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_11(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_10(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1257
type: ALGORITHM

  assert(cSVGN1.leadLagLim.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and cSVGN1.leadLagLim.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= cSVGN1.leadLagLim.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(cSVGN1.leadLagLim.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,194,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= cSVGN1.leadLagLim.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->simulationInfo->integerParameter[5] /* cSVGN1.leadLagLim.limiter.homotopyType PARAM */,1);
    tmp1 = LessEq(data->simulationInfo->integerParameter[5] /* cSVGN1.leadLagLim.limiter.homotopyType PARAM */,4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* cSVGN1.leadLagLim.limiter.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",12,9,13,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncSVGN1.leadLagLim.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and cSVGN1.leadLagLim.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1258
type: ALGORITHM

  assert(cSVGN1.leadLagLim.integrator.initType >= Modelica.Blocks.Types.Init.NoInit and cSVGN1.leadLagLim.integrator.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= cSVGN1.leadLagLim.integrator.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(cSVGN1.leadLagLim.integrator.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,170,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= cSVGN1.leadLagLim.integrator.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->simulationInfo->integerParameter[4] /* cSVGN1.leadLagLim.integrator.initType PARAM */,1);
    tmp6 = LessEq(data->simulationInfo->integerParameter[4] /* cSVGN1.leadLagLim.integrator.initType PARAM */,4);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* cSVGN1.leadLagLim.integrator.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",19,5,21,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncSVGN1.leadLagLim.integrator.initType >= Modelica.Blocks.Types.Init.NoInit and cSVGN1.leadLagLim.integrator.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1259
type: ALGORITHM

  assert(cSVGN1.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and cSVGN1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= cSVGN1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(cSVGN1.leadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,159,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= cSVGN1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->simulationInfo->integerParameter[0] /* cSVGN1.leadLag.TF.initType PARAM */,1);
    tmp11 = LessEq(data->simulationInfo->integerParameter[0] /* cSVGN1.leadLag.TF.initType PARAM */,4);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[0] /* cSVGN1.leadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",1279,5,1282,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncSVGN1.leadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and cSVGN1.leadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_535(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_534(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_533(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_540(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_538(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_532(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_531(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_528(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1048(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1049(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_590(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_589(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_587(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_584(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_579(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_578(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_575(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_573(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_564(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_557(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_547(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_546(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_544(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_527(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_526(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_525(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_524(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_510(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_507(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_504(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_496(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_489(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_481(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_480(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_479(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_477(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_467(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_461(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_460(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_459(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_458(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_454(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_452(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_440(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_436(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_434(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_383(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_379(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_360(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_345(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_343(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_306(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_305(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_304(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_303(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_301(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_300(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_299(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_297(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_296(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_293(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_290(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_265(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_264(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_258(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_257(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_256(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_255(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_254(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_253(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_251(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_250(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_249(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_239(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_232(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_230(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_226(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_221(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_219(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_217(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_215(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_213(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_210(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_208(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_206(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_204(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_202(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_200(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_197(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_195(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_193(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_191(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_189(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_187(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_184(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_182(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_13(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_12(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_11(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_10(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1257(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1258(data, threadData);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_1259(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->realVars[86] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[86].time_unvarying = 1;
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

