/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 311
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->modelData->realVarsData[24].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[24] /* GEN2.angle variable */ = data->modelData->realVarsData[24].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[24].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[24] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS2_1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->modelData->realVarsData[23].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */;
    data->localData[0]->realVars[23] /* GEN2.V variable */ = data->modelData->realVarsData[23].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[23] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->modelData->realVarsData[16].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[16] /* FAULT.angle variable */ = data->modelData->realVarsData[16].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[16].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[16] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->modelData->realVarsData[15].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[15] /* FAULT.V variable */ = data->modelData->realVarsData[15].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[15] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->modelData->realVarsData[20].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[20] /* GEN1.angle variable */ = data->modelData->realVarsData[20].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[20] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
$START.wT4G1.delta = wT4G1.angle0_rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->modelData->realVarsData[82].attribute /* wT4G1.delta variable */.start = data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */;
    data->localData[0]->realVars[82] /* wT4G1.delta variable */ = data->modelData->realVarsData[82].attribute /* wT4G1.delta variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* wT4G1.delta */.name, (modelica_real) data->localData[0]->realVars[82] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
$START.wT4G1.K2.state = wT4G1.K2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->modelData->realVarsData[4].attribute /* wT4G1.K2.state STATE(1) */.start = data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */;
    data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */ = data->modelData->realVarsData[4].attribute /* wT4G1.K2.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* wT4G1.K2.state */.name, (modelica_real) data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
$START.wT4G1.K2.y = wT4G1.K2.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->modelData->realVarsData[78].attribute /* wT4G1.K2.y variable */.start = data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */;
    data->localData[0]->realVars[78] /* wT4G1.K2.y variable */ = data->modelData->realVarsData[78].attribute /* wT4G1.K2.y variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* wT4G1.K2.y */.name, (modelica_real) data->localData[0]->realVars[78] /* wT4G1.K2.y variable */);
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
$START.wT4G1.IxL = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->modelData->realVarsData[74].attribute /* wT4G1.IxL variable */.start = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
    data->localData[0]->realVars[74] /* wT4G1.IxL variable */ = data->modelData->realVarsData[74].attribute /* wT4G1.IxL variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* wT4G1.IxL */.name, (modelica_real) data->localData[0]->realVars[74] /* wT4G1.IxL variable */);
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
$START.wT4G1.IyL = wT4G1.Iy0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->modelData->realVarsData[76].attribute /* wT4G1.IyL variable */.start = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
    data->localData[0]->realVars[76] /* wT4G1.IyL variable */ = data->modelData->realVarsData[76].attribute /* wT4G1.IyL variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[76].info /* wT4G1.IyL */.name, (modelica_real) data->localData[0]->realVars[76] /* wT4G1.IyL variable */);
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
$START.wT4G1.Iperr.u2 = wT4G1.Ipcmd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->modelData->realVarsData[70].attribute /* wT4G1.Iperr.u2 variable */.start = data->simulationInfo->realParameter[96] /* wT4G1.Ipcmd0 PARAM */;
    data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */ = data->modelData->realVarsData[70].attribute /* wT4G1.Iperr.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* wT4G1.Iperr.u2 */.name, (modelica_real) data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */);
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
$START.wT4G1.Q = wT4G1.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->modelData->realVarsData[80].attribute /* wT4G1.Q variable */.start = data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */;
    data->localData[0]->realVars[80] /* wT4G1.Q variable */ = data->modelData->realVarsData[80].attribute /* wT4G1.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* wT4G1.Q */.name, (modelica_real) data->localData[0]->realVars[80] /* wT4G1.Q variable */);
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
$START.wT4G1.P = wT4G1.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->modelData->realVarsData[79].attribute /* wT4G1.P variable */.start = data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */;
    data->localData[0]->realVars[79] /* wT4G1.P variable */ = data->modelData->realVarsData[79].attribute /* wT4G1.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* wT4G1.P */.name, (modelica_real) data->localData[0]->realVars[79] /* wT4G1.P variable */);
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
$START.wT4G1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->modelData->realVarsData[81].attribute /* wT4G1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[81] /* wT4G1.V variable */ = data->modelData->realVarsData[81].attribute /* wT4G1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* wT4G1.V */.name, (modelica_real) data->localData[0]->realVars[81] /* wT4G1.V variable */);
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
$START.wT4G1.Iy = wT4G1.K1.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->modelData->realVarsData[75].attribute /* wT4G1.Iy variable */.start = data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */;
    data->localData[0]->realVars[75] /* wT4G1.Iy variable */ = data->modelData->realVarsData[75].attribute /* wT4G1.Iy variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* wT4G1.Iy */.name, (modelica_real) data->localData[0]->realVars[75] /* wT4G1.Iy variable */);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
