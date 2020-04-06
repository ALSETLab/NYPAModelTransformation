/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 253
type: SIMPLE_ASSIGN
$START._gENSAL._PSIq = gENSAL.PSIq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->modelData->realVarsData[62].attribute /* gENSAL.PSIq variable */.start = data->simulationInfo->realParameter[129];
    data->localData[0]->realVars[62] /* gENSAL.PSIq variable */ = data->modelData->realVarsData[62].attribute /* gENSAL.PSIq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* gENSAL.PSIq */.name, (modelica_real) data->localData[0]->realVars[62] /* gENSAL.PSIq variable */);
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$START._gENSAL._PSId = gENSAL.PSId0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->modelData->realVarsData[60].attribute /* gENSAL.PSId variable */.start = data->simulationInfo->realParameter[121];
    data->localData[0]->realVars[60] /* gENSAL.PSId variable */ = data->modelData->realVarsData[60].attribute /* gENSAL.PSId variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* gENSAL.PSId */.name, (modelica_real) data->localData[0]->realVars[60] /* gENSAL.PSId variable */);
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$START._gENSAL._PSIppd = gENSAL.PSIppd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->modelData->realVarsData[61].attribute /* gENSAL.PSIppd variable */.start = data->simulationInfo->realParameter[127];
    data->localData[0]->realVars[61] /* gENSAL.PSIppd variable */ = data->modelData->realVarsData[61].attribute /* gENSAL.PSIppd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* gENSAL.PSIppd */.name, (modelica_real) data->localData[0]->realVars[61] /* gENSAL.PSIppd variable */);
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$START._gENSAL._PSIppq = gENSAL.PSIppq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->modelData->realVarsData[4].attribute /* gENSAL.PSIppq STATE(1) */.start = data->simulationInfo->realParameter[128];
    data->localData[0]->realVars[4] /* gENSAL.PSIppq STATE(1) */ = data->modelData->realVarsData[4].attribute /* gENSAL.PSIppq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* gENSAL.PSIppq */.name, (modelica_real) data->localData[0]->realVars[4] /* gENSAL.PSIppq STATE(1) */);
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$START._gENSAL._PSIkd = gENSAL.PSIkd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->modelData->realVarsData[3].attribute /* gENSAL.PSIkd STATE(1) */.start = data->simulationInfo->realParameter[122];
    data->localData[0]->realVars[3] /* gENSAL.PSIkd STATE(1) */ = data->modelData->realVarsData[3].attribute /* gENSAL.PSIkd STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* gENSAL.PSIkd */.name, (modelica_real) data->localData[0]->realVars[3] /* gENSAL.PSIkd STATE(1) */);
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$START._gENSAL._Epq = gENSAL.Epq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->modelData->realVarsData[2].attribute /* gENSAL.Epq STATE(1) */.start = data->simulationInfo->realParameter[106];
    data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */ = data->modelData->realVarsData[2].attribute /* gENSAL.Epq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* gENSAL.Epq */.name, (modelica_real) data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */);
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$START._gENSAL._uq = gENSAL.uq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->modelData->realVarsData[70].attribute /* gENSAL.uq variable */.start = data->simulationInfo->realParameter[168];
    data->localData[0]->realVars[70] /* gENSAL.uq variable */ = data->modelData->realVarsData[70].attribute /* gENSAL.uq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* gENSAL.uq */.name, (modelica_real) data->localData[0]->realVars[70] /* gENSAL.uq variable */);
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$START._gENSAL._ud = gENSAL.ud0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->modelData->realVarsData[69].attribute /* gENSAL.ud variable */.start = data->simulationInfo->realParameter[167];
    data->localData[0]->realVars[69] /* gENSAL.ud variable */ = data->modelData->realVarsData[69].attribute /* gENSAL.ud variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* gENSAL.ud */.name, (modelica_real) data->localData[0]->realVars[69] /* gENSAL.ud variable */);
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$START._gENSAL._iq = gENSAL.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->modelData->realVarsData[68].attribute /* gENSAL.iq variable */.start = data->simulationInfo->realParameter[162];
    data->localData[0]->realVars[68] /* gENSAL.iq variable */ = data->modelData->realVarsData[68].attribute /* gENSAL.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* gENSAL.iq */.name, (modelica_real) data->localData[0]->realVars[68] /* gENSAL.iq variable */);
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$START._gENSAL._id = gENSAL.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->modelData->realVarsData[67].attribute /* gENSAL.id variable */.start = data->simulationInfo->realParameter[160];
    data->localData[0]->realVars[67] /* gENSAL.id variable */ = data->modelData->realVarsData[67].attribute /* gENSAL.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* gENSAL.id */.name, (modelica_real) data->localData[0]->realVars[67] /* gENSAL.id variable */);
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$START._gENSAL._Te = gENSAL.pm0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->modelData->realVarsData[64].attribute /* gENSAL.Te variable */.start = data->simulationInfo->realParameter[165];
    data->localData[0]->realVars[64] /* gENSAL.Te variable */ = data->modelData->realVarsData[64].attribute /* gENSAL.Te variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* gENSAL.Te */.name, (modelica_real) data->localData[0]->realVars[64] /* gENSAL.Te variable */);
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$START._gENSAL._Q = gENSAL.Q_0 / gENSAL.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->modelData->realVarsData[63].attribute /* gENSAL.Q variable */.start = DIVISION(data->simulationInfo->realParameter[131],data->simulationInfo->realParameter[137],"gENSAL.S_b");
    data->localData[0]->realVars[63] /* gENSAL.Q variable */ = data->modelData->realVarsData[63].attribute /* gENSAL.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* gENSAL.Q */.name, (modelica_real) data->localData[0]->realVars[63] /* gENSAL.Q variable */);
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$START._gENSAL._P = gENSAL.P_0 / gENSAL.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->modelData->realVarsData[58].attribute /* gENSAL.P variable */.start = DIVISION(data->simulationInfo->realParameter[130],data->simulationInfo->realParameter[137],"gENSAL.S_b");
    data->localData[0]->realVars[58] /* gENSAL.P variable */ = data->modelData->realVarsData[58].attribute /* gENSAL.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* gENSAL.P */.name, (modelica_real) data->localData[0]->realVars[58] /* gENSAL.P variable */);
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$START._gENSAL._anglei = atan2(gENSAL.ii0, gENSAL.ir0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->modelData->realVarsData[65].attribute /* gENSAL.anglei variable */.start = atan2(data->simulationInfo->realParameter[161], data->simulationInfo->realParameter[163]);
    data->localData[0]->realVars[65] /* gENSAL.anglei variable */ = data->modelData->realVarsData[65].attribute /* gENSAL.anglei variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* gENSAL.anglei */.name, (modelica_real) data->localData[0]->realVars[65] /* gENSAL.anglei variable */);
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$START._gENSAL._I = sqrt(gENSAL.ir0 ^ 2.0 + gENSAL.ii0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->simulationInfo->realParameter[163];
  tmp1 = data->simulationInfo->realParameter[161];
  data->modelData->realVarsData[56].attribute /* gENSAL.I variable */.start = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
    data->localData[0]->realVars[56] /* gENSAL.I variable */ = data->modelData->realVarsData[56].attribute /* gENSAL.I variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* gENSAL.I */.name, (modelica_real) data->localData[0]->realVars[56] /* gENSAL.I variable */);
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$START._gENSAL._anglev = gENSAL.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->modelData->realVarsData[66].attribute /* gENSAL.anglev variable */.start = data->simulationInfo->realParameter[155];
    data->localData[0]->realVars[66] /* gENSAL.anglev variable */ = data->modelData->realVarsData[66].attribute /* gENSAL.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* gENSAL.anglev */.name, (modelica_real) data->localData[0]->realVars[66] /* gENSAL.anglev variable */);
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
$START._gENSAL._delta = gENSAL.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->modelData->realVarsData[5].attribute /* gENSAL.delta STATE(1) */.start = data->simulationInfo->realParameter[156];
    data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */ = data->modelData->realVarsData[5].attribute /* gENSAL.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* gENSAL.delta */.name, (modelica_real) data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$START._gENSAL._ISORCE = gENSAL.efd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->modelData->realVarsData[57].attribute /* gENSAL.ISORCE variable */.start = data->simulationInfo->realParameter[158];
    data->localData[0]->realVars[57] /* gENSAL.ISORCE variable */ = data->modelData->realVarsData[57].attribute /* gENSAL.ISORCE variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* gENSAL.ISORCE */.name, (modelica_real) data->localData[0]->realVars[57] /* gENSAL.ISORCE variable */);
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$START._gENSAL._PELEC = gENSAL.p0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->modelData->realVarsData[59].attribute /* gENSAL.PELEC variable */.start = data->simulationInfo->realParameter[164];
    data->localData[0]->realVars[59] /* gENSAL.PELEC variable */ = data->modelData->realVarsData[59].attribute /* gENSAL.PELEC variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* gENSAL.PELEC */.name, (modelica_real) data->localData[0]->realVars[59] /* gENSAL.PELEC variable */);
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
$START._gENSAL._ETERM = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->modelData->realVarsData[55].attribute /* gENSAL.ETERM variable */.start = data->simulationInfo->realParameter[15];
    data->localData[0]->realVars[55] /* gENSAL.ETERM variable */ = data->modelData->realVarsData[55].attribute /* gENSAL.ETERM variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* gENSAL.ETERM */.name, (modelica_real) data->localData[0]->realVars[55] /* gENSAL.ETERM variable */);
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
$START._FAULT._angle = FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->modelData->realVarsData[21].attribute /* FAULT.angle variable */.start = data->simulationInfo->realParameter[4];
    data->localData[0]->realVars[21] /* FAULT.angle variable */ = data->modelData->realVarsData[21].attribute /* FAULT.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[21].info /* FAULT.angle */.name, (modelica_real) data->localData[0]->realVars[21] /* FAULT.angle variable */);
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
$START._FAULT._V = FAULT.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->modelData->realVarsData[20].attribute /* FAULT.V variable */.start = data->simulationInfo->realParameter[7];
    data->localData[0]->realVars[20] /* FAULT.V variable */ = data->modelData->realVarsData[20].attribute /* FAULT.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* FAULT.V */.name, (modelica_real) data->localData[0]->realVars[20] /* FAULT.V variable */);
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
$START._GEN2._angle = GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->modelData->realVarsData[29].attribute /* GEN2.angle variable */.start = data->simulationInfo->realParameter[20];
    data->localData[0]->realVars[29] /* GEN2.angle variable */ = data->modelData->realVarsData[29].attribute /* GEN2.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[29].info /* GEN2.angle */.name, (modelica_real) data->localData[0]->realVars[29] /* GEN2.angle variable */);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$START._GEN2._V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->modelData->realVarsData[28].attribute /* GEN2.V variable */.start = data->simulationInfo->realParameter[96];
    data->localData[0]->realVars[28] /* GEN2.V variable */ = data->modelData->realVarsData[28].attribute /* GEN2.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* GEN2.V */.name, (modelica_real) data->localData[0]->realVars[28] /* GEN2.V variable */);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$START._LOAD._angle = LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->modelData->realVarsData[33].attribute /* LOAD.angle variable */.start = data->simulationInfo->realParameter[28];
    data->localData[0]->realVars[33] /* LOAD.angle variable */ = data->modelData->realVarsData[33].attribute /* LOAD.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* LOAD.angle */.name, (modelica_real) data->localData[0]->realVars[33] /* LOAD.angle variable */);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
