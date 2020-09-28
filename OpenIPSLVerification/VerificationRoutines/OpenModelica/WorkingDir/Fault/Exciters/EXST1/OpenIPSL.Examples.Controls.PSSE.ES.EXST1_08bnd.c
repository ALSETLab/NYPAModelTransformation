/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 481
type: SIMPLE_ASSIGN
$START.eXST1.imDerivativeLag.x = eXST1.imDerivativeLag.x_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->modelData->realVarsData[2].attribute /* eXST1.imDerivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[122] /* eXST1.imDerivativeLag.x_start PARAM */;
    data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */ = data->modelData->realVarsData[2].attribute /* eXST1.imDerivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* eXST1.imDerivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[2] /* eXST1.imDerivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
$START.eXST1.XADIFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->modelData->realVarsData[63].attribute /* eXST1.XADIFD variable */.start = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[63] /* eXST1.XADIFD variable */ = data->modelData->realVarsData[63].attribute /* eXST1.XADIFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* eXST1.XADIFD */.name, (modelica_real) data->localData[0]->realVars[63] /* eXST1.XADIFD variable */);
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
$START.eXST1.ECOMP = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->modelData->realVarsData[56].attribute /* eXST1.ECOMP variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[56] /* eXST1.ECOMP variable */ = data->modelData->realVarsData[56].attribute /* eXST1.ECOMP variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eXST1.ECOMP */.name, (modelica_real) data->localData[0]->realVars[56] /* eXST1.ECOMP variable */);
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
$START.eXST1.EFD = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->modelData->realVarsData[57].attribute /* eXST1.EFD variable */.start = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
    data->localData[0]->realVars[57] /* eXST1.EFD variable */ = data->modelData->realVarsData[57].attribute /* eXST1.EFD variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* eXST1.EFD */.name, (modelica_real) data->localData[0]->realVars[57] /* eXST1.EFD variable */);
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
$START.gENROE.PSIppq = gENROE.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->modelData->realVarsData[87].attribute /* gENROE.PSIppq variable */.start = data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */;
    data->localData[0]->realVars[87] /* gENROE.PSIppq variable */ = data->modelData->realVarsData[87].attribute /* gENROE.PSIppq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* gENROE.PSIppq */.name, (modelica_real) data->localData[0]->realVars[87] /* gENROE.PSIppq variable */);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
$START.gENROE.PSIppd = gENROE.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->modelData->realVarsData[86].attribute /* gENROE.PSIppd variable */.start = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */;
    data->localData[0]->realVars[86] /* gENROE.PSIppd variable */ = data->modelData->realVarsData[86].attribute /* gENROE.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* gENROE.PSIppd */.name, (modelica_real) data->localData[0]->realVars[86] /* gENROE.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
$START.gENROE.PSIq = gENROE.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->modelData->realVarsData[88].attribute /* gENROE.PSIq variable */.start = data->simulationInfo->realParameter[204] /* gENROE.PSIq0 PARAM */;
    data->localData[0]->realVars[88] /* gENROE.PSIq variable */ = data->modelData->realVarsData[88].attribute /* gENROE.PSIq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gENROE.PSIq */.name, (modelica_real) data->localData[0]->realVars[88] /* gENROE.PSIq variable */);
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
$START.gENROE.PSId = gENROE.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->modelData->realVarsData[84].attribute /* gENROE.PSId variable */.start = data->simulationInfo->realParameter[195] /* gENROE.PSId0 PARAM */;
    data->localData[0]->realVars[84] /* gENROE.PSId variable */ = data->modelData->realVarsData[84].attribute /* gENROE.PSId variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* gENROE.PSId */.name, (modelica_real) data->localData[0]->realVars[84] /* gENROE.PSId variable */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
$START.gENROE.PSIkq = gENROE.PSIkq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->modelData->realVarsData[9].attribute /* gENROE.PSIkq STATE(1) */.start = data->simulationInfo->realParameter[197] /* gENROE.PSIkq0 PARAM */;
    data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */ = data->modelData->realVarsData[9].attribute /* gENROE.PSIkq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* gENROE.PSIkq */.name, (modelica_real) data->localData[0]->realVars[9] /* gENROE.PSIkq STATE(1) */);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
$START.gENROE.PSIkd = gENROE.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->modelData->realVarsData[8].attribute /* gENROE.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */;
    data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */ = data->modelData->realVarsData[8].attribute /* gENROE.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gENROE.PSIkd */.name, (modelica_real) data->localData[0]->realVars[8] /* gENROE.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
$START.gENROE.Epq = gENROE.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->modelData->realVarsData[7].attribute /* gENROE.Epq STATE(1) */.start = data->simulationInfo->realParameter[176] /* gENROE.Epq0 PARAM */;
    data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */ = data->modelData->realVarsData[7].attribute /* gENROE.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gENROE.Epq */.name, (modelica_real) data->localData[0]->realVars[7] /* gENROE.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
$START.gENROE.Epd = gENROE.Epd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->modelData->realVarsData[6].attribute /* gENROE.Epd STATE(1) */.start = data->simulationInfo->realParameter[175] /* gENROE.Epd0 PARAM */;
    data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */ = data->modelData->realVarsData[6].attribute /* gENROE.Epd STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gENROE.Epd */.name, (modelica_real) data->localData[0]->realVars[6] /* gENROE.Epd STATE(1) */);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