$START.wT4G1.K.y = wT4G1.K.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->modelData->realVarsData[2].attribute /* wT4G1.K.y STATE(1) */.start = data->simulationInfo->realParameter[103] /* wT4G1.K.y_start PARAM */;
    data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */ = data->modelData->realVarsData[2].attribute /* wT4G1.K.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* wT4G1.K.y */.name, (modelica_real) data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
$START.wT4G1.K1.state = wT4G1.K1.y_start
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->modelData->realVarsData[3].attribute /* wT4G1.K1.state STATE(1) */.start = data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */;
    data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */ = data->modelData->realVarsData[3].attribute /* wT4G1.K1.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* wT4G1.K1.state */.name, (modelica_real) data->localData[0]->realVars[3] /* wT4G1.K1.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
$START.pwLine2.is.im = -wT4G1.ii1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->modelData->realVarsData[66].attribute /* pwLine2.is.im variable */.start = (-data->simulationInfo->realParameter[136] /* wT4G1.ii1 PARAM */);
    data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = data->modelData->realVarsData[66].attribute /* pwLine2.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* pwLine2.is.im */.name, (modelica_real) data->localData[0]->realVars[66] /* pwLine2.is.im variable */);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
$START.pwLine2.is.re = -wT4G1.ir1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->modelData->realVarsData[67].attribute /* pwLine2.is.re variable */.start = (-data->simulationInfo->realParameter[140] /* wT4G1.ir1 PARAM */);
    data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = data->modelData->realVarsData[67].attribute /* pwLine2.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* pwLine2.is.re */.name, (modelica_real) data->localData[0]->realVars[67] /* pwLine2.is.re variable */);
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
$START.pwLine2.vs.im = wT4G1.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->modelData->realVarsData[68].attribute /* pwLine2.vs.im variable */.start = data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */;
    data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* pwLine2.vs.im */.name, (modelica_real) data->localData[0]->realVars[68] /* pwLine2.vs.im variable */);
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
$START.pwLine2.vs.re = wT4G1.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->modelData->realVarsData[69].attribute /* pwLine2.vs.re variable */.start = data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */;
    data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* pwLine2.vs.re */.name, (modelica_real) data->localData[0]->realVars[69] /* pwLine2.vs.re variable */);
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
$START.gENCLS2_1.Q = gENCLS2_1.Q_0 / gENCLS2_1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->modelData->realVarsData[28].attribute /* gENCLS2_1.Q variable */.start = DIVISION(data->simulationInfo->realParameter[31] /* gENCLS2_1.Q_0 PARAM */,data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */,"gENCLS2_1.S_b");
    data->localData[0]->realVars[28] /* gENCLS2_1.Q variable */ = data->modelData->realVarsData[28].attribute /* gENCLS2_1.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* gENCLS2_1.Q */.name, (modelica_real) data->localData[0]->realVars[28] /* gENCLS2_1.Q variable */);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