$START._GEN1._angle = GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->modelData->realVarsData[25].attribute /* GEN1.angle variable */.start = data->simulationInfo->realParameter[12];
    data->localData[0]->realVars[25] /* GEN1.angle variable */ = data->modelData->realVarsData[25].attribute /* GEN1.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[25].info /* GEN1.angle */.name, (modelica_real) data->localData[0]->realVars[25] /* GEN1.angle variable */);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
$START._constantLoad._v = constantLoad.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->modelData->realVarsData[43].attribute /* constantLoad.v variable */.start = data->simulationInfo->realParameter[72];
    data->localData[0]->realVars[43] /* constantLoad.v variable */ = data->modelData->realVarsData[43].attribute /* constantLoad.v variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* constantLoad.v */.name, (modelica_real) data->localData[0]->realVars[43] /* constantLoad.v variable */);
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
$START._constantLoad._angle = constantLoad.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->modelData->realVarsData[38].attribute /* constantLoad.angle variable */.start = data->simulationInfo->realParameter[58];
    data->localData[0]->realVars[38] /* constantLoad.angle variable */ = data->modelData->realVarsData[38].attribute /* constantLoad.angle variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* constantLoad.angle */.name, (modelica_real) data->localData[0]->realVars[38] /* constantLoad.angle variable */);
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
$START._constantLoad._p._ii = constantLoad.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->modelData->realVarsData[41].attribute /* constantLoad.p.ii variable */.start = data->simulationInfo->realParameter[67];
    data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* constantLoad.p.ii */.name, (modelica_real) data->localData[0]->realVars[41] /* constantLoad.p.ii variable */);
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$START._constantLoad._p._ir = constantLoad.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->modelData->realVarsData[42].attribute /* constantLoad.p.ir variable */.start = data->simulationInfo->realParameter[68];
    data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* constantLoad.p.ir */.name, (modelica_real) data->localData[0]->realVars[42] /* constantLoad.p.ir variable */);
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$START._gENCLS._Q = gENCLS.Q_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->modelData->realVarsData[45].attribute /* gENCLS.Q variable */.start = DIVISION(data->simulationInfo->realParameter[81],data->simulationInfo->realParameter[83],"gENCLS.S_b");
    data->localData[0]->realVars[45] /* gENCLS.Q variable */ = data->modelData->realVarsData[45].attribute /* gENCLS.Q variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* gENCLS.Q */.name, (modelica_real) data->localData[0]->realVars[45] /* gENCLS.Q variable */);
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$START._gENCLS._P = gENCLS.P_0 / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->modelData->realVarsData[44].attribute /* gENCLS.P variable */.start = DIVISION(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[83],"gENCLS.S_b");
    data->localData[0]->realVars[44] /* gENCLS.P variable */ = data->modelData->realVarsData[44].attribute /* gENCLS.P variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* gENCLS.P */.name, (modelica_real) data->localData[0]->realVars[44] /* gENCLS.P variable */);
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
$START._gENCLS._iq = gENCLS.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->modelData->realVarsData[49].attribute /* gENCLS.iq variable */.start = data->simulationInfo->realParameter[92];
    data->localData[0]->realVars[49] /* gENCLS.iq variable */ = data->modelData->realVarsData[49].attribute /* gENCLS.iq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* gENCLS.iq */.name, (modelica_real) data->localData[0]->realVars[49] /* gENCLS.iq variable */);
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
$START._gENCLS._id = gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->modelData->realVarsData[48].attribute /* gENCLS.id variable */.start = data->simulationInfo->realParameter[90];
    data->localData[0]->realVars[48] /* gENCLS.id variable */ = data->modelData->realVarsData[48].attribute /* gENCLS.id variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* gENCLS.id */.name, (modelica_real) data->localData[0]->realVars[48] /* gENCLS.id variable */);
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
$START._gENCLS._vq = gENCLS.vq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->modelData->realVarsData[54].attribute /* gENCLS.vq variable */.start = data->simulationInfo->realParameter[100];
    data->localData[0]->realVars[54] /* gENCLS.vq variable */ = data->modelData->realVarsData[54].attribute /* gENCLS.vq variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* gENCLS.vq */.name, (modelica_real) data->localData[0]->realVars[54] /* gENCLS.vq variable */);
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
$START._gENCLS._vd = gENCLS.vd0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->modelData->realVarsData[53].attribute /* gENCLS.vd variable */.start = data->simulationInfo->realParameter[97];
    data->localData[0]->realVars[53] /* gENCLS.vd variable */ = data->modelData->realVarsData[53].attribute /* gENCLS.vd variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* gENCLS.vd */.name, (modelica_real) data->localData[0]->realVars[53] /* gENCLS.vd variable */);
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
$START._gENCLS._eq = gENCLS.vf0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start = data->simulationInfo->realParameter[98];
    data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ = data->modelData->realVarsData[1].attribute /* gENCLS.eq STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* gENCLS.eq */.name, (modelica_real) data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
