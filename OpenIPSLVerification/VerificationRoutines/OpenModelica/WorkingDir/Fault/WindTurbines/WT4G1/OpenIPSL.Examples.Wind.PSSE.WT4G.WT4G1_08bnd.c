/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 528
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->modelData->realVarsData[24].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[24] /* GEN2.angle variable */ = data->modelData->realVarsData[24].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[24].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[24] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS2_1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->modelData->realVarsData[23].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */;
    data->localData[0]->realVars[23] /* GEN2.V variable */ = data->modelData->realVarsData[23].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[23] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->modelData->realVarsData[16].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[16] /* FAULT.angle variable */ = data->modelData->realVarsData[16].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[16].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[16] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->modelData->realVarsData[15].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[15] /* FAULT.V variable */ = data->modelData->realVarsData[15].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[15] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->modelData->realVarsData[20].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[20] /* GEN1.angle variable */ = data->modelData->realVarsData[20].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[20] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
$START.wT4G1.delta = wT4G1.angle0_rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->modelData->realVarsData[83].attribute /* wT4G1.delta variable */.start = data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */;
    data->localData[0]->realVars[83] /* wT4G1.delta variable */ = data->modelData->realVarsData[83].attribute /* wT4G1.delta variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* wT4G1.delta */.name, (modelica_real) data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
$START.wT4G1.K2.state = wT4G1.K2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->modelData->realVarsData[4].attribute /* wT4G1.K2.state STATE(1) */.start = data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */;
    data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */ = data->modelData->realVarsData[4].attribute /* wT4G1.K2.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* wT4G1.K2.state */.name, (modelica_real) data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
$START.wT4G1.K2.y = wT4G1.K2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->modelData->realVarsData[79].attribute /* wT4G1.K2.y variable */.start = data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */;
    data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ = data->modelData->realVarsData[79].attribute /* wT4G1.K2.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* wT4G1.K2.y */.name, (modelica_real) data->localData[0]->realVars[79] /* wT4G1.K2.y variable */);
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
$START.wT4G1.IxL = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->modelData->realVarsData[74].attribute /* wT4G1.IxL variable */.start = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
    data->localData[0]->realVars[74] /* wT4G1.IxL variable */ = data->modelData->realVarsData[74].attribute /* wT4G1.IxL variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* wT4G1.IxL */.name, (modelica_real) data->localData[0]->realVars[74] /* wT4G1.IxL variable */);
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
$START.wT4G1.IyL = wT4G1.Iy0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->modelData->realVarsData[76].attribute /* wT4G1.IyL variable */.start = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
    data->localData[0]->realVars[76] /* wT4G1.IyL variable */ = data->modelData->realVarsData[76].attribute /* wT4G1.IyL variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[76].info /* wT4G1.IyL */.name, (modelica_real) data->localData[0]->realVars[76] /* wT4G1.IyL variable */);
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
$START.wT4G1.Iperr.u2 = wT4G1.Ipcmd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->modelData->realVarsData[70].attribute /* wT4G1.Iperr.u2 variable */.start = data->simulationInfo->realParameter[96] /* wT4G1.Ipcmd0 PARAM */;
    data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */ = data->modelData->realVarsData[70].attribute /* wT4G1.Iperr.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* wT4G1.Iperr.u2 */.name, (modelica_real) data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */);
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
$START.wT4G1.Q = wT4G1.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->modelData->realVarsData[81].attribute /* wT4G1.Q variable */.start = data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */;
    data->localData[0]->realVars[81] /* wT4G1.Q variable */ = data->modelData->realVarsData[81].attribute /* wT4G1.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* wT4G1.Q */.name, (modelica_real) data->localData[0]->realVars[81] /* wT4G1.Q variable */);
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
$START.wT4G1.P = wT4G1.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->modelData->realVarsData[80].attribute /* wT4G1.P variable */.start = data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */;
    data->localData[0]->realVars[80] /* wT4G1.P variable */ = data->modelData->realVarsData[80].attribute /* wT4G1.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* wT4G1.P */.name, (modelica_real) data->localData[0]->realVars[80] /* wT4G1.P variable */);
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
$START.wT4G1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->modelData->realVarsData[82].attribute /* wT4G1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[82] /* wT4G1.V variable */ = data->modelData->realVarsData[82].attribute /* wT4G1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* wT4G1.V */.name, (modelica_real) data->localData[0]->realVars[82] /* wT4G1.V variable */);
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
$START.wT4G1.Iy = wT4G1.K1.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->modelData->realVarsData[75].attribute /* wT4G1.Iy variable */.start = data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */;
    data->localData[0]->realVars[75] /* wT4G1.Iy variable */ = data->modelData->realVarsData[75].attribute /* wT4G1.Iy variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* wT4G1.Iy */.name, (modelica_real) data->localData[0]->realVars[75] /* wT4G1.Iy variable */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
