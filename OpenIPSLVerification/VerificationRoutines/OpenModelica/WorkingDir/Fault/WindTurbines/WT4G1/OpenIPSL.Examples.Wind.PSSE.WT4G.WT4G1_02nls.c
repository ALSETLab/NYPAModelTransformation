/* Non Linear Systems */
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_model.h"
#include "OpenIPSL.Examples.Wind.PSSE.WT4G.WT4G1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 421
type: SIMPLE_ASSIGN
wT4G1.delta = atan2(pwLine2.vs.im, pwLine2.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[83] /* wT4G1.delta variable */ = atan2(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */, data->localData[0]->realVars[69] /* pwLine2.vs.re variable */);
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
wT4G1.V = sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp1 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  data->localData[0]->realVars[82] /* wT4G1.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
wT4G1.IyL = if wT4G1.V > wT4G1.hVRCL.VHVRCR then wT4G1.hVRCL.CurHVRCR else wT4G1.Iy
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[82] /* wT4G1.V variable */, data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */, 12, Greater);
  data->localData[0]->realVars[76] /* wT4G1.IyL variable */ = (tmp0?data->simulationInfo->realParameter[133] /* wT4G1.hVRCL.CurHVRCR PARAM */:data->localData[0]->realVars[75] /* wT4G1.Iy variable */);
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
wT4G1.K2.y = if abs(wT4G1.K2.T) <= 1e-15 then wT4G1.V * wT4G1.K2.K else wT4G1.K2.state
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */),1e-15);
  data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ = (tmp0?(data->localData[0]->realVars[82] /* wT4G1.V variable */) * (data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */):data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
wT4G1.lVPL.LVPL = if wT4G1.K2.y < wT4G1.lVPL.VLVPL1 then 0.0 else if wT4G1.K2.y > wT4G1.lVPL.VLVPL2 then 1000000.0 else wT4G1.lVPL.K * (wT4G1.K2.y - wT4G1.lVPL.VLVPL1)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[79] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */, 10, Less);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[79] /* wT4G1.K2.y variable */, data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */, 11, Greater);
    tmp3 = (tmp1?1000000.0:(data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */) * (data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ - data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */));
  }
  data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
wT4G1.Iperr.u2 = smooth(0, if wT4G1.K.y > wT4G1.lVPL.LVPL then wT4G1.lVPL.LVPL else if wT4G1.K.y < wT4G1.const.k then wT4G1.const.k else wT4G1.K.y)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */,data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */,data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */:data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */);
  }
  data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
wT4G1.IxL = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then wT4G1.Iperr.u2 else 1.25 * wT4G1.Iperr.u2 * wT4G1.V
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[82] /* wT4G1.V variable */, 0.4, 8, Less);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[82] /* wT4G1.V variable */, 0.8, 9, Greater);
    tmp3 = (tmp1?data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (data->localData[0]->realVars[82] /* wT4G1.V variable */)));
  }
  data->localData[0]->realVars[74] /* wT4G1.IxL variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
$cse7 = cos(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[12] /* $cse7 variable */ = cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
$cse8 = sin(wT4G1.delta)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[13] /* $cse8 variable */ = sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */);
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
wT4G1.Is.im = (-pwLine2.is.im) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->localData[0]->realVars[72] /* wT4G1.Is.im variable */ = DIVISION_SIM((-data->localData[0]->realVars[66] /* pwLine2.is.im variable */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
pwLine2.is.re = (-wT4G1.Is.re) * wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = ((-data->localData[0]->realVars[73] /* wT4G1.Is.re variable */)) * (data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii = ($cse6 * gENCLS2_1.id - $cse5 * gENCLS2_1.iq) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */ = ((data->localData[0]->realVars[11] /* $cse6 variable */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */) - ((data->localData[0]->realVars[10] /* $cse5 variable */) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir = ((-$cse5) * gENCLS2_1.id - $cse6 * gENCLS2_1.iq) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */ = (((-data->localData[0]->realVars[10] /* $cse5 variable */)) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */) - ((data->localData[0]->realVars[11] /* $cse6 variable */) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
gENCLS2_1.vq = gENCLS2_1.eq + (-gENCLS2_1.R_a) * gENCLS2_1.iq - gENCLS2_1.X_d * gENCLS2_1.id
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */ = data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ + ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */));
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
gENCLS2_1.vd = gENCLS2_1.X_d * gENCLS2_1.iq - gENCLS2_1.R_a * gENCLS2_1.id
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */));
  TRACE_POP
}
/*
equation index: 436
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine.ir.im) - gENCLS2_1.p.ii
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[44] /* pwLine.ir.im variable */) - data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */;
  TRACE_POP
}
/*
equation index: 437
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine.ir.re) - gENCLS2_1.p.ir
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[45] /* pwLine.ir.re variable */) - data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */;
  TRACE_POP
}
/*
equation index: 438
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine.is.re) - pwLine1.is.re - pwLine2.ir.re
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->localData[0]->realVars[39] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[47] /* pwLine.is.re variable */) - data->localData[0]->realVars[57] /* pwLine1.is.re variable */ - data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  TRACE_POP
}
/*
equation index: 439
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine.is.im) - pwLine1.is.im - pwLine2.ir.im
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->localData[0]->realVars[38] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[46] /* pwLine.is.im variable */) - data->localData[0]->realVars[56] /* pwLine1.is.im variable */ - data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  TRACE_POP
}