$START._gENCLS._anglev = gENCLS.angle_0rad
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->modelData->realVarsData[47].attribute /* gENCLS.anglev variable */.start = data->simulationInfo->realParameter[87];
    data->localData[0]->realVars[47] /* gENCLS.anglev variable */ = data->modelData->realVarsData[47].attribute /* gENCLS.anglev variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* gENCLS.anglev */.name, (modelica_real) data->localData[0]->realVars[47] /* gENCLS.anglev variable */);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
$START._gENCLS._delta = gENCLS.delta0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start = data->simulationInfo->realParameter[88];
    data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */ = data->modelData->realVarsData[0].attribute /* gENCLS.delta STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* gENCLS.delta */.name, (modelica_real) data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
$START._gENCLS._p._ii = gENCLS.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->modelData->realVarsData[51].attribute /* gENCLS.p.ii variable */.start = data->simulationInfo->realParameter[91];
    data->localData[0]->realVars[51] /* gENCLS.p.ii variable */ = data->modelData->realVarsData[51].attribute /* gENCLS.p.ii variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* gENCLS.p.ii */.name, (modelica_real) data->localData[0]->realVars[51] /* gENCLS.p.ii variable */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
$START._gENCLS._p._ir = gENCLS.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->modelData->realVarsData[52].attribute /* gENCLS.p.ir variable */.start = data->simulationInfo->realParameter[93];
    data->localData[0]->realVars[52] /* gENCLS.p.ir variable */ = data->modelData->realVarsData[52].attribute /* gENCLS.p.ir variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* gENCLS.p.ir */.name, (modelica_real) data->localData[0]->realVars[52] /* gENCLS.p.ir variable */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
