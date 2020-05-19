/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 275
type: SIMPLE_ASSIGN
$START.gENCLS2.Q = gENCLS2.Q_0 / gENCLS2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->modelData->realVarsData[51].attribute /* gENCLS2.Q variable */.start = DIVISION(data->simulationInfo->realParameter[107] /* gENCLS2.Q_0 PARAM */,data->simulationInfo->realParameter[109] /* gENCLS2.S_b PARAM */,"gENCLS2.S_b");
    data->localData[0]->realVars[51] /* gENCLS2.Q variable */ = data->modelData->realVarsData[51].attribute /* gENCLS2.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* gENCLS2.Q */.name, (modelica_real) data->localData[0]->realVars[51] /* gENCLS2.Q variable */);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$START.gENCLS2.P = gENCLS2.P_0 / gENCLS2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->modelData->realVarsData[50].attribute /* gENCLS2.P variable */.start = DIVISION(data->simulationInfo->realParameter[106] /* gENCLS2.P_0 PARAM */,data->simulationInfo->realParameter[109] /* gENCLS2.S_b PARAM */,"gENCLS2.S_b");
    data->localData[0]->realVars[50] /* gENCLS2.P variable */ = data->modelData->realVarsData[50].attribute /* gENCLS2.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* gENCLS2.P */.name, (modelica_real) data->localData[0]->realVars[50] /* gENCLS2.P variable */);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$START.gENCLS2.iq = gENCLS2.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->modelData->realVarsData[55].attribute /* gENCLS2.iq variable */.start = data->simulationInfo->realParameter[118] /* gENCLS2.iq0 PARAM */;
    data->localData[0]->realVars[55] /* gENCLS2.iq variable */ = data->modelData->realVarsData[55].attribute /* gENCLS2.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* gENCLS2.iq */.name, (modelica_real) data->localData[0]->realVars[55] /* gENCLS2.iq variable */);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
$START.gENCLS2.id = gENCLS2.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->modelData->realVarsData[54].attribute /* gENCLS2.id variable */.start = data->simulationInfo->realParameter[116] /* gENCLS2.id0 PARAM */;
    data->localData[0]->realVars[54] /* gENCLS2.id variable */ = data->modelData->realVarsData[54].attribute /* gENCLS2.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* gENCLS2.id */.name, (modelica_real) data->localData[0]->realVars[54] /* gENCLS2.id variable */);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
$START.gENCLS2.vq = gENCLS2.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->modelData->realVarsData[57].attribute /* gENCLS2.vq variable */.start = data->simulationInfo->realParameter[126] /* gENCLS2.vq0 PARAM */;
    data->localData[0]->realVars[57] /* gENCLS2.vq variable */ = data->modelData->realVarsData[57].attribute /* gENCLS2.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* gENCLS2.vq */.name, (modelica_real) data->localData[0]->realVars[57] /* gENCLS2.vq variable */);
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
$START.gENCLS2.vd = gENCLS2.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->modelData->realVarsData[56].attribute /* gENCLS2.vd variable */.start = data->simulationInfo->realParameter[123] /* gENCLS2.vd0 PARAM */;
    data->localData[0]->realVars[56] /* gENCLS2.vd variable */ = data->modelData->realVarsData[56].attribute /* gENCLS2.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* gENCLS2.vd */.name, (modelica_real) data->localData[0]->realVars[56] /* gENCLS2.vd variable */);
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
$START.gENCLS2.eq = gENCLS2.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->modelData->realVarsData[3].attribute /* gENCLS2.eq STATE(1) */.start = data->simulationInfo->realParameter[124] /* gENCLS2.vf0 PARAM */;
    data->localData[0]->realVars[3] /* gENCLS2.eq STATE(1) */ = data->modelData->realVarsData[3].attribute /* gENCLS2.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* gENCLS2.eq */.name, (modelica_real) data->localData[0]->realVars[3] /* gENCLS2.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$START.gENCLS2.anglev = gENCLS2.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->modelData->realVarsData[53].attribute /* gENCLS2.anglev variable */.start = data->simulationInfo->realParameter[113] /* gENCLS2.angle_0rad PARAM */;
    data->localData[0]->realVars[53] /* gENCLS2.anglev variable */ = data->modelData->realVarsData[53].attribute /* gENCLS2.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* gENCLS2.anglev */.name, (modelica_real) data->localData[0]->realVars[53] /* gENCLS2.anglev variable */);
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$START.gENCLS2.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->modelData->realVarsData[52].attribute /* gENCLS2.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[52] /* gENCLS2.V variable */ = data->modelData->realVarsData[52].attribute /* gENCLS2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* gENCLS2.V */.name, (modelica_real) data->localData[0]->realVars[52] /* gENCLS2.V variable */);
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$START.gENCLS2.delta = gENCLS2.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->modelData->realVarsData[2].attribute /* gENCLS2.delta STATE(1) */.start = data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */;
    data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */ = data->modelData->realVarsData[2].attribute /* gENCLS2.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* gENCLS2.delta */.name, (modelica_real) data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