void residualFunc496(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,496};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  /* iteration variables */
  for (i=0; i<18; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<18; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[46] /* pwLine.is.im variable */ = xloc[0];
  data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[47] /* pwLine.is.re variable */ = xloc[2];
  data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[56] /* pwLine1.is.im variable */ = xloc[4];
  data->localData[0]->realVars[57] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[45] /* pwLine.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[44] /* pwLine.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = xloc[8];
  data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = xloc[9];
  data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = xloc[10];
  data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = xloc[11];
  data->localData[0]->realVars[73] /* wT4G1.Is.re variable */ = xloc[12];
  data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = xloc[13];
  data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = xloc[14];
  data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = xloc[15];
  data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = xloc[16];
  data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = xloc[17];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_421(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_422(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_423(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_424(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_425(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_426(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_427(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_428(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_429(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_430(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_431(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_432(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_433(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_434(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_435(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_436(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_437(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_438(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_439(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[56] /* pwLine1.is.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[57] /* pwLine1.is.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  res[2] = ((tmp4 && tmp5)?data->localData[0]->realVars[66] /* pwLine2.is.im variable */:data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine2.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));

  res[3] = (data->localData[0]->realVars[13] /* $cse8 variable */) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) + data->localData[0]->realVars[76] /* wT4G1.IyL variable */ - ((data->localData[0]->realVars[12] /* $cse7 variable */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));

  res[4] = ((-data->localData[0]->realVars[12] /* $cse7 variable */)) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) - data->localData[0]->realVars[74] /* wT4G1.IxL variable */ - ((data->localData[0]->realVars[13] /* $cse8 variable */) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  res[5] = ((tmp6 && tmp7)?data->localData[0]->realVars[67] /* pwLine2.is.re variable */:data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine2.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */, 4, Less);
  tmp17 = (modelica_boolean)tmp8;
  if(tmp17)
  {
    tmp18 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
    tmp15 = (modelica_boolean)(tmp9 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp15)
    {
      tmp16 = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
      tmp13 = (modelica_boolean)tmp10;
      if(tmp13)
      {
        tmp11 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp12 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp14 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) + (data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */),(tmp11 * tmp11) + (tmp12 * tmp12),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp14 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */;
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  res[6] = tmp18;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  res[7] = ((tmp19 && tmp20)?data->localData[0]->realVars[65] /* pwLine2.ir.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */, 7, Less);
  res[8] = ((tmp21 && tmp22)?data->localData[0]->realVars[64] /* pwLine2.ir.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  res[9] = ((tmp23 && tmp24)?data->localData[0]->realVars[55] /* pwLine1.ir.re variable */:data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */, 3, Less);
  res[10] = ((tmp25 && tmp26)?data->localData[0]->realVars[54] /* pwLine1.ir.im variable */:data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */, 4, Less);
  tmp36 = (modelica_boolean)tmp27;
  if(tmp36)
  {
    tmp37 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
    tmp34 = (modelica_boolean)(tmp28 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp34)
    {
      tmp35 = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */, 5, Less);
      tmp32 = (modelica_boolean)tmp29;
      if(tmp32)
      {
        tmp30 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp31 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp33 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) - ((data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)),(tmp30 * tmp30) + (tmp31 * tmp31),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp33 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */;
      }
      tmp35 = tmp33;
    }
    tmp37 = tmp35;
  }
  res[11] = tmp37;

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[47] /* pwLine.is.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[46] /* pwLine.is.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[44] /* pwLine.ir.im variable */:data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));

  res[15] = (data->localData[0]->realVars[10] /* $cse5 variable */) * (data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */) + ((-data->localData[0]->realVars[11] /* $cse6 variable */)) * (data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */) - data->localData[0]->realVars[48] /* pwLine.vr.im variable */;

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */, 1, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[45] /* pwLine.ir.re variable */:data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));

  res[17] = (data->localData[0]->realVars[11] /* $cse6 variable */) * (data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */) + (data->localData[0]->realVars[10] /* $cse5 variable */) * (data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */) - data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS496(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+18] = {0,3,3,3,3,3,3,4,4,4,4,7,7,4,4,11,11,5,5};
  const int rowIndex[88] = {11,12,13,7,8,11,6,12,13,6,7,8,0,1,11,0,1,6,9,10,14,16,9,10,14,16,9,10,15,17,9,10,15,17,1,9,10,12,14,16,17,0,9,10,13,14,15,16,2,3,4,5,2,3,4,5,0,1,2,6,7,8,10,11,12,13,14,0,1,5,6,7,8,9,11,12,13,16,2,3,4,5,8,2,3,4,5,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(88*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 88;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(int));
  inSysData->sparsePattern->maxColors = 8;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(int));
  
  for(i=2;i<18+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 88*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[15] = 1;
  inSysData->sparsePattern->colorCols[14] = 2;
  inSysData->sparsePattern->colorCols[11] = 3;
  inSysData->sparsePattern->colorCols[10] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[1] = 7;
  inSysData->sparsePattern->colorCols[2] = 7;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[0] = 8;
  inSysData->sparsePattern->colorCols[3] = 8;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
}
void initializeStaticDataNLS496(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.max;
  /* static nls data for pwLine2.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.max;
  /* static nls data for pwLine.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.max;
  /* static nls data for pwLine2.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[44].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[44].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[44].attribute /* pwLine.ir.im */.max;
  /* static nls data for gENCLS2_1.iq */
  sysData->nominal[i] = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.max;
  /* static nls data for gENCLS2_1.id */
  sysData->nominal[i] = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.max;
  /* static nls data for pwLine.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.max;
  /* static nls data for pwLine.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.max;
  /* static nls data for wT4G1.Is.re */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* wT4G1.Is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* wT4G1.Is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* wT4G1.Is.re */.max;
  /* static nls data for pwLine2.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine2.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.max;
  /* static nls data for pwLine2.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS496(sysData);
}

void getIterationVarsNLS496(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[46] /* pwLine.is.im variable */;
  array[1] = data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  array[2] = data->localData[0]->realVars[47] /* pwLine.is.re variable */;
  array[3] = data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  array[4] = data->localData[0]->realVars[56] /* pwLine1.is.im variable */;
  array[5] = data->localData[0]->realVars[57] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[45] /* pwLine.ir.re variable */;
  array[7] = data->localData[0]->realVars[44] /* pwLine.ir.im variable */;
  array[8] = data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */;
  array[9] = data->localData[0]->realVars[31] /* gENCLS2_1.id variable */;
  array[10] = data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  array[11] = data->localData[0]->realVars[48] /* pwLine.vr.im variable */;
  array[12] = data->localData[0]->realVars[73] /* wT4G1.Is.re variable */;
  array[13] = data->localData[0]->realVars[66] /* pwLine2.is.im variable */;
  array[14] = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
  array[15] = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */;
  array[16] = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  array[17] = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
}


/* inner equations */

/*
equation index: 316
type: SIMPLE_ASSIGN
wT4G1.delta = atan2(pwLine2.vs.im, pwLine2.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[83] /* wT4G1.delta variable */ = atan2(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */, data->localData[0]->realVars[69] /* pwLine2.vs.re variable */);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
wT4G1.V = sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp1 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  data->localData[0]->realVars[82] /* wT4G1.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
wT4G1.IyL = if wT4G1.V > wT4G1.hVRCL.VHVRCR then wT4G1.hVRCL.CurHVRCR else wT4G1.Iy
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[82] /* wT4G1.V variable */,data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */);
  data->localData[0]->realVars[76] /* wT4G1.IyL variable */ = (tmp0?data->simulationInfo->realParameter[133] /* wT4G1.hVRCL.CurHVRCR PARAM */:data->localData[0]->realVars[75] /* wT4G1.Iy variable */);
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
wT4G1.IxL = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then wT4G1.Iperr.u2 else 1.25 * wT4G1.Iperr.u2 * wT4G1.V
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Less(data->localData[0]->realVars[82] /* wT4G1.V variable */,0.4);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[82] /* wT4G1.V variable */,0.8);
    tmp3 = (tmp1?data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (data->localData[0]->realVars[82] /* wT4G1.V variable */)));
  }
  data->localData[0]->realVars[74] /* wT4G1.IxL variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
wT4G1.Is.im = (-pwLine2.is.im) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[72] /* wT4G1.Is.im variable */ = DIVISION_SIM((-data->localData[0]->realVars[66] /* pwLine2.is.im variable */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
wT4G1.Is.re = (-pwLine2.is.re) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[73] /* wT4G1.Is.re variable */ = DIVISION_SIM((-data->localData[0]->realVars[67] /* pwLine2.is.re variable */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir = ((-sin(gENCLS2_1.delta)) * gENCLS2_1.id - cos(gENCLS2_1.delta) * gENCLS2_1.iq) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */))) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii = (cos(gENCLS2_1.delta) * gENCLS2_1.id - sin(gENCLS2_1.delta) * gENCLS2_1.iq) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
gENCLS2_1.vq = gENCLS2_1.eq + (-gENCLS2_1.R_a) * gENCLS2_1.iq - gENCLS2_1.X_d * gENCLS2_1.id
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */ = data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ + ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */));
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
gENCLS2_1.vd = gENCLS2_1.X_d * gENCLS2_1.iq - gENCLS2_1.R_a * gENCLS2_1.id
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */));
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine.ir.re) - gENCLS2_1.p.ir
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[45] /* pwLine.ir.re variable */) - data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */;
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.ir.im) - gENCLS2_1.p.ii
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[44] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[54] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */;
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine.is.re) - pwLine1.is.re - pwLine2.ir.re
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[39] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[47] /* pwLine.is.re variable */) - data->localData[0]->realVars[57] /* pwLine1.is.re variable */ - data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine.is.im) - pwLine1.is.im - pwLine2.ir.im
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[38] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[46] /* pwLine.is.im variable */) - data->localData[0]->realVars[56] /* pwLine1.is.im variable */ - data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  TRACE_POP
}