$START._pwLine3._vr._im = FAULT.v_0 * sin(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->modelData->realVarsData[103].attribute /* pwLine3.vr.im variable */.start = (data->simulationInfo->realParameter[7]) * (sin(data->simulationInfo->realParameter[5]));
    data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[103].info /* pwLine3.vr.im */.name, (modelica_real) data->localData[0]->realVars[103] /* pwLine3.vr.im variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
$START._pwLine3._vr._re = FAULT.v_0 * cos(FAULT.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->modelData->realVarsData[104].attribute /* pwLine3.vr.re variable */.start = (data->simulationInfo->realParameter[7]) * (cos(data->simulationInfo->realParameter[5]));
    data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[104].info /* pwLine3.vr.re */.name, (modelica_real) data->localData[0]->realVars[104] /* pwLine3.vr.re variable */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$START._pwLine1._vr._im = gENCLS.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->modelData->realVarsData[91].attribute /* pwLine1.vr.im variable */.start = data->simulationInfo->realParameter[99];
    data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* pwLine1.vr.im */.name, (modelica_real) data->localData[0]->realVars[91] /* pwLine1.vr.im variable */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
$START._pwLine1._vr._re = gENCLS.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->modelData->realVarsData[92].attribute /* pwLine1.vr.re variable */.start = data->simulationInfo->realParameter[101];
    data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* pwLine1.vr.re */.name, (modelica_real) data->localData[0]->realVars[92] /* pwLine1.vr.re variable */);
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$START._pwLine1._vs._im = constantLoad.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->modelData->realVarsData[93].attribute /* pwLine1.vs.im variable */.start = data->simulationInfo->realParameter[73];
    data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* pwLine1.vs.im */.name, (modelica_real) data->localData[0]->realVars[93] /* pwLine1.vs.im variable */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
$START._pwLine1._vs._re = constantLoad.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->modelData->realVarsData[94].attribute /* pwLine1.vs.re variable */.start = data->simulationInfo->realParameter[74];
    data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* pwLine1.vs.re */.name, (modelica_real) data->localData[0]->realVars[94] /* pwLine1.vs.re variable */);
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$START._pwLine._is._im = -gENSAL.ii0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->modelData->realVarsData[79].attribute /* pwLine.is.im variable */.start = (-data->simulationInfo->realParameter[161]);
    data->localData[0]->realVars[79] /* pwLine.is.im variable */ = data->modelData->realVarsData[79].attribute /* pwLine.is.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* pwLine.is.im */.name, (modelica_real) data->localData[0]->realVars[79] /* pwLine.is.im variable */);
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
$START._pwLine._is._re = -gENSAL.ir0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->modelData->realVarsData[80].attribute /* pwLine.is.re variable */.start = (-data->simulationInfo->realParameter[163]);
    data->localData[0]->realVars[80] /* pwLine.is.re variable */ = data->modelData->realVarsData[80].attribute /* pwLine.is.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* pwLine.is.re */.name, (modelica_real) data->localData[0]->realVars[80] /* pwLine.is.re variable */);
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$START._pwLine._vs._im = gENSAL.vi0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->modelData->realVarsData[81].attribute /* pwLine.vs.im variable */.start = data->simulationInfo->realParameter[170];
    data->localData[0]->realVars[81] /* pwLine.vs.im variable */ = data->modelData->realVarsData[81].attribute /* pwLine.vs.im variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* pwLine.vs.im */.name, (modelica_real) data->localData[0]->realVars[81] /* pwLine.vs.im variable */);
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$START._pwLine._vs._re = gENSAL.vr0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->modelData->realVarsData[82].attribute /* pwLine.vs.re variable */.start = data->simulationInfo->realParameter[171];
    data->localData[0]->realVars[82] /* pwLine.vs.re variable */ = data->modelData->realVarsData[82].attribute /* pwLine.vs.re variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* pwLine.vs.re */.name, (modelica_real) data->localData[0]->realVars[82] /* pwLine.vs.re variable */);
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$START._GEN1._V = GEN1.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->modelData->realVarsData[24].attribute /* GEN1.V variable */.start = data->simulationInfo->realParameter[15];
    data->localData[0]->realVars[24] /* GEN1.V variable */ = data->modelData->realVarsData[24].attribute /* GEN1.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[24].info /* GEN1.V */.name, (modelica_real) data->localData[0]->realVars[24] /* GEN1.V variable */);
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
$START._gENCLS._V = gENCLS.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->modelData->realVarsData[46].attribute /* gENCLS.V variable */.start = data->simulationInfo->realParameter[96];
    data->localData[0]->realVars[46] /* gENCLS.V variable */ = data->modelData->realVarsData[46].attribute /* gENCLS.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[46].info /* gENCLS.V */.name, (modelica_real) data->localData[0]->realVars[46] /* gENCLS.V variable */);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