$START.wT4G1.K.y = wT4G1.K.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->modelData->realVarsData[2].attribute /* wT4G1.K.y STATE(1) */.start = data->simulationInfo->realParameter[103] /* wT4G1.K.y_start PARAM */;
    data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */ = data->modelData->realVarsData[2].attribute /* wT4G1.K.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* wT4G1.K.y */.name, (modelica_real) data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
$START.wT4G1.K1.state = wT4G1.K1.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->modelData->realVarsData[3].attribute /* wT4G1.K1.state STATE(1) */.start = data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */;
    data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */ = data->modelData->realVarsData[3].attribute /* wT4G1.K1.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* wT4G1.K1.state */.name, (modelica_real) data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
$START.pwLine2.is.im = -wT4G1.ii1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->modelData->realVarsData[66].attribute /* pwLine2.is.im variable */.start = (-data->simulationInfo->realParameter[136] /* wT4G1.ii1 PARAM */);
    data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = data->modelData->realVarsData[66].attribute /* pwLine2.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* pwLine2.is.im */.name, (modelica_real) data->localData[0]->realVars[66] /* pwLine2.is.im variable */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
$START.pwLine2.is.re = -wT4G1.ir1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->modelData->realVarsData[67].attribute /* pwLine2.is.re variable */.start = (-data->simulationInfo->realParameter[140] /* wT4G1.ir1 PARAM */);
    data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = data->modelData->realVarsData[67].attribute /* pwLine2.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* pwLine2.is.re */.name, (modelica_real) data->localData[0]->realVars[67] /* pwLine2.is.re variable */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
$START.pwLine2.vs.im = wT4G1.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->modelData->realVarsData[68].attribute /* pwLine2.vs.im variable */.start = data->simulationInfo->realParameter[150] /* wT4G1.vi0 PARAM */;
    data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* pwLine2.vs.im */.name, (modelica_real) data->localData[0]->realVars[68] /* pwLine2.vs.im variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
$START.pwLine2.vs.re = wT4G1.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->modelData->realVarsData[69].attribute /* pwLine2.vs.re variable */.start = data->simulationInfo->realParameter[151] /* wT4G1.vr0 PARAM */;
    data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* pwLine2.vs.re */.name, (modelica_real) data->localData[0]->realVars[69] /* pwLine2.vs.re variable */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$START.gENCLS2_1.Q = gENCLS2_1.Q_0 / gENCLS2_1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->modelData->realVarsData[28].attribute /* gENCLS2_1.Q variable */.start = DIVISION(data->simulationInfo->realParameter[31] /* gENCLS2_1.Q_0 PARAM */,data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */,"gENCLS2_1.S_b");
    data->localData[0]->realVars[28] /* gENCLS2_1.Q variable */ = data->modelData->realVarsData[28].attribute /* gENCLS2_1.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* gENCLS2_1.Q */.name, (modelica_real) data->localData[0]->realVars[28] /* gENCLS2_1.Q variable */);
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$START.gENCLS2_1.P = gENCLS2_1.P_0 / gENCLS2_1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->modelData->realVarsData[27].attribute /* gENCLS2_1.P variable */.start = DIVISION(data->simulationInfo->realParameter[30] /* gENCLS2_1.P_0 PARAM */,data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */,"gENCLS2_1.S_b");
    data->localData[0]->realVars[27] /* gENCLS2_1.P variable */ = data->modelData->realVarsData[27].attribute /* gENCLS2_1.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* gENCLS2_1.P */.name, (modelica_real) data->localData[0]->realVars[27] /* gENCLS2_1.P variable */);
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$START.gENCLS2_1.iq = gENCLS2_1.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq variable */.start = data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */;
    data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* gENCLS2_1.iq */.name, (modelica_real) data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$START.gENCLS2_1.id = gENCLS2_1.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->modelData->realVarsData[31].attribute /* gENCLS2_1.id variable */.start = data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */;
    data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* gENCLS2_1.id */.name, (modelica_real) data->localData[0]->realVars[31] /* gENCLS2_1.id variable */);
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$START.gENCLS2_1.vq = gENCLS2_1.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->modelData->realVarsData[37].attribute /* gENCLS2_1.vq variable */.start = data->simulationInfo->realParameter[50] /* gENCLS2_1.vq0 PARAM */;
    data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */ = data->modelData->realVarsData[37].attribute /* gENCLS2_1.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* gENCLS2_1.vq */.name, (modelica_real) data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$START.gENCLS2_1.vd = gENCLS2_1.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->modelData->realVarsData[36].attribute /* gENCLS2_1.vd variable */.start = data->simulationInfo->realParameter[47] /* gENCLS2_1.vd0 PARAM */;
    data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */ = data->modelData->realVarsData[36].attribute /* gENCLS2_1.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* gENCLS2_1.vd */.name, (modelica_real) data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