$START.FAULT.angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->modelData->realVarsData[16].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */;
    data->localData[0]->realVars[16] /* FAULT.angle variable */ = data->modelData->realVarsData[16].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[16].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[16] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
$START.FAULT.V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->modelData->realVarsData[15].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */;
    data->localData[0]->realVars[15] /* FAULT.V variable */ = data->modelData->realVarsData[15].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[15] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
$START.GEN2.angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->modelData->realVarsData[24].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */;
    data->localData[0]->realVars[24] /* GEN2.angle variable */ = data->modelData->realVarsData[24].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[24].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[24] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
$START.GEN2.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->modelData->realVarsData[23].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[23] /* GEN2.V variable */ = data->modelData->realVarsData[23].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[23] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
$START.LOAD.angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->modelData->realVarsData[28].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */;
    data->localData[0]->realVars[28] /* LOAD.angle variable */ = data->modelData->realVarsData[28].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[28] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
$START.GEN1.angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->modelData->realVarsData[20].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */;
    data->localData[0]->realVars[20] /* GEN1.angle variable */ = data->modelData->realVarsData[20].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[20] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
$START.constantLoad.v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->modelData->realVarsData[38].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
    data->localData[0]->realVars[38] /* constantLoad.v variable */ = data->modelData->realVarsData[38].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[38] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
$START.constantLoad.angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->modelData->realVarsData[33].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */;
    data->localData[0]->realVars[33] /* constantLoad.angle variable */ = data->modelData->realVarsData[33].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
$START.constantLoad.p.ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->modelData->realVarsData[36].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */;
    data->localData[0]->realVars[36] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[36] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
$START.constantLoad.p.ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->modelData->realVarsData[37].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */;
    data->localData[0]->realVars[37] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[37].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[37] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
$START.gENCLS.Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->modelData->realVarsData[40].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[81] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[40] /* gENCLS.Q variable */ = data->modelData->realVarsData[40].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[40] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$START.gENCLS.P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->modelData->realVarsData[39].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[80] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */,"gENCLS.S_b");
    data->localData[0]->realVars[39] /* gENCLS.P variable */ = data->modelData->realVarsData[39].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[39] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
$START.gENCLS.iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->modelData->realVarsData[44].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */;
    data->localData[0]->realVars[44] /* gENCLS.iq variable */ = data->modelData->realVarsData[44].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[44] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$START.gENCLS.id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->modelData->realVarsData[43].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */;
    data->localData[0]->realVars[43] /* gENCLS.id variable */ = data->modelData->realVarsData[43].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[43] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
$START.gENCLS.vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->modelData->realVarsData[49].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[100] /* gENCLS.vq0 PARAM */;
    data->localData[0]->realVars[49] /* gENCLS.vq variable */ = data->modelData->realVarsData[49].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[49] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$START.gENCLS.vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->modelData->realVarsData[48].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[97] /* gENCLS.vd0 PARAM */;
    data->localData[0]->realVars[48] /* gENCLS.vd variable */ = data->modelData->realVarsData[48].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[48] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
$START.gENCLS.eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */;
    data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$START.gENCLS.anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->modelData->realVarsData[42].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */;
    data->localData[0]->realVars[42] /* gENCLS.anglev variable */ = data->modelData->realVarsData[42].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[42] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$START.gENCLS.delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */;
    data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$START.gENCLS.p.ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->modelData->realVarsData[46].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */;
    data->localData[0]->realVars[46] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[46].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[46].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[46] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
$START.gENCLS.p.ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->modelData->realVarsData[47].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */;
    data->localData[0]->realVars[47] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[47].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[47] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
$START.pwLine3.vr.im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->modelData->realVarsData[90].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[90] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
$START.pwLine3.vr.re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->modelData->realVarsData[91].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7] /* FAULT.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */));
    data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[91] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