$START.gENROE.uq = gENROE.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->modelData->realVarsData[97].attribute /* gENROE.uq variable */.start = data->simulationInfo->realParameter[250] /* gENROE.uq0 PARAM */;
    data->localData[0]->realVars[97] /* gENROE.uq variable */ = data->modelData->realVarsData[97].attribute /* gENROE.uq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* gENROE.uq */.name, (modelica_real) data->localData[0]->realVars[97] /* gENROE.uq variable */);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
$START.gENROE.ud = gENROE.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->modelData->realVarsData[96].attribute /* gENROE.ud variable */.start = data->simulationInfo->realParameter[249] /* gENROE.ud0 PARAM */;
    data->localData[0]->realVars[96] /* gENROE.ud variable */ = data->modelData->realVarsData[96].attribute /* gENROE.ud variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* gENROE.ud */.name, (modelica_real) data->localData[0]->realVars[96] /* gENROE.ud variable */);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$START.gENROE.iq = gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->modelData->realVarsData[95].attribute /* gENROE.iq variable */.start = data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */;
    data->localData[0]->realVars[95] /* gENROE.iq variable */ = data->modelData->realVarsData[95].attribute /* gENROE.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* gENROE.iq */.name, (modelica_real) data->localData[0]->realVars[95] /* gENROE.iq variable */);
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$START.gENROE.id = gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->modelData->realVarsData[94].attribute /* gENROE.id variable */.start = data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */;
    data->localData[0]->realVars[94] /* gENROE.id variable */ = data->modelData->realVarsData[94].attribute /* gENROE.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* gENROE.id */.name, (modelica_real) data->localData[0]->realVars[94] /* gENROE.id variable */);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
$START.gENROE.Te = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->modelData->realVarsData[90].attribute /* gENROE.Te variable */.start = data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */;
    data->localData[0]->realVars[90] /* gENROE.Te variable */ = data->modelData->realVarsData[90].attribute /* gENROE.Te variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gENROE.Te */.name, (modelica_real) data->localData[0]->realVars[90] /* gENROE.Te variable */);
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
$START.gENROE.Q = gENROE.Q_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->modelData->realVarsData[89].attribute /* gENROE.Q variable */.start = DIVISION(data->simulationInfo->realParameter[206] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[89] /* gENROE.Q variable */ = data->modelData->realVarsData[89].attribute /* gENROE.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gENROE.Q */.name, (modelica_real) data->localData[0]->realVars[89] /* gENROE.Q variable */);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$START.gENROE.P = gENROE.P_0 / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->modelData->realVarsData[82].attribute /* gENROE.P variable */.start = DIVISION(data->simulationInfo->realParameter[205] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */,"gENROE.S_b");
    data->localData[0]->realVars[82] /* gENROE.P variable */ = data->modelData->realVarsData[82].attribute /* gENROE.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* gENROE.P */.name, (modelica_real) data->localData[0]->realVars[82] /* gENROE.P variable */);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