$START.gENCLS2_1.eq = gENCLS2_1.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->modelData->realVarsData[1].attribute /* gENCLS2_1.eq STATE(1) */.start = data->simulationInfo->realParameter[48] /* gENCLS2_1.vf0 PARAM */;
    data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS2_1.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS2_1.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
$START.gENCLS2_1.anglev = gENCLS2_1.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->modelData->realVarsData[30].attribute /* gENCLS2_1.anglev variable */.start = data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */;
    data->localData[0]->realVars[30] /* gENCLS2_1.anglev variable */ = data->modelData->realVarsData[30].attribute /* gENCLS2_1.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* gENCLS2_1.anglev */.name, (modelica_real) data->localData[0]->realVars[30] /* gENCLS2_1.anglev variable */);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
$START.gENCLS2_1.delta = gENCLS2_1.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->modelData->realVarsData[0].attribute /* gENCLS2_1.delta STATE(1) */.start = data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */;
    data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS2_1.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS2_1.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
$START.gENCLS2_1.p.ii = gENCLS2_1.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->modelData->realVarsData[34].attribute /* gENCLS2_1.p.ii variable */.start = data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */;
    data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */ = data->modelData->realVarsData[34].attribute /* gENCLS2_1.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* gENCLS2_1.p.ii */.name, (modelica_real) data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */);
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
$START.gENCLS2_1.p.ir = gENCLS2_1.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->modelData->realVarsData[35].attribute /* gENCLS2_1.p.ir variable */.start = data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */;
    data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */ = data->modelData->realVarsData[35].attribute /* gENCLS2_1.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* gENCLS2_1.p.ir */.name, (modelica_real) data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->modelData->realVarsData[58].attribute /* pwLine1.vs.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[58] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->modelData->realVarsData[59].attribute /* pwLine1.vs.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[59] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$START.pwLine.vr.im = gENCLS2_1.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->modelData->realVarsData[48].attribute /* pwLine.vr.im variable */.start = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
    data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = data->modelData->realVarsData[48].attribute /* pwLine.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* pwLine.vr.im */.name, (modelica_real) data->localData[0]->realVars[48] /* pwLine.vr.im variable */);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$START.pwLine.vr.re = gENCLS2_1.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[49].attribute /* pwLine.vr.re variable */.start = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
    data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = data->modelData->realVarsData[49].attribute /* pwLine.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* pwLine.vr.re */.name, (modelica_real) data->localData[0]->realVars[49] /* pwLine.vr.re variable */);
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->modelData->realVarsData[19].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[19] /* GEN1.V variable */ = data->modelData->realVarsData[19].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[19].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[19] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
$START.gENCLS2_1.V = gENCLS2_1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->modelData->realVarsData[29].attribute /* gENCLS2_1.V variable */.start = data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */;
    data->localData[0]->realVars[29] /* gENCLS2_1.V variable */ = data->modelData->realVarsData[29].attribute /* gENCLS2_1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[29].info /* gENCLS2_1.V */.name, (modelica_real) data->localData[0]->realVars[29] /* gENCLS2_1.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_528(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_529(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_530(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_531(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_532(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_533(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_534(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_535(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_536(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_537(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_538(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_539(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_540(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_541(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_542(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_543(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_544(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_545(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_546(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_547(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_548(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_549(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_550(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_551(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_552(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_553(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_554(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_555(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_556(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_557(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_558(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_559(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_560(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_561(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_562(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_563(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_564(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_565(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_295(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_278(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_277(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_276(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_275(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_274(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_273(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_272(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_271(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_270(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_269(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_268(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_267(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_266(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_264(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_252(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_247(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_245(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_234(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_230(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_228(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_217(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_213(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_210(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_207(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_206(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_205(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_204(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_197(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_196(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_195(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_194(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_193(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_190(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_188(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_186(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_184(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_183(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_181(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_179(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_178(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_177(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_176(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_175(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_173(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_172(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_171(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_169(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_161(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_156(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_154(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_152(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_150(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_148(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_145(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_140(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_139(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_138(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_135(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_133(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_132(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_131(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_130(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_129(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_128(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_127(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_126(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_125(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_124(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_123(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_121(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_113(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_108(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_106(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_104(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_102(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_100(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_97(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_95(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_93(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_91(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_89(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_87(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_84(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 672
type: ALGORITHM

  assert(wT4G1.variableLimiter.homotopyType >= Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy and wT4G1.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed, "Variable violating min/max constraint: Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy <= wT4G1.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed, has value: " + String(wT4G1.variableLimiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,201,"Variable violating min/max constraint: Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy <= wT4G1.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->simulationInfo->integerParameter[5] /* wT4G1.variableLimiter.homotopyType PARAM */,1);
    tmp1 = LessEq(data->simulationInfo->integerParameter[5] /* wT4G1.variableLimiter.homotopyType PARAM */,3);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* wT4G1.variableLimiter.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",130,5,131,65,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.variableLimiter.homotopyType >= Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy and wT4G1.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 673