$START.pwLine1.vr.im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->modelData->realVarsData[78].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
    data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[78] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
$START.pwLine1.vr.re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->modelData->realVarsData[79].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
    data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[79] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
$START.pwLine1.vs.im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->modelData->realVarsData[80].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
    data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[80] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
$START.pwLine1.vs.re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->modelData->realVarsData[81].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
    data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[81] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
$START.pwLine.is.im = -gENCLS2.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->modelData->realVarsData[66].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[117] /* gENCLS2.ii0 PARAM */);
    data->localData[0]->realVars[66] /* pwLine.is.im variable */ = data->modelData->realVarsData[66].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[66] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
$START.pwLine.is.re = -gENCLS2.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->modelData->realVarsData[67].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[119] /* gENCLS2.ir0 PARAM */);
    data->localData[0]->realVars[67] /* pwLine.is.re variable */ = data->modelData->realVarsData[67].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[67] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
$START.pwLine.vs.im = gENCLS2.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->modelData->realVarsData[68].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */;
    data->localData[0]->realVars[68] /* pwLine.vs.im variable */ = data->modelData->realVarsData[68].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[68] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
$START.pwLine.vs.re = gENCLS2.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->modelData->realVarsData[69].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */;
    data->localData[0]->realVars[69] /* pwLine.vs.re variable */ = data->modelData->realVarsData[69].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[69] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
$START.GEN1.V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->modelData->realVarsData[19].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15] /* GEN1.v_0 PARAM */;
    data->localData[0]->realVars[19] /* GEN1.V variable */ = data->modelData->realVarsData[19].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[19].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[19] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
$START.gENCLS.V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->modelData->realVarsData[41].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */;
    data->localData[0]->realVars[41] /* gENCLS.V variable */ = data->modelData->realVarsData[41].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[41] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