$START._LOAD._V = LOAD.v_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->modelData->realVarsData[32].attribute /* LOAD.V variable */.start = data->simulationInfo->realParameter[31];
    data->localData[0]->realVars[32] /* LOAD.V variable */ = data->modelData->realVarsData[32].attribute /* LOAD.V variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* LOAD.V */.name, (modelica_real) data->localData[0]->realVars[32] /* LOAD.V variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAL_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_253(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_254(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_255(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_256(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_257(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_258(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_259(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_260(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_261(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_262(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_263(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_264(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_265(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_266(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_267(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_268(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_269(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_270(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_271(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_272(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_273(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_274(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_275(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_276(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_277(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_278(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_279(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_280(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_281(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_282(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_283(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_284(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_285(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_286(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_287(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_288(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_289(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_290(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_291(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_292(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_293(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_294(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_295(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_296(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_297(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_298(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_299(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_300(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_301(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_302(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_303(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_304(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_305(data, threadData);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_306(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void OpenIPSL_Examples_Machines_PSSE_GENSAL_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 307
type: SIMPLE_ASSIGN
gENSAL._K4d = (gENSAL.Xpd - gENSAL.Xppd) / (gENSAL.Xpd - gENSAL.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->realParameter[119] = DIVISION_SIM(data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[147],data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[145],"gENSAL.Xpd - gENSAL.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
gENSAL._K3d = (gENSAL.Xppd - gENSAL.Xl) / (gENSAL.Xpd - gENSAL.Xl)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[118] = DIVISION_SIM(data->simulationInfo->realParameter[147] - data->simulationInfo->realParameter[145],data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[145],"gENSAL.Xpd - gENSAL.Xl",equationIndexes);
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
gENSAL._K2d = (gENSAL.Xpd - gENSAL.Xl) * (gENSAL.Xppd - gENSAL.Xl) / (gENSAL.Xpd - gENSAL.Xppd)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->realParameter[117] = (data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[145]) * (DIVISION_SIM(data->simulationInfo->realParameter[147] - data->simulationInfo->realParameter[145],data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[147],"gENSAL.Xpd - gENSAL.Xppd",equationIndexes));
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
gENSAL._K1d = (gENSAL.Xpd - gENSAL.Xppd) * (gENSAL.Xd - gENSAL.Xpd) / (gENSAL.Xpd - gENSAL.Xl) ^ 2.0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[145];
  data->simulationInfo->realParameter[116] = (data->simulationInfo->realParameter[146] - data->simulationInfo->realParameter[147]) * (DIVISION_SIM(data->simulationInfo->realParameter[144] - data->simulationInfo->realParameter[146],(tmp0 * tmp0),"(gENSAL.Xpd - gENSAL.Xl) ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
gENSAL._p0 = gENSAL.P_0 / gENSAL.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->realParameter[164] = DIVISION_SIM(data->simulationInfo->realParameter[130],data->simulationInfo->realParameter[120],"gENSAL.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
gENSAL._iq0 = gENSAL.I_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->realParameter[162] = data->simulationInfo->realParameter[111];
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
gENSAL._id0 = gENSAL.I_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->realParameter[160] = data->simulationInfo->realParameter[110];
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
gENSAL._pm0 = gENSAL.p0 + gENSAL.R_a * (gENSAL.iq0 ^ 2.0 + gENSAL.id0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  modelica_real tmp1;
  modelica_real tmp2;
  tmp1 = data->simulationInfo->realParameter[162];
  tmp2 = data->simulationInfo->realParameter[160];
  data->simulationInfo->realParameter[165] = data->simulationInfo->realParameter[164] + (data->simulationInfo->realParameter[132]) * ((tmp1 * tmp1) + (tmp2 * tmp2));
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
gENSAL._angle_0rad = 0.0174532925199433 * gENSAL.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->simulationInfo->realParameter[155] = (0.0174532925199433) * (data->simulationInfo->realParameter[154]);
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
gENSAL._delta0 = Modelica.Math.atan3(gENSAL.Epqp.im, gENSAL.Epqp.re, 0.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[156] = omc_Modelica_Math_atan3(threadData, data->simulationInfo->realParameter[107], data->simulationInfo->realParameter[108], 0.0);
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
gENSAL._uq0 = gENSAL.v_0 * sin(1.570796326794897 + gENSAL.angle_0rad - gENSAL.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[168] = (data->simulationInfo->realParameter[169]) * (sin(1.570796326794897 + data->simulationInfo->realParameter[155] - data->simulationInfo->realParameter[156]));
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
gENSAL._Epq0 = gENSAL.uq0 + gENSAL.Xpd * gENSAL.id0 + gENSAL.R_a * gENSAL.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[106] = data->simulationInfo->realParameter[168] + (data->simulationInfo->realParameter[146]) * (data->simulationInfo->realParameter[160]) + (data->simulationInfo->realParameter[132]) * (data->simulationInfo->realParameter[162]);
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
gENSAL._dsat = OpenIPSL.NonElectrical.Functions.SE(gENSAL.Epq0, gENSAL.S10, gENSAL.S12, 1.0, 1.2)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->realParameter[157] = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[106], data->simulationInfo->realParameter[135], data->simulationInfo->realParameter[136], 1.0, 1.2);
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
gENSAL._efd0 = gENSAL.Epq0 * (1.0 + gENSAL.dsat) + (gENSAL.Xd - gENSAL.Xpd) * gENSAL.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[158] = (data->simulationInfo->realParameter[106]) * (1.0 + data->simulationInfo->realParameter[157]) + (data->simulationInfo->realParameter[144] - data->simulationInfo->realParameter[146]) * (data->simulationInfo->realParameter[160]);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
gENSAL._PSIppq0 = -gENSAL.PSIpp0_dq.im
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[128] = (-data->simulationInfo->realParameter[125]);
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
gENSAL._PSIq0 = (-gENSAL.PSIppq0) - gENSAL.Xppq * gENSAL.iq0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->realParameter[129] = (-data->simulationInfo->realParameter[128]) - ((data->simulationInfo->realParameter[148]) * (data->simulationInfo->realParameter[162]));
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
gENSAL._PSIppd0 = gENSAL.PSIpp0_dq.re
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->realParameter[127] = data->simulationInfo->realParameter[126];
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
gENSAL._PSId0 = gENSAL.PSIppd0 - gENSAL.Xppd * gENSAL.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[121] = data->simulationInfo->realParameter[127] - ((data->simulationInfo->realParameter[147]) * (data->simulationInfo->realParameter[160]));
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
gENSAL._PSIkd0 = (gENSAL.PSIppd0 + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.K3d * gENSAL.id0) / (gENSAL.K3d + gENSAL.K4d)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[122] = DIVISION_SIM(data->simulationInfo->realParameter[127] + (data->simulationInfo->realParameter[145] - data->simulationInfo->realParameter[146]) * ((data->simulationInfo->realParameter[118]) * (data->simulationInfo->realParameter[160])),data->simulationInfo->realParameter[118] + data->simulationInfo->realParameter[119],"gENSAL.K3d + gENSAL.K4d",equationIndexes);
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
gENSAL._ud0 = gENSAL.v_0 * cos(1.570796326794897 + gENSAL.angle_0rad - gENSAL.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[167] = (data->simulationInfo->realParameter[169]) * (cos(1.570796326794897 + data->simulationInfo->realParameter[155] - data->simulationInfo->realParameter[156]));
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
gENSAL._q0 = gENSAL.Q_0 / gENSAL.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[166] = DIVISION_SIM(data->simulationInfo->realParameter[131],data->simulationInfo->realParameter[120],"gENSAL.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
gENSAL._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[137] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
gENSAL._CoB = gENSAL.M_b / gENSAL.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[102] = DIVISION_SIM(data->simulationInfo->realParameter[120],data->simulationInfo->realParameter[137],"gENSAL.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
gENSAL._vr0 = gENSAL.v_0 * cos(gENSAL.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[171] = (data->simulationInfo->realParameter[169]) * (cos(data->simulationInfo->realParameter[155]));
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
gENSAL._vi0 = gENSAL.v_0 * sin(gENSAL.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[170] = (data->simulationInfo->realParameter[169]) * (sin(data->simulationInfo->realParameter[155]));
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
gENSAL._ii0 = gENSAL.CoB * (gENSAL.q0 * gENSAL.vr0 - gENSAL.p0 * gENSAL.vi0) / (gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = data->simulationInfo->realParameter[171];
  tmp4 = data->simulationInfo->realParameter[170];
  data->simulationInfo->realParameter[161] = DIVISION_SIM((data->simulationInfo->realParameter[102]) * ((data->simulationInfo->realParameter[166]) * (data->simulationInfo->realParameter[171]) - ((data->simulationInfo->realParameter[164]) * (data->simulationInfo->realParameter[170]))),(tmp3 * tmp3) + (tmp4 * tmp4),"gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
gENSAL._ir0 = (-gENSAL.CoB) * (gENSAL.p0 * gENSAL.vr0 + gENSAL.q0 * gENSAL.vi0) / (gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  modelica_real tmp5;
  modelica_real tmp6;
  tmp5 = data->simulationInfo->realParameter[171];
  tmp6 = data->simulationInfo->realParameter[170];
  data->simulationInfo->realParameter[163] = ((-data->simulationInfo->realParameter[102])) * (DIVISION_SIM((data->simulationInfo->realParameter[164]) * (data->simulationInfo->realParameter[171]) + (data->simulationInfo->realParameter[166]) * (data->simulationInfo->realParameter[170]),(tmp5 * tmp5) + (tmp6 * tmp6),"gENSAL.vr0 ^ 2.0 + gENSAL.vi0 ^ 2.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
gENSAL._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[159] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
gENSAL._w_b = 6.283185307179586 * gENSAL.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->realParameter[172] = (6.283185307179586) * (data->simulationInfo->realParameter[159]);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
FAULT._angle_0rad = 0.0174532925199433 * FAULT.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[5] = (0.0174532925199433) * (data->simulationInfo->realParameter[4]);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
FAULT._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->realParameter[6] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
FAULT._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->realParameter[2] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
GEN2._angle_0rad = 0.0174532925199433 * GEN2.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->realParameter[21] = (0.0174532925199433) * (data->simulationInfo->realParameter[20]);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
GEN2._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
GEN2._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
LOAD._angle_0rad = 0.0174532925199433 * LOAD.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[29] = (0.0174532925199433) * (data->simulationInfo->realParameter[28]);
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
LOAD._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
LOAD._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
GEN1._angle_0rad = 0.0174532925199433 * GEN1.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->realParameter[13] = (0.0174532925199433) * (data->simulationInfo->realParameter[12]);
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
GEN1._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->realParameter[14] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
GEN1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
pwFault._ground = abs(pwFault.R) < 1e-15 and abs(pwFault.X) < 1e-15
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[173]),1e-15);
  tmp8 = Less(fabs(data->simulationInfo->realParameter[174]),1e-15);
  data->simulationInfo->booleanParameter[63] = (tmp7 && tmp8);
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
constantLoad._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->realParameter[44] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
constantLoad._p0 = (constantLoad.S_i.re * constantLoad.v_0 + constantLoad.S_y.re * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.re) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  modelica_real tmp9;
  tmp9 = data->simulationInfo->realParameter[72];
  data->simulationInfo->realParameter[69] = DIVISION_SIM((data->simulationInfo->realParameter[46]) * (data->simulationInfo->realParameter[72]) + (data->simulationInfo->realParameter[50]) * ((tmp9 * tmp9)) + data->simulationInfo->realParameter[48],data->simulationInfo->realParameter[44],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
constantLoad._q0 = (constantLoad.S_i.im * constantLoad.v_0 + constantLoad.S_y.im * constantLoad.v_0 ^ 2.0 + constantLoad.S_p.im) / constantLoad.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  modelica_real tmp10;
  tmp10 = data->simulationInfo->realParameter[72];
  data->simulationInfo->realParameter[70] = DIVISION_SIM((data->simulationInfo->realParameter[45]) * (data->simulationInfo->realParameter[72]) + (data->simulationInfo->realParameter[49]) * ((tmp10 * tmp10)) + data->simulationInfo->realParameter[47],data->simulationInfo->realParameter[44],"constantLoad.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
constantLoad._PF = if constantLoad.q0 == 0.0 then 1.0 else constantLoad.p0 / constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->realParameter[34] = ((data->simulationInfo->realParameter[70] == 0.0)?1.0:DIVISION_SIM(data->simulationInfo->realParameter[69],data->simulationInfo->realParameter[70],"constantLoad.q0",equationIndexes));
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
constantLoad._d_Q = (constantLoad.p0 + constantLoad.d_P) / constantLoad.PF - constantLoad.q0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->realParameter[64] = DIVISION_SIM(data->simulationInfo->realParameter[69] + data->simulationInfo->realParameter[63],data->simulationInfo->realParameter[34],"constantLoad.PF",equationIndexes) - data->simulationInfo->realParameter[70];
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
constantLoad._angle_0rad = 0.0174532925199433 * constantLoad.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[58] = (0.0174532925199433) * (data->simulationInfo->realParameter[57]);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
constantLoad._vr0 = constantLoad.v_0 * cos(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[74] = (data->simulationInfo->realParameter[72]) * (cos(data->simulationInfo->realParameter[58]));
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
constantLoad._vi0 = constantLoad.v_0 * sin(constantLoad.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[73] = (data->simulationInfo->realParameter[72]) * (sin(data->simulationInfo->realParameter[58]));
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
constantLoad._ii0 = (constantLoad.p0 * constantLoad.vi0 - constantLoad.q0 * constantLoad.vr0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->simulationInfo->realParameter[74];
  tmp13 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[67] = DIVISION_SIM((data->simulationInfo->realParameter[69]) * (data->simulationInfo->realParameter[73]) - ((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[74])),(tmp12 * tmp12) + (tmp13 * tmp13),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
constantLoad._ir0 = (constantLoad.p0 * constantLoad.vr0 + constantLoad.q0 * constantLoad.vi0) / (constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->simulationInfo->realParameter[74];
  tmp15 = data->simulationInfo->realParameter[73];
  data->simulationInfo->realParameter[68] = DIVISION_SIM((data->simulationInfo->realParameter[69]) * (data->simulationInfo->realParameter[74]) + (data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[73]),(tmp14 * tmp14) + (tmp15 * tmp15),"constantLoad.vr0 ^ 2.0 + constantLoad.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
constantLoad._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[66] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
gENCLS._angle_0rad = 0.0174532925199433 * gENCLS.angle_0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[87] = (0.0174532925199433) * (data->simulationInfo->realParameter[86]);
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
gENCLS._vr0 = gENCLS.v_0 * cos(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[101] = (data->simulationInfo->realParameter[96]) * (cos(data->simulationInfo->realParameter[87]));
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
gENCLS._vi0 = gENCLS.v_0 * sin(gENCLS.angle_0rad)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[99] = (data->simulationInfo->realParameter[96]) * (sin(data->simulationInfo->realParameter[87]));
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
gENCLS._p0 = gENCLS.P_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[94] = DIVISION_SIM(data->simulationInfo->realParameter[80],data->simulationInfo->realParameter[79],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
gENCLS._q0 = gENCLS.Q_0 / gENCLS.M_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[95] = DIVISION_SIM(data->simulationInfo->realParameter[81],data->simulationInfo->realParameter[79],"gENCLS.M_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
gENCLS._ir0 = (gENCLS.p0 * gENCLS.vr0 + gENCLS.q0 * gENCLS.vi0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  modelica_real tmp16;
  modelica_real tmp17;
  tmp16 = data->simulationInfo->realParameter[101];
  tmp17 = data->simulationInfo->realParameter[99];
  data->simulationInfo->realParameter[93] = DIVISION_SIM((data->simulationInfo->realParameter[94]) * (data->simulationInfo->realParameter[101]) + (data->simulationInfo->realParameter[95]) * (data->simulationInfo->realParameter[99]),(tmp16 * tmp16) + (tmp17 * tmp17),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
gENCLS._ii0 = (gENCLS.p0 * gENCLS.vi0 - gENCLS.q0 * gENCLS.vr0) / (gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->simulationInfo->realParameter[101];
  tmp19 = data->simulationInfo->realParameter[99];
  data->simulationInfo->realParameter[91] = DIVISION_SIM((data->simulationInfo->realParameter[94]) * (data->simulationInfo->realParameter[99]) - ((data->simulationInfo->realParameter[95]) * (data->simulationInfo->realParameter[101])),(tmp18 * tmp18) + (tmp19 * tmp19),"gENCLS.vr0 ^ 2.0 + gENCLS.vi0 ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
gENCLS._delta0 = atan2(gENCLS.vi0 + gENCLS.R_a * gENCLS.ii0 + gENCLS.X_d * gENCLS.ir0, gENCLS.vr0 + gENCLS.R_a * gENCLS.ir0 - gENCLS.X_d * gENCLS.ii0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[88] = atan2(data->simulationInfo->realParameter[99] + (data->simulationInfo->realParameter[82]) * (data->simulationInfo->realParameter[91]) + (data->simulationInfo->realParameter[85]) * (data->simulationInfo->realParameter[93]), data->simulationInfo->realParameter[101] + (data->simulationInfo->realParameter[82]) * (data->simulationInfo->realParameter[93]) - ((data->simulationInfo->realParameter[85]) * (data->simulationInfo->realParameter[91])));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
gENCLS._vq0 = gENCLS.vr0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.vi0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[100] = (data->simulationInfo->realParameter[101]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88])) + (data->simulationInfo->realParameter[99]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88]));
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENCLS._id0 = gENCLS.ir0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.ii0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[90] = (data->simulationInfo->realParameter[93]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88])) - ((data->simulationInfo->realParameter[91]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88])));
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
gENCLS._iq0 = gENCLS.ir0 * sin(1.570796326794897 - gENCLS.delta0) + gENCLS.ii0 * cos(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[92] = (data->simulationInfo->realParameter[93]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88])) + (data->simulationInfo->realParameter[91]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88]));
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
gENCLS._vf0 = gENCLS.vq0 + gENCLS.R_a * gENCLS.iq0 + gENCLS.X_d * gENCLS.id0
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[98] = data->simulationInfo->realParameter[100] + (data->simulationInfo->realParameter[82]) * (data->simulationInfo->realParameter[92]) + (data->simulationInfo->realParameter[85]) * (data->simulationInfo->realParameter[90]);
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
gENCLS._vd0 = gENCLS.vr0 * cos(1.570796326794897 - gENCLS.delta0) - gENCLS.vi0 * sin(1.570796326794897 - gENCLS.delta0)
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[97] = (data->simulationInfo->realParameter[101]) * (cos(1.570796326794897 - data->simulationInfo->realParameter[88])) - ((data->simulationInfo->realParameter[99]) * (sin(1.570796326794897 - data->simulationInfo->realParameter[88])));
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
gENCLS._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[83] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
gENCLS._CoB = gENCLS.M_b / gENCLS.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[76] = DIVISION_SIM(data->simulationInfo->realParameter[79],data->simulationInfo->realParameter[83],"gENCLS.S_b",equationIndexes);
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
gENCLS._fn = SysData.fn
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[89] = data->simulationInfo->realParameter[33];
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
pwLine4._Z._im = pwLine4.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[217] = data->simulationInfo->realParameter[214];
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
pwLine4._Z._re = pwLine4.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[218] = data->simulationInfo->realParameter[212];
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
pwLine4._Y._im = pwLine4.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[215] = data->simulationInfo->realParameter[210];
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
pwLine4._Y._re = pwLine4.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[216] = data->simulationInfo->realParameter[211];
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
pwLine4._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[213] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
pwLine3._Z._im = pwLine3.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[206] = data->simulationInfo->realParameter[203];
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
pwLine3._Z._re = pwLine3.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[207] = data->simulationInfo->realParameter[201];
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
pwLine3._Y._im = pwLine3.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[204] = data->simulationInfo->realParameter[199];
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
pwLine3._Y._re = pwLine3.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[205] = data->simulationInfo->realParameter[200];
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
pwLine3._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[202] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
pwLine1._Z._im = pwLine1.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[195] = data->simulationInfo->realParameter[192];
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
pwLine1._Z._re = pwLine1.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[196] = data->simulationInfo->realParameter[190];
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
pwLine1._Y._im = pwLine1.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[193] = data->simulationInfo->realParameter[188];
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
pwLine1._Y._re = pwLine1.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[194] = data->simulationInfo->realParameter[189];
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
pwLine1._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[191] = data->simulationInfo->realParameter[32];
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
pwLine._Z._im = pwLine.X
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[184] = data->simulationInfo->realParameter[181];
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
pwLine._Z._re = pwLine.R
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[185] = data->simulationInfo->realParameter[179];
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
pwLine._Y._im = pwLine.B
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[182] = data->simulationInfo->realParameter[177];
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
pwLine._Y._re = pwLine.G
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[183] = data->simulationInfo->realParameter[178];
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
pwLine._S_b = SysData.S_b
*/
OMC_DISABLE_OPT
static void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[180] = data->simulationInfo->realParameter[32];
  TRACE_POP
}
extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_9(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_8(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_7(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_6(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_5(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_4(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_3(DATA *data, threadData_t *threadData);

extern void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_2(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void OpenIPSL_Examples_Machines_PSSE_GENSAL_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_307(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_308(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_309(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_310(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_311(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_313(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_315(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_316(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_317(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_320(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_321(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_322(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_323(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_324(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_326(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_327(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_329(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_330(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_331(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_332(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_349(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_350(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_351(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_352(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_353(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_354(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_355(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_356(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_357(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_358(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_359(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_360(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_361(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_362(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_363(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_364(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_365(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_366(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_367(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_368(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_369(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_370(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_371(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_372(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_373(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_374(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_375(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_388(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_389(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_390(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_391(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_392(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_394(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_395(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_396(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_397(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_398(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_399(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_400(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_401(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_402(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_403(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_404(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_405(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_406(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_407(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_408(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_409(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_411(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_412(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_413(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_414(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_415(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_417(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_418(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_419(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_420(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_421(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_423(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_424(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_425(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_426(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_427(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_429(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_430(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_431(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_432(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_433(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_435(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_9(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_8(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_7(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_6(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_5(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_4(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_3(data, threadData);
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_2(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAL_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  data->simulationInfo->integerParameter[1] = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->localData[0]->realVars[50] /* gENCLS.omega variable */ = 0.0;
  data->modelData->realVarsData[50].time_unvarying = 1;
  data->simulationInfo->realParameter[38] = 0.0;
  data->modelData->realParameterData[38].time_unvarying = 1;
  data->simulationInfo->realParameter[39] = 0.5040355607168797;
  data->modelData->realParameterData[39].time_unvarying = 1;
  data->simulationInfo->realParameter[40] = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  data->simulationInfo->realParameter[41] = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  data->simulationInfo->realParameter[42] = 0.1016207385868717;
  data->modelData->realParameterData[42].time_unvarying = 1;
  data->simulationInfo->realParameter[43] = 0.0;
  data->modelData->realParameterData[43].time_unvarying = 1;
  data->simulationInfo->realParameter[54] = 0.4881;
  data->modelData->realParameterData[54].time_unvarying = 1;
  data->simulationInfo->realParameter[55] = -0.4999;
  data->modelData->realParameterData[55].time_unvarying = 1;
  data->simulationInfo->realParameter[56] = 1.502;
  data->modelData->realParameterData[56].time_unvarying = 1;
  data->simulationInfo->realParameter[61] = 0.1389;
  data->modelData->realParameterData[61].time_unvarying = 1;
  data->simulationInfo->realParameter[62] = 1.769;
  data->modelData->realParameterData[62].time_unvarying = 1;
  data->simulationInfo->realParameter[75] = 3.964;
  data->modelData->realParameterData[75].time_unvarying = 1;
  data->simulationInfo->realParameter[78] = 0.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  data->simulationInfo->realParameter[104] = -0.5967963464165397;
  data->modelData->realParameterData[104].time_unvarying = 1;
  data->simulationInfo->realParameter[105] = 0.8023927472901718;
  data->modelData->realParameterData[105].time_unvarying = 1;
  data->simulationInfo->realParameter[107] = 0.7755059208235644;
  data->modelData->realParameterData[107].time_unvarying = 1;
  data->simulationInfo->realParameter[108] = 1.042667787907505;
  data->modelData->realParameterData[108].time_unvarying = 1;
  data->simulationInfo->realParameter[110] = 0.2611109974718192;
  data->modelData->realParameterData[110].time_unvarying = 1;
  data->simulationInfo->realParameter[111] = 0.3078229735668604;
  data->modelData->realParameterData[111].time_unvarying = 1;
  data->simulationInfo->realParameter[112] = -5.013342868567351;
  data->modelData->realParameterData[112].time_unvarying = 1;
  data->simulationInfo->realParameter[113] = 0.7556357708851228;
  data->modelData->realParameterData[113].time_unvarying = 1;
  data->simulationInfo->realParameter[114] = -0.02580594464131273;
  data->modelData->realParameterData[114].time_unvarying = 1;
  data->simulationInfo->realParameter[115] = 0.4028250107397031;
  data->modelData->realParameterData[115].time_unvarying = 1;
  data->simulationInfo->realParameter[123] = 0.1511271541770246;
  data->modelData->realParameterData[123].time_unvarying = 1;
  data->simulationInfo->realParameter[124] = 1.00266857371347;
  data->modelData->realParameterData[124].time_unvarying = 1;
  data->simulationInfo->realParameter[125] = -0.4771256090286338;
  data->modelData->realParameterData[125].time_unvarying = 1;
  data->simulationInfo->realParameter[126] = 0.8947261249406468;
  data->modelData->realParameterData[126].time_unvarying = 1;
  data->simulationInfo->realParameter[133] = 0.05416582;
  data->modelData->realParameterData[133].time_unvarying = 1;
  data->simulationInfo->realParameter[134] = 0.4;
  data->modelData->realParameterData[134].time_unvarying = 1;
  data->simulationInfo->realParameter[141] = 0.07056215202908395;
  data->modelData->realParameterData[141].time_unvarying = 1;
  data->simulationInfo->realParameter[142] = 0.9975073847852077;
  data->modelData->realParameterData[142].time_unvarying = 1;
  data->simulationInfo->realParameter[150] = 0.2;
  data->modelData->realParameterData[150].time_unvarying = 1;
  data->simulationInfo->realParameter[151] = 0.0;
  data->modelData->realParameterData[151].time_unvarying = 1;
  data->simulationInfo->realParameter[152] = 1.55;
  data->modelData->realParameterData[152].time_unvarying = 1;
  data->simulationInfo->realParameter[153] = 0.0;
  data->modelData->realParameterData[153].time_unvarying = 1;
  OpenIPSL_Examples_Machines_PSSE_GENSAL_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