void residualFunc383(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,383};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  /* iteration variables */
  for (i=0; i<18; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<18; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[46] /* pwLine.is.im variable */ = xloc[1];
  data->localData[0]->realVars[47] /* pwLine.is.re variable */ = xloc[2];
  data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[56] /* pwLine1.is.im variable */ = xloc[4];
  data->localData[0]->realVars[57] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[45] /* pwLine.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = xloc[8];
  data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = xloc[9];
  data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = xloc[10];
  data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = xloc[11];
  data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = xloc[12];
  data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = xloc[13];
  data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = xloc[14];
  data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = xloc[15];
  data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = xloc[16];
  data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = xloc[17];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_316(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_317(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_318(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_319(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_320(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_321(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_322(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_323(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_324(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_325(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_326(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_327(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_328(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_329(data, threadData);
  /* body */
  res[0] = ((-cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */))) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) - data->localData[0]->realVars[74] /* wT4G1.IxL variable */ - ((sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */)) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) - ((data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) + (data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[57] /* pwLine1.is.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));

  res[4] = (sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */))) * (data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */) - data->localData[0]->realVars[48] /* pwLine.vr.im variable */;

  res[5] = (cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */) - data->localData[0]->realVars[49] /* pwLine.vr.re variable */;

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[6] = ((tmp24 && tmp25)?data->localData[0]->realVars[54] /* pwLine1.ir.im variable */:data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[7] = ((tmp26 && tmp27)?data->localData[0]->realVars[55] /* pwLine1.ir.re variable */:data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[8] = ((tmp28 && tmp29)?data->localData[0]->realVars[56] /* pwLine1.is.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[46] /* pwLine.is.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[47] /* pwLine.is.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[45] /* pwLine.ir.re variable */:data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[44] /* pwLine.ir.im variable */:data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[65] /* pwLine2.ir.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[64] /* pwLine2.ir.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[67] /* pwLine2.is.re variable */:data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine2.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[66] /* pwLine2.is.im variable */:data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine2.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));

  res[17] = (sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */)) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) + data->localData[0]->realVars[76] /* wT4G1.IyL variable */ - ((cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */)) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS383(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+18] = {0,3,3,3,3,3,3,4,4,6,6,7,7,4,4,5,11,11,5};
  const int rowIndex[92] = {1,13,14,1,9,10,2,9,10,2,13,14,1,3,8,2,3,8,6,7,11,12,6,7,11,12,4,5,6,7,11,12,4,5,6,7,11,12,3,5,6,7,10,11,12,4,6,7,8,9,11,12,0,15,16,17,0,15,16,17,0,14,15,16,17,1,2,3,6,8,9,10,12,13,14,16,1,2,3,7,8,9,10,11,13,14,15,0,13,15,16,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(92*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 92;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(int));
  inSysData->sparsePattern->maxColors = 8;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(int));
  
  for(i=2;i<18+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 92*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[16] = 1;
  inSysData->sparsePattern->colorCols[15] = 2;
  inSysData->sparsePattern->colorCols[11] = 3;
  inSysData->sparsePattern->colorCols[10] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[1] = 7;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[0] = 8;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
}
void initializeStaticDataNLS383(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine2.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.max;
  /* static nls data for pwLine.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.max;
  /* static nls data for pwLine.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.max;
  /* static nls data for pwLine2.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.max;
  /* static nls data for gENCLS2_1.id */
  sysData->nominal[i] = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.max;
  /* static nls data for gENCLS2_1.iq */
  sysData->nominal[i] = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.max;
  /* static nls data for pwLine.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.max;
  /* static nls data for pwLine.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.max;
  /* static nls data for pwLine2.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* pwLine2.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* pwLine2.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* pwLine2.is.re */.max;
  /* static nls data for pwLine2.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.max;
  /* static nls data for pwLine2.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine2.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS383(sysData);
}

void getIterationVarsNLS383(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  array[1] = data->localData[0]->realVars[46] /* pwLine.is.im variable */;
  array[2] = data->localData[0]->realVars[47] /* pwLine.is.re variable */;
  array[3] = data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  array[4] = data->localData[0]->realVars[56] /* pwLine1.is.im variable */;
  array[5] = data->localData[0]->realVars[57] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[54] /* pwLine1.ir.im variable */;
  array[7] = data->localData[0]->realVars[45] /* pwLine.ir.re variable */;
  array[8] = data->localData[0]->realVars[31] /* gENCLS2_1.id variable */;
  array[9] = data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */;
  array[10] = data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  array[11] = data->localData[0]->realVars[48] /* pwLine.vr.im variable */;
  array[12] = data->localData[0]->realVars[67] /* pwLine2.is.re variable */;
  array[13] = data->localData[0]->realVars[66] /* pwLine2.is.im variable */;
  array[14] = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  array[15] = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
  array[16] = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */;
  array[17] = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
}