$START.LOAD.V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->modelData->realVarsData[27].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31] /* LOAD.v_0 PARAM */;
    data->localData[0]->realVars[27] /* LOAD.V variable */ = data->modelData->realVarsData[27].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[27] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_306(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_307(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_308(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_309(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_310(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_311(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_312(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_313(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_314(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_315(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_316(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_317(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_318(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 319
type: SIMPLE_ASSIGN
gENCLS2.angle_0rad = 0.0174532925199433 * gENCLS2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->realParameter[113] /* gENCLS2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[112] /* gENCLS2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
gENCLS2.vr0 = gENCLS2.v_0 * cos(gENCLS2.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */ = (data->simulationInfo->realParameter[122] /* gENCLS2.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[113] /* gENCLS2.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
gENCLS2.vi0 = gENCLS2.v_0 * sin(gENCLS2.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */ = (data->simulationInfo->realParameter[122] /* gENCLS2.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[113] /* gENCLS2.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
gENCLS2.p0 = gENCLS2.P_0 / gENCLS2.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[120] /* gENCLS2.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[106] /* gENCLS2.P_0 PARAM */,data->simulationInfo->realParameter[105] /* gENCLS2.M_b PARAM */,"gENCLS2.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
gENCLS2.q0 = gENCLS2.Q_0 / gENCLS2.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->realParameter[121] /* gENCLS2.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[107] /* gENCLS2.Q_0 PARAM */,data->simulationInfo->realParameter[105] /* gENCLS2.M_b PARAM */,"gENCLS2.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
gENCLS2.ir0 = (gENCLS2.p0 * gENCLS2.vr0 + gENCLS2.q0 * gENCLS2.vi0) / (gENCLS2.vr0 ^ 2.0 + gENCLS2.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */;
  tmp1 = data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */;
  data->simulationInfo->realParameter[119] /* gENCLS2.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[120] /* gENCLS2.p0 PARAM */) * (data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */) + (data->simulationInfo->realParameter[121] /* gENCLS2.q0 PARAM */) * (data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */),(tmp0 * tmp0) + (tmp1 * tmp1),"gENCLS2.vr0 ^ 2.0 + gENCLS2.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
gENCLS2.ii0 = (gENCLS2.p0 * gENCLS2.vi0 - gENCLS2.q0 * gENCLS2.vr0) / (gENCLS2.vr0 ^ 2.0 + gENCLS2.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */;
  tmp3 = data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */;
  data->simulationInfo->realParameter[117] /* gENCLS2.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[120] /* gENCLS2.p0 PARAM */) * (data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */) - ((data->simulationInfo->realParameter[121] /* gENCLS2.q0 PARAM */) * (data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */)),(tmp2 * tmp2) + (tmp3 * tmp3),"gENCLS2.vr0 ^ 2.0 + gENCLS2.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
gENCLS2.delta0 = atan2(gENCLS2.vi0 + gENCLS2.R_a * gENCLS2.ii0 + gENCLS2.X_d * gENCLS2.ir0, gENCLS2.vr0 + gENCLS2.R_a * gENCLS2.ir0 - gENCLS2.X_d * gENCLS2.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */ + (data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (data->simulationInfo->realParameter[117] /* gENCLS2.ii0 PARAM */) + (data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->simulationInfo->realParameter[119] /* gENCLS2.ir0 PARAM */), data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */ + (data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (data->simulationInfo->realParameter[119] /* gENCLS2.ir0 PARAM */) - ((data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->simulationInfo->realParameter[117] /* gENCLS2.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
gENCLS2.vq0 = gENCLS2.vr0 * sin(1.570796326794897 - gENCLS2.delta0) + gENCLS2.vi0 * cos(1.570796326794897 - gENCLS2.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->realParameter[126] /* gENCLS2.vq0 PARAM */ = (data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */)) + (data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
gENCLS2.id0 = gENCLS2.ir0 * cos(1.570796326794897 - gENCLS2.delta0) - gENCLS2.ii0 * sin(1.570796326794897 - gENCLS2.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->realParameter[116] /* gENCLS2.id0 PARAM */ = (data->simulationInfo->realParameter[119] /* gENCLS2.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */)) - ((data->simulationInfo->realParameter[117] /* gENCLS2.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
gENCLS2.iq0 = gENCLS2.ir0 * sin(1.570796326794897 - gENCLS2.delta0) + gENCLS2.ii0 * cos(1.570796326794897 - gENCLS2.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->realParameter[118] /* gENCLS2.iq0 PARAM */ = (data->simulationInfo->realParameter[119] /* gENCLS2.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */)) + (data->simulationInfo->realParameter[117] /* gENCLS2.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
gENCLS2.vf0 = gENCLS2.vq0 + gENCLS2.R_a * gENCLS2.iq0 + gENCLS2.X_d * gENCLS2.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[124] /* gENCLS2.vf0 PARAM */ = data->simulationInfo->realParameter[126] /* gENCLS2.vq0 PARAM */ + (data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (data->simulationInfo->realParameter[118] /* gENCLS2.iq0 PARAM */) + (data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->simulationInfo->realParameter[116] /* gENCLS2.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
gENCLS2.vd0 = gENCLS2.vr0 * cos(1.570796326794897 - gENCLS2.delta0) - gENCLS2.vi0 * sin(1.570796326794897 - gENCLS2.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[123] /* gENCLS2.vd0 PARAM */ = (data->simulationInfo->realParameter[127] /* gENCLS2.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */)) - ((data->simulationInfo->realParameter[125] /* gENCLS2.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[114] /* gENCLS2.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
gENCLS2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[109] /* gENCLS2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
gENCLS2.CoB = gENCLS2.M_b / gENCLS2.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[105] /* gENCLS2.M_b PARAM */,data->simulationInfo->realParameter[109] /* gENCLS2.S_b PARAM */,"gENCLS2.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
gENCLS2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->realParameter[115] /* gENCLS2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
FAULT.angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->realParameter[5] /* FAULT.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[4] /* FAULT.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
FAULT.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->realParameter[6] /* FAULT.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
FAULT.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->realParameter[2] /* FAULT.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
GEN2.angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->realParameter[21] /* GEN2.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[20] /* GEN2.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
GEN2.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->realParameter[22] /* GEN2.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
GEN2.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->realParameter[18] /* GEN2.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
LOAD.angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->realParameter[29] /* LOAD.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[28] /* LOAD.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
LOAD.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->realParameter[30] /* LOAD.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
LOAD.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->realParameter[26] /* LOAD.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
GEN1.angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->realParameter[13] /* GEN1.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[12] /* GEN1.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
GEN1.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->realParameter[14] /* GEN1.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
GEN1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[10] /* GEN1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
pwFault.ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = Less(fabs(data->simulationInfo->realParameter[128] /* pwFault.R PARAM */),1e-15);
  tmp5 = Less(fabs(data->simulationInfo->realParameter[129] /* pwFault.X PARAM */),1e-15);
  data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */ = (tmp4 && tmp5);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
constantLoad.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
constantLoad.p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[46] /* constantLoad.S_i.re PARAM */) * (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[50] /* constantLoad.S_y.re PARAM */) * ((tmp6 * tmp6)) + data->simulationInfo->realParameter[48] /* constantLoad.S_p.re PARAM */,data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
constantLoad.q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */;
  data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[45] /* constantLoad.S_i.im PARAM */) * (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) + (data->simulationInfo->realParameter[49] /* constantLoad.S_y.im PARAM */) * ((tmp7 * tmp7)) + data->simulationInfo->realParameter[47] /* constantLoad.S_p.im PARAM */,data->simulationInfo->realParameter[44] /* constantLoad.S_b PARAM */,"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
constantLoad.PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[34] /* constantLoad.PF PARAM */ = ((data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */ == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */,data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */,"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
constantLoad.d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */,data->simulationInfo->realParameter[34] /* constantLoad.PF PARAM */,"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
constantLoad.angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[57] /* constantLoad.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
constantLoad.vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */ = (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
constantLoad.vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */ = (data->simulationInfo->realParameter[72] /* constantLoad.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[58] /* constantLoad.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
constantLoad.ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  modelica_real tmp9;
  modelica_real tmp10;
  tmp9 = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  tmp10 = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[67] /* constantLoad.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */) - ((data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */)),(tmp9 * tmp9) + (tmp10 * tmp10),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
constantLoad.ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_real tmp11;
  modelica_real tmp12;
  tmp11 = data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */;
  tmp12 = data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */;
  data->simulationInfo->realParameter[68] /* constantLoad.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[69] /* constantLoad.p0 PARAM */) * (data->simulationInfo->realParameter[74] /* constantLoad.vr0 PARAM */) + (data->simulationInfo->realParameter[70] /* constantLoad.q0 PARAM */) * (data->simulationInfo->realParameter[73] /* constantLoad.vi0 PARAM */),(tmp11 * tmp11) + (tmp12 * tmp12),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
constantLoad.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[66] /* constantLoad.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
gENCLS.angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */ = (0.0174532925199433) * (data->simulationInfo->realParameter[86] /* gENCLS.angle_0 PARAM */);
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
gENCLS.vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */ = (data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */) * (cos(data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
gENCLS.vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */ = (data->simulationInfo->realParameter[96] /* gENCLS.v_0 PARAM */) * (sin(data->simulationInfo->realParameter[87] /* gENCLS.angle_0rad PARAM */));
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
gENCLS.p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[94] /* gENCLS.p0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[80] /* gENCLS.P_0 PARAM */,data->simulationInfo->realParameter[79] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
gENCLS.q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[95] /* gENCLS.q0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[81] /* gENCLS.Q_0 PARAM */,data->simulationInfo->realParameter[79] /* gENCLS.M_b PARAM */,"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENCLS.ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  modelica_real tmp13;
  modelica_real tmp14;
  tmp13 = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  tmp14 = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[94] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */) + (data->simulationInfo->realParameter[95] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */),(tmp13 * tmp13) + (tmp14 * tmp14),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
gENCLS.ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */;
  tmp16 = data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */;
  data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */ = DIVISION_SIM((data->simulationInfo->realParameter[94] /* gENCLS.p0 PARAM */) * (data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */) - ((data->simulationInfo->realParameter[95] /* gENCLS.q0 PARAM */) * (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */)),(tmp15 * tmp15) + (tmp16 * tmp16),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
gENCLS.delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */ = atan2(data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */ + (data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */) + (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */), data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */ + (data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */)));
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
gENCLS.vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[100] /* gENCLS.vq0 PARAM */ = (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
gENCLS.id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */ = (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
gENCLS.iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */ = (data->simulationInfo->realParameter[93] /* gENCLS.ir0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) + (data->simulationInfo->realParameter[91] /* gENCLS.ii0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */));
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
gENCLS.vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[98] /* gENCLS.vf0 PARAM */ = data->simulationInfo->realParameter[100] /* gENCLS.vq0 PARAM */ + (data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->simulationInfo->realParameter[92] /* gENCLS.iq0 PARAM */) + (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->simulationInfo->realParameter[90] /* gENCLS.id0 PARAM */);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
gENCLS.vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[97] /* gENCLS.vd0 PARAM */ = (data->simulationInfo->realParameter[101] /* gENCLS.vr0 PARAM */) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)) - ((data->simulationInfo->realParameter[99] /* gENCLS.vi0 PARAM */) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88] /* gENCLS.delta0 PARAM */)));
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
gENCLS.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
gENCLS.CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[79] /* gENCLS.M_b PARAM */,data->simulationInfo->realParameter[83] /* gENCLS.S_b PARAM */,"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
gENCLS.fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[89] /* gENCLS.fn PARAM */ = data->simulationInfo->realParameter[33] /* SysData.fn PARAM */;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
pwLine4.Z.im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */ = data->simulationInfo->realParameter[169] /* pwLine4.X PARAM */;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
pwLine4.Z.re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */ = data->simulationInfo->realParameter[167] /* pwLine4.R PARAM */;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
pwLine4.Y.im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */ = data->simulationInfo->realParameter[165] /* pwLine4.B PARAM */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
pwLine4.Y.re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */ = data->simulationInfo->realParameter[166] /* pwLine4.G PARAM */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
pwLine4.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[168] /* pwLine4.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
pwLine3.Z.im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */ = data->simulationInfo->realParameter[158] /* pwLine3.X PARAM */;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
pwLine3.Z.re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */ = data->simulationInfo->realParameter[156] /* pwLine3.R PARAM */;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
pwLine3.Y.im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */ = data->simulationInfo->realParameter[154] /* pwLine3.B PARAM */;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
pwLine3.Y.re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */ = data->simulationInfo->realParameter[155] /* pwLine3.G PARAM */;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
pwLine3.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[157] /* pwLine3.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
pwLine1.Z.im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */ = data->simulationInfo->realParameter[147] /* pwLine1.X PARAM */;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
pwLine1.Z.re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */ = data->simulationInfo->realParameter[145] /* pwLine1.R PARAM */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
pwLine1.Y.im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */ = data->simulationInfo->realParameter[143] /* pwLine1.B PARAM */;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
pwLine1.Y.re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */ = data->simulationInfo->realParameter[144] /* pwLine1.G PARAM */;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
pwLine1.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[146] /* pwLine1.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
pwLine.Z.im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */ = data->simulationInfo->realParameter[136] /* pwLine.X PARAM */;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
pwLine.Z.re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */ = data->simulationInfo->realParameter[134] /* pwLine.R PARAM */;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
pwLine.Y.im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */ = data->simulationInfo->realParameter[132] /* pwLine.B PARAM */;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
pwLine.Y.re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */ = data->simulationInfo->realParameter[133] /* pwLine.G PARAM */;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
pwLine.S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[135] /* pwLine.S_b PARAM */ = data->simulationInfo->realParameter[32] /* SysData.S_b PARAM */;
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_2(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_319(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_325(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_328(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_331(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_333(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_335(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_336(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_337(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_338(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_339(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_340(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_341(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_342(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_343(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_344(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_345(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_346(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_347(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_348(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_350(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_351(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_352(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_353(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_367(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_372(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_373(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_376(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_377(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_378(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_379(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_380(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_381(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_382(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_383(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_384(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_385(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_386(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_387(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_390(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_391(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_393(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_398(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_399(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_401(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_410(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_2(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] /* constantLoad.characteristic PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] /* pwLine.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* pwLine1.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* pwLine3.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* pwLine4.opening PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->localData[0]->realVars[45] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[45].time_unvarying = 1;
  data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */ = 0.0;
  data->modelData->realParameterData[38].time_unvarying = 1;
  data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */ = 0.5040355607168797;
  data->modelData->realParameterData[39].time_unvarying = 1;
  data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */ = 0.1016207385868717;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */ = 0.0;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ = 0.4881;
  data->modelData->realParameterData[54].time_unvarying = 1;
  data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */ = -0.4999;
  data->modelData->realParameterData[55].time_unvarying = 1;
  data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */ = 1.502;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */ = 0.1389;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ = 1.769;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */ = 3.964;
  data->modelData->realParameterData[75].time_unvarying = 1;
  data->simulationInfo->realParameter[78] /* gENCLS.H PARAM */ = 0.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  data->simulationInfo->realParameter[104] /* gENCLS2.H PARAM */ = 6.0;
  data->modelData->realParameterData[104].time_unvarying = 1;
  OpenIPSL_Examples_Machines_PSSE_GENCLS_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

