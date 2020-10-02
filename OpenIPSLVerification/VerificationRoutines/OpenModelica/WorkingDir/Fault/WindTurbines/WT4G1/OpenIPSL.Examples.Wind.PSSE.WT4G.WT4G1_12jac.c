/* Jacobians 7 */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 131
type: SIMPLE_ASSIGN
$cse1 = sin(gENCLS2_1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,131};
  jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
$cse2 = cos(gENCLS2_1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,132};
  jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
$cse3 = sin(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,133};
  jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[82] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
$cse4 = cos(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,134};
  jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[82] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$res_NLSJac1_17.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.im.SeedNLSJac1 else pwLine2.vs.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.is.im.SeedNLSJac1 + (-pwLine2.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.is.re.SeedNLSJac1 + pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,135};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[16] /* $res_NLSJac1_17.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp0 && tmp1)?jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$res_NLSJac1_16.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.re.SeedNLSJac1 else pwLine2.vs.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.is.re.SeedNLSJac1 + pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac1 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.is.im.SeedNLSJac1 + (-pwLine2.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,136};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[15] /* $res_NLSJac1_16.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp2 && tmp3)?jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
$res_NLSJac1_15.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine2.vs.im.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.ir.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[14] /* $res_NLSJac1_15.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp4 && tmp5)?jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$res_NLSJac1_14.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine2.vs.re.SeedNLSJac1 - (pwLine2.Z.re * (pwLine2.ir.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,138};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  jacobian->resultVars[13] /* $res_NLSJac1_14.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp6 && tmp7)?jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
$res_NLSJac1_11.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine.vr.re.SeedNLSJac1 - (pwLine.Z.re * (pwLine.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[10] /* $res_NLSJac1_11.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp8 && tmp9)?jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
$res_NLSJac1_10.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine.vr.im.SeedNLSJac1 - (pwLine.Z.re * (pwLine.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[9] /* $res_NLSJac1_10.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp10 && tmp11)?jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
$res_NLSJac1_9.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine.vr.im.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  tmp12 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[8] /* $res_NLSJac1_9.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp12 && tmp13)?jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
$res_NLSJac1_4.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine.vr.re.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[3] /* $res_NLSJac1_4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp14 && tmp15)?jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.is.im.SeedNLSJac1) - pwLine1.is.im.SeedNLSJac1 - pwLine2.ir.im.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.is.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[0] /* pwLine2.ir.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
$res_NLSJac1_2.$pDERNLSJac1.dummyVarNLSJac1 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.re.SeedNLSJac1 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault.R * pwLine1.vs.im.SeedNLSJac1 - pwFault.X * pwLine1.vs.re.SeedNLSJac1) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
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
  jacobian->resultVars[1] /* $res_NLSJac1_2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.is.re.SeedNLSJac1) - pwLine1.is.re.SeedNLSJac1 - pwLine2.ir.re.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->tmpVars[16] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
$res_NLSJac1_3.$pDERNLSJac1.dummyVarNLSJac1 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.im.SeedNLSJac1 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault.R * pwLine1.vs.re.SeedNLSJac1 + pwFault.X * pwLine1.vs.im.SeedNLSJac1) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
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
  jacobian->resultVars[2] /* $res_NLSJac1_3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 = gENCLS2_1.X_d * gENCLS2_1.iq.SeedNLSJac1 - gENCLS2_1.R_a * gENCLS2_1.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  jacobian->tmpVars[13] /* gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 = (-gENCLS2_1.R_a) * gENCLS2_1.iq.SeedNLSJac1 - gENCLS2_1.X_d * gENCLS2_1.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  jacobian->tmpVars[12] /* gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res_NLSJac1_5.$pDERNLSJac1.dummyVarNLSJac1 = $cse1 * gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 + (-$cse2) * gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 - pwLine.vr.im.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  jacobian->resultVars[4] /* $res_NLSJac1_5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[12] /* gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + ((-jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[13] /* gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
$res_NLSJac1_6.$pDERNLSJac1.dummyVarNLSJac1 = $cse2 * gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 + $cse1 * gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 - pwLine.vr.re.SeedNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_150(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,150};
  jacobian->resultVars[5] /* $res_NLSJac1_6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[12] /* gENCLS2_1.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[13] /* gENCLS2_1.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1 = ($cse2 * gENCLS2_1.id.SeedNLSJac1 - $cse1 * gENCLS2_1.iq.SeedNLSJac1) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_151(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,151};
  jacobian->tmpVars[11] /* gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine1.ir.im.SeedNLSJac1) - gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_152(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,152};
  jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[11] /* gENCLS2_1.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
$res_NLSJac1_12.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac1 else pwLine.vr.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_153(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,153};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[11] /* $res_NLSJac1_12.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp44 && tmp45)?jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
$res_NLSJac1_13.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else pwLine.vr.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_154(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,154};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  jacobian->resultVars[12] /* $res_NLSJac1_13.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp46 && tmp47)?jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[15] /* pwLine.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 = ((-$cse1) * gENCLS2_1.id.SeedNLSJac1 - $cse2 * gENCLS2_1.iq.SeedNLSJac1) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_155(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,155};
  jacobian->tmpVars[10] /* gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((-jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */)) * (jacobian->seedVars[8] /* gENCLS2_1.id.SeedNLSJac1 SEED_VAR */) - ((jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[9] /* gENCLS2_1.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.ir.re.SeedNLSJac1) - gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_156(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,156};
  jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[10] /* gENCLS2_1.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
$res_NLSJac1_7.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac1 else pwLine.vr.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_157(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,157};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[6] /* $res_NLSJac1_7.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
$res_NLSJac1_8.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else pwLine.vr.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac1 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac1 + (-pwLine.vr.re.SeedNLSJac1) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_158(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,158};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[7] /* $res_NLSJac1_8.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[14] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine1.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine2.is.re.SeedNLSJac1) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_159(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,159};
  jacobian->tmpVars[9] /* wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[12] /* pwLine2.is.re.SeedNLSJac1 SEED_VAR */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB");
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine2.is.im.SeedNLSJac1) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_160(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,160};
  jacobian->tmpVars[8] /* wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac1 SEED_VAR */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB");
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1 = (pwLine2.vs.re * pwLine2.vs.re.SeedNLSJac1 + pwLine2.vs.im * pwLine2.vs.im.SeedNLSJac1) / sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_161(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,161};
  modelica_real tmp52;
  modelica_real tmp53;
  tmp52 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp53 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  jacobian->tmpVars[5] /* wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (jacobian->seedVars[14] /* pwLine2.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp52 * tmp52) + (tmp53 * tmp53)),"sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then 0.0 else 1.25 * wT4G1.Iperr.u2 * wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_162(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,162};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  tmp54 = Less(data->localData[0]->realVars[81] /* wT4G1.V variable */,0.4);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = 0.0;
  }
  else
  {
    tmp55 = Greater(data->localData[0]->realVars[81] /* wT4G1.V variable */,0.8);
    tmp57 = (tmp55?0.0:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (jacobian->tmpVars[5] /* wT4G1.V.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)));
  }
  jacobian->tmpVars[7] /* wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = tmp57;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 = if noEvent(pwLine2.vs.re == 0.0) then pwLine2.vs.re else (pwLine2.vs.im.SeedNLSJac1 * pwLine2.vs.re - pwLine2.vs.im * pwLine2.vs.re.SeedNLSJac1) / (pwLine2.vs.re ^ 2.0 * (1.0 + (pwLine2.vs.im / pwLine2.vs.re) ^ 2.0))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_163(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,163};
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
equation index: 164
type: SIMPLE_ASSIGN
$res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 = $cse3 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.re + (-$cse3) * wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 - $cse4 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.im - wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 - $cse4 * wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_164(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,164};
  jacobian->resultVars[0] /* $res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) + ((-jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[8] /* wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */))) - jacobian->tmpVars[7] /* wT4G1.IxL.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[9] /* wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
$res_NLSJac1_18.$pDERNLSJac1.dummyVarNLSJac1 = $cse3 * wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 + $cse4 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.re + $cse3 * wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 * wT4G1.Is.im - $cse4 * wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_165(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,165};
  jacobian->resultVars[17] /* $res_NLSJac1_18.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[9] /* wT4G1.Is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) + (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * ((jacobian->tmpVars[4] /* wT4G1.delta.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */)) - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[8] /* wT4G1.Is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
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
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_131(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_132(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_133(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_134(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_135(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_136(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_137(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_138(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_139(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_140(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_141(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_142(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_143(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_144(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_145(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_146(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_147(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_148(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_149(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_150(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_151(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_152(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_153(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_154(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_155(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_156(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_157(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_158(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_159(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_160(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_161(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_162(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_163(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_164(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_165(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 241
type: SIMPLE_ASSIGN
$cse10 = sin(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[1] /* $cse10 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[82] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$cse11 = cos(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[0] /* $cse11 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[82] /* wT4G1.delta variable */);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
$res_NLSJac2_17.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac2 else pwLine.vr.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[16] /* $res_NLSJac2_17.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp63 && tmp64)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
$res_NLSJac2_15.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac2 else pwLine.vr.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res_NLSJac2_15.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
$res_NLSJac2_14.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine.vr.im.SeedNLSJac2 - (pwLine.Z.re * (pwLine.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res_NLSJac2_14.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp67 && tmp68)?jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
$res_NLSJac2_13.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine.vr.re.SeedNLSJac2 - (pwLine.Z.re * (pwLine.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res_NLSJac2_13.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp69 && tmp70)?jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$res_NLSJac2_9.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine2.vs.im.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.ir.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[8] /* $res_NLSJac2_9.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp71 && tmp72)?jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
$res_NLSJac2_8.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine2.vs.re.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.ir.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[7] /* $res_NLSJac2_8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
$res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine.vr.re.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[1] /* $res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp75 && tmp76)?jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
$res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine.vr.im.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.is.im.SeedNLSJac2) - pwLine1.is.im.SeedNLSJac2 - pwLine2.ir.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[1] /* pwLine2.ir.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res_NLSJac2_12.$pDERNLSJac2.dummyVarNLSJac2 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.re.SeedNLSJac2 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 - (pwFault.R * pwLine1.vs.im.SeedNLSJac2 - pwFault.X * pwLine1.vs.re.SeedNLSJac2) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
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
  jacobian->resultVars[11] /* $res_NLSJac2_12.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp92;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.is.re.SeedNLSJac2) - pwLine1.is.re.SeedNLSJac2 - pwLine2.ir.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[3] /* pwLine2.ir.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res_NLSJac2_7.$pDERNLSJac2.dummyVarNLSJac2 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then pwLine1.vs.im.SeedNLSJac2 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 - (pwFault.R * pwLine1.vs.re.SeedNLSJac2 + pwFault.X * pwLine1.vs.im.SeedNLSJac2) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
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
  jacobian->resultVars[6] /* $res_NLSJac2_7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp106;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 = gENCLS2_1.X_d * gENCLS2_1.iq.SeedNLSJac2 - gENCLS2_1.R_a * gENCLS2_1.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->tmpVars[16] /* gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 = (-gENCLS2_1.R_a) * gENCLS2_1.iq.SeedNLSJac2 - gENCLS2_1.X_d * gENCLS2_1.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  jacobian->tmpVars[15] /* gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$res_NLSJac2_16.$pDERNLSJac2.dummyVarNLSJac2 = $cse5 * gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 + (-$cse6) * gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 - pwLine.vr.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  jacobian->resultVars[15] /* $res_NLSJac2_16.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[10] /* $cse5 variable */) * (jacobian->tmpVars[15] /* gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[11] /* $cse6 variable */)) * (jacobian->tmpVars[16] /* gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res_NLSJac2_18.$pDERNLSJac2.dummyVarNLSJac2 = $cse6 * gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 + $cse5 * gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 - pwLine.vr.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  jacobian->resultVars[17] /* $res_NLSJac2_18.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[11] /* $cse6 variable */) * (jacobian->tmpVars[15] /* gENCLS2_1.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[10] /* $cse5 variable */) * (jacobian->tmpVars[16] /* gENCLS2_1.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2 = ((-$cse5) * gENCLS2_1.id.SeedNLSJac2 - $cse6 * gENCLS2_1.iq.SeedNLSJac2) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  jacobian->tmpVars[14] /* gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[10] /* $cse5 variable */)) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[11] /* $cse6 variable */) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.ir.re.SeedNLSJac2) - gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
  jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS2_1.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse6 * gENCLS2_1.id.SeedNLSJac2 - $cse5 * gENCLS2_1.iq.SeedNLSJac2) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  jacobian->tmpVars[13] /* gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[11] /* $cse6 variable */) * (jacobian->seedVars[9] /* gENCLS2_1.id.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[10] /* $cse5 variable */) * (jacobian->seedVars[8] /* gENCLS2_1.iq.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine.ir.im.SeedNLSJac2) - gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS2_1.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res_NLSJac2_10.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else pwLine.vr.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[9] /* $res_NLSJac2_10.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res_NLSJac2_11.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else pwLine.vr.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine.vr.re.SeedNLSJac2) * pwLine1.Y.im - pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine.vr.im.SeedNLSJac2 * pwLine1.Y.im - pwLine.vr.re.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[10] /* $res_NLSJac2_11.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[11] /* pwLine.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[10] /* pwLine.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 = (-wT4G1.Is.re.SeedNLSJac2) * wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-jacobian->seedVars[12] /* wT4G1.Is.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res_NLSJac2_3.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.im.SeedNLSJac2 else pwLine2.vs.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.is.im.SeedNLSJac2 + (-pwLine2.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[2] /* $res_NLSJac2_3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$res_NLSJac2_6.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 else pwLine2.vs.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine2.Z.re * (pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.im - pwLine2.vs.re.SeedNLSJac2 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.is.im.SeedNLSJac2 + (-pwLine2.vs.re.SeedNLSJac2) * pwLine2.Y.im - pwLine2.vs.im.SeedNLSJac2 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,267};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  jacobian->resultVars[5] /* $res_NLSJac2_6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (jacobian->tmpVars[12] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 = (-pwLine2.is.im.SeedNLSJac2) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,268};
  jacobian->tmpVars[11] /* wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[13] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB");
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 = (pwLine2.vs.re * pwLine2.vs.re.SeedNLSJac2 + pwLine2.vs.im * pwLine2.vs.im.SeedNLSJac2) / sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,269};
  modelica_real tmp115;
  modelica_real tmp116;
  tmp115 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp116 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  jacobian->tmpVars[3] /* wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (jacobian->seedVars[17] /* pwLine2.vs.re.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (jacobian->seedVars[16] /* pwLine2.vs.im.SeedNLSJac2 SEED_VAR */),sqrt((tmp115 * tmp115) + (tmp116 * tmp116)),"sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2 = if abs(wT4G1.K2.T) <= 1e-15 then wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.K2.K else 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,270};
  modelica_boolean tmp117;
  tmp117 = LessEq(fabs(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */),1e-15);
  jacobian->tmpVars[5] /* wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp117?(jacobian->tmpVars[3] /* wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */):0.0);
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 = if wT4G1.K2.y < wT4G1.lVPL.VLVPL1 then 0.0 else if wT4G1.K2.y > wT4G1.lVPL.VLVPL2 then 0.0 else wT4G1.lVPL.K * wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  RELATIONHYSTERESIS(tmp118, data->localData[0]->realVars[78] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */, 10, Less);
  tmp120 = (modelica_boolean)tmp118;
  if(tmp120)
  {
    tmp121 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp119, data->localData[0]->realVars[78] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */, 11, Greater);
    tmp121 = (tmp119?0.0:(data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */) * (jacobian->tmpVars[5] /* wT4G1.K2.y.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[6] /* wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp121;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 = if wT4G1.K.y > wT4G1.lVPL.LVPL then wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 else 0.0
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,272};
  modelica_boolean tmp122;
  RELATIONHYSTERESIS(tmp122, data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */, data->localData[0]->realVars[83] /* wT4G1.lVPL.LVPL variable */, 13, Greater);
  jacobian->tmpVars[7] /* wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp122?jacobian->tmpVars[6] /* wT4G1.lVPL.LVPL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 else 1.25 * (wT4G1.Iperr.u2 * wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 + wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.V)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,273};
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_real tmp126;
  RELATIONHYSTERESIS(tmp123, data->localData[0]->realVars[81] /* wT4G1.V variable */, 0.4, 8, Less);
  tmp125 = (modelica_boolean)tmp123;
  if(tmp125)
  {
    tmp126 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp124, data->localData[0]->realVars[81] /* wT4G1.V variable */, 0.8, 9, Greater);
    tmp126 = (tmp124?jacobian->tmpVars[7] /* wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (jacobian->tmpVars[3] /* wT4G1.V.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[7] /* wT4G1.Iperr.u2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[81] /* wT4G1.V variable */)));
  }
  jacobian->tmpVars[8] /* wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp126;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 = if noEvent(pwLine2.vs.re == 0.0) then pwLine2.vs.re else (pwLine2.vs.im.SeedNLSJac2 * pwLine2.vs.re - pwLine2.vs.im * pwLine2.vs.re.SeedNLSJac2) / (pwLine2.vs.re ^ 2.0 * (1.0 + (pwLine2.vs.im / pwLine2.vs.re) ^ 2.0))
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_274(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,274};
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
equation index: 275
type: SIMPLE_ASSIGN
$cse7.$pDERNLSJac2.dummyVarNLSJac2 = (-$cse10) * wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_275(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,275};
  jacobian->tmpVars[9] /* $cse7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-jacobian->tmpVars[1] /* $cse10 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[2] /* wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$cse8.$pDERNLSJac2.dummyVarNLSJac2 = $cse11 * wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_276(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,276};
  jacobian->tmpVars[10] /* $cse8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse11 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[2] /* wT4G1.delta.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$res_NLSJac2_4.$pDERNLSJac2.dummyVarNLSJac2 = $cse8 * wT4G1.Is.re.SeedNLSJac2 + $cse8.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.re + (-$cse7) * wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 - $cse7.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.im
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_277(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,277};
  jacobian->resultVars[3] /* $res_NLSJac2_4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[13] /* $cse8 variable */) * (jacobian->seedVars[12] /* wT4G1.Is.re.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[10] /* $cse8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) + ((-data->localData[0]->realVars[12] /* $cse7 variable */)) * (jacobian->tmpVars[11] /* wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[9] /* $cse7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
$res_NLSJac2_5.$pDERNLSJac2.dummyVarNLSJac2 = (-$cse8) * wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 - $cse8.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.im - wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 - $cse7.$pDERNLSJac2.dummyVarNLSJac2 * wT4G1.Is.re - $cse7 * wT4G1.Is.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_278(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,278};
  jacobian->resultVars[4] /* $res_NLSJac2_5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[13] /* $cse8 variable */)) * (jacobian->tmpVars[11] /* wT4G1.Is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((jacobian->tmpVars[10] /* $cse8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */)) - jacobian->tmpVars[8] /* wT4G1.IxL.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[9] /* $cse7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) - ((data->localData[0]->realVars[12] /* $cse7 variable */) * (jacobian->seedVars[12] /* wT4G1.Is.re.SeedNLSJac2 SEED_VAR */));
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
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_265(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_266(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_267(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_268(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_269(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_270(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_271(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_272(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_273(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_274(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_275(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_276(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_277(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_278(data, threadData, jacobian, parentJacobian);
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


