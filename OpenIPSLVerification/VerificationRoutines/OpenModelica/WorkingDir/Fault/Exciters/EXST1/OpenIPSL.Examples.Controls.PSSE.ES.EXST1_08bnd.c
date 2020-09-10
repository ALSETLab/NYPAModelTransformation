/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 854
type: SIMPLE_ASSIGN
$START.eXST1.imDerivativeLag.x = eXST1.imDerivativeLag.x_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->modelData->realVarsData[2].attribute /* eXST1.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[122] /* eXST1.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[2].attribute /* eXST1.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eXST1.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
$START.eXST1.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->modelData->realVarsData[63].attribute /* eXST1.XADIFD variable */.start = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* eXST1.XADIFD */.name, (modelica_real) data->localData[0]->realVars[63] /* eXST1.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
$START.eXST1.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->modelData->realVarsData[56].attribute /* eXST1.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[56] /* eXST1.ECOMP variable */ = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eXST1.ECOMP */.name, (modelica_real) data->localData[0]->realVars[56] /* eXST1.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
$START.eXST1.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->modelData->realVarsData[57].attribute /* eXST1.EFD variable */.start = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[57] /* eXST1.EFD variable */ = data->modelData->realVarsData[57].attribute /* eXST1.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* eXST1.EFD */.name, (modelica_real) data->localData[0]->realVars[57] /* eXST1.EFD variable */);
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->modelData->realVarsData[87].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[87] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->modelData->realVarsData[86].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[86] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  data->modelData->realVarsData[88].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[204] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = data->modelData->realVarsData[88].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[88] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->modelData->realVarsData[84].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[195] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->modelData->realVarsData[84].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[84] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[197] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->modelData->realVarsData[8].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  data->modelData->realVarsData[7].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[176] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  data->modelData->realVarsData[6].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[175] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  data->modelData->realVarsData[97].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[250] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->modelData->realVarsData[97].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  data->modelData->realVarsData[96].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[249] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[96] /* gENROE.ud variable */ = data->modelData->realVarsData[96].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  data->modelData->realVarsData[95].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->modelData->realVarsData[95].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  data->modelData->realVarsData[94].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[94] /* gENROE.id variable */ = data->modelData->realVarsData[94].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[94] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  data->modelData->realVarsData[90].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[90] /* gENROE.Te variable */ = data->modelData->realVarsData[90].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->modelData->realVarsData[89].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[206] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[89] /* gENROE.Q variable */ = data->modelData->realVarsData[89].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[89] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  data->modelData->realVarsData[82].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[205] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[82] /* gENROE.P variable */ = data->modelData->realVarsData[82].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[82] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  data->modelData->realVarsData[92].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[92] /* gENROE.anglei variable */ = data->modelData->realVarsData[92].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[92] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */;
  data->modelData->realVarsData[81].attribute /* gENROE.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[81] /* gENROE.I variable */ = data->modelData->realVarsData[81].attribute /* gENROE.I variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* gENROE.I */.name, (modelica_real) data->localData[0]->realVars[81] /* gENROE.I variable */);
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  data->modelData->realVarsData[93].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[93] /* gENROE.anglev variable */ = data->modelData->realVarsData[93].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[93] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  data->modelData->realVarsData[10].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[238] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  data->modelData->realVarsData[83].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[83] /* gENROE.PELEC variable */ = data->modelData->realVarsData[83].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[83] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[31] /* FAULT.angle variable */ = data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[31] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[30] /* FAULT.V variable */ = data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[30] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[39] /* GEN2.angle variable */ = data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[39] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[38] /* GEN2.V variable */ = data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[38] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[43] /* LOAD.angle variable */ = data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[43] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[35] /* GEN1.angle variable */ = data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[35] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.v variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[48] /* constantLoad.angle variable */ = data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[51] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 887
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[52] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  data->modelData->realVarsData[71].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[149] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[71] /* gENCLS.Q variable */ = data->modelData->realVarsData[71].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[71] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  data->modelData->realVarsData[70].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[148] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[70] /* gENCLS.P variable */ = data->modelData->realVarsData[70].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[70] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  data->modelData->realVarsData[75].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->modelData->realVarsData[75].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[75] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  data->modelData->realVarsData[74].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->modelData->realVarsData[74].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[74] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  data->modelData->realVarsData[80].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[168] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  data->modelData->realVarsData[79].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[165] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[79] /* gENCLS.vd variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[166] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->modelData->realVarsData[73].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[73] /* gENCLS.anglev variable */ = data->modelData->realVarsData[73].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[73] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  data->modelData->realVarsData[77].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[77].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[77] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  data->modelData->realVarsData[78].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[78].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[78] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->modelData->realVarsData[130].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[130] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->modelData->realVarsData[131].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[131].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[131] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->modelData->realVarsData[118].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  data->modelData->realVarsData[119].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[119].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[119] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 903
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  data->modelData->realVarsData[120].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[120] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->modelData->realVarsData[121].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[121].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[121] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->modelData->realVarsData[106].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[106] /* pwLine.is.im variable */ = data->modelData->realVarsData[106].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[106] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  data->modelData->realVarsData[107].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[107] /* pwLine.is.re variable */ = data->modelData->realVarsData[107].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[107] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  data->modelData->realVarsData[108].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = data->modelData->realVarsData[108].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[108] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->modelData->realVarsData[109].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = data->modelData->realVarsData[109].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[109] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 909
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[34] /* GEN1.V variable */ = data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[34] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->modelData->realVarsData[72].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[72] /* gENCLS.V variable */ = data->modelData->realVarsData[72].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[72] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->modelData->realVarsData[42].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[42] /* LOAD.V variable */ = data->modelData->realVarsData[42].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[42] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_854(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_855(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_856(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_857(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_858(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_859(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_860(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_861(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_862(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_863(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_864(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_865(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_866(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_867(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_868(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_869(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_870(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_871(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_872(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_873(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_874(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_875(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_876(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_877(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_878(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_879(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_880(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_881(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_882(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_883(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_884(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_885(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_886(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_887(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_888(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_889(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_890(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_891(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_892(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_893(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_894(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_895(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_896(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_897(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_898(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_899(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_900(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_901(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_902(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_903(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_904(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_905(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_906(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_907(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_908(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_909(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_910(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_911(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_523(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_520(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_519(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_518(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_517(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_516(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_515(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_514(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_513(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_512(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_511(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_509(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_364(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_353(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_302(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_287(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_281(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_280(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_276(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_275(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_273(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_270(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_269(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_267(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_264(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_263(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_262(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_261(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_260(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_259(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_244(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_236(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_235(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_231(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_229(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_227(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_226(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_225(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_180(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_174(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_170(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_167(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_165(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_163(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_161(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_159(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_157(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_154(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1103
type: ALGORITHM

  assert(eXST1.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXST1.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,163,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */,1);
    tmp1 = LessEq(data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */,4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",300,5,303,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1104
type: ALGORITHM

  assert(eXST1.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eXST1.imDerivativeLag.T, has value: " + String(eXST1.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,80,"Variable violating min constraint: 1e-60 <= eXST1.imDerivativeLag.T, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp5 = GreaterEq(data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp5)
    {
      tmp7 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",298,5,299,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1105
type: ALGORITHM

  assert(eXST1.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and eXST1.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= eXST1.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(eXST1.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,182,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= eXST1.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->simulationInfo->integerParameter[6] /* eXST1.limiter.homotopyType PARAM */,1);
    tmp10 = LessEq(data->simulationInfo->integerParameter[6] /* eXST1.limiter.homotopyType PARAM */,4);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* eXST1.limiter.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",12,9,13,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and eXST1.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1106
type: ALGORITHM

  assert(eXST1.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXST1.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,160,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp14 = GreaterEq(data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */,1);
    tmp15 = LessEq(data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",1279,5,1282,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_523(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_520(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_519(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_518(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_517(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_516(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_515(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_514(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_513(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_512(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_511(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_509(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_476(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_474(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_471(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_469(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_468(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_466(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_465(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_463(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_462(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_461(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_459(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_457(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_456(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_455(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_453(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_451(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_450(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_442(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_416(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_364(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_353(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_347(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_336(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_302(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_298(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_287(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_281(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_280(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_276(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_273(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_270(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_269(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_267(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_264(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_263(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_262(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_261(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_260(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_259(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_244(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_236(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_235(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_231(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_229(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_227(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_226(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_225(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_224(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_223(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_222(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_221(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_220(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_219(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_217(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_209(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_204(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_202(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_200(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_198(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_196(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_193(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_191(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_189(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_187(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_185(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_183(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_180(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_174(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_170(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_167(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_165(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_163(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_159(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_157(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1103(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1104(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1105(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_1106(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->realVars[76] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[76].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

