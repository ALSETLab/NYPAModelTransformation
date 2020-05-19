/* Jacobians 7 */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 348
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS2_1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS2_1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
$cse3 = sin(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,350};
  jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
$cse4 = cos(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.im.SeedNLSJac1 else pwLine2.vs.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.is.im.SeedNLSJac1 + (-pwLine2.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.is.re.SeedNLSJac1 + pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp0 && tmp1)?jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.re.SeedNLSJac1 else pwLine2.vs.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.is.re.SeedNLSJac1 + pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac1 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.is.im.SeedNLSJac1 + (-pwLine2.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,353};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp2 && tmp3)?jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine2.vs.im.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.ir.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp4 && tmp5)?jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine2.vs.re.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.ir.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp6 && tmp7)?jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine.vr.re.SeedNLSJac1 - (pwLine.Z.re * (pwLine.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp8 && tmp9)?jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine.vr.im.SeedNLSJac1 - (pwLine.Z.re * (pwLine.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp10 && tmp11)?jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine.vr.im.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  tmp12 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp12 && tmp13)?jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine.vr.re.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,359};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp14 && tmp15)?jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.is.im.SeedNLSJac1) - pwLine1.is.im.SeedNLSJac1 - pwLine2.ir.im.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,360};
  jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac1.dummyVarNLSJac1 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.re.SeedNLSJac1 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault.R * pwLine1.vs.im.SeedNLSJac1 - pwFault.X * pwLine1.vs.re.SeedNLSJac1) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_361(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,361};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
  tmp28 = (modelica_boolean)tmp16;
  if(tmp28)
  {
    tmp29 = jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    tmp26 = (modelica_boolean)(tmp17 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp26)
    {
      tmp27 = jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */;
    }
    else
    {
      tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
      tmp24 = (modelica_boolean)tmp18;
      if(tmp24)
      {
        tmp19 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp20 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp21 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp22 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp23 = (tmp21 * tmp21) + (tmp22 * tmp22);
        tmp25 = jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */))) * ((tmp19 * tmp19) + (tmp20 * tmp20)),(tmp23 * tmp23),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp25 = jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.is.re.SeedNLSJac1) - pwLine1.is.re.SeedNLSJac1 - pwLine2.ir.re.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_362(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,362};
  jacobian->tmpVars[16] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac1.dummyVarNLSJac1 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.im.SeedNLSJac1 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault.R * pwLine1.vs.re.SeedNLSJac1 + pwFault.X * pwLine1.vs.im.SeedNLSJac1) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_363(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,363};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  tmp30 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
  tmp42 = (modelica_boolean)tmp30;
  if(tmp42)
  {
    tmp43 = jacobian->tmpVars[16] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    tmp40 = (modelica_boolean)(tmp31 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp40)
    {
      tmp41 = jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */;
    }
    else
    {
      tmp32 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
      tmp38 = (modelica_boolean)tmp32;
      if(tmp38)
      {
        tmp33 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp34 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp35 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp36 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp37 = (tmp35 * tmp35) + (tmp36 * tmp36);
        tmp39 = jacobian->tmpVars[16] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) + (data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */)) * ((tmp33 * tmp33) + (tmp34 * tmp34)),(tmp37 * tmp37),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp39 = jacobian->tmpVars[16] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp41 = tmp39;
    }
    tmp43 = tmp41;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 = gENCLS2_1.X_d * gENCLS2_1.iq.SeedNLSJac1 - gENCLS2_1.R_a * gENCLS2_1.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_364(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,364};
  jacobian->tmpVars[13] /* gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 = (-gENCLS2_1.R_a) * gENCLS2_1.iq.SeedNLSJac1 - gENCLS2_1.X_d * gENCLS2_1.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_365(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,365};
  jacobian->tmpVars[12] /* gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac1.dummyVarNLSJac1 = $cse1 * gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 + (-$cse2) * gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 - pwLine.vr.im.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_366(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,366};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[12] /* gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + ((-jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[13] /* gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac1.dummyVarNLSJac1 = $cse2 * gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 + $cse1 * gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 - pwLine.vr.re.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_367(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,367};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[12] /* gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[13] /* gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1 = ($cse2 * gENCLS2_1.id.SeedNLSJac1 - $cse1 * gENCLS2_1.iq.SeedNLSJac1) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_368(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,368};
  jacobian->tmpVars[11] /* gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine1.ir.im.SeedNLSJac1) - gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_369(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,369};
  jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[11] /* gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac1 else pwLine.vr.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_370(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,370};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp44 && tmp45)?jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else pwLine.vr.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_371(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,371};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp46 && tmp47)?jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 = ((-$cse1) * gENCLS2_1.id.SeedNLSJac1 - $cse2 * gENCLS2_1.iq.SeedNLSJac1) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_372(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,372};
  jacobian->tmpVars[10] /* gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((-jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */)) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.ir.re.SeedNLSJac1) - gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_373(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,373};
  jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[10] /* gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac1 else pwLine.vr.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_374(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,374};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else pwLine.vr.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_375(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,375};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine2.is.re.SeedNLSJac1) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_376(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,376};
  jacobian->tmpVars[9] /* wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB");
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine2.is.im.SeedNLSJac1) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_377(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,377};
  jacobian->tmpVars[8] /* wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB");
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1 = (pwLine2.vs.re * pwLine2.vs.re.SeedNLSJac1 + pwLine2.vs.im * pwLine2.vs.im.SeedNLSJac1) / sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,378};
  modelica_real tmp52;
  modelica_real tmp53;
  tmp52 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp53 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  jacobian->tmpVars[5] /* wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp52 * tmp52) + (tmp53 * tmp53)),"sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then 0.0 else 1.25 * wT4G1.Iperr.u2 * wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  tmp54 = Less(data->localData[0]->realVars[82] /* wT4G1.V variable */,0.4);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    tmp55 = Greater(data->localData[0]->realVars[82] /* wT4G1.V variable */,0.8);
    tmp57 = (tmp55?0.0:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (jacobian->tmpVars[5] /* wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)));
  }
  jacobian->tmpVars[7] /* wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = tmp57;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 = if noEvent(pwLine2.vs.re == 0.0) then pwLine2.vs.re else (pwLine2.vs.im.SeedNLSJac1 * pwLine2.vs.re - pwLine2.vs.im * pwLine2.vs.re.SeedNLSJac1) / (pwLine2.vs.re ^ 2.0 * (1.0 + (pwLine2.vs.im / pwLine2.vs.re) ^ 2.0))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_380(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,380};
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  tmp61 = (modelica_boolean)(data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ == 0.0);
  if(tmp61)
  {
    tmp62 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  }
  else
  {
    tmp59 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
    tmp60 = DIVISION(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */,data->localData[0]->realVars[69] /* pwLine2.vs.re variable */,"pwLine2.vs.re");
    tmp62 = DIVISION((jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */)),((tmp59 * tmp59)) * (1.0 + (tmp60 * tmp60)),"pwLine2.vs.re ^ 2.0 * (1.0 + (pwLine2.vs.im / pwLine2.vs.re) ^ 2.0)");
  }
  jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = tmp62;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac1.dummyVarNLSJac1 = $cse3 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.re + (-$cse3) * wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 - $cse4 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.im - wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 - $cse4 * wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_381(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,381};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) + ((-jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[8] /* wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */))) - jacobian->tmpVars[7] /* wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[9] /* wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac1.dummyVarNLSJac1 = $cse3 * wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 + $cse4 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.re + $cse3 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.im - $cse4 * wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,382};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[9] /* wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) + (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */)) - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[8] /* wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacNLSJac1_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_NLSJac1;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_NLSJac1;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_348(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_349(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_350(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_351(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_352(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_353(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_354(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_355(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_356(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_357(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_358(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_359(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_360(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_361(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_362(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_363(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_364(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_365(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_366(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_367(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_368(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_369(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_370(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_371(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_372(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_373(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_374(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_375(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_376(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_377(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_378(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_379(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_380(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_381(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_382(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 458
type: SIMPLE_ASSIGN
$cse10 = sin(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  jacobian->tmpVars[1] /* $cse10 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$cse11 = cos(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  jacobian->tmpVars[0] /* $cse11 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac2 else pwLine.vr.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,460};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp63 && tmp64)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac2 else pwLine.vr.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine.vr.im.SeedNLSJac2 - (pwLine.Z.re * (pwLine.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,462};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp67 && tmp68)?jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine.vr.re.SeedNLSJac2 - (pwLine.Z.re * (pwLine.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,463};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp69 && tmp70)?jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine2.vs.im.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.ir.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,464};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp71 && tmp72)?jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine2.vs.re.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.ir.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_465(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,465};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine.vr.re.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,466};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp75 && tmp76)?jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine.vr.im.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,467};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.is.im.SeedNLSJac2) - pwLine1.is.im.SeedNLSJac2 - pwLine2.ir.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_468(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,468};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac2.dummyVarNLSJac2 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.re.SeedNLSJac2 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 - (pwFault.R * pwLine1.vs.im.SeedNLSJac2 - pwFault.X * pwLine1.vs.re.SeedNLSJac2) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_469(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,469};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */, 4, Less);
  tmp91 = (modelica_boolean)tmp79;
  if(tmp91)
  {
    tmp92 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
    tmp89 = (modelica_boolean)(tmp80 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp89)
    {
      tmp90 = jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
      tmp87 = (modelica_boolean)tmp81;
      if(tmp87)
      {
        tmp82 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp83 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp84 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp85 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp86 = (tmp84 * tmp84) + (tmp85 * tmp85);
        tmp88 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */))) * ((tmp82 * tmp82) + (tmp83 * tmp83)),(tmp86 * tmp86),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp88 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
      }
      tmp90 = tmp88;
    }
    tmp92 = tmp90;
  }
  jacobian->resultVars[11] /* $res12.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp92;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.is.re.SeedNLSJac2) - pwLine1.is.re.SeedNLSJac2 - pwLine2.ir.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_470(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,470};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac2.dummyVarNLSJac2 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.im.SeedNLSJac2 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 - (pwFault.R * pwLine1.vs.re.SeedNLSJac2 + pwFault.X * pwLine1.vs.im.SeedNLSJac2) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_471(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,471};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  modelica_boolean tmp103;
  modelica_real tmp104;
  modelica_boolean tmp105;
  modelica_real tmp106;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */, 4, Less);
  tmp105 = (modelica_boolean)tmp93;
  if(tmp105)
  {
    tmp106 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
    tmp103 = (modelica_boolean)(tmp94 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp103)
    {
      tmp104 = jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
      tmp101 = (modelica_boolean)tmp95;
      if(tmp101)
      {
        tmp96 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp97 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp98 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp99 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp100 = (tmp98 * tmp98) + (tmp99 * tmp99);
        tmp102 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) + (data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */)) * ((tmp96 * tmp96) + (tmp97 * tmp97)),(tmp100 * tmp100),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp102 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
      }
      tmp104 = tmp102;
    }
    tmp106 = tmp104;
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp106;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 = gENCLS2_1.X_d * gENCLS2_1.iq.SeedNLSJac2 - gENCLS2_1.R_a * gENCLS2_1.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_472(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,472};
  jacobian->tmpVars[16] /* gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 = (-gENCLS2_1.R_a) * gENCLS2_1.iq.SeedNLSJac2 - gENCLS2_1.X_d * gENCLS2_1.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,473};
  jacobian->tmpVars[15] /* gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac2.dummyVarNLSJac2 = $cse5 * gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 + (-$cse6) * gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 - pwLine.vr.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,474};
  jacobian->resultVars[15] /* $res16.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[10] /* $cse5 variable */) * (jacobian->tmpVars[15] /* gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[11] /* $cse6 variable */)) * (jacobian->tmpVars[16] /* gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac2.dummyVarNLSJac2 = $cse6 * gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 + $cse5 * gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 - pwLine.vr.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,475};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[11] /* $cse6 variable */) * (jacobian->tmpVars[15] /* gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[10] /* $cse5 variable */) * (jacobian->tmpVars[16] /* gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2 = ((-$cse5) * gENCLS2_1.id.SeedNLSJac2 - $cse6 * gENCLS2_1.iq.SeedNLSJac2) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,476};
  jacobian->tmpVars[14] /* gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[10] /* $cse5 variable */)) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[11] /* $cse6 variable */) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.ir.re.SeedNLSJac2) - gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_477(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,477};
  jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse6 * gENCLS2_1.id.SeedNLSJac2 - $cse5 * gENCLS2_1.iq.SeedNLSJac2) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_478(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,478};
  jacobian->tmpVars[13] /* gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[11] /* $cse6 variable */) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[10] /* $cse5 variable */) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.ir.im.SeedNLSJac2) - gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_479(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,479};
  jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else pwLine.vr.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_480(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,480};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else pwLine.vr.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_481(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,481};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 = (-wT4G1.Is.re.SeedNLSJac2) * wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_482(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,482};
  jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-jacobian->seedVars[12] /* wT4G1.Is.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.im.SeedNLSJac2 else pwLine2.vs.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.is.im.SeedNLSJac2 + (-pwLine2.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_483(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,483};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 else pwLine2.vs.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac2 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.is.im.SeedNLSJac2 + (-pwLine2.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_484(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,484};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine2.is.im.SeedNLSJac2) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_485(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,485};
  jacobian->tmpVars[11] /* wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB");
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 = (pwLine2.vs.re * pwLine2.vs.re.SeedNLSJac2 + pwLine2.vs.im * pwLine2.vs.im.SeedNLSJac2) / sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_486(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,486};
  modelica_real tmp115;
  modelica_real tmp116;
  tmp115 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp116 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  jacobian->tmpVars[3] /* wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */),sqrt((tmp115 * tmp115) + (tmp116 * tmp116)),"sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2 = if abs(wT4G1.K2.T) <= 1e-15 then wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.K2.K else 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_487(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,487};
  modelica_boolean tmp117;
  tmp117 = LessEq(fabs(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */),1e-15);
  jacobian->tmpVars[5] /* wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp117?(jacobian->tmpVars[3] /* wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */):0.0);
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 = if wT4G1.K2.y < wT4G1.lVPL.VLVPL1 then 0.0 else if wT4G1.K2.y > wT4G1.lVPL.VLVPL2 then 0.0 else wT4G1.lVPL.K * wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  RELATIONHYSTERESIS(tmp118, data->localData[0]->realVars[79] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */, 10, Less);
  tmp120 = (modelica_boolean)tmp118;
  if(tmp120)
  {
    tmp121 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp119, data->localData[0]->realVars[79] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */, 11, Greater);
    tmp121 = (tmp119?0.0:(data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */) * (jacobian->tmpVars[5] /* wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[6] /* wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp121;
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 = if wT4G1.K.y > wT4G1.lVPL.LVPL then wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 else 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  modelica_boolean tmp122;
  RELATIONHYSTERESIS(tmp122, data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */, data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */, 13, Greater);
  jacobian->tmpVars[7] /* wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp122?jacobian->tmpVars[6] /* wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 else 1.25 * (wT4G1.Iperr.u2 * wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 + wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.V)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  RELATIONHYSTERESIS(tmp123, data->localData[0]->realVars[82] /* wT4G1.V variable */, 0.4, 8, Less);
  tmp125 = (modelica_boolean)tmp123;
  if(tmp125)
  {
    tmp126 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp124, data->localData[0]->realVars[82] /* wT4G1.V variable */, 0.8, 9, Greater);
    tmp126 = (tmp124?jacobian->tmpVars[7] /* wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (jacobian->tmpVars[3] /* wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[82] /* wT4G1.V variable */)));
  }
  jacobian->tmpVars[8] /* wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp126;
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 = if noEvent(pwLine2.vs.re == 0.0) then pwLine2.vs.re else (pwLine2.vs.im.SeedNLSJac2 * pwLine2.vs.re - pwLine2.vs.im * pwLine2.vs.re.SeedNLSJac2) / (pwLine2.vs.re ^ 2.0 * (1.0 + (pwLine2.vs.im / pwLine2.vs.re) ^ 2.0))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,491};
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  tmp130 = (modelica_boolean)(data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ == 0.0);
  if(tmp130)
  {
    tmp131 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  }
  else
  {
    tmp128 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
    tmp129 = DIVISION(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */,data->localData[0]->realVars[69] /* pwLine2.vs.re variable */,"pwLine2.vs.re");
    tmp131 = DIVISION((jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */)),((tmp128 * tmp128)) * (1.0 + (tmp129 * tmp129)),"pwLine2.vs.re ^ 2.0 * (1.0 + (pwLine2.vs.im / pwLine2.vs.re) ^ 2.0)");
  }
  jacobian->tmpVars[2] /* wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp131;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
$cse7.$pDERNLSJac2.dummyVarNLSJac2 = (-$cse10) * wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,492};
  jacobian->tmpVars[9] /* $cse7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-jacobian->tmpVars[1] /* $cse10 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[2] /* wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
$cse8.$pDERNLSJac2.dummyVarNLSJac2 = $cse11 * wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,493};
  jacobian->tmpVars[10] /* $cse8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse11 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[2] /* wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac2.dummyVarNLSJac2 = $cse8 * wT4G1.Is.re.SeedNLSJac2 + $cse8.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.re + (-$cse7) * wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 - $cse7.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.im
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[13] /* $cse8 variable */) * (jacobian->seedVars[12] /* wT4G1.Is.re.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[10] /* $cse8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) + ((-data->localData[0]->realVars[12] /* $cse7 variable */)) * (jacobian->tmpVars[11] /* wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[9] /* $cse7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac2.dummyVarNLSJac2 = (-$cse8) * wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 - $cse8.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.im - wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 - $cse7.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.re - $cse7 * wT4G1.Is.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[13] /* $cse8 variable */)) * (jacobian->tmpVars[11] /* wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[10] /* $cse8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */)) - jacobian->tmpVars[8] /* wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[9] /* $cse7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) - ((data->localData[0]->realVars[12] /* $cse7 variable */) * (jacobian->seedVars[12] /* wT4G1.Is.re.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacNLSJac2_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_NLSJac2;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_NLSJac2;
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_458(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_459(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_460(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_461(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_462(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_463(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_464(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_465(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_466(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_467(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_468(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_469(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_470(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_471(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_472(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_473(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_474(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_475(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_476(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_477(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_478(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_479(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_480(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_481(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_482(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_483(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_484(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_485(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_486(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_487(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_488(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_489(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_490(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_491(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_492(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_493(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_494(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_495(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+18] = {0,3,3,3,3,3,3,4,4,6,6,7,7,4,4,5,11,11,5};
  const int rowIndex[92] = {1,13,14,1,9,10,2,9,10,2,13,14,1,3,8,2,3,8,6,7,11,12,6,7,11,12,4,5,6,7,11,12,4,5,6,7,11,12,3,5,6,7,10,11,12,4,6,7,8,9,11,12,0,15,16,17,0,15,16,17,0,14,15,16,17,1,2,3,6,8,9,10,12,13,14,16,1,2,3,7,8,9,10,11,13,14,15,0,13,15,16,17};
  int i = 0;
  
  jacobian->sizeCols = 18;
  jacobian->sizeRows = 18;
  jacobian->sizeTmpVars = 36;
  jacobian->seedVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(36,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(92*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 92;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(int));
  jacobian->sparsePattern->maxColors = 8;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(int));
  
  for(i=2;i<18+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 92*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[16] = 1;
  jacobian->sparsePattern->colorCols[15] = 2;
  jacobian->sparsePattern->colorCols[11] = 3;
  jacobian->sparsePattern->colorCols[10] = 4;
  jacobian->sparsePattern->colorCols[5] = 5;
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[4] = 6;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[1] = 7;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[0] = 8;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+18] = {0,3,3,3,3,3,3,4,4,4,4,7,7,4,4,11,11,5,5};
  const int rowIndex[88] = {11,12,13,7,8,11,6,12,13,6,7,8,0,1,11,0,1,6,9,10,14,16,9,10,14,16,9,10,15,17,9,10,15,17,1,9,10,12,14,16,17,0,9,10,13,14,15,16,2,3,4,5,2,3,4,5,0,1,2,6,7,8,10,11,12,13,14,0,1,5,6,7,8,9,11,12,13,16,2,3,4,5,8,2,3,4,5,7};
  int i = 0;
  
  jacobian->sizeCols = 18;
  jacobian->sizeRows = 18;
  jacobian->sizeTmpVars = 39;
  jacobian->seedVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(39,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(88*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 88;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(int));
  jacobian->sparsePattern->maxColors = 8;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(int));
  
  for(i=2;i<18+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 88*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[15] = 1;
  jacobian->sparsePattern->colorCols[14] = 2;
  jacobian->sparsePattern->colorCols[11] = 3;
  jacobian->sparsePattern->colorCols[10] = 4;
  jacobian->sparsePattern->colorCols[5] = 5;
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[4] = 6;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[1] = 7;
  jacobian->sparsePattern->colorCols[2] = 7;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[0] = 8;
  jacobian->sparsePattern->colorCols[3] = 8;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,2,2,3,2};
  const int rowIndex[11] = {2,4,2,4,2,4,2,3,4,2,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(11*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 11;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern->maxColors = 5;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 11*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[1] = 4;
  jacobian->sparsePattern->colorCols[0] = 5;
  TRACE_POP
  return 0;
}