$START.gENCLS2_1.P = gENCLS2_1.P_0 / gENCLS2_1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->modelData->realVarsData[27].attribute /* gENCLS2_1.P variable */.start = DIVISION(data->simulationInfo->realParameter[30] /* gENCLS2_1.P_0 PARAM */,data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */,"gENCLS2_1.S_b");
    data->localData[0]->realVars[27] /* gENCLS2_1.P variable */ = data->modelData->realVarsData[27].attribute /* gENCLS2_1.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* gENCLS2_1.P */.name, (modelica_real) data->localData[0]->realVars[27] /* gENCLS2_1.P variable */);
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
$START.gENCLS2_1.iq = gENCLS2_1.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq variable */.start = data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */;
    data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* gENCLS2_1.iq */.name, (modelica_real) data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */);
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
$START.gENCLS2_1.id = gENCLS2_1.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->modelData->realVarsData[31].attribute /* gENCLS2_1.id variable */.start = data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */;
    data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* gENCLS2_1.id */.name, (modelica_real) data->localData[0]->realVars[31] /* gENCLS2_1.id variable */);
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
$START.gENCLS2_1.vq = gENCLS2_1.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->modelData->realVarsData[37].attribute /* gENCLS2_1.vq variable */.start = data->simulationInfo->realParameter[50] /* gENCLS2_1.vq0 PARAM */;
    data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */ = data->modelData->realVarsData[37].attribute /* gENCLS2_1.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* gENCLS2_1.vq */.name, (modelica_real) data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */);
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
$START.gENCLS2_1.vd = gENCLS2_1.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->modelData->realVarsData[36].attribute /* gENCLS2_1.vd variable */.start = data->simulationInfo->realParameter[47] /* gENCLS2_1.vd0 PARAM */;
    data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */ = data->modelData->realVarsData[36].attribute /* gENCLS2_1.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* gENCLS2_1.vd */.name, (modelica_real) data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */);
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
$START.gENCLS2_1.eq = gENCLS2_1.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->modelData->realVarsData[1].attribute /* gENCLS2_1.eq STATE(1) */.start = data->simulationInfo->realParameter[48] /* gENCLS2_1.vf0 PARAM */;
    data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS2_1.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS2_1.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
$START.gENCLS2_1.anglev = gENCLS2_1.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->modelData->realVarsData[30].attribute /* gENCLS2_1.anglev variable */.start = data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */;
    data->localData[0]->realVars[30] /* gENCLS2_1.anglev variable */ = data->modelData->realVarsData[30].attribute /* gENCLS2_1.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* gENCLS2_1.anglev */.name, (modelica_real) data->localData[0]->realVars[30] /* gENCLS2_1.anglev variable */);
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
$START.gENCLS2_1.delta = gENCLS2_1.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->modelData->realVarsData[0].attribute /* gENCLS2_1.delta STATE(1) */.start = data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */;
    data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS2_1.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS2_1.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