/* inner equations */

/*
equation index: 16
type: SIMPLE_ASSIGN
wT4G1.delta = atan2(pwLine2.vs.im, pwLine2.vs.re)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[83] /* wT4G1.delta variable */ = atan2(data->localData[0]->realVars[68] /* pwLine2.vs.im variable */, data->localData[0]->realVars[69] /* pwLine2.vs.re variable */);
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
wT4G1.V = sqrt(pwLine2.vs.re ^ 2.0 + pwLine2.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
  tmp1 = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  data->localData[0]->realVars[82] /* wT4G1.V variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
wT4G1.IyL = if wT4G1.V > wT4G1.hVRCL.VHVRCR then wT4G1.hVRCL.CurHVRCR else wT4G1.Iy
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[82] /* wT4G1.V variable */,data->simulationInfo->realParameter[134] /* wT4G1.hVRCL.VHVRCR PARAM */);
  data->localData[0]->realVars[76] /* wT4G1.IyL variable */ = (tmp0?data->simulationInfo->realParameter[133] /* wT4G1.hVRCL.CurHVRCR PARAM */:data->localData[0]->realVars[75] /* wT4G1.Iy variable */);
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
wT4G1.K2.y = if abs(wT4G1.K2.T) <= 1e-15 then wT4G1.V * wT4G1.K2.K else wT4G1.K2.state
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[111] /* wT4G1.K2.T PARAM */),1e-15);
  data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ = (tmp0?(data->localData[0]->realVars[82] /* wT4G1.V variable */) * (data->simulationInfo->realParameter[110] /* wT4G1.K2.K PARAM */):data->localData[0]->realVars[4] /* wT4G1.K2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
wT4G1.lVPL.LVPL = if wT4G1.K2.y < wT4G1.lVPL.VLVPL1 then 0.0 else if wT4G1.K2.y > wT4G1.lVPL.VLVPL2 then 1000000.0 else wT4G1.lVPL.K * (wT4G1.K2.y - wT4G1.lVPL.VLVPL1)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Less(data->localData[0]->realVars[79] /* wT4G1.K2.y variable */,data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[79] /* wT4G1.K2.y variable */,data->simulationInfo->realParameter[144] /* wT4G1.lVPL.VLVPL2 PARAM */);
    tmp3 = (tmp1?1000000.0:(data->simulationInfo->realParameter[142] /* wT4G1.lVPL.K PARAM */) * (data->localData[0]->realVars[79] /* wT4G1.K2.y variable */ - data->simulationInfo->realParameter[143] /* wT4G1.lVPL.VLVPL1 PARAM */));
  }
  data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