$START.gENROE.anglei = atan2(gENROE.ii0, gENROE.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->modelData->realVarsData[92].attribute /* gENROE.anglei variable */.start = atan2(data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */, data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[92] /* gENROE.anglei variable */ = data->modelData->realVarsData[92].attribute /* gENROE.anglei variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* gENROE.anglei */.name, (modelica_real) data->localData[0]->realVars[92] /* gENROE.anglei variable */);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
$START.gENROE.I = sqrt(gENROE.ir0 ^ 2.0 + gENROE.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
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
equation index: 502
type: SIMPLE_ASSIGN
$START.gENROE.anglev = gENROE.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->modelData->realVarsData[93].attribute /* gENROE.anglev variable */.start = data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */;
    data->localData[0]->realVars[93] /* gENROE.anglev variable */ = data->modelData->realVarsData[93].attribute /* gENROE.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* gENROE.anglev */.name, (modelica_real) data->localData[0]->realVars[93] /* gENROE.anglev variable */);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
$START.gENROE.delta = gENROE.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->modelData->realVarsData[10].attribute /* gENROE.delta STATE(1) */.start = data->simulationInfo->realParameter[238] /* gENROE.delta0 PARAM */;
    data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */ = data->modelData->realVarsData[10].attribute /* gENROE.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* gENROE.delta */.name, (modelica_real) data->localData[0]->realVars[10] /* gENROE.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
$START.gENROE.PELEC = gENROE.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->modelData->realVarsData[83].attribute /* gENROE.PELEC variable */.start = data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */;
    data->localData[0]->realVars[83] /* gENROE.PELEC variable */ = data->modelData->realVarsData[83].attribute /* gENROE.PELEC variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* gENROE.PELEC */.name, (modelica_real) data->localData[0]->realVars[83] /* gENROE.PELEC variable */);
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[31] /* FAULT.angle variable */ = data->modelData->realVarsData[31].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[31] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[30] /* FAULT.V variable */ = data->modelData->realVarsData[30].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[30] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[39] /* GEN2.angle variable */ = data->modelData->realVarsData[39].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[39] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[38] /* GEN2.V variable */ = data->modelData->realVarsData[38].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[38] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[43] /* LOAD.angle variable */ = data->modelData->realVarsData[43].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[43] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[35] /* GEN1.angle variable */ = data->modelData->realVarsData[35].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[35] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[53] /* constantLoad.v variable */ = data->modelData->realVarsData[53].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[53] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[48] /* constantLoad.angle variable */ = data->modelData->realVarsData[48].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[48] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[51] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[51].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[51] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[52] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[52].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[52] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->modelData->realVarsData[71].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[149] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[71] /* gENCLS.Q variable */ = data->modelData->realVarsData[71].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[71] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->modelData->realVarsData[70].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[148] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[70] /* gENCLS.P variable */ = data->modelData->realVarsData[70].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[70] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->modelData->realVarsData[75].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[75] /* gENCLS.iq variable */ = data->modelData->realVarsData[75].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[75] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->modelData->realVarsData[74].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[74] /* gENCLS.id variable */ = data->modelData->realVarsData[74].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[74] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->modelData->realVarsData[80].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[168] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[80] /* gENCLS.vq variable */ = data->modelData->realVarsData[80].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[80] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->modelData->realVarsData[79].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[165] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[79] /* gENCLS.vd variable */ = data->modelData->realVarsData[79].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[79] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[166] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[5] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->modelData->realVarsData[73].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[73] /* gENCLS.anglev variable */ = data->modelData->realVarsData[73].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[73] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[4] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->modelData->realVarsData[77].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[77] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[77].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[77] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->modelData->realVarsData[78].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[78] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[78].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[78] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->modelData->realVarsData[130].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[130] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[130].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[130].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[130] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->modelData->realVarsData[131].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[131] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[131].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[131].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[131] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->modelData->realVarsData[118].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[118] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[118].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[118].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[118] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->modelData->realVarsData[119].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[119] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[119].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[119].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[119] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->modelData->realVarsData[120].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[120] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[120].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[120].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[120] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->modelData->realVarsData[121].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[121] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[121].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[121].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[121] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENROE.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->modelData->realVarsData[106].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */);
    data->localData[0]->realVars[106] /* pwLine.is.im variable */ = data->modelData->realVarsData[106].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[106].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[106] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENROE.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->modelData->realVarsData[107].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */);
    data->localData[0]->realVars[107] /* pwLine.is.re variable */ = data->modelData->realVarsData[107].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[107].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[107] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENROE.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->modelData->realVarsData[108].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
    data->localData[0]->realVars[108] /* pwLine.vs.im variable */ = data->modelData->realVarsData[108].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[108].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[108] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENROE.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->modelData->realVarsData[109].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
    data->localData[0]->realVars[109] /* pwLine.vs.re variable */ = data->modelData->realVarsData[109].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[109].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[109] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[34] /* GEN1.V variable */ = data->modelData->realVarsData[34].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[34] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->modelData->realVarsData[72].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[72] /* gENCLS.V variable */ = data->modelData->realVarsData[72].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[72] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
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
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_481(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_482(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_483(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_484(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_485(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_486(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_487(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_488(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_489(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_490(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_491(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_492(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_493(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_494(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_495(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_496(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_497(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_498(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_499(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_500(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_501(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_502(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_503(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_504(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_505(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_506(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_507(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_508(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_509(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_510(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_511(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_512(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_513(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_514(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_515(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_516(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_517(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_518(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_519(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_520(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_521(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_522(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_523(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_524(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_525(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_526(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_527(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_538(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 539
type: SIMPLE_ASSIGN
gENROE.Xpp = gENROE.Xppd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[223] /* gENROE.Xpp PARAM */ = data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
gENROE.abs_PSIpp0 = (gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) ^ 0.5
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->simulationInfo->realParameter[199] /* gENROE.PSIpp0.re PARAM */;
  tmp1 = data->simulationInfo->realParameter[198] /* gENROE.PSIpp0.im PARAM */;
  tmp2 = (tmp0 * tmp0) + (tmp1 * tmp1);
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.PSIpp0.re ^ 2.0 + gENROE.PSIpp0.im ^ 2.0) was %g should be >= 0", tmp2);
  }
  data->simulationInfo->realParameter[231] /* gENROE.abs_PSIpp0 PARAM */ = sqrt(tmp2);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
gENROE.dsat = OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.abs_PSIpp0, gENROE.S10, gENROE.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->realParameter[239] /* gENROE.dsat PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->simulationInfo->realParameter[231] /* gENROE.abs_PSIpp0 PARAM */, data->simulationInfo->realParameter[210] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[211] /* gENROE.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
gENROE.PSIppd0 = gENROE.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ = data->simulationInfo->realParameter[201] /* gENROE.PSIpp0_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
gENROE.id0 = gENROE.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */ = data->simulationInfo->realParameter[178] /* gENROE.I_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
gENROE.efd0 = gENROE.PSIppd0 * (1.0 + gENROE.dsat) + gENROE.id0 * (gENROE.Xd - gENROE.Xpp)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */ = (data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */) * (1.0 + data->simulationInfo->realParameter[239] /* gENROE.dsat PARAM */) + (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */) * (data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[223] /* gENROE.Xpp PARAM */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
gENROE.EFD0 = gENROE.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[174] /* gENROE.EFD0 PARAM */ = data->simulationInfo->realParameter[240] /* gENROE.efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
eXST1.imLeadLag.T1 = eXST1.T_C
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ = data->simulationInfo->realParameter[93] /* eXST1.T_C PARAM */;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
eXST1.imLeadLag.par1.y = eXST1.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->simulationInfo->realParameter[138] /* eXST1.imLeadLag.par1.y PARAM */ = data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
eXST1.imLeadLag.T2 = eXST1.T_B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */ = data->simulationInfo->realParameter[92] /* eXST1.T_B PARAM */;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
eXST1.imLeadLag.par2.y = eXST1.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[139] /* eXST1.imLeadLag.par2.y PARAM */ = data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */;
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
eXST1.Vm1.T = eXST1.T_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */ = data->simulationInfo->realParameter[91] /* eXST1.T_A PARAM */;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
eXST1.Vm1.const.y = eXST1.Vm1.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[112] /* eXST1.Vm1.const.y PARAM */ = data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.T = eXST1.T_R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */ = data->simulationInfo->realParameter[95] /* eXST1.T_R PARAM */;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.const.y = eXST1.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[99] /* eXST1.TransducerDelay.const.y PARAM */ = data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
gENROE.p0 = gENROE.P_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[205] /* gENROE.P_0 PARAM */,data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
gENROE.iq0 = gENROE.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */ = data->simulationInfo->realParameter[179] /* gENROE.I_dq.re PARAM */;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
gENROE.pm0 = gENROE.p0 + gENROE.R_a * (gENROE.iq0 ^ 2.0 + gENROE.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */;
  tmp4 = data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */;
  data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */ = data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */ + (data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * ((tmp3 * tmp3) + (tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
gENROE.PMECH = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[193] /* gENROE.PMECH PARAM */ = data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
gENROE.PMECH0 = gENROE.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[194] /* gENROE.PMECH0 PARAM */ = data->simulationInfo->realParameter[247] /* gENROE.pm0 PARAM */;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
eXST1.Limiters.u2 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->simulationInfo->realParameter[90] /* eXST1.Limiters.u2 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
eXST1.VOEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[101] /* eXST1.VOEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
eXST1.add3_2.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[119] /* eXST1.add3_2.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
eXST1.VOTHSG = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->simulationInfo->realParameter[102] /* eXST1.VOTHSG PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
eXST1.Limiters.u1 = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[89] /* eXST1.Limiters.u1 PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
eXST1.VUEL = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[103] /* eXST1.VUEL PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->simulationInfo->realParameter[35] /* const.y PARAM */ = data->simulationInfo->realParameter[34] /* const.k PARAM */;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
eXST1.TransducerDelay.T_mod = if eXST1.TransducerDelay.T < 1e-15 then 1000.0 else eXST1.TransducerDelay.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  modelica_boolean tmp5;
  tmp5 = Less(data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */,1e-15);
  data->simulationInfo->realParameter[98] /* eXST1.TransducerDelay.T_mod PARAM */ = (tmp5?1000.0:data->simulationInfo->realParameter[97] /* eXST1.TransducerDelay.T PARAM */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.T = eXST1.T_F
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */ = data->simulationInfo->realParameter[94] /* eXST1.T_F PARAM */;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
eXST1.K_a.k = eXST1.K_A
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */ = data->simulationInfo->realParameter[83] /* eXST1.K_A PARAM */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
eXST1.Vm1.T_mod = if eXST1.Vm1.T < 1e-15 then 1000.0 else eXST1.Vm1.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  modelica_boolean tmp6;
  tmp6 = Less(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */,1e-15);
  data->simulationInfo->realParameter[111] /* eXST1.Vm1.T_mod PARAM */ = (tmp6?1000.0:data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */);
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
eXST1.limiter.uMin = eXST1.V_IMIN
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */ = data->simulationInfo->realParameter[105] /* eXST1.V_IMIN PARAM */;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
eXST1.limiter.uMax = eXST1.V_IMAX
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */ = data->simulationInfo->realParameter[104] /* eXST1.V_IMAX PARAM */;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
eXST1.imLeadLag.T2_dummy = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then 1000.0 else eXST1.imLeadLag.T2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  data->simulationInfo->realParameter[127] /* eXST1.imLeadLag.T2_dummy PARAM */ = (tmp7?1000.0:data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.a[1] = eXST1.imLeadLag.T2_dummy
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.TF.a[1] PARAM */ = data->simulationInfo->realParameter[127] /* eXST1.imLeadLag.T2_dummy PARAM */;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.a_end = if eXST1.imLeadLag.TF.a[2] > 1e-13 * sqrt(eXST1.imLeadLag.TF.a[1] ^ 2.0 + eXST1.imLeadLag.TF.a[2] ^ 2.0) then eXST1.imLeadLag.TF.a[2] else 1.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  tmp8 = data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.TF.a[1] PARAM */;
  tmp9 = data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */;
  tmp10 = Greater(data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */,(1e-13) * (sqrt((tmp8 * tmp8) + (tmp9 * tmp9))));
  data->simulationInfo->realParameter[130] /* eXST1.imLeadLag.TF.a_end PARAM */ = (tmp10?data->simulationInfo->realParameter[129] /* eXST1.imLeadLag.TF.a[2] PARAM */:1.0);
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.b[1] = eXST1.imLeadLag.K * eXST1.imLeadLag.T1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[131] /* eXST1.imLeadLag.TF.b[1] PARAM */ = (data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.bb[1] = eXST1.imLeadLag.TF.b[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[133] /* eXST1.imLeadLag.TF.bb[1] PARAM */ = data->simulationInfo->realParameter[131] /* eXST1.imLeadLag.TF.b[1] PARAM */;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.d = eXST1.imLeadLag.TF.bb[1] / eXST1.imLeadLag.TF.a[1]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[133] /* eXST1.imLeadLag.TF.bb[1] PARAM */,data->simulationInfo->realParameter[128] /* eXST1.imLeadLag.TF.a[1] PARAM */,"eXST1.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.b[2] = eXST1.imLeadLag.K
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[132] /* eXST1.imLeadLag.TF.b[2] PARAM */ = data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.bb[2] = eXST1.imLeadLag.TF.b[2]
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->realParameter[134] /* eXST1.imLeadLag.TF.bb[2] PARAM */ = data->simulationInfo->realParameter[132] /* eXST1.imLeadLag.TF.b[2] PARAM */;
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
gENROE.K4q = (gENROE.Xpq - gENROE.Xppq) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->simulationInfo->realParameter[191] /* gENROE.K4q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */,data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
gENROE.K3q = (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpq - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
gENROE.K4d = (gENROE.Xpd - gENROE.Xppd) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[190] /* gENROE.K4d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */,data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
gENROE.K3d = (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xpd - gENROE.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
gENROE.K2q = (gENROE.Xpq - gENROE.Xl) * (gENROE.Xppq - gENROE.Xl) / (gENROE.Xpq - gENROE.Xppq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->realParameter[187] /* gENROE.K2q PARAM */ = (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */,"gENROE.Xpq - gENROE.Xppq",equationIndexes));
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
gENROE.K1q = (gENROE.Xpq - gENROE.Xppq) * (gENROE.Xq - gENROE.Xpq) / (gENROE.Xpq - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  modelica_real tmp11;
  tmp11 = data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[185] /* gENROE.K1q PARAM */ = (data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */,(tmp11 * tmp11),"(gENROE.Xpq - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
gENROE.K2d = (gENROE.Xpd - gENROE.Xl) * (gENROE.Xppd - gENROE.Xl) / (gENROE.Xpd - gENROE.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[186] /* gENROE.K2d PARAM */ = (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */,"gENROE.Xpd - gENROE.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
gENROE.K1d = (gENROE.Xpd - gENROE.Xppd) * (gENROE.Xd - gENROE.Xpd) / (gENROE.Xpd - gENROE.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */;
  data->simulationInfo->realParameter[184] /* gENROE.K1d PARAM */ = (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */,(tmp12 * tmp12),"(gENROE.Xpd - gENROE.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
gENROE.PSIppq0 = gENROE.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */ = data->simulationInfo->realParameter[200] /* gENROE.PSIpp0_dq.im PARAM */;
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
gENROE.PSIq0 = gENROE.PSIppq0 - gENROE.Xppq * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->realParameter[204] /* gENROE.PSIq0 PARAM */ = data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */ - ((data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
gENROE.PSId0 = gENROE.PSIppd0 - gENROE.Xppd * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[195] /* gENROE.PSId0 PARAM */ = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ - ((data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
gENROE.PSIkq0 = ((gENROE.Xpq - gENROE.Xl) * gENROE.K3q * gENROE.iq0 - gENROE.PSIppq0) / (gENROE.K3q + gENROE.K4q)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->realParameter[197] /* gENROE.PSIkq0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * ((data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */)) - data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */,data->simulationInfo->realParameter[189] /* gENROE.K3q PARAM */ + data->simulationInfo->realParameter[191] /* gENROE.K4q PARAM */,"gENROE.K3q + gENROE.K4q",equationIndexes);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
gENROE.PSIkd0 = (gENROE.PSIppd0 + (gENROE.Xl - gENROE.Xpd) * gENROE.K3d * gENROE.id0) / (gENROE.K3d + gENROE.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ + (data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */) * ((data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */)),data->simulationInfo->realParameter[188] /* gENROE.K3d PARAM */ + data->simulationInfo->realParameter[190] /* gENROE.K4d PARAM */,"gENROE.K3d + gENROE.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
gENROE.Epd0 = gENROE.PSIkq0 + (gENROE.Xl - gENROE.Xpq) * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[175] /* gENROE.Epd0 PARAM */ = data->simulationInfo->realParameter[197] /* gENROE.PSIkq0 PARAM */ + (data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[226] /* gENROE.Xpq PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
gENROE.Epq0 = gENROE.PSIkd0 + (gENROE.Xpd - gENROE.Xl) * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[176] /* gENROE.Epq0 PARAM */ = data->simulationInfo->realParameter[196] /* gENROE.PSIkd0 PARAM */ + (data->simulationInfo->realParameter[222] /* gENROE.Xpd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
gENROE.uq0 = gENROE.PSIppd0 + (-gENROE.Xppd) * gENROE.id0 - gENROE.R_a * gENROE.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[250] /* gENROE.uq0 PARAM */ = data->simulationInfo->realParameter[202] /* gENROE.PSIppd0 PARAM */ + ((-data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */)) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */));
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
gENROE.ud0 = gENROE.Xppq * gENROE.iq0 + (-gENROE.PSIppq0) - gENROE.R_a * gENROE.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[249] /* gENROE.ud0 PARAM */ = (data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */) * (data->simulationInfo->realParameter[244] /* gENROE.iq0 PARAM */) + (-data->simulationInfo->realParameter[203] /* gENROE.PSIppq0 PARAM */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (data->simulationInfo->realParameter[242] /* gENROE.id0 PARAM */));
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0 = Modelica.Math.atan3(gENROE.PSIpp0.im, gENROE.PSIpp0.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[233] /* gENROE.ang_PSIpp0 PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[198] /* gENROE.PSIpp0.im PARAM */, data->simulationInfo->realParameter[199] /* gENROE.PSIpp0.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
gENROE.ang_It = Modelica.Math.atan3(gENROE.It.im, gENROE.It.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[232] /* gENROE.ang_It PARAM */ = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[182] /* gENROE.It.im PARAM */, data->simulationInfo->realParameter[183] /* gENROE.It.re PARAM */, 0.0);
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
gENROE.ang_PSIpp0andIt = gENROE.ang_PSIpp0 - gENROE.ang_It
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[234] /* gENROE.ang_PSIpp0andIt PARAM */ = data->simulationInfo->realParameter[233] /* gENROE.ang_PSIpp0 PARAM */ - data->simulationInfo->realParameter[232] /* gENROE.ang_It PARAM */;
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
gENROE.a = gENROE.abs_PSIpp0 * (1.0 + gENROE.dsat * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[230] /* gENROE.a PARAM */ = (data->simulationInfo->realParameter[231] /* gENROE.abs_PSIpp0 PARAM */) * (1.0 + (data->simulationInfo->realParameter[239] /* gENROE.dsat PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[220] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[221] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)));
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
gENROE.b = (gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) ^ 0.5 * (gENROE.Xpp - gENROE.Xq)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp13 = data->simulationInfo->realParameter[183] /* gENROE.It.re PARAM */;
  tmp14 = data->simulationInfo->realParameter[182] /* gENROE.It.im PARAM */;
  tmp15 = (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(gENROE.It.re ^ 2.0 + gENROE.It.im ^ 2.0) was %g should be >= 0", tmp15);
  }
  data->simulationInfo->realParameter[237] /* gENROE.b PARAM */ = (sqrt(tmp15)) * (data->simulationInfo->realParameter[223] /* gENROE.Xpp PARAM */ - data->simulationInfo->realParameter[227] /* gENROE.Xq PARAM */);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
gENROE.delta0 = atan(gENROE.b * cos(gENROE.ang_PSIpp0andIt) / (gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a)) + gENROE.ang_PSIpp0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[238] /* gENROE.delta0 PARAM */ = atan((data->simulationInfo->realParameter[237] /* gENROE.b PARAM */) * (DIVISION_SIM(cos(data->simulationInfo->realParameter[234] /* gENROE.ang_PSIpp0andIt PARAM */),(data->simulationInfo->realParameter[237] /* gENROE.b PARAM */) * (sin(data->simulationInfo->realParameter[234] /* gENROE.ang_PSIpp0andIt PARAM */)) - data->simulationInfo->realParameter[230] /* gENROE.a PARAM */,"gENROE.b * sin(gENROE.ang_PSIpp0andIt) - gENROE.a",equationIndexes))) + data->simulationInfo->realParameter[233] /* gENROE.ang_PSIpp0 PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
gENROE.q0 = gENROE.Q_0 / gENROE.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[248] /* gENROE.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[206] /* gENROE.Q_0 PARAM */,data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */,"gENROE.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
gENROE.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
gENROE.CoB = gENROE.M_b / gENROE.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[192] /* gENROE.M_b PARAM */,data->simulationInfo->realParameter[212] /* gENROE.S_b PARAM */,"gENROE.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
gENROE.angle_0rad = 0.0174532925199433 * gENROE.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[235] /* gENROE.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
gENROE.vr0 = gENROE.v_0 * cos(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */ = (data->simulationInfo->realParameter[251] /* gENROE.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
gENROE.vi0 = gENROE.v_0 * sin(gENROE.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */ = (data->simulationInfo->realParameter[251] /* gENROE.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[236] /* gENROE.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
gENROE.ii0 = gENROE.CoB * (gENROE.q0 * gENROE.vr0 - gENROE.p0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
  tmp17 = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[243] /* gENROE.ii0 PARAM */ = (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[248] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */) - ((data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */)),(tmp16 * tmp16) + (tmp17 * tmp17),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
gENROE.ir0 = (-gENROE.CoB) * (gENROE.p0 * gENROE.vr0 + gENROE.q0 * gENROE.vi0) / (gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */;
  tmp19 = data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */;
  data->simulationInfo->realParameter[245] /* gENROE.ir0 PARAM */ = ((-data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[246] /* gENROE.p0 PARAM */) * (data->simulationInfo->realParameter[253] /* gENROE.vr0 PARAM */) + (data->simulationInfo->realParameter[248] /* gENROE.q0 PARAM */) * (data->simulationInfo->realParameter[252] /* gENROE.vi0 PARAM */),(tmp18 * tmp18) + (tmp19 * tmp19),"gENROE.vr0 ^ 2.0 + gENROE.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
gENROE.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[241] /* gENROE.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
gENROE.w_b = 6.283185307179586 * gENROE.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[254] /* gENROE.w_b PARAM */ = (6.283185307179586) * (data->simulationInfo->realParameter[241] /* gENROE.fn PARAM */);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  tmp20 = Less(fabs(data->simulationInfo->realParameter[255] /* pwFault.R PARAM */),1e-15);
  tmp21 = Less(fabs(data->simulationInfo->realParameter[256] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */ = (tmp20 && tmp21);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[48] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[52] /* constantLoad.S_y.re PARAM */) * ((tmp22 * tmp22)) + data->simulationInfo->realParameter[50] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  modelica_real tmp23;
  tmp23 = data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[47] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[51] /* constantLoad.S_y.im PARAM */) * ((tmp23 * tmp23)) + data->simulationInfo->realParameter[49] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[46] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[36] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[36] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[59] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[74] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[60] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp26 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */)),(tmp25 * tmp25) + (tmp26 * tmp26),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */;
  tmp28 = data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[71] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[76] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[72] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[75] /* constantLoad.vi0 PARAM */),(tmp27 * tmp27) + (tmp28 * tmp28),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->realParameter[68] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[154] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[164] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[155] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[162] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[148] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[163] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[149] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
  tmp30 = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[162] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[163] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */),(tmp29 * tmp29) + (tmp30 * tmp30),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */;
  tmp32 = data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[162] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[163] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */)),(tmp31 * tmp31) + (tmp32 * tmp32),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[168] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[161] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[159] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->simulationInfo->realParameter[166] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[168] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[160] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[158] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->realParameter[165] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[169] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[167] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[156] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[147] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[151] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[157] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[296] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[294] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[292] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[293] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->simulationInfo->realParameter[295] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[285] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[283] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[281] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[282] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[284] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[274] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[272] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[270] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[271] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[273] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[263] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[261] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[259] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[260] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->realParameter[262] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
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
equation index: 729
type: ALGORITHM

  assert(eXST1.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXST1.imDerivativeLag.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,163,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp33 = GreaterEq(data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */,1);
    tmp34 = LessEq(data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */,4);
    if(!(tmp33 && tmp34))
    {
      tmp36 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",215,5,218,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.imDerivativeLag.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imDerivativeLag.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 730
type: ALGORITHM

  assert(eXST1.imDerivativeLag.T >= 1e-60, "Variable violating min constraint: 1e-60 <= eXST1.imDerivativeLag.T, has value: " + String(eXST1.imDerivativeLag.T, "g"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,80,"Variable violating min constraint: 1e-60 <= eXST1.imDerivativeLag.T, has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp38 = GreaterEq(data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */,1e-60);
    if(!tmp38)
    {
      tmp40 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",213,5,214,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.imDerivativeLag.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 731
type: ALGORITHM

  assert(eXST1.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eXST1.imLeadLag.TF.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,160,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp42 = GreaterEq(data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */,1);
    tmp43 = LessEq(data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */,4);
    if(!(tmp42 && tmp43))
    {
      tmp45 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1166,5,1169,31,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neXST1.imLeadLag.TF.initType >= Modelica.Blocks.Types.Init.NoInit and eXST1.imLeadLag.TF.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_539(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_542(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_543(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_545(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_547(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_548(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_549(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_550(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_551(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_552(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_553(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_554(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_555(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_556(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_557(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_558(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_560(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_561(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_562(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_563(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_564(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_565(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_566(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_567(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_568(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_569(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_570(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_571(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_574(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_576(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_577(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_580(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_581(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_582(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_583(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_584(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_585(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_586(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_587(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_588(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_589(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_595(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_596(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_597(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_598(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_599(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_600(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_601(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_602(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_604(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_605(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_606(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_607(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_608(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_609(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_610(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_611(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_612(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_615(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_618(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_619(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_620(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_621(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_622(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_631(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_632(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_633(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_634(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_635(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_636(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_637(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_638(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_639(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_640(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_641(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_642(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_643(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_644(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_645(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_646(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_647(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_648(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_649(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_650(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_651(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_652(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_653(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_654(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_655(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_656(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_657(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_658(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_671(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_674(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_675(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_677(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_678(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_679(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_680(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_681(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_682(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_683(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_684(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_685(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_686(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_687(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_688(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_689(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_690(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_691(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_692(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_694(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_695(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_696(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_697(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_698(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_700(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_701(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_702(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_703(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_704(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_706(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_707(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_708(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_709(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_710(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_712(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_713(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_714(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_715(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_716(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_718(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_149(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_147(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_146(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_144(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_143(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_729(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_730(data, threadData);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_731(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* eXST1.imLeadLag.TF.na PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* eXST1.imLeadLag.TF.nb PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* eXST1.imLeadLag.TF.nx PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->localData[0]->realVars[76] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[76].time_unvarying = 1;
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
  data->simulationInfo->realParameter[85] /* eXST1.K_F PARAM */ = 0.1;
  data->modelData->realParameterData[85].time_unvarying = 1;
  data->simulationInfo->realParameter[121] /* eXST1.imDerivativeLag.k PARAM */ = 0.1;
  data->modelData->realParameterData[121].time_unvarying = 1;
  data->simulationInfo->realParameter[146] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[146].time_unvarying = 1;
  data->simulationInfo->realParameter[172] /* gENROE.DQ_dq.im PARAM */ = -0.5650202843208616;
  data->modelData->realParameterData[172].time_unvarying = 1;
  data->simulationInfo->realParameter[173] /* gENROE.DQ_dq.re PARAM */ = 0.825077013560536;
  data->modelData->realParameterData[173].time_unvarying = 1;
  data->simulationInfo->realParameter[178] /* gENROE.I_dq.im PARAM */ = 0.248896193836464;
  data->modelData->realParameterData[178].time_unvarying = 1;
  data->simulationInfo->realParameter[179] /* gENROE.I_dq.re PARAM */ = 0.3177807746702022;
  data->modelData->realParameterData[179].time_unvarying = 1;
  data->simulationInfo->realParameter[180] /* gENROE.Is.im PARAM */ = -5.013342868567351;
  data->modelData->realParameterData[180].time_unvarying = 1;
  data->simulationInfo->realParameter[181] /* gENROE.Is.re PARAM */ = 0.7556357708851228;
  data->modelData->realParameterData[181].time_unvarying = 1;
  data->simulationInfo->realParameter[182] /* gENROE.It.im PARAM */ = -0.02580594464131273;
  data->modelData->realParameterData[182].time_unvarying = 1;
  data->simulationInfo->realParameter[183] /* gENROE.It.re PARAM */ = 0.4028250107397031;
  data->modelData->realParameterData[183].time_unvarying = 1;
  data->simulationInfo->realParameter[198] /* gENROE.PSIpp0.im PARAM */ = 0.1511271541770246;
  data->modelData->realParameterData[198].time_unvarying = 1;
  data->simulationInfo->realParameter[199] /* gENROE.PSIpp0.re PARAM */ = 1.00266857371347;
  data->modelData->realParameterData[199].time_unvarying = 1;
  data->simulationInfo->realParameter[200] /* gENROE.PSIpp0_dq.im PARAM */ = -0.4418365415628956;
  data->modelData->realParameterData[200].time_unvarying = 1;
  data->simulationInfo->realParameter[201] /* gENROE.PSIpp0_dq.re PARAM */ = 0.9126687000122171;
  data->modelData->realParameterData[201].time_unvarying = 1;
  data->simulationInfo->realParameter[208] /* gENROE.S.im PARAM */ = 0.05416582;
  data->modelData->realParameterData[208].time_unvarying = 1;
  data->simulationInfo->realParameter[209] /* gENROE.S.re PARAM */ = 0.4;
  data->modelData->realParameterData[209].time_unvarying = 1;
  data->simulationInfo->realParameter[217] /* gENROE.VT.im PARAM */ = 0.07056215202908395;
  data->modelData->realParameterData[217].time_unvarying = 1;
  data->simulationInfo->realParameter[218] /* gENROE.VT.re PARAM */ = 0.9975073847852077;
  data->modelData->realParameterData[218].time_unvarying = 1;
  data->simulationInfo->realParameter[228] /* gENROE.Zs.im PARAM */ = 0.2;
  data->modelData->realParameterData[228].time_unvarying = 1;
  data->simulationInfo->realParameter[229] /* gENROE.Zs.re PARAM */ = 0.0;
  data->modelData->realParameterData[229].time_unvarying = 1;
  data->simulationInfo->booleanParameter[45] /* eXST1.imDerivativeLag.zeroGain PARAM */ = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  data->simulationInfo->booleanParameter[46] /* eXST1.limiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  data->simulationInfo->booleanParameter[47] /* eXST1.limiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* eXST1.imDerivativeLag.initType PARAM */ = 4;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* eXST1.imLeadLag.TF.initType PARAM */ = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