$START.gENCLS2_1.p.ii = gENCLS2_1.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->modelData->realVarsData[34].attribute /* gENCLS2_1.p.ii variable */.start = data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */;
    data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */ = data->modelData->realVarsData[34].attribute /* gENCLS2_1.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* gENCLS2_1.p.ii */.name, (modelica_real) data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */);
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
$START.gENCLS2_1.p.ir = gENCLS2_1.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->modelData->realVarsData[35].attribute /* gENCLS2_1.p.ir variable */.start = data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */;
    data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */ = data->modelData->realVarsData[35].attribute /* gENCLS2_1.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* gENCLS2_1.p.ir */.name, (modelica_real) data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->modelData->realVarsData[58].attribute /* pwLine1.vs.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[58] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->modelData->realVarsData[59].attribute /* pwLine1.vs.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[59] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
$START.pwLine.vr.im = gENCLS2_1.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->modelData->realVarsData[48].attribute /* pwLine.vr.im variable */.start = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
    data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = data->modelData->realVarsData[48].attribute /* pwLine.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* pwLine.vr.im */.name, (modelica_real) data->localData[0]->realVars[48] /* pwLine.vr.im variable */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$START.pwLine.vr.re = gENCLS2_1.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->modelData->realVarsData[49].attribute /* pwLine.vr.re variable */.start = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
    data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = data->modelData->realVarsData[49].attribute /* pwLine.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* pwLine.vr.re */.name, (modelica_real) data->localData[0]->realVars[49] /* pwLine.vr.re variable */);
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->modelData->realVarsData[19].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[19] /* GEN1.V variable */ = data->modelData->realVarsData[19].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[19].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[19] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
$START.gENCLS2_1.V = gENCLS2_1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
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
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_318(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_319(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_320(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_321(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_322(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_323(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_324(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_325(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_326(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_327(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_328(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_329(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_330(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_331(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_332(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_333(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_334(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_335(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_336(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_337(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_338(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_339(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_340(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_341(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_342(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_343(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_344(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_345(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_346(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_347(data, threadData);

  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_348(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 349
type: SIMPLE_ASSIGN
wT4G1.K1.T = wT4G1.T_IQCmd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */ = data->simulationInfo->realParameter[121] /* wT4G1.T_IQCmd PARAM */;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
wT4G1.K1.const.y = wT4G1.K1.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[107] /* wT4G1.K1.const.y PARAM */ = data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
wT4G1.K2.T = wT4G1.T_LVPL
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */ = data->simulationInfo->realParameter[122] /* wT4G1.T_LVPL PARAM */;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
wT4G1.K2.const.y = wT4G1.K2.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[113] /* wT4G1.K2.const.y PARAM */ = data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
wT4G1.variableLimiter.limit2 = wT4G1.const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[148] /* wT4G1.variableLimiter.limit2 PARAM */ = data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
wT4G1.const.y = wT4G1.const.k
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->realParameter[131] /* wT4G1.const.y PARAM */ = data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
wT4G1.angle0_rad = 0.0174532925199433 * wT4G1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[128] /* wT4G1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
wT4G1.p0 = wT4G1.P_0 / wT4G1.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[116] /* wT4G1.P_0 PARAM */,data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */,"wT4G1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
wT4G1.q0 = wT4G1.Q_0 / wT4G1.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[117] /* wT4G1.Q_0 PARAM */,data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */,"wT4G1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
wT4G1.vr0 = wT4G1.v_0 * cos(wT4G1.angle0_rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */ = (data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */));
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
wT4G1.vi0 = wT4G1.v_0 * sin(wT4G1.angle0_rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */ = (data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */));
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
wT4G1.ir0 = (wT4G1.p0 * wT4G1.vr0 + wT4G1.q0 * wT4G1.vi0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[139] /* wT4G1.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */) + (data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */),(tmp0 * tmp0) + (tmp1 * tmp1),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
wT4G1.Isr0 = wT4G1.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->realParameter[99] /* wT4G1.Isr0 PARAM */ = data->simulationInfo->realParameter[139] /* wT4G1.ir0 PARAM */;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
wT4G1.ii0 = (wT4G1.p0 * wT4G1.vi0 - wT4G1.q0 * wT4G1.vr0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */;
  tmp3 = data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[135] /* wT4G1.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */) - ((data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */)),(tmp2 * tmp2) + (tmp3 * tmp3),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
wT4G1.Isi0 = wT4G1.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->realParameter[98] /* wT4G1.Isi0 PARAM */ = data->simulationInfo->realParameter[135] /* wT4G1.ii0 PARAM */;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
wT4G1.Iy0 = (-wT4G1.Isr0) * sin(-wT4G1.angle0_rad) - cos(-wT4G1.angle0_rad) * wT4G1.Isi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */ = ((-data->simulationInfo->realParameter[99] /* wT4G1.Isr0 PARAM */)) * (sin((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))) - ((cos((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))) * (data->simulationInfo->realParameter[98] /* wT4G1.Isi0 PARAM */));
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
wT4G1.K1.u = wT4G1.Iy0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->realParameter[108] /* wT4G1.K1.u PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
wT4G1.I_qcmd = wT4G1.Iy0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[94] /* wT4G1.I_qcmd PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
wT4G1.I_qcmd0 = wT4G1.Iy0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->realParameter[95] /* wT4G1.I_qcmd0 PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
wT4G1.Ix0 = wT4G1.Isr0 * cos(-wT4G1.angle0_rad) - wT4G1.Isi0 * sin(-wT4G1.angle0_rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */ = (data->simulationInfo->realParameter[99] /* wT4G1.Isr0 PARAM */) * (cos((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))) - ((data->simulationInfo->realParameter[98] /* wT4G1.Isi0 PARAM */) * (sin((-data->simulationInfo->realParameter[127] /* wT4G1.angle0_rad PARAM */))));
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
wT4G1.Iperr.u1 = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->realParameter[97] /* wT4G1.Iperr.u1 PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
wT4G1.I_pcmd = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->realParameter[92] /* wT4G1.I_pcmd PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
wT4G1.I_pcmd0 = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->realParameter[93] /* wT4G1.I_pcmd0 PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = Less(fabs(data->simulationInfo->realParameter[52] /* pwFault.R PARAM */),1e-15);
  tmp5 = Less(fabs(data->simulationInfo->realParameter[53] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */ = (tmp4 && tmp5);
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
wT4G1.Ipcmd0 = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[96] /* wT4G1.Ipcmd0 PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
wT4G1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[119] /* wT4G1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
wT4G1.CoB = wT4G1.M_b / wT4G1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[115] /* wT4G1.M_b PARAM */,data->simulationInfo->realParameter[119] /* wT4G1.S_b PARAM */,"wT4G1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
wT4G1.ii1 = wT4G1.CoB * (wT4G1.q0 * wT4G1.vr0 - wT4G1.p0 * wT4G1.vi0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */;
  tmp7 = data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[136] /* wT4G1.ii1 PARAM */ = (data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */) * (DIVISION_SIM((data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */) - ((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */)),(tmp6 * tmp6) + (tmp7 * tmp7),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
wT4G1.ir1 = (-wT4G1.CoB) * (wT4G1.p0 * wT4G1.vr0 + wT4G1.q0 * wT4G1.vi0) / (wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */;
  tmp9 = data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */;
  data->simulationInfo->realParameter[140] /* wT4G1.ir1 PARAM */ = ((-data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */)) * (DIVISION_SIM((data->simulationInfo->realParameter[145] /* wT4G1.p0 PARAM */) * (data->simulationInfo->realParameter[150] /* wT4G1.vr0 PARAM */) + (data->simulationInfo->realParameter[146] /* wT4G1.q0 PARAM */) * (data->simulationInfo->realParameter[149] /* wT4G1.vi0 PARAM */),(tmp8 * tmp8) + (tmp9 * tmp9),"wT4G1.vr0 ^ 2.0 + wT4G1.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
wT4G1.K2.T_mod = if wT4G1.K2.T < 1e-15 then 1000.0 else wT4G1.K2.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  modelica_boolean tmp10;
  tmp10 = Less(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */,1e-15);
  data->simulationInfo->realParameter[112] /* wT4G1.K2.T_mod PARAM */ = (tmp10?1000.0:data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
wT4G1.K2.y_start = wT4G1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[114] /* wT4G1.K2.y_start PARAM */ = data->simulationInfo->realParameter[147] /* wT4G1.v_0 PARAM */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
wT4G1.imLimited_max.uMax = wT4G1.RIp_LVPL
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[137] /* wT4G1.imLimited_max.uMax PARAM */ = data->simulationInfo->realParameter[118] /* wT4G1.RIp_LVPL PARAM */;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
wT4G1.lVPL.VLVPL1 = wT4G1.V_LVPL1
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */ = data->simulationInfo->realParameter[124] /* wT4G1.V_LVPL1 PARAM */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
wT4G1.lVPL.VLVPL2 = wT4G1.V_LVPL2
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */ = data->simulationInfo->realParameter[125] /* wT4G1.V_LVPL2 PARAM */;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
wT4G1.lVPL.GLVPL = wT4G1.G_LVPL
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[141] /* wT4G1.lVPL.GLVPL PARAM */ = data->simulationInfo->realParameter[91] /* wT4G1.G_LVPL PARAM */;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
wT4G1.lVPL.K = wT4G1.lVPL.GLVPL / (wT4G1.lVPL.VLVPL2 - wT4G1.lVPL.VLVPL1)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[141] /* wT4G1.lVPL.GLVPL PARAM */,data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */ - data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */,"wT4G1.lVPL.VLVPL2 - wT4G1.lVPL.VLVPL1",equationIndexes);
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
wT4G1.hVRCL.CurHVRCR = wT4G1.CUR_HVRCR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[133] /* wT4G1.hVRCL.CurHVRCR PARAM */ = data->simulationInfo->realParameter[89] /* wT4G1.CUR_HVRCR PARAM */;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
wT4G1.hVRCL.VHVRCR = wT4G1.V_HVRCR
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */ = data->simulationInfo->realParameter[123] /* wT4G1.V_HVRCR PARAM */;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
wT4G1.K.y_start = wT4G1.Ix0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[103] /* wT4G1.K.y_start PARAM */ = data->simulationInfo->realParameter[100] /* wT4G1.Ix0 PARAM */;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
wT4G1.K.k = 1.0 / wT4G1.T_IPCmd
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[102] /* wT4G1.K.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[120] /* wT4G1.T_IPCmd PARAM */,"wT4G1.T_IPCmd",equationIndexes);
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
wT4G1.K1.T_mod = if wT4G1.K1.T < 1e-15 then 1000.0 else wT4G1.K1.T
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  modelica_boolean tmp11;
  tmp11 = Less(data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */,1e-15);
  data->simulationInfo->realParameter[106] /* wT4G1.K1.T_mod PARAM */ = (tmp11?1000.0:data->simulationInfo->realParameter[105] /* wT4G1.K1.T PARAM */);
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
wT4G1.K1.y_start = wT4G1.Iy0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[109] /* wT4G1.K1.y_start PARAM */ = data->simulationInfo->realParameter[101] /* wT4G1.Iy0 PARAM */;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
wT4G1.angle_0rad = 0.0174532925199433 * wT4G1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[129] /* wT4G1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[128] /* wT4G1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
wT4G1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[132] /* wT4G1.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
pwLine2.Z.im = pwLine2.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */ = data->simulationInfo->realParameter[82] /* pwLine2.X PARAM */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
pwLine2.Z.re = pwLine2.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */ = data->simulationInfo->realParameter[80] /* pwLine2.R PARAM */;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
pwLine2.Y.im = pwLine2.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */ = data->simulationInfo->realParameter[78] /* pwLine2.B PARAM */;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
pwLine2.Y.re = pwLine2.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */ = data->simulationInfo->realParameter[79] /* pwLine2.G PARAM */;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
pwLine2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[81] /* pwLine2.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
gENCLS2_1.angle_0rad = 0.0174532925199433 * gENCLS2_1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[36] /* gENCLS2_1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
gENCLS2_1.vr0 = gENCLS2_1.v_0 * cos(gENCLS2_1.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */ = (data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
gENCLS2_1.vi0 = gENCLS2_1.v_0 * sin(gENCLS2_1.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */ = (data->simulationInfo->realParameter[46] /* gENCLS2_1.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[37] /* gENCLS2_1.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
gENCLS2_1.p0 = gENCLS2_1.P_0 / gENCLS2_1.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[44] /* gENCLS2_1.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[30] /* gENCLS2_1.P_0 PARAM */,data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */,"gENCLS2_1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
gENCLS2_1.q0 = gENCLS2_1.Q_0 / gENCLS2_1.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[45] /* gENCLS2_1.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[31] /* gENCLS2_1.Q_0 PARAM */,data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */,"gENCLS2_1.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
gENCLS2_1.ir0 = (gENCLS2_1.p0 * gENCLS2_1.vr0 + gENCLS2_1.q0 * gENCLS2_1.vi0) / (gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
  tmp13 = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
  data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[44] /* gENCLS2_1.p0 PARAM */) * (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */) + (data->simulationInfo->realParameter[45] /* gENCLS2_1.q0 PARAM */) * (data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */),(tmp12 * tmp12) + (tmp13 * tmp13),"gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
gENCLS2_1.ii0 = (gENCLS2_1.p0 * gENCLS2_1.vi0 - gENCLS2_1.q0 * gENCLS2_1.vr0) / (gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */;
  tmp15 = data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */;
  data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[44] /* gENCLS2_1.p0 PARAM */) * (data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */) - ((data->simulationInfo->realParameter[45] /* gENCLS2_1.q0 PARAM */) * (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */)),(tmp14 * tmp14) + (tmp15 * tmp15),"gENCLS2_1.vr0 ^ 2.0 + gENCLS2_1.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENCLS2_1.delta0 = atan2(gENCLS2_1.vi0 + gENCLS2_1.R_a * gENCLS2_1.ii0 + gENCLS2_1.X_d * gENCLS2_1.ir0, gENCLS2_1.vr0 + gENCLS2_1.R_a * gENCLS2_1.ir0 - gENCLS2_1.X_d * gENCLS2_1.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */ + (data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */) + (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */), data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */ + (data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
gENCLS2_1.vq0 = gENCLS2_1.vr0 * sin(1.570796326794897 - gENCLS2_1.delta0) + gENCLS2_1.vi0 * cos(1.570796326794897 - gENCLS2_1.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[50] /* gENCLS2_1.vq0 PARAM */ = (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) + (data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
gENCLS2_1.id0 = gENCLS2_1.ir0 * cos(1.570796326794897 - gENCLS2_1.delta0) - gENCLS2_1.ii0 * sin(1.570796326794897 - gENCLS2_1.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */ = (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) - ((data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENCLS2_1.iq0 = gENCLS2_1.ir0 * sin(1.570796326794897 - gENCLS2_1.delta0) + gENCLS2_1.ii0 * cos(1.570796326794897 - gENCLS2_1.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */ = (data->simulationInfo->realParameter[43] /* gENCLS2_1.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) + (data->simulationInfo->realParameter[41] /* gENCLS2_1.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENCLS2_1.vf0 = gENCLS2_1.vq0 + gENCLS2_1.R_a * gENCLS2_1.iq0 + gENCLS2_1.X_d * gENCLS2_1.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[48] /* gENCLS2_1.vf0 PARAM */ = data->simulationInfo->realParameter[50] /* gENCLS2_1.vq0 PARAM */ + (data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->simulationInfo->realParameter[42] /* gENCLS2_1.iq0 PARAM */) + (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->simulationInfo->realParameter[40] /* gENCLS2_1.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENCLS2_1.vd0 = gENCLS2_1.vr0 * cos(1.570796326794897 - gENCLS2_1.delta0) - gENCLS2_1.vi0 * sin(1.570796326794897 - gENCLS2_1.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[47] /* gENCLS2_1.vd0 PARAM */ = (data->simulationInfo->realParameter[51] /* gENCLS2_1.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)) - ((data->simulationInfo->realParameter[49] /* gENCLS2_1.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[38] /* gENCLS2_1.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
gENCLS2_1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
gENCLS2_1.CoB = gENCLS2_1.M_b / gENCLS2_1.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[29] /* gENCLS2_1.M_b PARAM */,data->simulationInfo->realParameter[33] /* gENCLS2_1.S_b PARAM */,"gENCLS2_1.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENCLS2_1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[39] /* gENCLS2_1.fn PARAM */ = data->simulationInfo->realParameter[25] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[71] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[69] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[67] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[68] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[70] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[60] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[58] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[56] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[57] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[59] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[24] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 449
type: ALGORITHM

  assert(wT4G1.K.initType >= Modelica.Blocks.Types.Init.NoInit and wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(wT4G1.K.initType, "d"));
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,149,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp19;
  static int tmp20 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp20)
  {
    tmp16 = GreaterEq(data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */,1);
    tmp17 = LessEq(data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */,4);
    if(!(tmp16 && tmp17))
    {
      tmp19 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",15,5,18,40,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwT4G1.K.initType >= Modelica.Blocks.Types.Init.NoInit and wT4G1.K.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp20 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_350(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_351(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_352(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_353(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_354(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_355(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_356(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_359(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_360(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_363(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_364(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_365(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_367(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_371(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_372(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_373(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_376(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_378(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_379(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_380(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_382(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_383(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_384(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_385(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_393(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_398(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_399(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_416(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_422(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_436(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_437(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_438(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_439(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_441(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_2(data, threadData);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_449(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* pwLine2.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->localData[0]->realVars[33] /* gENCLS2_1.omega variable */ = 0.0;
  data->modelData->realVarsData[33].time_unvarying = 1;
  data->simulationInfo->realParameter[28] /* gENCLS2_1.H PARAM */ = 0.0;
  data->modelData->realParameterData[28].time_unvarying = 1;
  data->simulationInfo->booleanParameter[49] /* wT4G1.imLimited_max.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  data->simulationInfo->booleanParameter[50] /* wT4G1.imLimited_max.strict PARAM */ = 0;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  data->simulationInfo->booleanParameter[51] /* wT4G1.variableLimiter.limitsAtInit PARAM */ = 1;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  data->simulationInfo->booleanParameter[52] /* wT4G1.variableLimiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* wT4G1.K.initType PARAM */ = 4;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