wT4G1.Iperr.u2 = homotopy(smooth(0, if wT4G1.K.y > wT4G1.lVPL.LVPL then wT4G1.lVPL.LVPL else if wT4G1.K.y < wT4G1.const.k then wT4G1.const.k else wT4G1.K.y), wT4G1.K.y)
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */,data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[84] /* wT4G1.lVPL.LVPL variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */,data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[130] /* wT4G1.const.k PARAM */:data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */);
  }
  data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */ = homotopy(tmp3, data->localData[0]->realVars[2] /* wT4G1.K.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
wT4G1.IxL = if wT4G1.V < 0.4 then 0.0 else if wT4G1.V > 0.8 then wT4G1.Iperr.u2 else 1.25 * wT4G1.Iperr.u2 * wT4G1.V
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Less(data->localData[0]->realVars[82] /* wT4G1.V variable */,0.4);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[82] /* wT4G1.V variable */,0.8);
    tmp3 = (tmp1?data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */:(1.25) * ((data->localData[0]->realVars[70] /* wT4G1.Iperr.u2 variable */) * (data->localData[0]->realVars[82] /* wT4G1.V variable */)));
  }
  data->localData[0]->realVars[74] /* wT4G1.IxL variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
wT4G1.Is.im = (-pwLine2.is.im) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[72] /* wT4G1.Is.im variable */ = DIVISION_SIM((-data->localData[0]->realVars[66] /* pwLine2.is.im variable */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
wT4G1.Is.re = (-pwLine2.is.re) / wT4G1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[73] /* wT4G1.Is.re variable */ = DIVISION_SIM((-data->localData[0]->realVars[67] /* pwLine2.is.re variable */),data->simulationInfo->realParameter[90] /* wT4G1.CoB PARAM */,"wT4G1.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
gENCLS2_1.p.ir = ((-sin(gENCLS2_1.delta)) * gENCLS2_1.id - cos(gENCLS2_1.delta) * gENCLS2_1.iq) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */))) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
gENCLS2_1.p.ii = (cos(gENCLS2_1.delta) * gENCLS2_1.id - sin(gENCLS2_1.delta) * gENCLS2_1.iq) * gENCLS2_1.CoB
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */))) * (data->simulationInfo->realParameter[26] /* gENCLS2_1.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
gENCLS2_1.vq = gENCLS2_1.eq + (-gENCLS2_1.R_a) * gENCLS2_1.iq - gENCLS2_1.X_d * gENCLS2_1.id
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */ = data->localData[0]->realVars[1] /* gENCLS2_1.eq STATE(1) */ + ((-data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */)) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */) - ((data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */));
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
gENCLS2_1.vd = gENCLS2_1.X_d * gENCLS2_1.iq - gENCLS2_1.R_a * gENCLS2_1.id
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */ = (data->simulationInfo->realParameter[35] /* gENCLS2_1.X_d PARAM */) * (data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */) - ((data->simulationInfo->realParameter[32] /* gENCLS2_1.R_a PARAM */) * (data->localData[0]->realVars[31] /* gENCLS2_1.id variable */));
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine.ir.re) - gENCLS2_1.p.ir
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[45] /* pwLine.ir.re variable */) - data->localData[0]->realVars[35] /* gENCLS2_1.p.ir variable */;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.ir.im) - gENCLS2_1.p.ii
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[44] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[54] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[34] /* gENCLS2_1.p.ii variable */;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine.is.re) - pwLine1.is.re - pwLine2.ir.re
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[39] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[47] /* pwLine.is.re variable */) - data->localData[0]->realVars[57] /* pwLine1.is.re variable */ - data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine.is.im) - pwLine1.is.im - pwLine2.ir.im
*/
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[38] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[46] /* pwLine.is.im variable */) - data->localData[0]->realVars[56] /* pwLine1.is.im variable */ - data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  TRACE_POP
}