type: ALGORITHM

  assert(wT4G1.imLimited_max.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and wT4G1.imLimited_max.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= wT4G1.imLimited_max.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(wT4G1.imLimited_max.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,188,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= wT4G1.imLimited_max.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->simulationInfo->integerParameter[4] /* wT4G1.imLimited_max.homotopyType PARAM */,1);
    tmp6 = LessEq(data->simulationInfo->integerParameter[4] /* wT4G1.imLimited_max.homotopyType PARAM */,4);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* wT4G1.imLimited_max.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",12,9,13,69,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.imLimited_max.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and wT4G1.imLimited_max.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 674
type: ALGORITHM

  assert(wT4G1.K.initType >= Modelica.Blocks.Types.Init.NoInit and wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(wT4G1.K.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,149,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */,1);
    tmp11 = LessEq(data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */,4);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.3/Blocks/Continuous.mo",19,5,21,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.K.initType >= Modelica.Blocks.Types.Init.NoInit and wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_295(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_294(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_292(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_291(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_289(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_288(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_286(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_283(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_281(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_279(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_278(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_277(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_276(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_275(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_274(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_273(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_272(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_271(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_270(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_269(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_268(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_267(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_266(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_264(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_252(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_247(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_245(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_234(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_230(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_228(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_217(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_213(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_210(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_207(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_206(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_205(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_204(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_203(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_202(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_201(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_199(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_197(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_196(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_195(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_194(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_193(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_190(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_188(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_186(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_184(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_183(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_181(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_179(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_178(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_177(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_176(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_175(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_173(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_172(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_171(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_169(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_161(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_156(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_154(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_152(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_150(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_148(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_145(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_140(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_139(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_138(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_135(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_133(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_132(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_131(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_130(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_129(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_128(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_127(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_126(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_125(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_124(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_123(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_121(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_113(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_108(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_106(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_104(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_102(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_100(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_97(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_95(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_93(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_91(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_89(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_87(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_84(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_672(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_673(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_674(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->realVars[33] /* gENCLS2_1.omega variable */ = 0.0;
  data->modelData->realVarsData[33].time_unvarying = 1;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