void residualFunc51(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,51};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  /* iteration variables */
  for (i=0; i<18; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<18; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[56] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[57] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[47] /* pwLine.is.re variable */ = xloc[4];
  data->localData[0]->realVars[46] /* pwLine.is.im variable */ = xloc[5];
  data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[45] /* pwLine.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[31] /* gENCLS2_1.id variable */ = xloc[8];
  data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */ = xloc[9];
  data->localData[0]->realVars[49] /* pwLine.vr.re variable */ = xloc[10];
  data->localData[0]->realVars[48] /* pwLine.vr.im variable */ = xloc[11];
  data->localData[0]->realVars[67] /* pwLine2.is.re variable */ = xloc[12];
  data->localData[0]->realVars[66] /* pwLine2.is.im variable */ = xloc[13];
  data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ = xloc[14];
  data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ = xloc[15];
  data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ = xloc[16];
  data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ = xloc[17];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_16(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_17(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_18(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_eqFunction_32(data, threadData);
  /* body */
  res[0] = ((-cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */))) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) - data->localData[0]->realVars[74] /* wT4G1.IxL variable */ - ((sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */)) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) - ((data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[38] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[2] = ((tmp11 && tmp12)?data->localData[0]->realVars[55] /* pwLine1.ir.re variable */:data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[3] = ((tmp13 && tmp14)?data->localData[0]->realVars[54] /* pwLine1.ir.im variable */:data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[54] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[55] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));

  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[54] /* pwFault.t1 PARAM */);
  tmp24 = (modelica_boolean)tmp15;
  if(tmp24)
  {
    tmp25 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
    tmp22 = (modelica_boolean)(tmp16 && data->simulationInfo->booleanParameter[36] /* pwFault.ground PARAM */);
    if(tmp22)
    {
      tmp23 = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
    }
    else
    {
      tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[55] /* pwFault.t2 PARAM */);
      tmp20 = (modelica_boolean)tmp17;
      if(tmp20)
      {
        tmp18 = data->simulationInfo->realParameter[52] /* pwFault.R PARAM */;
        tmp19 = data->simulationInfo->realParameter[53] /* pwFault.X PARAM */;
        tmp21 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[52] /* pwFault.R PARAM */) * (data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) + (data->simulationInfo->realParameter[53] /* pwFault.X PARAM */) * (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */),(tmp18 * tmp18) + (tmp19 * tmp19),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp21 = data->localData[0]->realVars[39] /* pwFault.p.ir variable */;
      }
      tmp23 = tmp21;
    }
    tmp25 = tmp23;
  }
  res[4] = tmp25;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[47] /* pwLine.is.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[46] /* pwLine.is.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[46] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[47] /* pwLine.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));

  res[7] = (sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */))) * (data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */) - data->localData[0]->realVars[48] /* pwLine.vr.im variable */;

  res[8] = (cos(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[37] /* gENCLS2_1.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS2_1.delta STATE(1) */)) * (data->localData[0]->realVars[36] /* gENCLS2_1.vd variable */) - data->localData[0]->realVars[49] /* pwLine.vr.re variable */;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[44] /* pwLine.ir.im variable */:data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[65] /* pwLine.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[66] /* pwLine.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[45] /* pwLine.ir.re variable */:data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[64] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[45] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[49] /* pwLine.vr.re variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[63] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[44] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[49] /* pwLine.vr.re variable */)) * (data->simulationInfo->realParameter[61] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[48] /* pwLine.vr.im variable */) * (data->simulationInfo->realParameter[62] /* pwLine.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[57] /* pwLine1.is.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[49] /* pwLine.vr.re variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[76] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[56] /* pwLine1.is.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[48] /* pwLine.vr.im variable */ - ((data->simulationInfo->realParameter[75] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[56] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[74] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[57] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[72] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[73] /* pwLine1.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[65] /* pwLine2.ir.re variable */:data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[64] /* pwLine2.ir.im variable */:data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[64] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[59] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[65] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[58] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[59] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[67] /* pwLine2.is.re variable */:data->localData[0]->realVars[69] /* pwLine2.vs.re variable */ - data->localData[0]->realVars[59] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine2.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[87] /* pwLine2.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[88] /* pwLine2.t2 PARAM */);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[66] /* pwLine2.is.im variable */:data->localData[0]->realVars[68] /* pwLine2.vs.im variable */ - data->localData[0]->realVars[58] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[86] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[66] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine2.vs.re variable */)) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[85] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[67] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine2.vs.im variable */) * (data->simulationInfo->realParameter[83] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine2.vs.re variable */) * (data->simulationInfo->realParameter[84] /* pwLine2.Y.re PARAM */)))));

  res[17] = (sin(data->localData[0]->realVars[83] /* wT4G1.delta variable */)) * (data->localData[0]->realVars[73] /* wT4G1.Is.re variable */) + data->localData[0]->realVars[76] /* wT4G1.IyL variable */ - ((cos(data->localData[0]->realVars[83] /* wT4G1.delta variable */)) * (data->localData[0]->realVars[72] /* wT4G1.Is.im variable */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS51(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+18] = {0,3,3,3,3,3,3,4,4,6,6,7,7,4,4,5,11,11,5};
  const int rowIndex[92] = {1,13,14,1,11,12,4,13,14,4,11,12,4,5,6,1,5,6,2,3,9,10,2,3,9,10,2,3,7,8,9,10,2,3,7,8,9,10,2,3,5,8,9,10,11,2,3,6,7,9,10,12,0,15,16,17,0,15,16,17,0,14,15,16,17,1,2,4,5,6,10,11,12,13,14,15,1,3,4,5,6,9,11,12,13,14,16,0,13,15,16,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(92*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 92;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(int));
  inSysData->sparsePattern->maxColors = 8;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(int));
  
  for(i=2;i<18+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 92*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[16] = 1;
  inSysData->sparsePattern->colorCols[15] = 2;
  inSysData->sparsePattern->colorCols[11] = 3;
  inSysData->sparsePattern->colorCols[10] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[1] = 7;
  inSysData->sparsePattern->colorCols[2] = 7;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[0] = 8;
  inSysData->sparsePattern->colorCols[3] = 8;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
}
void initializeStaticDataNLS51(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine2.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* pwLine2.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine2.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* pwLine2.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[47].attribute /* pwLine.is.re */.max;
  /* static nls data for pwLine.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[46].attribute /* pwLine.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[45].attribute /* pwLine.ir.re */.max;
  /* static nls data for gENCLS2_1.id */
  sysData->nominal[i] = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[31].attribute /* gENCLS2_1.id */.max;
  /* static nls data for gENCLS2_1.iq */
  sysData->nominal[i] = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[32].attribute /* gENCLS2_1.iq */.max;
  /* static nls data for pwLine.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* pwLine.vr.re */.max;
  /* static nls data for pwLine.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* pwLine.vr.im */.max;
  /* static nls data for pwLine2.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* pwLine2.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* pwLine2.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* pwLine2.is.re */.max;
  /* static nls data for pwLine2.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* pwLine2.is.im */.max;
  /* static nls data for pwLine2.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* pwLine2.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[59].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine2.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* pwLine2.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS51(sysData);
}

void getIterationVarsNLS51(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[64] /* pwLine2.ir.im variable */;
  array[1] = data->localData[0]->realVars[56] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[65] /* pwLine2.ir.re variable */;
  array[3] = data->localData[0]->realVars[57] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[47] /* pwLine.is.re variable */;
  array[5] = data->localData[0]->realVars[46] /* pwLine.is.im variable */;
  array[6] = data->localData[0]->realVars[54] /* pwLine1.ir.im variable */;
  array[7] = data->localData[0]->realVars[45] /* pwLine.ir.re variable */;
  array[8] = data->localData[0]->realVars[31] /* gENCLS2_1.id variable */;
  array[9] = data->localData[0]->realVars[32] /* gENCLS2_1.iq variable */;
  array[10] = data->localData[0]->realVars[49] /* pwLine.vr.re variable */;
  array[11] = data->localData[0]->realVars[48] /* pwLine.vr.im variable */;
  array[12] = data->localData[0]->realVars[67] /* pwLine2.is.re variable */;
  array[13] = data->localData[0]->realVars[66] /* pwLine2.is.im variable */;
  array[14] = data->localData[0]->realVars[68] /* pwLine2.vs.im variable */;
  array[15] = data->localData[0]->realVars[59] /* pwLine1.vs.re variable */;
  array[16] = data->localData[0]->realVars[58] /* pwLine1.vs.im variable */;
  array[17] = data->localData[0]->realVars[69] /* pwLine2.vs.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 496;
  nonLinearSystemData[2].size = 18;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc496;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS496;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS496;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 383;
  nonLinearSystemData[1].size = 18;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc383;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Wind_PSSE_WT4G_WT4G1_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS383;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS383;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 51;
  nonLinearSystemData[0].size = 18;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc51;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS51;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS51;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

